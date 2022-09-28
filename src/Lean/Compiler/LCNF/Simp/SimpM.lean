/-
Copyright (c) 2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Compiler.ImplementedByAttr
import Lean.Compiler.LCNF.Renaming
import Lean.Compiler.LCNF.ElimDead
import Lean.Compiler.LCNF.AlphaEqv
import Lean.Compiler.LCNF.PrettyPrinter
import Lean.Compiler.LCNF.Bind
import Lean.Compiler.LCNF.Simp.JpCases
import Lean.Compiler.LCNF.Simp.FunDeclInfo
import Lean.Compiler.LCNF.Simp.Config

namespace Lean.Compiler.LCNF
namespace Simp

structure Context where
  /--
  Name of the declaration being simplified.
  We currently use this information because we are generating phase1 declarations  on demand,
  and it may trigger non-termination when trying to access the phase1 declaration.
  -/
  declName : Name
  config : Config := {}
  discrCtorMap : FVarIdMap Expr := {}
  /--
  Stack of global declarations being recursively inlined.
  -/
  inlineStack : List Name := []
  /--
  Mapping from declaration names to number of occurrences at `inlineStack`
  -/
  inlineStackOccs : PHashMap Name Nat := {}

structure State where
  /--
  Free variable substitution. We use it to implement inlining and removing redundant variables `let _x.i := _x.j`
  -/
  subst : FVarSubst := {}
  /--
  Track used local declarations to be able to eliminate dead variables.
  -/
  used : UsedLocalDecls := {}
  /--
  Mapping containing free variables ids that need to be renamed (i.e., the `binderName`).
  We use this map to preserve user provide names.
  -/
  binderRenaming : Renaming := {}
  /--
  Mapping used to decide whether a local function declaration must be inlined or not.
  -/
  funDeclInfoMap : FunDeclInfoMap := {}
  /--
  `true` if some simplification was performed in the current simplification pass.
  -/
  simplified : Bool := false
  /--
  Number of visited `let-declarations` and terminal values.
  This is a performance counter, and currently has no impact on code generation.
  -/
  visited : Nat := 0
  /--
  Number of definitions inlined.
  This is a performance counter.
  -/
  inline : Nat := 0
  /--
  Number of local functions inlined.
  This is a performance counter.
  -/
  inlineLocal : Nat := 0

abbrev SimpM := ReaderT Context $ StateRefT State CompilerM

instance : MonadFVarSubst SimpM false where
  getSubst := return (← get).subst

instance : MonadFVarSubstState SimpM where
  modifySubst f := modify fun s => { s with subst := f s.subst }

/--
Use `findExpr`, and if the result is a free variable, check whether it is in the map `discrCtorMap`.
We use this method when simplifying projections and cases-constructor.
-/
def findCtor (e : Expr) : SimpM Expr := do
  let e ← findExpr e
  let .fvar fvarId := e | return e
  let some ctor := (← read).discrCtorMap.find? fvarId | return e
  return ctor

/--
Execute `x` with the information that `discr = ctorName ctorFields`.
We use this information to simplify nested cases on the same discriminant.

Remark: we do not perform the reverse direction at this phase.
That is, we do not replace occurrences of `ctorName ctorFields` with `discr`.
We wait more type information to be erased.
-/
def withDiscrCtor (discr : FVarId) (ctorName : Name) (ctorFields : Array Param) (x : SimpM α) : SimpM α := do
  let ctorInfo ← getConstInfoCtor ctorName
  let mut ctor := mkConst ctorName
  for _ in [:ctorInfo.numParams] do
    ctor := .app ctor erasedExpr -- the parameters are irrelevant for optimizations that use this information
  for field in ctorFields do
    ctor := .app ctor (.fvar field.fvarId)
  withReader (fun ctx => { ctx with discrCtorMap := ctx.discrCtorMap.insert discr ctor }) do
    x

/-- Set the `simplified` flag to `true`. -/
def markSimplified : SimpM Unit :=
  modify fun s => { s with simplified := true }

