/-
Copyright (c) 2020 Sebastian Ullrich. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/

import Lean.PrettyPrinter.Delaborator.Basic
import Lean.PrettyPrinter.Delaborator.SubExpr
import Lean.PrettyPrinter.Delaborator.TopDownAnalyze
import Lean.Parser

namespace Lean.PrettyPrinter.Delaborator
open Lean.Meta
open Lean.Parser.Term
open SubExpr

def maybeAddBlockImplicit (ident : Syntax) : DelabM Syntax := do
  if ← getPPOption getPPAnalysisBlockImplicit then `(@$ident:ident) else ident

def unfoldMDatas : Expr → Expr
  | Expr.mdata _ e _ => unfoldMDatas e
  | e                => e

@[builtinDelab fvar]
def delabFVar : Delab := do
let Expr.fvar id _ ← getExpr | unreachable!
try
  let l ← getLocalDecl id
  maybeAddBlockImplicit (mkIdent l.userName)
catch _ =>
  -- loose free variable, use internal name
  maybeAddBlockImplicit $ mkIdent id

-- loose bound variable, use pseudo syntax
@[builtinDelab bvar]
def delabBVar : Delab := do
  let Expr.bvar idx _ ← getExpr | unreachable!
  pure $ mkIdent $ Name.mkSimple $ "#" ++ toString idx

@[builtinDelab mvar]
def delabMVar : Delab := do
  let Expr.mvar n _ ← getExpr | unreachable!
  let mvarDecl ← getMVarDecl n
  let n :=
    match mvarDecl.userName with
    | Name.anonymous => n.replacePrefix `_uniq `m
    | n => n
  `(?$(mkIdent n))

@[builtinDelab sort]
def delabSort : Delab := do
  let Expr.sort l _ ← getExpr | unreachable!
  match l with
  | Level.zero _ => `(Prop)
  | Level.succ (Level.zero _) _ => `(Type)
  | _ => match l.dec with
    | some l' => `(Type $(Level.quote l' max_prec))
    | none    => `(Sort $(Level.quote l max_prec))

-- find shorter names for constants, in reverse to Lean.Elab.ResolveName

private def unresolveQualifiedName (ns : Name) (c : Name) : DelabM Name := do
  let c' := c.replacePrefix ns Name.anonymous;
  let env ← getEnv
  guard $ c' != c && !c'.isAnonymous && (!c'.isAtomic || !isProtected env c)
  pure c'

private def checkForNameClash (nsOrig nsPfix candidate : Name) : DelabM Unit := do
  -- Suppose the current namespace is `Foo.Bar`, we are delaborating `Foo.rig`, and `Foo.Bar.rig`
  -- already exists. This function will detect the clash and fail.
  let rest := nsOrig.components.drop nsPfix.components.length
  let mut nsPfix := nsPfix
  for component in rest do
    nsPfix := nsPfix ++ component
    let candidate := nsPfix ++ candidate
    -- TODO: what are the elab rules for 'protected' declarations?
    guard ((← getEnv).find? candidate |>.isNone)

private partial def unresolveUsingNamespace (c ns : Name) : DelabM Name := core ns where
  core
    | nsPfix@(Name.str p _ _) =>
      (do let candidate ← unresolveQualifiedName nsPfix c; checkForNameClash ns nsPfix candidate; candidate)
      <|> core p
    | _ => failure

private def unresolveOpenDecls (c : Name) : List OpenDecl → DelabM Name
  | [] => failure
  | OpenDecl.simple ns exs :: openDecls =>
    let c' := c.replacePrefix ns Name.anonymous
    if c' == c || exs.elem c' then unresolveOpenDecls c openDecls
    else unresolveQualifiedName ns c <|> unresolveOpenDecls c openDecls
  | OpenDecl.explicit openedId resolvedId :: openDecls =>
    (guard (c == resolvedId) *> pure openedId) <|> unresolveOpenDecls c openDecls

-- NOTE: not a registered delaborator, as `const` is never called (see [delab] description)
def delabConst : Delab := do
  let Expr.const c ls _ ← getExpr | unreachable!
  let c₀ := c
  let ctx ← read
  let maybeAddRoot (c : Name) : DelabM Name := do
    (do checkForNameClash ctx.currNamespace Name.anonymous c
        pure c)
    <|>
    (do guard (c == c₀)
        guard (! (← read).inPattern)
        guard ((← getEnv).contains c)
        pure (`_root_ ++ c))
    <|> (pure c₀)

  let mut c ← if (← getPPOption getPPFullNames) then maybeAddRoot c else
    let env ← getEnv
    let as := getRevAliases env c
    -- might want to use a more clever heuristic such as selecting the shortest alias...
    let c := as.headD c
    unresolveUsingNamespace c ctx.currNamespace
      <|> unresolveOpenDecls c ctx.openDecls
      <|> maybeAddRoot c

  unless (← getPPOption getPPPrivateNames) do
    c := (privateToUserName? c).getD c

  let ppUnivs ← getPPOption getPPUniverses

  let stx ←
    if ls.isEmpty || !ppUnivs then
      if (← getLCtx).usesUserName c then
        -- `c` is also a local declaration
        if c == c₀ && !(← read).inPattern then
          -- `c` is the fully qualified named. So, we append the `_root_` prefix
          c := `_root_ ++ c
        else
          c := c₀
      return mkIdent c
    else
      `($(mkIdent c).{$[$(ls.toArray.map quote)],*})

  maybeAddBlockImplicit stx

