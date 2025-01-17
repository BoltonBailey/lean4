/-
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Daniel Selsam
-/
import Lean.Meta.Basic
import Std.Data.RBMap

/-!
This file defines utilities for `MetaM` computations to traverse subexpressions
of an expression in sync with the `Nat` "position" values that refers to them.
We use a simple encoding scheme: every `Expr` constructor has at most 3 direct
expression children. Considering an expressions type as well, we can injectively
map a path of `childIdxs` to a natural number by computing the value of the 4-ary
representation `1 :: childIdxs`, since n-ary representations without leading zeros
are unique. Note that `pos` is initialized to `1` (case `childIdxs == []`).
-/

namespace Lean.PrettyPrinter.Delaborator

abbrev Pos := Nat

abbrev OptionsPerPos := Std.RBMap Pos Options compare

structure SubExpr where
  expr : Expr
  pos  : Pos

namespace SubExpr

variable {α : Type} [Inhabited α]
variable {m : Type → Type} [Monad m]
variable [MonadReaderOf SubExpr m] [MonadWithReaderOf SubExpr m]
variable [MonadLiftT MetaM m] [MonadControlT MetaM m]
variable [MonadLiftT IO m]

abbrev maxChildren : Pos := 4

def mkRoot (e : Expr) : SubExpr := ⟨e, 1⟩

def getExpr : m Expr := do (← readThe SubExpr).expr
def getPos  : m Pos  := do (← readThe SubExpr).pos

def descend (child : Expr) (childIdx : Pos) (x : m α) : m α :=
  withTheReader SubExpr (fun cfg => { cfg with expr := child, pos := cfg.pos * maxChildren + childIdx }) x

def withAppFn   (x : m α) : m α := do descend (← getExpr).appFn!  0 x
def withAppArg  (x : m α) : m α := do descend (← getExpr).appArg! 1 x

def withType (x : m α) : m α := do
  descend (← Meta.inferType (← getExpr)) (maxChildren - 1) x -- phantom positions for types

partial def withAppFnArgs (xf : m α) (xa : α → m α) : m α := do
  if (← getExpr).isApp then
    let acc ← withAppFn (withAppFnArgs xf xa)
    withAppArg (xa acc)
  else xf

def withBindingDomain (x : m α) : m α := do descend (← getExpr).bindingDomain! 0 x

def withBindingBody (n : Name) (x : m α) : m α := do
  let e ← getExpr
  Meta.withLocalDecl n e.binderInfo e.bindingDomain! fun fvar =>
    descend (e.bindingBody!.instantiate1 fvar) 1 x

def withProj (x : m α) : m α := do
  let Expr.proj _ _ e _ ← getExpr | unreachable!
  descend e 0 x

def withMDataExpr (x : m α) : m α := do
  let Expr.mdata _ e _ ← getExpr | unreachable!
  withTheReader SubExpr (fun ctx => { ctx with expr := e }) x

def withLetVarType (x : m α) : m α := do
  let Expr.letE _ t _ _ _ ← getExpr | unreachable!
  descend t 0 x

def withLetValue (x : m α) : m α := do
  let Expr.letE _ _ v _ _ ← getExpr | unreachable!
  descend v 1 x

def withLetBody (x : m α) : m α := do
  let Expr.letE n t v b _ ← getExpr | unreachable!
  Meta.withLetDecl n t v fun fvar =>
    let b := b.instantiate1 fvar
    descend b 2 x

def withNaryFn (x : m α) : m α := do
  let e ← getExpr
  let n := e.getAppNumArgs
  let newPos := (← getPos) * (maxChildren ^ n)
  withTheReader SubExpr (fun cfg => { cfg with expr := e.getAppFn, pos := newPos }) x

def withNaryArg (argIdx : Nat) (x : m α) : m α := do
  let e ← getExpr
  let args := e.getAppArgs
  let newPos := (← getPos) * (maxChildren ^ (args.size - argIdx)) + 1
  withTheReader SubExpr (fun cfg => { cfg with expr := args[argIdx], pos := newPos }) x

end SubExpr

end Lean.PrettyPrinter.Delaborator