/-- Increment `visited` performance counter. -/
def incVisited : SimpM Unit :=
  modify fun s => { s with visited := s.visited + 1 }

/-- Increment `inline` performance counter. It is the number of inlined global declarations. -/
def incInline : SimpM Unit :=
  modify fun s => { s with inline := s.inline + 1 }

/-- Increment `inlineLocal` performance counter. It is the number of inlined local function and join point declarations. -/
def incInlineLocal : SimpM Unit :=
  modify fun s => { s with inlineLocal := s.inlineLocal + 1 }

/-- Mark the local function declaration or join point with the given id as a "must inline". -/
def addMustInline (fvarId : FVarId) : SimpM Unit :=
  modify fun s => { s with funDeclInfoMap := s.funDeclInfoMap.addMustInline fvarId }

/-- Add a new occurrence of local function `fvarId`. -/
def addFunOcc (fvarId : FVarId) : SimpM Unit :=
  modify fun s => { s with funDeclInfoMap := s.funDeclInfoMap.add fvarId }

/-- Add a new occurrence of local function `fvarId` in argument position . -/
def addFunHoOcc (fvarId : FVarId) : SimpM Unit :=
  modify fun s => { s with funDeclInfoMap := s.funDeclInfoMap.addHo fvarId }

@[inheritDoc FunDeclInfoMap.update]
partial def updateFunDeclInfo (code : Code) (mustInline := false) : SimpM Unit := do
  let map ← modifyGet fun s => (s.funDeclInfoMap, { s with funDeclInfoMap := {} })
  let map ← map.update code mustInline
  modify fun s => { s with funDeclInfoMap := map }

/--
Execute `x` with an updated `inlineStack`. If `value` is of the form `const ...`, add `const` to the stack.
Otherwise, do not change the `inlineStack`.
-/
def withInlining (value : Expr) (recursive : Bool) (x : SimpM α) : SimpM α := do
  trace[Compiler.simp.inline] "inlining {value}"
  let f := value.getAppFn
  if let .const declName _ := f then
    let numOccs := (← read).inlineStackOccs.find? declName |>.getD 0
    let numOccs := numOccs + 1
    if recursive then
      if hasInlineIfReduceAttribute (← getEnv) declName then
        if numOccs > (← getConfig).maxRecInlineIfReduce then
          throwError "function `{declName}` has been recursively inlined more than #{(← getConfig).maxRecInlineIfReduce}, consider removing the attribute `[inlineIfReduce]` from this declaration or increasing the limit using `set_option compiler.maxRecInlineIfReduce <num>`"
      else if numOccs > (← getConfig).maxRecInline then
        throwError "function `{declName}` has been recursively inlined more than #{(← getConfig).maxRecInline}, consider removing the attribute `[inline]` from this declaration or increasing the limit using `set_option compiler.maxRecInline <num>`"
    withReader (fun ctx => { ctx with inlineStack := declName :: ctx.inlineStack, inlineStackOccs := ctx.inlineStackOccs.insert declName numOccs }) x
  else
    x

/--
Similar to the default `Lean.withIncRecDepth`, but include the `inlineStack` in the error messsage.
-/
@[inline] def withIncRecDepth (x : SimpM α) : SimpM α := do
  let curr ← MonadRecDepth.getRecDepth
  let max  ← MonadRecDepth.getMaxRecDepth
  if curr == max then
    throwMaxRecDepth
  else
    MonadRecDepth.withRecDepth (curr+1) x
where
  throwMaxRecDepth : SimpM α := do
    match (← read).inlineStack with
    | [] => throwError maxRecDepthErrorMessage
    | declName :: stack =>
      let mut fmt  := f!"{declName}\n"
      let mut prev := declName
      let mut ellipsis := false
      for declName in stack do
        if prev == declName then
          unless ellipsis do
            ellipsis := true
            fmt := fmt ++ "...\n"
        else
          fmt := fmt ++ f!"{declName}\n"
          prev := declName
          ellipsis := false
      throwError "maximum recursion depth reached in the code generator\nfunction inline stack:\n{fmt}"