inductive ParamKind where
  | explicit
  -- combines implicit params, optParams, and autoParams
  | implicit (name : Name) (defVal : Option Expr)

/-- Return array with n-th element set to kind of n-th parameter of `e`. -/
partial def getParamKinds : DelabM (Array ParamKind) := do
  let e ← getExpr
  try
    withTransparency TransparencyMode.all do
      forallTelescopeArgs e.getAppFn e.getAppArgs fun params _ => do
        params.mapM fun param => do
          let l ← getLocalDecl param.fvarId!
          match l.type.getOptParamDefault? with
          | some val => pure $ ParamKind.implicit l.userName val
          | _ =>
            if l.type.isAutoParam || !l.binderInfo.isExplicit then
              pure $ ParamKind.implicit l.userName none
            else
              pure ParamKind.explicit
  catch _ => pure #[] -- recall that expr may be nonsensical
where
  forallTelescopeArgs f args k := do
    forallBoundedTelescope (← inferType f) args.size fun xs b =>
      if xs.isEmpty || xs.size == args.size then
        -- we still want to consider optParams
        forallTelescopeReducing b fun ys b => k (xs ++ ys) b
      else
        forallTelescopeArgs (mkAppN f $ args.shrink xs.size) (args.extract xs.size args.size) fun ys b =>
          k (xs ++ ys) b