/--
Execute `x` with `fvarId` set as `mustInline`.
After execution the original setting is restored.
-/
def withAddMustInline (fvarId : FVarId) (x : SimpM α) : SimpM α := do
  let saved? := (← get).funDeclInfoMap.map.find? fvarId
  try
    addMustInline fvarId
    x
  finally
    modify fun s => { s with funDeclInfoMap := s.funDeclInfoMap.restore fvarId saved? }

/--
Return true if the given local function declaration or join point id is marked as
`once` or `mustInline`. We use this information to decide whether to inline them.
-/
def isOnceOrMustInline (fvarId : FVarId) : SimpM Bool := do
  match (← get).funDeclInfoMap.map.find? fvarId with
    | some .once | some .mustInline  => return true
    | _ => return false

/--
Return `true` if the given local function declaration is considered "small".
-/
def isSmall (decl : FunDecl) : SimpM Bool :=
  return decl.value.sizeLe (← getConfig).smallThreshold

/--
Return `true` if the given local function declaration should be inlined.
-/
def shouldInlineLocal (decl : FunDecl) : SimpM Bool := do
  if (← isOnceOrMustInline decl.fvarId) then
    return true
  else
    isSmall decl

/--
LCNF "Beta-reduce". The equivalent of `(fun params => code) args`.
If `mustInline` is true, the local function declarations in the resulting code are marked as `.mustInline`.
See comment at `updateFunDeclInfo`.
-/
def betaReduce (params : Array Param) (code : Code) (args : Array Expr) (mustInline := false) : SimpM Code := do
  let mut subst := {}
  let mut castDecls := #[]
  for param in params, arg in args do
    /-
    If `param` hast type `⊤` but `arg` does not, we must insert a cast.
    Otherwise, the resulting code may be type incorrect.
    For example, the following code is type correct before inlining `f`
    because `x : ⊤`.
    ```
    def foo (g : A → A) (a : B) :=
      fun f (x : ⊤) :=
        let _x.1 := g x
        ...
      let _x.2 := f a
      ...
    ```
    We must introduce a cast around `a` to make sure the resulting expression is type correct.
    -/
    if param.type.isAnyType && !(← inferType arg).isAnyType then
      let castArg ← mkLcCast arg anyTypeExpr
      let castDecl ← mkAuxLetDecl castArg
      castDecls := castDecls.push (CodeDecl.let castDecl)
      subst := subst.insert param.fvarId (.fvar castDecl.fvarId)
    else
      subst := subst.insert param.fvarId arg
  let code ← code.internalize subst
  let code := LCNF.attachCodeDecls castDecls code
  updateFunDeclInfo code mustInline
  return code

/--
Erase the given let-declaration from the local context,
and set the `simplified` flag to true.
-/
def eraseLetDecl (decl : LetDecl) : SimpM Unit := do
  LCNF.eraseLetDecl decl
  markSimplified

/--
Erase the given local function declaration from the local context,
and set the `simplified` flag to true.
-/
def eraseFunDecl (decl : FunDecl) : SimpM Unit := do
  LCNF.eraseFunDecl decl
  markSimplified

/--
Similar to `LCNF.addFVarSubst`. That is, add the entry
`fvarId ↦ fvarId'` to the free variable substitution.
If `fvarId` has a non-internal binder name `n`, but `fvarId'` does not,
this method also adds the entry `fvarId' ↦ n` to the `binderRenaming` map.
The goal is to preserve user provided names.
-/
def addFVarSubst (fvarId : FVarId) (fvarId' : FVarId) : SimpM Unit := do
  LCNF.addFVarSubst fvarId fvarId'
  let binderName ← getBinderName fvarId
  unless binderName.isInternal do
    let binderName' ← getBinderName fvarId'
    if binderName'.isInternal then
      modify fun s => { s with binderRenaming := s.binderRenaming.insert fvarId' binderName }