@[builtinDelab app]
def delabAppExplicit : Delab := whenPPOption getPPExplicit do
  let paramKinds ← getParamKinds
  let (fnStx, argStxs) ← withAppFnArgs
    (do
      let fn ← getExpr
      let stx ← if fn.isConst then delabConst else delab
      let needsExplicit := paramKinds.any (fun | ParamKind.explicit => false | _ => true) && stx.getKind != `Lean.Parser.Term.explicit
      let stx ← if needsExplicit then `(@$stx) else pure stx
      pure (stx, #[]))
    (fun ⟨fnStx, argStxs⟩ => do
      let argStx ← if ← getPPOption getPPAnalysisHole then `(_) else delab
      pure (fnStx, argStxs.push argStx))
  Syntax.mkApp fnStx argStxs

def shouldShowMotive (motive : Expr) (opts : Options) : MetaM Bool := do
  getPPMotivesAll opts
  <||> (← getPPMotivesPi opts <&&> returnsPi motive)
  <||> (← getPPMotivesNonConst opts <&&> isNonConstFun motive)

def isRegularApp : DelabM Bool := do
  let e ← getExpr
  if not (unfoldMDatas e.getAppFn).isConst then return false
  if ← withNaryFn (getPPOption getPPUniverses <||> getPPOption getPPAnalysisBlockImplicit) then return false
  for i in [:e.getAppNumArgs] do
    if ← withNaryArg i (getPPOption getPPAnalysisNamedArg) then return false
  return true

def unexpandRegularApp (stx : Syntax) : Delab := do
  let Expr.const c .. ← pure (← getExpr).getAppFn | unreachable!
  let fs ← appUnexpanderAttribute.getValues (← getEnv) c
  fs.firstM fun f =>
    match f stx |>.run () with
    | EStateM.Result.ok stx _ => pure stx
    | _ => failure

-- abbrev coe {α : Sort u} {β : Sort v} (a : α) [CoeT α a β] : β
-- abbrev coeFun {α : Sort u} {γ : α → Sort v} (a : α) [CoeFun α γ] : γ a
def unexpandCoe (stx : Syntax) : Delab := whenPPOption getPPCoercions do
  if not (← isCoe (← getExpr)) then failure
  let e ← getExpr
  match stx with
  | `($fn $arg)   => arg
  | `($fn $args*) => `($(args.get! 0) $(args.eraseIdx 0)*)
  | _             => failure

def unexpandStructureInstance (stx : Syntax) : Delab := whenPPOption getPPStructureInstances do
  let env ← getEnv
  let e ← getExpr
  let some s ← pure $ e.isConstructorApp? env | failure
  guard $ isStructure env s.induct;
  /- If implicit arguments should be shown, and the structure has parameters, we should not
     pretty print using { ... }, because we will not be able to see the parameters. -/
  let fieldNames := getStructureFields env s.induct
  let mut fields := #[]
  guard $ fieldNames.size == stx[1].getNumArgs
  for idx in [:fieldNames.size] do
    let field ← `(structInstField|$(mkIdent <| fieldNames.get! idx):ident := $(stx[1][idx]):term)
    fields := fields.push field
  let lastField := fields.back
  fields := fields.pop
  let tyStx ← withType do
    if (← getPPOption getPPStructureInstanceType) then delab >>= pure ∘ some else pure none
  `({ $[$fields, ]* $lastField $[: $tyStx]? })

@[builtinDelab app]
def delabAppImplicit : Delab := do
  -- TODO: always call the unexpanders, make them guard on the right # args?
  let paramKinds ← getParamKinds
  if ← getPPOption getPPExplicit then
    if paramKinds.any (fun | ParamKind.explicit => false | _ => true) then failure

  let (fnStx, _, argStxs) ← withAppFnArgs
    (do
      let fn ← getExpr
      let stx ← if fn.isConst then delabConst else delab
      pure (stx, paramKinds.toList, #[]))
    (fun (fnStx, paramKinds, argStxs) => do
      let arg ← getExpr
      let opts ← getOptions
      let mkNamedArg (name : Name) (argStx : Syntax) : DelabM Syntax := do
        `(Parser.Term.namedArgument| ($(← mkIdent name):ident := $argStx:term))
      let argStx? : Option Syntax ←
        if ← getPPOption getPPAnalysisSkip then pure none
        else if ← getPPOption getPPAnalysisHole then `(_)
        else
          match paramKinds with
          | [ParamKind.implicit _ (some v)] =>
            if !v.hasLooseBVars && v == arg then none else delab
          | ParamKind.implicit name none :: _  =>
            if ← getPPOption getPPAnalysisNamedArg <||> (name == `motive <&&> shouldShowMotive arg opts)
            then mkNamedArg name (← delab)
            else none
          | _ => delab
      let argStxs := match argStx? with
        | none => argStxs
        | some stx => argStxs.push stx
      pure (fnStx, paramKinds.tailD [], argStxs))
  let stx := Syntax.mkApp fnStx argStxs

  if ← isRegularApp then
    (guard (← getPPOption getPPNotation) *> unexpandRegularApp stx)
    <|> (guard (← getPPOption getPPStructureInstances) *> unexpandStructureInstance stx)
    <|> (guard (← getPPOption getPPNotation) *> unexpandCoe stx)
    <|> pure stx
  else pure stx

/-- State for `delabAppMatch` and helpers. -/
structure AppMatchState where
  info        : MatcherInfo
  matcherTy   : Expr
  params      : Array Expr := #[]
  motive      : Option (Syntax × Expr) := none
  motiveNamed : Bool := false
  discrs      : Array Syntax := #[]
  varNames    : Array (Array Name) := #[]
  rhss        : Array Syntax := #[]
  -- additional arguments applied to the result of the `match` expression
  moreArgs    : Array Syntax := #[]
/--
  Extract arguments of motive applications from the matcher type.
  For the example below: `#[#[`([])], #[`(a::as)]]` -/
private partial def delabPatterns (st : AppMatchState) : DelabM (Array (Array Syntax)) :=
  withReader (fun ctx => { ctx with inPattern := true, optionsPerPos := {} }) do
    let ty ← instantiateForall st.matcherTy st.params
    forallTelescope ty fun params _ => do
      -- skip motive and discriminators
      let alts := Array.ofSubarray params[1 + st.discrs.size:]
      alts.mapIdxM fun idx alt => do
        let ty ← inferType alt
        -- TODO: this is a hack; we are accessing the expression out-of-sync with the position
        -- Currently, we reset `optionsPerPos` at the beginning of `delabPatterns` to avoid
        -- incorrectly considering annotations.
        withTheReader SubExpr ({ · with expr := ty }) $
          usingNames st.varNames[idx] do
            withAppFnArgs (pure #[]) (fun pats => do pure $ pats.push (← delab))
where
  usingNames {α} (varNames : Array Name) (x : DelabM α) : DelabM α :=
    usingNamesAux 0 varNames x
  usingNamesAux {α} (i : Nat) (varNames : Array Name) (x : DelabM α) : DelabM α :=
    if i < varNames.size then
      withBindingBody varNames[i] <| usingNamesAux (i+1) varNames x
    else
      x

/-- Skip `numParams` binders, and execute `x varNames` where `varNames` contains the new binder names. -/
private partial def skippingBinders {α} (numParams : Nat) (x : Array Name → DelabM α) : DelabM α :=
  loop numParams #[]
where
  loop : Nat → Array Name → DelabM α
    | 0,   varNames => x varNames
    | n+1, varNames => do
      let rec visitLambda : DelabM α := do
        let varName ← (← getExpr).bindingName!.eraseMacroScopes
        -- Pattern variables cannot shadow each other
        if varNames.contains varName then
          let varName := (← getLCtx).getUnusedName varName
          withBindingBody varName do
            loop n (varNames.push varName)
        else
          withBindingBodyUnusedName fun id => do
            loop n (varNames.push id.getId)
      let e ← getExpr
      if e.isLambda then
        visitLambda
      else
        -- eta expand `e`
        let e ← forallTelescopeReducing (← inferType e) fun xs _ => do
          if xs.size == 1 && (← inferType xs[0]).isConstOf ``Unit then
            -- `e` might be a thunk create by the dependent pattern matching compiler, and `xs[0]` may not even be a pattern variable.
            -- If it is a pattern variable, it doesn't look too bad to use `()` instead of the pattern variable.
            -- If it becomes a problem in the future, we should modify the dependent pattern matching compiler, and make sure
            -- it adds an annotation to distinguish these two cases.
            mkLambdaFVars xs (mkApp e (mkConst ``Unit.unit))
          else
            mkLambdaFVars xs (mkAppN e xs)
        withTheReader SubExpr (fun ctx => { ctx with expr := e }) visitLambda

/--
  Delaborate applications of "matchers" such as
  ```
  List.map.match_1 : {α : Type _} →
    (motive : List α → Sort _) →
      (x : List α) → (Unit → motive List.nil) → ((a : α) → (as : List α) → motive (a :: as)) → motive x
  ```
-/
@[builtinDelab app]
def delabAppMatch : Delab := whenPPOption getPPNotation do
  -- incrementally fill `AppMatchState` from arguments
  let st ← withAppFnArgs
    (do
      let (Expr.const c us _) ← getExpr | failure
      let (some info) ← getMatcherInfo? c | failure
      { matcherTy := (← getConstInfo c).instantiateTypeLevelParams us, info := info : AppMatchState })
    (fun st => do
      if st.params.size < st.info.numParams then
        pure { st with params := st.params.push (← getExpr) }
      else if st.motive.isNone then
         -- store motive argument separately
         let lamMotive ← getExpr
         let piMotive ← lambdaTelescope lamMotive fun xs body => mkForallFVars xs body
         -- TODO: pp.analyze has not analyzed `piMotive`, only `lamMotive`
         -- Thus the binder types won't have any annotations
         let piStx ← withTheReader SubExpr (fun cfg => { cfg with expr := piMotive }) delab
         let named ← getPPOption getPPAnalysisNamedArg
         pure { st with motive := (piStx, lamMotive), motiveNamed := named }
      else if st.discrs.size < st.info.numDiscrs then
        pure { st with discrs := st.discrs.push (← delab) }
      else if st.rhss.size < st.info.altNumParams.size then
        /- We save the variables names here to be able to implement safe_shadowing.
           The pattern delaboration must use the names saved here. -/
        let (varNames, rhs) ← skippingBinders st.info.altNumParams[st.rhss.size] fun varNames => do
          let rhs ← delab
          return (varNames, rhs)
        pure { st with rhss := st.rhss.push rhs, varNames := st.varNames.push varNames }
      else
        pure { st with moreArgs := st.moreArgs.push (← delab) })

  if st.discrs.size < st.info.numDiscrs || st.rhss.size < st.info.altNumParams.size then
    -- underapplied
    failure

  match st.discrs, st.rhss with
  | #[discr], #[] =>
    let stx ← `(nomatch $discr)
    Syntax.mkApp stx st.moreArgs
  | _,        #[] => failure
  | _,        _   =>
    let pats ← delabPatterns st
    let stx ← do
      let (piStx, lamMotive) := st.motive.get!
      let opts ← getOptions
      -- TODO: disable the match if other implicits are needed?
      if ← st.motiveNamed <||> shouldShowMotive lamMotive opts then
        `(match $[$st.discrs:term],* : $piStx with $[| $pats,* => $st.rhss]*)
      else
        `(match $[$st.discrs:term],* with $[| $pats,* => $st.rhss]*)
    Syntax.mkApp stx st.moreArgs

@[builtinDelab mdata]
def delabMData : Delab := do
  if let some _ := Lean.Meta.Match.inaccessible? (← getExpr) then
    let s ← withMDataExpr delab
    if (← read).inPattern then
      `(.($s)) -- We only include the inaccessible annotation when we are delaborating patterns
    else
      return s
  else
    -- only interpret `pp.` values by default
    let Expr.mdata m _ _ ← getExpr | unreachable!
    let mut posOpts := (← read).optionsPerPos
    let pos ← getPos
    for (k, v) in m do
      if (`pp).isPrefixOf k then
        let opts := posOpts.find? pos |>.getD {}
        posOpts := posOpts.insert pos (opts.insert k v)
    withReader ({ · with optionsPerPos := posOpts }) $ withMDataExpr $ delab

/--
Check for a `Syntax.ident` of the given name anywhere in the tree.
This is usually a bad idea since it does not check for shadowing bindings,
but in the delaborator we assume that bindings are never shadowed.
-/
partial def hasIdent (id : Name) : Syntax → Bool
  | Syntax.ident _ _ id' _ => id == id'
  | Syntax.node _ args     => args.any (hasIdent id)
  | _                      => false

/--
Return `true` iff current binder should be merged with the nested
binder, if any, into a single binder group:
* both binders must have same binder info and domain
* they cannot be inst-implicit (`[a b : A]` is not valid syntax)
* `pp.binderTypes` must be the same value for both terms
* prefer `fun a b` over `fun (a b)`
-/
private def shouldGroupWithNext : DelabM Bool := do
  let e ← getExpr
  let ppEType ← getPPOption (getPPBinderTypes e)
  let go (e' : Expr) := do
    let ppE'Type ← withBindingBody `_ $ getPPOption (getPPBinderTypes e)
    pure $ e.binderInfo == e'.binderInfo &&
      e.bindingDomain! == e'.bindingDomain! &&
      e'.binderInfo != BinderInfo.instImplicit &&
      ppEType == ppE'Type &&
      (e'.binderInfo != BinderInfo.default || ppE'Type)
  match e with
  | Expr.lam _ _     e'@(Expr.lam _ _ _ _) _     => go e'
  | Expr.forallE _ _ e'@(Expr.forallE _ _ _ _) _ => go e'
  | _ => pure false
where
  getPPBinderTypes (e : Expr) :=
    if e.isForall then getPPPiBinderTypes else getPPFunBinderTypes

private partial def delabBinders (delabGroup : Array Syntax → Syntax → Delab) : optParam (Array Syntax) #[] → Delab
  -- Accumulate names (`Syntax.ident`s with position information) of the current, unfinished
  -- binder group `(d e ...)` as determined by `shouldGroupWithNext`. We cannot do grouping
  -- inside-out, on the Syntax level, because it depends on comparing the Expr binder types.
  | curNames => do
    if ← shouldGroupWithNext then
      -- group with nested binder => recurse immediately
      withBindingBodyUnusedName fun stxN => delabBinders delabGroup (curNames.push stxN)
    else
      -- don't group => delab body and prepend current binder group
      let (stx, stxN) ← withBindingBodyUnusedName fun stxN => do (← delab, stxN)
      delabGroup (curNames.push stxN) stx

@[builtinDelab lam]
def delabLam : Delab :=
  delabBinders fun curNames stxBody => do
    let e ← getExpr
    let stxT ← withBindingDomain delab
    let ppTypes ← getPPOption getPPFunBinderTypes
    let expl ← getPPOption getPPExplicit
    let usedDownstream ← curNames.any (fun n => hasIdent n.getId stxBody)

    -- leave lambda implicit if possible
    -- TODO: for now we just always block implicit lambdas when delaborating. We can revisit.
    -- Note: the current issue is that it requires state, i.e. if *any* previous binder was implicit,
    -- it doesn't seem like we can leave a subsequent binder implicit.
    let blockImplicitLambda := true
    /-
    let blockImplicitLambda := expl ||
      e.binderInfo == BinderInfo.default ||
      -- Note: the following restriction fixes many issues with roundtripping,
      -- but this condition may still not be perfectly in sync with the elaborator.
      e.binderInfo == BinderInfo.instImplicit ||
      Elab.Term.blockImplicitLambda stxBody ||
      usedDownstream
    -/

    if !blockImplicitLambda then
      pure stxBody
    else
      let group ← match e.binderInfo, ppTypes with
        | BinderInfo.default,     true   =>
          -- "default" binder group is the only one that expects binder names
          -- as a term, i.e. a single `Syntax.ident` or an application thereof
          let stxCurNames ←
            if curNames.size > 1 then
              `($(curNames.get! 0) $(curNames.eraseIdx 0)*)
            else
              pure $ curNames.get! 0;
          `(funBinder| ($stxCurNames : $stxT))
        | BinderInfo.default,        false  => pure curNames.back  -- here `curNames.size == 1`
        | BinderInfo.implicit,       true   => `(funBinder| {$curNames* : $stxT})
        | BinderInfo.implicit,       false  => `(funBinder| {$curNames*})
        | BinderInfo.strictImplicit, true   => `(funBinder| ⦃$curNames* : $stxT⦄)
        | BinderInfo.strictImplicit, false  => `(funBinder| ⦃$curNames*⦄)
        | BinderInfo.instImplicit,   _     =>
          if usedDownstream then `(funBinder| [$curNames.back : $stxT])  -- here `curNames.size == 1`
          else  `(funBinder| [$stxT])
        | _                      , _     => unreachable!;
      match stxBody with
      | `(fun $binderGroups* => $stxBody) => `(fun $group $binderGroups* => $stxBody)
      | _                                 => `(fun $group => $stxBody)

@[builtinDelab forallE]
def delabForall : Delab :=
  delabBinders fun curNames stxBody => do
    let e ← getExpr
    let prop ← try isProp e catch _ => false
    let stxT ← withBindingDomain delab
    let group ← match e.binderInfo with
    | BinderInfo.implicit       => `(bracketedBinderF|{$curNames* : $stxT})
    | BinderInfo.strictImplicit => `(bracketedBinderF|⦃$curNames* : $stxT⦄)
    -- here `curNames.size == 1`
    | BinderInfo.instImplicit   => `(bracketedBinderF|[$curNames.back : $stxT])
    | _                         =>
      -- heuristic: use non-dependent arrows only if possible for whole group to avoid
      -- noisy mix like `(α : Type) → Type → (γ : Type) → ...`.
      let dependent := curNames.any $ fun n => hasIdent n.getId stxBody
      -- NOTE: non-dependent arrows are available only for the default binder info
      if dependent then
        if prop && !(← getPPOption getPPPiBinderTypes) then
          return ← `(∀ $curNames:ident*, $stxBody)
        else
          `(bracketedBinderF|($curNames* : $stxT))
      else
        return ← curNames.foldrM (fun _ stxBody => `($stxT → $stxBody)) stxBody
    if prop then
      match stxBody with
      | `(∀ $groups*, $stxBody) => `(∀ $group $groups*, $stxBody)
      | _                       => `(∀ $group, $stxBody)
    else
      `($group:bracketedBinder → $stxBody)

@[builtinDelab letE]
def delabLetE : Delab := do
  let Expr.letE n t v b _ ← getExpr | unreachable!
  let n ← getUnusedName n b
  let stxV ← descend v 1 delab
  let stxB ← withLetDecl n t v fun fvar =>
    let b := b.instantiate1 fvar
    descend b 2 delab
  if ← getPPOption getPPLetVarTypes <||> getPPOption getPPAnalysisLetVarType then
    let stxT ← descend t 0 delab
    `(let $(mkIdent n) : $stxT := $stxV; $stxB)
  else `(let $(mkIdent n) := $stxV; $stxB)

@[builtinDelab lit]
def delabLit : Delab := do
  let Expr.lit l _ ← getExpr | unreachable!
  match l with
  | Literal.natVal n => pure $ quote n
  | Literal.strVal s => pure $ quote s

-- `@OfNat.ofNat _ n _` ~> `n`
@[builtinDelab app.OfNat.ofNat]
def delabOfNat : Delab := whenPPOption getPPCoercions do
  let (Expr.app (Expr.app _ (Expr.lit (Literal.natVal n) _) _) _ _) ← getExpr | failure
  return quote n

-- `@OfDecimal.ofDecimal _ _ m s e` ~> `m*10^(sign * e)` where `sign == 1` if `s = false` and `sign = -1` if `s = true`
@[builtinDelab app.OfScientific.ofScientific]
def delabOfScientific : Delab := whenPPOption getPPCoercions do
  let expr ← getExpr
  guard <| expr.getAppNumArgs == 5
  let Expr.lit (Literal.natVal m) _ ← pure (expr.getArg! 2) | failure
  let Expr.lit (Literal.natVal e) _ ← pure (expr.getArg! 4) | failure
  let s ← match expr.getArg! 3 with
    | Expr.const `Bool.true _ _  => pure true
    | Expr.const `Bool.false _ _ => pure false
    | _ => failure
  let str  := toString m
  if s && e == str.length then
    return Syntax.mkScientificLit ("0." ++ str)
  else if s && e < str.length then
    let mStr := str.extract 0 (str.length - e)
    let eStr := str.extract (str.length - e) str.length
    return Syntax.mkScientificLit (mStr ++ "." ++ eStr)
  else
    return Syntax.mkScientificLit (str ++ "e" ++ (if s then "-" else "") ++ toString e)

/--
Delaborate a projection primitive. These do not usually occur in
user code, but are pretty-printed when e.g. `#print`ing a projection
function.
-/
@[builtinDelab proj]
def delabProj : Delab := do
  let Expr.proj _ idx _ _ ← getExpr | unreachable!
  let e ← withProj delab
  -- not perfectly authentic: elaborates to the `idx`-th named projection
  -- function (e.g. `e.1` is `Prod.fst e`), which unfolds to the actual
  -- `proj`.
  let idx := Syntax.mkLit fieldIdxKind (toString (idx + 1));
  `($(e).$idx:fieldIdx)

/-- Delaborate a call to a projection function such as `Prod.fst`. -/
@[builtinDelab app]
def delabProjectionApp : Delab := whenPPOption getPPStructureProjections $ do
  let e@(Expr.app fn _ _) ← getExpr | failure
  let Expr.const c@(Name.str _ f _) _ _ ← pure fn.getAppFn | failure
  let env ← getEnv
  let some info ← pure $ env.getProjectionFnInfo? c | failure
  -- can't use with classes since the instance parameter is implicit
  guard $ !info.fromClass
  -- projection function should be fully applied (#struct params + 1 instance parameter)
  -- TODO: support over-application
  guard $ e.getAppNumArgs == info.numParams + 1
  -- If pp.explicit is true, and the structure has parameters, we should not
  -- use field notation because we will not be able to see the parameters.
  let expl ← getPPOption getPPExplicit
  guard $ !expl || info.numParams == 0
  let appStx ← withAppArg delab
  `($(appStx).$(mkIdent f):ident)

@[builtinDelab app.dite]
def delabDIte : Delab := whenPPOption getPPNotation do
  -- Note: we keep this as a delaborator for now because it actually accesses the expression.
  guard $ (← getExpr).getAppNumArgs == 5
  let c ← withAppFn $ withAppFn $ withAppFn $ withAppArg delab
  let (t, h) ← withAppFn $ withAppArg $ delabBranch none
  let (e, _) ← withAppArg $ delabBranch h
  `(if $(mkIdent h):ident : $c then $t else $e)
where
  delabBranch (h? : Option Name) : DelabM (Syntax × Name) := do
    let e ← getExpr
    guard e.isLambda
    let h ← match h? with
      | some h => return (← withBindingBody h delab, h)
      | none   => withBindingBodyUnusedName fun h => do
        return (← delab, h.getId)

@[builtinDelab app.namedPattern]
def delabNamedPattern : Delab := do
  -- Note: we keep this as a delaborator because it accesses the DelabM context
  guard (← read).inPattern
  guard $ (← getExpr).getAppNumArgs == 3
  let x ← withAppFn $ withAppArg delab
  let p ← withAppArg delab
  guard x.isIdent
  `($x:ident@$p:term)

partial def delabDoElems : DelabM (List Syntax) := do
  let e ← getExpr
  if e.isAppOfArity `Bind.bind 6 then
    -- Bind.bind.{u, v} : {m : Type u → Type v} → [self : Bind m] → {α β : Type u} → m α → (α → m β) → m β
    let α := e.getAppArgs[2]
    let ma ← withAppFn $ withAppArg delab
    withAppArg do
      match (← getExpr) with
      | Expr.lam _ _ body _ =>
        withBindingBodyUnusedName fun n => do
          if body.hasLooseBVars then
            prependAndRec `(doElem|let $n:term ← $ma:term)
          else if α.isConstOf `Unit || α.isConstOf `PUnit then
            prependAndRec `(doElem|$ma:term)
          else
            prependAndRec `(doElem|let _ ← $ma:term)
      | _ => failure
  else if e.isLet then
    let Expr.letE n t v b _ ← getExpr | unreachable!
    let n ← getUnusedName n b
    let stxT ← descend t 0 delab
    let stxV ← descend v 1 delab
    withLetDecl n t v fun fvar =>
      let b := b.instantiate1 fvar
      descend b 2 $
        prependAndRec `(doElem|let $(mkIdent n) : $stxT := $stxV)
  else
    let stx ← delab
    [←`(doElem|$stx:term)]
  where
    prependAndRec x : DelabM _ := List.cons <$> x <*> delabDoElems

@[builtinDelab app.Bind.bind]
def delabDo : Delab := whenPPOption getPPNotation do
  guard <| (← getExpr).isAppOfArity `Bind.bind 6
  let elems ← delabDoElems
  let items ← elems.toArray.mapM (`(doSeqItem|$(·):doElem))
  `(do $items:doSeqItem*)

def reifyName : Expr → DelabM Name
  | Expr.const ``Lean.Name.anonymous .. => Name.anonymous
  | Expr.app (Expr.app (Expr.const ``Lean.Name.mkStr ..) n _) (Expr.lit (Literal.strVal s) _) _ => do
    (← reifyName n).mkStr s
  | Expr.app (Expr.app (Expr.const ``Lean.Name.mkNum ..) n _) (Expr.lit (Literal.natVal i) _) _ => do
    (← reifyName n).mkNum i
  | _ => failure

@[builtinDelab app.Lean.Name.mkStr]
def delabNameMkStr : Delab := whenPPOption getPPNotation do
  let n ← reifyName (← getExpr)
  -- not guaranteed to be a syntactically valid name, but usually more helpful than the explicit version
  mkNode ``Lean.Parser.Term.quotedName #[Syntax.mkNameLit s!"`{n}"]

@[builtinDelab app.Lean.Name.mkNum]
def delabNameMkNum : Delab := delabNameMkStr

end Lean.PrettyPrinter.Delaborator
