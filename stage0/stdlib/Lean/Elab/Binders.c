// Lean compiler output
// Module: Lean.Elab.Binders
// Imports: Init Lean.Elab.Quotation.Precheck Lean.Elab.Term Lean.Elab.BindersUtil
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t l_Lean_Name_isImplementationDetail(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__1;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__54;
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__9;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinders(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__1;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_withNewLocals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__10;
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__4;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__7;
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__1;
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_elabLetDeclAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDepArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__5;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at_Lean_Elab_Term_expandFunBinders_loop___spec__2(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__1;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__25;
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFun___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__4;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__52;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__7;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__2;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_Lean_Elab_Term_elabArrow___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandFun(lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__4;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__29;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__2;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__8;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__6;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__50;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__3;
static lean_object* l_Lean_Elab_Term_elabArrow___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__outOfBounds___rarg(lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1;
extern lean_object* l_Lean_maxRecDepthErrorMessage;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBindersEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDecls(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_elabLetDeclAux___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__37;
lean_object* l_ReaderT_instMonadFunctorReaderT(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__1;
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3;
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_expandFunBinders_loop___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__3;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__8;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__2;
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux(lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___closed__3;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange(lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__6;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_elabFun___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__4;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetTmpDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__4;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__5(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__11;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFunBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___closed__2;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__22;
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__18;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__14;
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__4;
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__6;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall___closed__1;
lean_object* l_Lean_compileDecl(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__15;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Term_expandWhereDecls___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetEqnsDecl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDelayedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__53;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLetFunAnnotation(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__42;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__46;
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabFun(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_withAuxDecl___spec__3___rarg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__2;
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__5;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckFun___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandForall(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__2;
static lean_object* l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandForall___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
static lean_object* l_Lean_Elab_Term_expandForall___closed__1;
static lean_object* l_Lean_Elab_Term_precheckArrow___closed__2;
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange(lean_object*);
static lean_object* l_Lean_Elab_Term_expandForall___closed__2;
lean_object* l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2;
static lean_object* l_Lean_Elab_Term_precheckArrow___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLiftReaderT(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_elabFun___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFun___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__13;
lean_object* l_Lean_Core_withFreshMacroScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___boxed(lean_object**);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__5;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__6;
lean_object* l_Lean_Elab_Term_Quotation_precheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__1;
lean_object* l_Lean_Meta_restoreSynthInstanceCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__49;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__4;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at_Lean_getSanitizeNames___spec__1(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9;
static lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410____closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__3;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__6;
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__12___rarg(lean_object*);
lean_object* l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__4;
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__30;
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__33;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__1;
static lean_object* l_Lean_Elab_Term_expandForall___closed__5;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__5;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__4;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__14;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__28;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__13;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__1;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__3;
lean_object* l_Lean_Elab_Term_withMacroExpansion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun___closed__2;
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__47;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkLetIdDeclView___boxed(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__4;
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__7;
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__4(lean_object*, size_t, size_t, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412_(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__20;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__2;
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_Quotation_precheckAttribute;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__7___boxed(lean_object**);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__9;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__1;
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Term_expandWhereDecls___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___rarg___boxed(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__6;
static lean_object* l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__1;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFun(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__6;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForall___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDecls___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFunBinders(lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__32;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__6;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg(lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandExplicitFun(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__6;
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__5;
lean_object* l_Lean_Macro_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandOptType(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__24;
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5___rarg(lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__7;
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabForall(lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__19;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinders___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl(lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__51;
lean_object* l_Array_unzip___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__6;
lean_object* l_Lean_Meta_getLocalInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__4;
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__7;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_kindOfBinderName___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop(lean_object*);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_elabBinders___spec__1(size_t, size_t, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__13;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__7;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__3;
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl(lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__26;
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__5;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_expandFunBinders_loop___spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*, uint8_t);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__7;
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3;
lean_object* l_Lean_Elab_Term_getMatchAltsNumPatterns(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandForall(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandForall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__5;
lean_object* l_Lean_Expr_fvar___override(lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__12;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_elabBinders___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_clearInMatch(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__14;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_checkBinderAnnotations;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandForall___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFun___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__16;
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop(lean_object*);
static lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__6;
lean_object* l_Lean_mkHole(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__6;
static lean_object* l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFunBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_addAutoBoundImplicits_x27___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__3;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6;
static lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__6;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__2;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__35;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__39;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__7;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__3;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__7;
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__5;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__7;
lean_object* l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__4;
lean_object* l_Lean_quoteNameMk(lean_object*);
static lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__7;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__2;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__31;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__7;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toSubstring_x27(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__3;
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__6;
static lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBindersEx(lean_object*);
static lean_object* l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__1;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__12;
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1;
static lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__1;
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2;
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__1;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_precheckArrow(lean_object*);
lean_object* l_Lean_Elab_Term_mkExplicitBinder(lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotation___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_traceAtCmdPos___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_universeConstraintsCheckpoint___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__41;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__2;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__23;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__2;
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__7;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__5;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__14;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__4;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__1;
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__3;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandSimpleBinderWithType(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__3;
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Term_expandWhereDecls___spec__1(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__3;
static lean_object* l_Lean_Elab_Term_expandSimpleBinderWithType___closed__1;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckFun___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__5;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__44;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object*);
static lean_object* l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4;
LEAN_EXPORT uint8_t l_Lean_Elab_Term_kindOfBinderName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__5;
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__12;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__3;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__17;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange(lean_object*);
lean_object* l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_7____spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__1;
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__4;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__2;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__6;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__1;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__43;
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__7;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType___boxed(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__2;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__8;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__7;
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Term_expandWhereDecls___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__38;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__21;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_FunBinders_State_fvars___default;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__2;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__48;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__6;
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl(lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__3;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__40;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__5;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__3;
static lean_object* l_Lean_Elab_Term_elabLetDeclCore___lambda__2___closed__1;
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
static lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__34;
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__13;
static lean_object* l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__3;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__3;
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__27;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__2;
static lean_object* l_Lean_Elab_Term_expandWhereDecls___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandForall___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__36;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_elabFun___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString(lean_object*);
static lean_object* l_Lean_Elab_Term_quoteAutoTactic___closed__45;
static lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object*);
static lean_object* l_Lean_Elab_Term_elabLetDeclAux___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Syntax_getNumArgs(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
return x_7;
}
else
{
uint8_t x_8; lean_object* x_9; 
x_8 = 0;
x_9 = l_Lean_mkHole(x_1, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_environment_main_module(x_8);
x_10 = lean_ctor_get(x_2, 10);
lean_inc(x_10);
lean_dec(x_2);
x_11 = l_Lean_addMacroScope(x_9, x_1, x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_environment_main_module(x_14);
x_16 = lean_ctor_get(x_2, 10);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_Lean_addMacroScope(x_15, x_1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
return x_18;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("x", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_5, 0, x_4);
x_6 = l_Lean_Core_withFreshMacroScope___rarg(x_5, x_1, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg(x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_mkIdentFrom(x_1, x_12, x_2);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_Lean_mkIdentFrom(x_1, x_14, x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Parser", 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Term", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("hole", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__4;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
lean_inc(x_1);
x_10 = l_Lean_Syntax_isOfKind(x_1, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
uint8_t x_12; lean_object* x_13; 
x_12 = 1;
x_13 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(x_1, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("inst", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Syntax_isNone(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__3;
x_14 = l_Lean_Core_withFreshMacroScope___rarg(x_13, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = 0;
x_18 = l_Lean_mkIdentFrom(x_1, x_16, x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = 0;
x_22 = l_Lean_mkIdentFrom(x_1, x_19, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_20);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_kindOfBinderName(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Name_isImplementationDetail(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_kindOfBinderName___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_kindOfBinderName(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("app", 3);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Array.push", 10);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__3;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Array", 5);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("push", 4);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__5;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__6;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("null", 4);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid auto tactic, antiquotation is not allowed", 49);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__10;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, size_t x_9, size_t x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
uint8_t x_19; 
x_19 = lean_usize_dec_lt(x_10, x_9);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_53; lean_object* x_61; uint8_t x_62; 
x_21 = lean_array_uget(x_8, x_10);
x_61 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_62 = lean_name_eq(x_1, x_61);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_box(0);
x_22 = x_63;
goto block_52;
}
else
{
uint8_t x_64; 
x_64 = l_Lean_Syntax_isAntiquotSuffixSplice(x_21);
if (x_64 == 0)
{
uint8_t x_65; 
x_65 = l_Lean_Syntax_isAntiquotSplice(x_21);
if (x_65 == 0)
{
lean_object* x_66; 
x_66 = lean_box(0);
x_22 = x_66;
goto block_52;
}
else
{
lean_object* x_67; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
x_67 = lean_box(0);
x_53 = x_67;
goto block_60;
}
}
else
{
lean_object* x_68; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
x_68 = lean_box(0);
x_53 = x_68;
goto block_60;
}
}
block_52:
{
lean_object* x_23; 
lean_dec(x_22);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_23 = l_Lean_Elab_Term_quoteAutoTactic(x_21, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; size_t x_45; size_t x_46; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_16, 5);
lean_inc(x_26);
x_27 = 0;
x_28 = l_Lean_SourceInfo_fromRef(x_26, x_27);
x_29 = lean_ctor_get(x_16, 10);
lean_inc(x_29);
x_30 = lean_st_ref_get(x_17, x_25);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_environment_main_module(x_33);
x_35 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__7;
x_36 = l_Lean_addMacroScope(x_34, x_35, x_29);
lean_inc(x_6);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_6);
lean_inc(x_7);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_7);
x_39 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__4;
lean_inc(x_28);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_28);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_36);
lean_ctor_set(x_40, 3, x_38);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_28);
x_42 = l_Lean_Syntax_node2(x_28, x_41, x_11, x_24);
x_43 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_44 = l_Lean_Syntax_node2(x_28, x_43, x_40, x_42);
x_45 = 1;
x_46 = lean_usize_add(x_10, x_45);
x_10 = x_46;
x_11 = x_44;
x_18 = x_32;
goto _start;
}
else
{
uint8_t x_48; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
x_48 = !lean_is_exclusive(x_23);
if (x_48 == 0)
{
return x_23;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_23, 0);
x_50 = lean_ctor_get(x_23, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_23);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
block_60:
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_53);
x_54 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__11;
x_55 = l_Lean_throwErrorAt___at_Lean_Elab_Term_Quotation_getAntiquotationIds___spec__1(x_21, x_54, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_21);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
return x_55;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_55);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid auto tactic, tactic is missing", 38);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_instMonadFunctorReaderT), 3, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_instMonadLiftReaderT), 3, 2);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_StateRefT_x27_lift), 4, 3);
lean_closure_set(x_1, 0, lean_box(0));
lean_closure_set(x_1, 1, lean_box(0));
lean_closure_set(x_1, 2, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__3;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__5;
x_3 = l_Lean_Core_instMonadQuotationCoreM;
x_4 = l_Lean_instMonadQuotation___rarg(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__3;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__4;
x_3 = l_Lean_Elab_Term_quoteAutoTactic___closed__6;
x_4 = l_Lean_instMonadQuotation___rarg(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__3;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__5;
x_3 = l_Lean_Elab_Term_quoteAutoTactic___closed__7;
x_4 = l_Lean_instMonadQuotation___rarg(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("term", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Array.empty", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__12;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("empty", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__5;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__14;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__15;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__15;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__16;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__18;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Syntax.node", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__20;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Syntax", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("node", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__22;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__23;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__22;
x_3 = l_Lean_Elab_Term_quoteAutoTactic___closed__23;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__25;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__25;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__27;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__26;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__28;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("SourceInfo.none", 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__30;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("SourceInfo", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("none", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__32;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__33;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__32;
x_3 = l_Lean_Elab_Term_quoteAutoTactic___closed__33;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__35;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__35;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__37;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__36;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__38;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("quotedName", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_quoteAutoTactic___closed__40;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__42() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(".", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__43() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("`", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__45() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("mkAtom", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__45;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__45;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__45;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__49() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__48;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__50() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__48;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__50;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__49;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__51;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__53() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid auto tactic, identifier is not allowed", 46);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_quoteAutoTactic___closed__54() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_quoteAutoTactic___closed__53;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_quoteAutoTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Elab_Term_quoteAutoTactic___closed__2;
x_10 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__10(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = l_Lean_Syntax_isAntiquot(x_1);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; size_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_15 = lean_ctor_get(x_1, 2);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_1, 0);
lean_dec(x_17);
x_18 = lean_ctor_get(x_6, 5);
lean_inc(x_18);
x_19 = 0;
x_20 = l_Lean_SourceInfo_fromRef(x_18, x_19);
x_21 = lean_ctor_get(x_6, 10);
lean_inc(x_21);
x_22 = lean_st_ref_get(x_7, x_8);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_environment_main_module(x_25);
x_27 = lean_box(0);
x_28 = l_Lean_Elab_Term_quoteAutoTactic___closed__15;
lean_inc(x_21);
x_29 = l_Lean_addMacroScope(x_26, x_28, x_21);
x_30 = l_Lean_Elab_Term_quoteAutoTactic___closed__13;
x_31 = l_Lean_Elab_Term_quoteAutoTactic___closed__19;
lean_inc(x_20);
x_32 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_32, 2, x_29);
lean_ctor_set(x_32, 3, x_31);
x_33 = lean_array_get_size(x_12);
x_34 = lean_usize_of_nat(x_33);
lean_dec(x_33);
x_35 = 0;
x_36 = l_Lean_Elab_Term_quoteAutoTactic___closed__3;
x_37 = l_Lean_Elab_Term_quoteAutoTactic___closed__4;
x_38 = l_Lean_Elab_Term_quoteAutoTactic___closed__8;
x_39 = l_Lean_Elab_Term_quoteAutoTactic___closed__11;
lean_inc(x_7);
x_40 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1(x_11, x_36, x_37, x_38, x_39, x_27, x_27, x_12, x_34, x_35, x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_24);
lean_dec(x_12);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_st_ref_get(x_7, x_42);
lean_dec(x_7);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_environment_main_module(x_46);
x_48 = l_Lean_Elab_Term_quoteAutoTactic___closed__24;
lean_inc(x_21);
lean_inc(x_47);
x_49 = l_Lean_addMacroScope(x_47, x_48, x_21);
x_50 = l_Lean_Elab_Term_quoteAutoTactic___closed__21;
x_51 = l_Lean_Elab_Term_quoteAutoTactic___closed__29;
lean_inc(x_20);
x_52 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_52, 0, x_20);
lean_ctor_set(x_52, 1, x_50);
lean_ctor_set(x_52, 2, x_49);
lean_ctor_set(x_52, 3, x_51);
x_53 = l_Lean_Elab_Term_quoteAutoTactic___closed__34;
x_54 = l_Lean_addMacroScope(x_47, x_53, x_21);
x_55 = l_Lean_Elab_Term_quoteAutoTactic___closed__31;
x_56 = l_Lean_Elab_Term_quoteAutoTactic___closed__39;
lean_inc(x_20);
x_57 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_57, 0, x_20);
lean_ctor_set(x_57, 1, x_55);
lean_ctor_set(x_57, 2, x_54);
lean_ctor_set(x_57, 3, x_56);
lean_inc(x_11);
x_58 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_27, x_11);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_free_object(x_1);
x_59 = l_Lean_quoteNameMk(x_11);
x_60 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_20);
x_61 = l_Lean_Syntax_node3(x_20, x_60, x_57, x_59, x_41);
x_62 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_63 = l_Lean_Syntax_node2(x_20, x_62, x_52, x_61);
lean_ctor_set(x_43, 0, x_63);
return x_43;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_11);
x_64 = lean_ctor_get(x_58, 0);
lean_inc(x_64);
lean_dec(x_58);
x_65 = l_Lean_Elab_Term_quoteAutoTactic___closed__42;
x_66 = l_String_intercalate(x_65, x_64);
x_67 = l_Lean_Elab_Term_quoteAutoTactic___closed__43;
x_68 = lean_string_append(x_67, x_66);
lean_dec(x_66);
x_69 = lean_box(2);
x_70 = l_Lean_Syntax_mkNameLit(x_68, x_69);
x_71 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_72 = lean_array_push(x_71, x_70);
x_73 = l_Lean_Elab_Term_quoteAutoTactic___closed__41;
lean_ctor_set(x_1, 2, x_72);
lean_ctor_set(x_1, 1, x_73);
lean_ctor_set(x_1, 0, x_69);
x_74 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_20);
x_75 = l_Lean_Syntax_node3(x_20, x_74, x_57, x_1, x_41);
x_76 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_77 = l_Lean_Syntax_node2(x_20, x_76, x_52, x_75);
lean_ctor_set(x_43, 0, x_77);
return x_43;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_78 = lean_ctor_get(x_43, 0);
x_79 = lean_ctor_get(x_43, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_43);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_environment_main_module(x_80);
x_82 = l_Lean_Elab_Term_quoteAutoTactic___closed__24;
lean_inc(x_21);
lean_inc(x_81);
x_83 = l_Lean_addMacroScope(x_81, x_82, x_21);
x_84 = l_Lean_Elab_Term_quoteAutoTactic___closed__21;
x_85 = l_Lean_Elab_Term_quoteAutoTactic___closed__29;
lean_inc(x_20);
x_86 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_86, 0, x_20);
lean_ctor_set(x_86, 1, x_84);
lean_ctor_set(x_86, 2, x_83);
lean_ctor_set(x_86, 3, x_85);
x_87 = l_Lean_Elab_Term_quoteAutoTactic___closed__34;
x_88 = l_Lean_addMacroScope(x_81, x_87, x_21);
x_89 = l_Lean_Elab_Term_quoteAutoTactic___closed__31;
x_90 = l_Lean_Elab_Term_quoteAutoTactic___closed__39;
lean_inc(x_20);
x_91 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_91, 0, x_20);
lean_ctor_set(x_91, 1, x_89);
lean_ctor_set(x_91, 2, x_88);
lean_ctor_set(x_91, 3, x_90);
lean_inc(x_11);
x_92 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_27, x_11);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_free_object(x_1);
x_93 = l_Lean_quoteNameMk(x_11);
x_94 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_20);
x_95 = l_Lean_Syntax_node3(x_20, x_94, x_91, x_93, x_41);
x_96 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_97 = l_Lean_Syntax_node2(x_20, x_96, x_86, x_95);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_79);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_11);
x_99 = lean_ctor_get(x_92, 0);
lean_inc(x_99);
lean_dec(x_92);
x_100 = l_Lean_Elab_Term_quoteAutoTactic___closed__42;
x_101 = l_String_intercalate(x_100, x_99);
x_102 = l_Lean_Elab_Term_quoteAutoTactic___closed__43;
x_103 = lean_string_append(x_102, x_101);
lean_dec(x_101);
x_104 = lean_box(2);
x_105 = l_Lean_Syntax_mkNameLit(x_103, x_104);
x_106 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_107 = lean_array_push(x_106, x_105);
x_108 = l_Lean_Elab_Term_quoteAutoTactic___closed__41;
lean_ctor_set(x_1, 2, x_107);
lean_ctor_set(x_1, 1, x_108);
lean_ctor_set(x_1, 0, x_104);
x_109 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_20);
x_110 = l_Lean_Syntax_node3(x_20, x_109, x_91, x_1, x_41);
x_111 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_112 = l_Lean_Syntax_node2(x_20, x_111, x_86, x_110);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_79);
return x_113;
}
}
}
else
{
uint8_t x_114; 
lean_dec(x_21);
lean_dec(x_20);
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_7);
x_114 = !lean_is_exclusive(x_40);
if (x_114 == 0)
{
return x_40;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_40, 0);
x_116 = lean_ctor_get(x_40, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_40);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
lean_object* x_118; uint8_t x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; size_t x_134; size_t x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_1);
x_118 = lean_ctor_get(x_6, 5);
lean_inc(x_118);
x_119 = 0;
x_120 = l_Lean_SourceInfo_fromRef(x_118, x_119);
x_121 = lean_ctor_get(x_6, 10);
lean_inc(x_121);
x_122 = lean_st_ref_get(x_7, x_8);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = lean_ctor_get(x_123, 0);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_environment_main_module(x_125);
x_127 = lean_box(0);
x_128 = l_Lean_Elab_Term_quoteAutoTactic___closed__15;
lean_inc(x_121);
x_129 = l_Lean_addMacroScope(x_126, x_128, x_121);
x_130 = l_Lean_Elab_Term_quoteAutoTactic___closed__13;
x_131 = l_Lean_Elab_Term_quoteAutoTactic___closed__19;
lean_inc(x_120);
x_132 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_132, 0, x_120);
lean_ctor_set(x_132, 1, x_130);
lean_ctor_set(x_132, 2, x_129);
lean_ctor_set(x_132, 3, x_131);
x_133 = lean_array_get_size(x_12);
x_134 = lean_usize_of_nat(x_133);
lean_dec(x_133);
x_135 = 0;
x_136 = l_Lean_Elab_Term_quoteAutoTactic___closed__3;
x_137 = l_Lean_Elab_Term_quoteAutoTactic___closed__4;
x_138 = l_Lean_Elab_Term_quoteAutoTactic___closed__8;
x_139 = l_Lean_Elab_Term_quoteAutoTactic___closed__11;
lean_inc(x_7);
x_140 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1(x_11, x_136, x_137, x_138, x_139, x_127, x_127, x_12, x_134, x_135, x_132, x_2, x_3, x_4, x_5, x_6, x_7, x_124);
lean_dec(x_12);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = lean_st_ref_get(x_7, x_142);
lean_dec(x_7);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_146 = x_143;
} else {
 lean_dec_ref(x_143);
 x_146 = lean_box(0);
}
x_147 = lean_ctor_get(x_144, 0);
lean_inc(x_147);
lean_dec(x_144);
x_148 = lean_environment_main_module(x_147);
x_149 = l_Lean_Elab_Term_quoteAutoTactic___closed__24;
lean_inc(x_121);
lean_inc(x_148);
x_150 = l_Lean_addMacroScope(x_148, x_149, x_121);
x_151 = l_Lean_Elab_Term_quoteAutoTactic___closed__21;
x_152 = l_Lean_Elab_Term_quoteAutoTactic___closed__29;
lean_inc(x_120);
x_153 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_153, 0, x_120);
lean_ctor_set(x_153, 1, x_151);
lean_ctor_set(x_153, 2, x_150);
lean_ctor_set(x_153, 3, x_152);
x_154 = l_Lean_Elab_Term_quoteAutoTactic___closed__34;
x_155 = l_Lean_addMacroScope(x_148, x_154, x_121);
x_156 = l_Lean_Elab_Term_quoteAutoTactic___closed__31;
x_157 = l_Lean_Elab_Term_quoteAutoTactic___closed__39;
lean_inc(x_120);
x_158 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_158, 0, x_120);
lean_ctor_set(x_158, 1, x_156);
lean_ctor_set(x_158, 2, x_155);
lean_ctor_set(x_158, 3, x_157);
lean_inc(x_11);
x_159 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_127, x_11);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_160 = l_Lean_quoteNameMk(x_11);
x_161 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_120);
x_162 = l_Lean_Syntax_node3(x_120, x_161, x_158, x_160, x_141);
x_163 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_164 = l_Lean_Syntax_node2(x_120, x_163, x_153, x_162);
if (lean_is_scalar(x_146)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_146;
}
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_145);
return x_165;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_11);
x_166 = lean_ctor_get(x_159, 0);
lean_inc(x_166);
lean_dec(x_159);
x_167 = l_Lean_Elab_Term_quoteAutoTactic___closed__42;
x_168 = l_String_intercalate(x_167, x_166);
x_169 = l_Lean_Elab_Term_quoteAutoTactic___closed__43;
x_170 = lean_string_append(x_169, x_168);
lean_dec(x_168);
x_171 = lean_box(2);
x_172 = l_Lean_Syntax_mkNameLit(x_170, x_171);
x_173 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_174 = lean_array_push(x_173, x_172);
x_175 = l_Lean_Elab_Term_quoteAutoTactic___closed__41;
x_176 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_176, 0, x_171);
lean_ctor_set(x_176, 1, x_175);
lean_ctor_set(x_176, 2, x_174);
x_177 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_120);
x_178 = l_Lean_Syntax_node3(x_120, x_177, x_158, x_176, x_141);
x_179 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_180 = l_Lean_Syntax_node2(x_120, x_179, x_153, x_178);
if (lean_is_scalar(x_146)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_146;
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_145);
return x_181;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_11);
lean_dec(x_7);
x_182 = lean_ctor_get(x_140, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_140, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_184 = x_140;
} else {
 lean_dec_ref(x_140);
 x_184 = lean_box(0);
}
if (lean_is_scalar(x_184)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_184;
}
lean_ctor_set(x_185, 0, x_182);
lean_ctor_set(x_185, 1, x_183);
return x_185;
}
}
}
else
{
lean_object* x_186; lean_object* x_187; 
lean_dec(x_12);
lean_dec(x_11);
x_186 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__11;
x_187 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__9(x_1, x_186, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_187;
}
}
case 2:
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_188 = lean_ctor_get(x_1, 1);
lean_inc(x_188);
lean_dec(x_1);
x_189 = lean_ctor_get(x_6, 5);
lean_inc(x_189);
x_190 = 0;
x_191 = l_Lean_SourceInfo_fromRef(x_189, x_190);
x_192 = lean_ctor_get(x_6, 10);
lean_inc(x_192);
lean_dec(x_6);
x_193 = lean_st_ref_get(x_7, x_8);
lean_dec(x_7);
x_194 = !lean_is_exclusive(x_193);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_195 = lean_ctor_get(x_193, 0);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
lean_dec(x_195);
x_197 = lean_environment_main_module(x_196);
x_198 = l_Lean_Elab_Term_quoteAutoTactic___closed__47;
x_199 = l_Lean_addMacroScope(x_197, x_198, x_192);
x_200 = l_Lean_Elab_Term_quoteAutoTactic___closed__46;
x_201 = l_Lean_Elab_Term_quoteAutoTactic___closed__52;
lean_inc(x_191);
x_202 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_202, 0, x_191);
lean_ctor_set(x_202, 1, x_200);
lean_ctor_set(x_202, 2, x_199);
lean_ctor_set(x_202, 3, x_201);
x_203 = lean_box(2);
x_204 = l_Lean_Syntax_mkStrLit(x_188, x_203);
lean_dec(x_188);
x_205 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_191);
x_206 = l_Lean_Syntax_node1(x_191, x_205, x_204);
x_207 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_208 = l_Lean_Syntax_node2(x_191, x_207, x_202, x_206);
lean_ctor_set(x_193, 0, x_208);
return x_193;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_209 = lean_ctor_get(x_193, 0);
x_210 = lean_ctor_get(x_193, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_193);
x_211 = lean_ctor_get(x_209, 0);
lean_inc(x_211);
lean_dec(x_209);
x_212 = lean_environment_main_module(x_211);
x_213 = l_Lean_Elab_Term_quoteAutoTactic___closed__47;
x_214 = l_Lean_addMacroScope(x_212, x_213, x_192);
x_215 = l_Lean_Elab_Term_quoteAutoTactic___closed__46;
x_216 = l_Lean_Elab_Term_quoteAutoTactic___closed__52;
lean_inc(x_191);
x_217 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_217, 0, x_191);
lean_ctor_set(x_217, 1, x_215);
lean_ctor_set(x_217, 2, x_214);
lean_ctor_set(x_217, 3, x_216);
x_218 = lean_box(2);
x_219 = l_Lean_Syntax_mkStrLit(x_188, x_218);
lean_dec(x_188);
x_220 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_191);
x_221 = l_Lean_Syntax_node1(x_191, x_220, x_219);
x_222 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_223 = l_Lean_Syntax_node2(x_191, x_222, x_217, x_221);
x_224 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_210);
return x_224;
}
}
default: 
{
lean_object* x_225; lean_object* x_226; 
x_225 = l_Lean_Elab_Term_quoteAutoTactic___closed__54;
x_226 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__9(x_1, x_225, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_226;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
size_t x_19; size_t x_20; lean_object* x_21; 
x_19 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_20 = lean_unbox_usize(x_10);
lean_dec(x_10);
x_21 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19, x_20, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_21;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_2);
lean_inc(x_1);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_2);
lean_ctor_set(x_13, 2, x_3);
lean_inc(x_1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_2);
x_15 = lean_box(0);
x_16 = 1;
x_17 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_4);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set(x_17, 3, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*4, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_18);
x_19 = l_Lean_addDecl(x_18, x_10, x_11, x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_compileDecl(x_18, x_10, x_11, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_1);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_19);
if (x_30 == 0)
{
return x_19;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_19, 0);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_19);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_quoteAutoTactic___closed__22;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__1;
x_3 = l_Lean_Expr_const___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Elab", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("autoParam", 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_environment_main_module(x_13);
x_15 = lean_ctor_get(x_7, 10);
lean_inc(x_15);
x_16 = l_Lean_addMacroScope(x_14, x_1, x_15);
x_17 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l_Lean_Elab_Term_quoteAutoTactic(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__3;
x_22 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_23 = l_Lean_Elab_Term_elabTerm(x_19, x_21, x_22, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__6;
x_30 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_28);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2;
x_35 = lean_box(0);
x_36 = l_Lean_Elab_Term_declareTacticSyntax___lambda__1(x_16, x_17, x_34, x_27, x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_dec(x_30);
lean_inc(x_27);
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_27);
x_39 = l_Lean_addTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__2(x_29, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2;
x_43 = l_Lean_Elab_Term_declareTacticSyntax___lambda__1(x_16, x_17, x_42, x_27, x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_41);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_40);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_23);
if (x_44 == 0)
{
return x_23;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_23, 0);
x_46 = lean_ctor_get(x_23, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_23);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_18);
if (x_48 == 0)
{
return x_18;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_18, 0);
x_50 = lean_ctor_get(x_18, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_18);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_auto", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_declareTacticSyntax___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_declareTacticSyntax___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Elab_Term_declareTacticSyntax___closed__2;
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_declareTacticSyntax___lambda__2), 9, 6);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_3);
lean_closure_set(x_10, 4, x_4);
lean_closure_set(x_10, 5, x_5);
x_11 = l_Lean_Core_withFreshMacroScope___rarg(x_10, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_declareTacticSyntax___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_declareTacticSyntax___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("binderDefault", 13);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("binderTactic", 12);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("optParam", 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__9;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__9;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Syntax_isNone(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_2, x_11);
lean_inc(x_12);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2;
x_15 = lean_name_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4;
x_17 = lean_name_eq(x_13, x_16);
lean_dec(x_13);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__12___rarg(x_9);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_unsigned_to_nat(2u);
x_20 = l_Lean_Syntax_getArg(x_12, x_19);
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_20);
x_21 = l_Lean_Elab_Term_declareTacticSyntax(x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_7, 5);
lean_inc(x_24);
x_25 = 0;
x_26 = l_Lean_SourceInfo_fromRef(x_24, x_25);
x_27 = lean_ctor_get(x_7, 10);
lean_inc(x_27);
lean_dec(x_7);
x_28 = lean_st_ref_get(x_8, x_23);
lean_dec(x_8);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_environment_main_module(x_31);
x_33 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6;
x_34 = l_Lean_addMacroScope(x_32, x_33, x_27);
x_35 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5;
x_36 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8;
lean_inc(x_26);
x_37 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_37, 0, x_26);
lean_ctor_set(x_37, 1, x_35);
lean_ctor_set(x_37, 2, x_34);
lean_ctor_set(x_37, 3, x_36);
x_38 = l_Lean_mkIdentFrom(x_20, x_22, x_25);
x_39 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_26);
x_40 = l_Lean_Syntax_node2(x_26, x_39, x_1, x_38);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_42 = l_Lean_Syntax_node2(x_26, x_41, x_37, x_40);
lean_ctor_set(x_28, 0, x_42);
return x_28;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_43 = lean_ctor_get(x_28, 0);
x_44 = lean_ctor_get(x_28, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_28);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_environment_main_module(x_45);
x_47 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6;
x_48 = l_Lean_addMacroScope(x_46, x_47, x_27);
x_49 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5;
x_50 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8;
lean_inc(x_26);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_26);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_50);
x_52 = l_Lean_mkIdentFrom(x_20, x_22, x_25);
x_53 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_26);
x_54 = l_Lean_Syntax_node2(x_26, x_53, x_1, x_52);
x_55 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_56 = l_Lean_Syntax_node2(x_26, x_55, x_51, x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_44);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_21);
if (x_58 == 0)
{
return x_21;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_21, 0);
x_60 = lean_ctor_get(x_21, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_21);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_62 = lean_unsigned_to_nat(1u);
x_63 = l_Lean_Syntax_getArg(x_12, x_62);
lean_dec(x_12);
x_64 = lean_ctor_get(x_7, 5);
lean_inc(x_64);
x_65 = 0;
x_66 = l_Lean_SourceInfo_fromRef(x_64, x_65);
x_67 = lean_ctor_get(x_7, 10);
lean_inc(x_67);
lean_dec(x_7);
x_68 = lean_st_ref_get(x_8, x_9);
lean_dec(x_8);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_environment_main_module(x_71);
x_73 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11;
x_74 = l_Lean_addMacroScope(x_72, x_73, x_67);
x_75 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__10;
x_76 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__13;
lean_inc(x_66);
x_77 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_77, 0, x_66);
lean_ctor_set(x_77, 1, x_75);
lean_ctor_set(x_77, 2, x_74);
lean_ctor_set(x_77, 3, x_76);
x_78 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_66);
x_79 = l_Lean_Syntax_node2(x_66, x_78, x_1, x_63);
x_80 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_81 = l_Lean_Syntax_node2(x_66, x_80, x_77, x_79);
lean_ctor_set(x_68, 0, x_81);
return x_68;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_82 = lean_ctor_get(x_68, 0);
x_83 = lean_ctor_get(x_68, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_68);
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_environment_main_module(x_84);
x_86 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11;
x_87 = l_Lean_addMacroScope(x_85, x_86, x_67);
x_88 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__10;
x_89 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__13;
lean_inc(x_66);
x_90 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_90, 0, x_66);
lean_ctor_set(x_90, 1, x_88);
lean_ctor_set(x_90, 2, x_87);
lean_ctor_set(x_90, 3, x_89);
x_91 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_66);
x_92 = l_Lean_Syntax_node2(x_66, x_91, x_1, x_63);
x_93 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
x_94 = l_Lean_Syntax_node2(x_66, x_93, x_90, x_92);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_83);
return x_95;
}
}
}
else
{
lean_object* x_96; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_1);
lean_ctor_set(x_96, 1, x_9);
return x_96;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("ident", 5);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("identifier or `_` expected", 26);
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_lt(x_2, x_1);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_array_uget(x_3, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_3, x_2, x_14);
lean_inc(x_13);
x_16 = l_Lean_Syntax_getKind(x_13);
x_17 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2;
x_18 = lean_name_eq(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
x_20 = lean_name_eq(x_16, x_19);
lean_dec(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_15);
x_21 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__4;
x_22 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__9(x_13, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; 
x_27 = 1;
x_28 = lean_usize_add(x_2, x_27);
x_29 = lean_array_uset(x_15, x_2, x_13);
x_2 = x_28;
x_3 = x_29;
goto _start;
}
}
else
{
size_t x_31; size_t x_32; lean_object* x_33; 
lean_dec(x_16);
x_31 = 1;
x_32 = lean_usize_add(x_2, x_31);
x_33 = lean_array_uset(x_15, x_2, x_13);
x_2 = x_32;
x_3 = x_33;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; 
x_9 = l_Lean_Syntax_getArgs(x_1);
lean_dec(x_1);
x_10 = lean_array_get_size(x_9);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(x_11, x_12, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_unsupportedSyntaxExceptionId;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_3, x_2);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_array_uget(x_4, x_3);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_4, x_3, x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_14);
x_17 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_14);
x_20 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_14, x_1);
x_21 = 2;
x_22 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*3, x_21);
x_23 = 1;
x_24 = lean_usize_add(x_3, x_23);
x_25 = lean_array_uset(x_16, x_3, x_22);
x_3 = x_24;
x_4 = x_25;
x_11 = x_19;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_3, x_2);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_array_uget(x_4, x_3);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_4, x_3, x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_14);
x_17 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_14);
x_20 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_14, x_1);
x_21 = 1;
x_22 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*3, x_21);
x_23 = 1;
x_24 = lean_usize_add(x_3, x_23);
x_25 = lean_array_uset(x_16, x_3, x_22);
x_3 = x_24;
x_4 = x_25;
x_11 = x_19;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_17);
if (x_27 == 0)
{
return x_17;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_17, 0);
x_29 = lean_ctor_get(x_17, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_4, x_3);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_uget(x_5, x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_5, x_4, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_15);
x_18 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_15);
x_21 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderType(x_15, x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier(x_21, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 0;
x_26 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_26, 0, x_15);
lean_ctor_set(x_26, 1, x_19);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set_uint8(x_26, sizeof(void*)*3, x_25);
x_27 = 1;
x_28 = lean_usize_add(x_4, x_27);
x_29 = lean_array_uset(x_17, x_4, x_26);
x_4 = x_28;
x_5 = x_29;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_31 = !lean_is_exclusive(x_22);
if (x_31 == 0)
{
return x_22;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_22, 0);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_22);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
return x_18;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_18);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("explicitBinder", 14);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("implicitBinder", 14);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("strictImplicitBinder", 20);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__5;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("instBinder", 10);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
lean_inc(x_1);
x_9 = l_Lean_Syntax_getKind(x_1);
x_10 = l_Lean_Syntax_isIdent(x_1);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
x_12 = lean_name_eq(x_9, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2;
x_14 = lean_name_eq(x_9, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__4;
x_16 = lean_name_eq(x_9, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__6;
x_18 = lean_name_eq(x_9, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__8;
x_20 = lean_name_eq(x_9, x_19);
lean_dec(x_9);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg(x_8);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
x_24 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_unsigned_to_nat(2u);
x_28 = l_Lean_Syntax_getArg(x_1, x_27);
lean_dec(x_1);
x_29 = 3;
lean_inc(x_26);
x_30 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_26);
lean_ctor_set(x_30, 2, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*3, x_29);
x_31 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_32 = lean_array_push(x_31, x_30);
lean_ctor_set(x_24, 0, x_32);
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_unsigned_to_nat(2u);
x_36 = l_Lean_Syntax_getArg(x_1, x_35);
lean_dec(x_1);
x_37 = 3;
lean_inc(x_33);
x_38 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_33);
lean_ctor_set(x_38, 2, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*3, x_37);
x_39 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_40 = lean_array_push(x_39, x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_34);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_24);
if (x_42 == 0)
{
return x_24;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_24, 0);
x_44 = lean_ctor_get(x_24, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_24);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_9);
x_46 = lean_unsigned_to_nat(1u);
x_47 = l_Lean_Syntax_getArg(x_1, x_46);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_48 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_47, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; size_t x_54; size_t x_55; lean_object* x_56; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(2u);
x_52 = l_Lean_Syntax_getArg(x_1, x_51);
lean_dec(x_1);
x_53 = lean_array_get_size(x_49);
x_54 = lean_usize_of_nat(x_53);
lean_dec(x_53);
x_55 = 0;
x_56 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__2(x_52, x_54, x_55, x_49, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
lean_dec(x_52);
return x_56;
}
else
{
uint8_t x_57; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_48);
if (x_57 == 0)
{
return x_48;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_48, 0);
x_59 = lean_ctor_get(x_48, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_48);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_9);
x_61 = lean_unsigned_to_nat(1u);
x_62 = l_Lean_Syntax_getArg(x_1, x_61);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_63 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_62, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; size_t x_69; size_t x_70; lean_object* x_71; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_unsigned_to_nat(2u);
x_67 = l_Lean_Syntax_getArg(x_1, x_66);
lean_dec(x_1);
x_68 = lean_array_get_size(x_64);
x_69 = lean_usize_of_nat(x_68);
lean_dec(x_68);
x_70 = 0;
x_71 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__3(x_67, x_69, x_70, x_64, x_2, x_3, x_4, x_5, x_6, x_7, x_65);
lean_dec(x_67);
return x_71;
}
else
{
uint8_t x_72; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_63);
if (x_72 == 0)
{
return x_63;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_63, 0);
x_74 = lean_ctor_get(x_63, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_63);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_9);
x_76 = lean_unsigned_to_nat(1u);
x_77 = l_Lean_Syntax_getArg(x_1, x_76);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_78 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds(x_77, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; size_t x_86; size_t x_87; lean_object* x_88; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_unsigned_to_nat(2u);
x_82 = l_Lean_Syntax_getArg(x_1, x_81);
x_83 = lean_unsigned_to_nat(3u);
x_84 = l_Lean_Syntax_getArg(x_1, x_83);
lean_dec(x_1);
x_85 = lean_array_get_size(x_79);
x_86 = lean_usize_of_nat(x_85);
lean_dec(x_85);
x_87 = 0;
x_88 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__4(x_82, x_84, x_86, x_87, x_79, x_2, x_3, x_4, x_5, x_6, x_7, x_80);
lean_dec(x_84);
lean_dec(x_82);
return x_88;
}
else
{
uint8_t x_89; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_78);
if (x_89 == 0)
{
return x_78;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_78, 0);
x_91 = lean_ctor_get(x_78, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_78);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
else
{
lean_object* x_93; 
lean_dec(x_9);
lean_inc(x_1);
x_93 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_93) == 0)
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
lean_object* x_95; uint8_t x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_95 = lean_ctor_get(x_93, 0);
x_96 = 0;
lean_inc(x_1);
x_97 = l_Lean_mkHole(x_1, x_96);
x_98 = 0;
x_99 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_99, 0, x_1);
lean_ctor_set(x_99, 1, x_95);
lean_ctor_set(x_99, 2, x_97);
lean_ctor_set_uint8(x_99, sizeof(void*)*3, x_98);
x_100 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_101 = lean_array_push(x_100, x_99);
lean_ctor_set(x_93, 0, x_101);
return x_93;
}
else
{
lean_object* x_102; lean_object* x_103; uint8_t x_104; lean_object* x_105; uint8_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_102 = lean_ctor_get(x_93, 0);
x_103 = lean_ctor_get(x_93, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_93);
x_104 = 0;
lean_inc(x_1);
x_105 = l_Lean_mkHole(x_1, x_104);
x_106 = 0;
x_107 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_107, 0, x_1);
lean_ctor_set(x_107, 1, x_102);
lean_ctor_set(x_107, 2, x_105);
lean_ctor_set_uint8(x_107, sizeof(void*)*3, x_106);
x_108 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_109 = lean_array_push(x_108, x_107);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_103);
return x_110;
}
}
else
{
uint8_t x_111; 
lean_dec(x_1);
x_111 = !lean_is_exclusive(x_93);
if (x_111 == 0)
{
return x_93;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_93, 0);
x_113 = lean_ctor_get(x_93, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_93);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
else
{
lean_object* x_115; 
lean_dec(x_9);
lean_inc(x_1);
x_115 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_115) == 0)
{
uint8_t x_116; 
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; uint8_t x_118; lean_object* x_119; uint8_t x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_117 = lean_ctor_get(x_115, 0);
x_118 = 0;
lean_inc(x_1);
x_119 = l_Lean_mkHole(x_1, x_118);
x_120 = 0;
x_121 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_121, 0, x_1);
lean_ctor_set(x_121, 1, x_117);
lean_ctor_set(x_121, 2, x_119);
lean_ctor_set_uint8(x_121, sizeof(void*)*3, x_120);
x_122 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_123 = lean_array_push(x_122, x_121);
lean_ctor_set(x_115, 0, x_123);
return x_115;
}
else
{
lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_124 = lean_ctor_get(x_115, 0);
x_125 = lean_ctor_get(x_115, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_115);
x_126 = 0;
lean_inc(x_1);
x_127 = l_Lean_mkHole(x_1, x_126);
x_128 = 0;
x_129 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_129, 0, x_1);
lean_ctor_set(x_129, 1, x_124);
lean_ctor_set(x_129, 2, x_127);
lean_ctor_set_uint8(x_129, sizeof(void*)*3, x_128);
x_130 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_131 = lean_array_push(x_130, x_129);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_125);
return x_132;
}
}
else
{
uint8_t x_133; 
lean_dec(x_1);
x_133 = !lean_is_exclusive(x_115);
if (x_133 == 0)
{
return x_115;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_115, 0);
x_135 = lean_ctor_get(x_115, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_115);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__2(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__3(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__4(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("failed to infer binder type", 27);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3;
x_11 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_1, x_2, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_box(0);
x_11 = lean_box(0);
x_12 = 1;
x_13 = l_Lean_Elab_Term_addTermInfo_x27(x_1, x_2, x_10, x_10, x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 5);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 5, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
x_22 = lean_ctor_get(x_7, 8);
x_23 = lean_ctor_get(x_7, 9);
x_24 = lean_ctor_get(x_7, 10);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_25 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_19);
x_26 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_15);
lean_ctor_set(x_26, 2, x_16);
lean_ctor_set(x_26, 3, x_17);
lean_ctor_set(x_26, 4, x_18);
lean_ctor_set(x_26, 5, x_25);
lean_ctor_set(x_26, 6, x_20);
lean_ctor_set(x_26, 7, x_21);
lean_ctor_set(x_26, 8, x_22);
lean_ctor_set(x_26, 9, x_23);
lean_ctor_set(x_26, 10, x_24);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_2, x_3, x_4, x_5, x_6, x_26, x_8, x_9);
lean_dec(x_26);
return x_27;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid binder name '", 21);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("', it must be atomic", 20);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_Syntax_getId(x_9);
x_11 = lean_erase_macro_scopes(x_10);
x_12 = l_Lean_Name_isAtomic(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_11);
x_14 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___spec__1(x_9, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_9);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_8);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("checkBinderAnnotations", 22);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("check whether type is a class instance whenever the binder annotation `[...]` is used", 85);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__5() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 1;
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__3;
x_3 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__4;
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__2;
x_3 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__5;
x_4 = l_Lean_Option_register___at_Lean_Elab_initFn____x40_Lean_Elab_AutoBound___hyg_7____spec__1(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_expr_instantiate1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters(x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__1), 9, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = 0;
x_15 = l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_withAuxDecl___spec__3___rarg(x_2, x_3, x_4, x_13, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid parametric local instance, parameter with type", 54);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\ndoes not have forward dependencies, type class resolution cannot use this kind of local instance because it will not be able to infer a value for this parameter.", 162);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = lean_whnf(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 7)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 2);
lean_inc(x_14);
x_15 = lean_ctor_get_uint8(x_10, sizeof(void*)*3 + 8);
lean_dec(x_10);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_expr_has_loose_bvar(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_14);
lean_dec(x_12);
x_18 = l_Lean_indentExpr(x_13);
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__4;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_box(0);
x_29 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__2(x_14, x_12, x_15, x_13, x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_9);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_9, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_9, 0, x_32);
return x_9;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_9, 1);
lean_inc(x_33);
lean_dec(x_9);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_9);
if (x_36 == 0)
{
return x_9;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_9, 0);
x_38 = lean_ctor_get(x_9, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_9);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___lambda__2(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 5);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 5, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
x_22 = lean_ctor_get(x_7, 8);
x_23 = lean_ctor_get(x_7, 9);
x_24 = lean_ctor_get(x_7, 10);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_25 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_19);
x_26 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_15);
lean_ctor_set(x_26, 2, x_16);
lean_ctor_set(x_26, 3, x_17);
lean_ctor_set(x_26, 4, x_18);
lean_ctor_set(x_26, 5, x_25);
lean_ctor_set(x_26, 6, x_20);
lean_ctor_set(x_26, 7, x_21);
lean_ctor_set(x_26, 8, x_22);
lean_ctor_set(x_26, 9, x_23);
lean_ctor_set(x_26, 10, x_24);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_2, x_3, x_4, x_5, x_6, x_26, x_8, x_9);
lean_dec(x_26);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Elab_Term_addLocalVarInfo(x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_2, x_18);
lean_dec(x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_7);
x_21 = lean_array_push(x_4, x_20);
x_22 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(x_5, x_6, x_19, x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_17);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = l_Lean_Syntax_getId(x_15);
lean_inc(x_16);
x_17 = l_Lean_Elab_Term_kindOfBinderName(x_16);
x_18 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_19 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__1), 14, 6);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_15);
lean_closure_set(x_19, 3, x_3);
lean_closure_set(x_19, 4, x_4);
lean_closure_set(x_19, 5, x_5);
x_20 = l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_withAuxDecl___spec__3___rarg(x_16, x_18, x_6, x_19, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_20;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_9, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_9, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_9, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_9, 5);
lean_inc(x_17);
x_18 = lean_ctor_get(x_9, 6);
lean_inc(x_18);
x_19 = lean_ctor_get(x_9, 7);
lean_inc(x_19);
x_20 = lean_ctor_get(x_9, 8);
lean_inc(x_20);
x_21 = lean_ctor_get(x_9, 9);
lean_inc(x_21);
x_22 = lean_ctor_get(x_9, 10);
lean_inc(x_22);
x_23 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_24 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_24, 0, x_12);
lean_ctor_set(x_24, 1, x_13);
lean_ctor_set(x_24, 2, x_14);
lean_ctor_set(x_24, 3, x_15);
lean_ctor_set(x_24, 4, x_16);
lean_ctor_set(x_24, 5, x_23);
lean_ctor_set(x_24, 6, x_18);
lean_ctor_set(x_24, 7, x_19);
lean_ctor_set(x_24, 8, x_20);
lean_ctor_set(x_24, 9, x_21);
lean_ctor_set(x_24, 10, x_22);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_25 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters(x_2, x_5, x_6, x_7, x_8, x_24, x_10, x_11);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_apply_8(x_3, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_checkBinderAnnotations;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("invalid binder annotation, type is not a class instance", 55);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\nuse the command `set_option checkBinderAnnotations false` to disable the check", 79);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_apply_8(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_fget(x_1, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_15);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_15, 2);
lean_inc(x_18);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_18);
x_19 = l_Lean_Elab_Term_elabType(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_18);
x_22 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(x_20, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_9, 2);
lean_inc(x_24);
lean_inc(x_20);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_15);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2___boxed), 14, 6);
lean_closure_set(x_25, 0, x_15);
lean_closure_set(x_25, 1, x_3);
lean_closure_set(x_25, 2, x_4);
lean_closure_set(x_25, 3, x_1);
lean_closure_set(x_25, 4, x_2);
lean_closure_set(x_25, 5, x_20);
x_26 = lean_ctor_get_uint8(x_15, sizeof(void*)*3);
x_27 = l_Lean_BinderInfo_isInstImplicit(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_18);
x_28 = lean_box(0);
x_29 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_15, x_3, x_4, x_1, x_2, x_20, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
return x_29;
}
else
{
lean_object* x_30; uint8_t x_31; 
x_30 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1;
x_31 = l_Lean_Option_get___at_Lean_getSanitizeNames___spec__1(x_24, x_30);
lean_dec(x_24);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_25);
lean_dec(x_18);
x_32 = lean_box(0);
x_33 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_15, x_3, x_4, x_1, x_2, x_20, x_32, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_20);
x_34 = l_Lean_Meta_isClass_x3f(x_20, x_7, x_8, x_9, x_10, x_23);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_25);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_indentExpr(x_20);
x_38 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__5;
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___spec__1(x_18, x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_36);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_18);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
return x_42;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_35);
x_47 = lean_ctor_get(x_34, 1);
lean_inc(x_47);
lean_dec(x_34);
x_48 = lean_box(0);
x_49 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__3(x_18, x_20, x_25, x_48, x_5, x_6, x_7, x_8, x_9, x_10, x_47);
lean_dec(x_18);
return x_49;
}
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_19);
if (x_50 == 0)
{
return x_19;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_19, 0);
x_52 = lean_ctor_get(x_19, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_19);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_16);
if (x_54 == 0)
{
return x_16;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_16, 0);
x_56 = lean_ctor_get(x_16, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_16);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_7);
return x_15;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(x_1, x_3, x_11, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = lean_apply_8(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_fget(x_1, x_3);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_3, x_19);
x_21 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed), 11, 3);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg(x_17, x_21, x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_16);
if (x_24 == 0)
{
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_12;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux_loop___rarg(x_1, x_2, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBindersEx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Array_isEmpty___rarg(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg), 9, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
x_12 = l_Lean_Elab_Term_universeConstraintsCheckpoint___rarg(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_1);
x_13 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_14 = lean_apply_1(x_2, x_13);
x_15 = l_Lean_Elab_Term_universeConstraintsCheckpoint___rarg(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBindersEx(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBindersEx___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_elabBinders___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = 1;
x_10 = lean_usize_add(x_2, x_9);
x_11 = lean_array_uset(x_7, x_2, x_8);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinders___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_elabBinders___spec__1(x_11, x_12, x_2);
x_14 = lean_apply_8(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___lambda__1), 9, 1);
lean_closure_set(x_10, 0, x_2);
x_11 = l_Lean_Elab_Term_elabBindersEx___rarg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinders(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_elabBinders___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_elabBinders___spec__1(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_Lean_instInhabitedExpr;
x_14 = l___private_Init_Util_0__outOfBounds___rarg(x_13);
x_15 = lean_apply_8(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_array_fget(x_2, x_11);
x_17 = lean_apply_8(x_1, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_11 = lean_array_push(x_10, x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed), 9, 1);
lean_closure_set(x_12, 0, x_2);
x_13 = l_Lean_Elab_Term_elabBinders___rarg(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinder___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabBinder___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabBinder___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unexpected type ascription", 26);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("(", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(":", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(")", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandSimpleBinderWithType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
lean_inc(x_2);
x_6 = l_Lean_Syntax_isOfKind(x_2, x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_Lean_Syntax_isIdent(x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_8 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__1;
x_9 = l_Lean_Macro_throwErrorAt___rarg(x_1, x_8, x_3, x_4);
lean_dec(x_1);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_10 = lean_ctor_get(x_3, 5);
lean_inc(x_10);
lean_dec(x_3);
x_11 = 0;
x_12 = l_Lean_SourceInfo_fromRef(x_10, x_11);
x_13 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2;
lean_inc(x_12);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_12);
x_16 = l_Lean_Syntax_node1(x_12, x_15, x_2);
x_17 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3;
lean_inc(x_12);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
lean_inc(x_12);
x_19 = l_Lean_Syntax_node2(x_12, x_15, x_18, x_1);
x_20 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_12);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_12);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_20);
x_22 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4;
lean_inc(x_12);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_12);
lean_ctor_set(x_23, 1, x_22);
x_24 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2;
x_25 = l_Lean_Syntax_node5(x_12, x_24, x_14, x_16, x_19, x_21, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
return x_26;
}
}
else
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_27 = lean_ctor_get(x_3, 5);
lean_inc(x_27);
lean_dec(x_3);
x_28 = 0;
x_29 = l_Lean_SourceInfo_fromRef(x_27, x_28);
x_30 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2;
lean_inc(x_29);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_29);
x_33 = l_Lean_Syntax_node1(x_29, x_32, x_2);
x_34 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3;
lean_inc(x_29);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
lean_inc(x_29);
x_36 = l_Lean_Syntax_node2(x_29, x_32, x_35, x_1);
x_37 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_29);
x_38 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_32);
lean_ctor_set(x_38, 2, x_37);
x_39 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4;
lean_inc(x_29);
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_29);
lean_ctor_set(x_40, 1, x_39);
x_41 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2;
x_42 = l_Lean_Syntax_node5(x_29, x_41, x_31, x_33, x_36, x_38, x_40);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_4);
return x_43;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandForall___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_4, x_3);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_uget(x_5, x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_5, x_4, x_11);
lean_inc(x_6);
lean_inc(x_2);
x_13 = l_Lean_Elab_Term_expandSimpleBinderWithType(x_2, x_10, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = lean_usize_add(x_4, x_16);
x_18 = lean_array_uset(x_12, x_4, x_14);
x_4 = x_17;
x_5 = x_18;
x_7 = x_15;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_expandForall___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("forall", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandForall___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandForall___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandForall___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("typeSpec", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandForall___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandForall___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandForall___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(",", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandForall(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Elab_Term_expandForall___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_inc(x_11);
x_12 = l_Lean_Syntax_matchesNull(x_11, x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_box(1);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Syntax_getArg(x_11, x_15);
lean_dec(x_11);
x_17 = l_Lean_Elab_Term_expandForall___closed__4;
lean_inc(x_16);
x_18 = l_Lean_Syntax_isOfKind(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_box(1);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_21 = l_Lean_Syntax_getArg(x_16, x_8);
lean_dec(x_16);
x_22 = lean_unsigned_to_nat(4u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
lean_dec(x_1);
x_24 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_25 = lean_array_get_size(x_24);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
x_28 = l_Lean_Elab_Term_quoteAutoTactic___closed__11;
lean_inc(x_2);
x_29 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandForall___spec__1(x_28, x_21, x_26, x_27, x_24, x_2, x_3);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_2, 5);
lean_inc(x_32);
lean_dec(x_2);
x_33 = 0;
x_34 = l_Lean_SourceInfo_fromRef(x_32, x_33);
x_35 = l_Lean_Elab_Term_expandForall___closed__1;
lean_inc(x_34);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_38 = l_Array_append___rarg(x_37, x_31);
x_39 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_34);
x_40 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_40, 2, x_38);
lean_inc(x_34);
x_41 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_41, 2, x_37);
x_42 = l_Lean_Elab_Term_expandForall___closed__5;
lean_inc(x_34);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_Syntax_node5(x_34, x_4, x_36, x_40, x_41, x_43, x_23);
lean_ctor_set(x_29, 0, x_44);
return x_29;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_45 = lean_ctor_get(x_29, 0);
x_46 = lean_ctor_get(x_29, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_29);
x_47 = lean_ctor_get(x_2, 5);
lean_inc(x_47);
lean_dec(x_2);
x_48 = 0;
x_49 = l_Lean_SourceInfo_fromRef(x_47, x_48);
x_50 = l_Lean_Elab_Term_expandForall___closed__1;
lean_inc(x_49);
x_51 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_53 = l_Array_append___rarg(x_52, x_45);
x_54 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_49);
x_55 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_55, 0, x_49);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_53);
lean_inc(x_49);
x_56 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_56, 0, x_49);
lean_ctor_set(x_56, 1, x_54);
lean_ctor_set(x_56, 2, x_52);
x_57 = l_Lean_Elab_Term_expandForall___closed__5;
lean_inc(x_49);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_49);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_Syntax_node5(x_49, x_4, x_51, x_55, x_56, x_58, x_23);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_46);
return x_60;
}
}
else
{
uint8_t x_61; 
lean_dec(x_23);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_29);
if (x_61 == 0)
{
return x_29;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_29, 0);
x_63 = lean_ctor_get(x_29, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_29);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandForall___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandForall___spec__1(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("expandForall", 12);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_expandForall___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_macroAttribute;
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandForall), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandForall(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_expandForall___closed__3;
x_3 = l_Lean_Elab_Term_expandForall___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_expandForall___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandForall___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(254u);
x_2 = lean_unsigned_to_nat(40u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(258u);
x_2 = lean_unsigned_to_nat(31u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__1;
x_2 = lean_unsigned_to_nat(40u);
x_3 = l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__2;
x_4 = lean_unsigned_to_nat(31u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(254u);
x_2 = lean_unsigned_to_nat(44u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(254u);
x_2 = lean_unsigned_to_nat(56u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__4;
x_2 = lean_unsigned_to_nat(44u);
x_3 = l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__5;
x_4 = lean_unsigned_to_nat(56u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandForall_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_expandForall___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForall___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Elab_Term_elabType(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 0;
x_14 = 1;
x_15 = 1;
x_16 = l_Lean_Meta_mkForallFVars(x_2, x_11, x_13, x_14, x_15, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Term_expandForall___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Syntax_matchesNull(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_unsigned_to_nat(4u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
lean_dec(x_1);
x_22 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 9, 1);
lean_closure_set(x_23, 0, x_21);
x_24 = l_Lean_Elab_Term_elabBinders___rarg(x_22, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabForall(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabForall", 10);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_termElabAttribute;
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabForall(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l_Lean_Elab_Term_expandForall___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(260u);
x_2 = lean_unsigned_to_nat(28u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(266u);
x_2 = lean_unsigned_to_nat(31u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__1;
x_2 = lean_unsigned_to_nat(28u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__2;
x_4 = lean_unsigned_to_nat(31u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(260u);
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(260u);
x_2 = lean_unsigned_to_nat(42u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__4;
x_2 = lean_unsigned_to_nat(32u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__5;
x_4 = lean_unsigned_to_nat(42u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabForall_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_precheckArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("arrow", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_precheckArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_precheckArrow___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Term_precheckArrow___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l_Lean_Elab_Term_Quotation_precheck(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_Elab_Term_Quotation_precheck(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("precheckArrow", 13);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_Quotation_precheckAttribute;
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_precheckArrow), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_precheckArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__3;
x_3 = l_Lean_Elab_Term_precheckArrow___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("a", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_elabArrow___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Term_precheckArrow___closed__2;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l_Lean_Elab_Term_elabType(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_8);
lean_inc(x_7);
x_20 = l_Lean_Elab_Term_elabType(x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_8, x_22);
lean_dec(x_8);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_environment_main_module(x_26);
x_28 = lean_ctor_get(x_7, 10);
lean_inc(x_28);
lean_dec(x_7);
x_29 = l_Lean_Elab_Term_elabArrow___closed__2;
x_30 = l_Lean_addMacroScope(x_27, x_29, x_28);
x_31 = 0;
x_32 = l_Lean_Expr_forallE___override(x_30, x_18, x_21, x_31);
lean_ctor_set(x_23, 0, x_32);
return x_23;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_environment_main_module(x_35);
x_37 = lean_ctor_get(x_7, 10);
lean_inc(x_37);
lean_dec(x_7);
x_38 = l_Lean_Elab_Term_elabArrow___closed__2;
x_39 = l_Lean_addMacroScope(x_36, x_38, x_37);
x_40 = 0;
x_41 = l_Lean_Expr_forallE___override(x_39, x_18, x_21, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_34);
return x_42;
}
}
else
{
uint8_t x_43; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
x_43 = !lean_is_exclusive(x_20);
if (x_43 == 0)
{
return x_20;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_20, 0);
x_45 = lean_ctor_get(x_20, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_20);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_17);
if (x_47 == 0)
{
return x_17;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_17, 0);
x_49 = lean_ctor_get(x_17, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_17);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabArrow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabArrow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabArrow", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrow___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l_Lean_Elab_Term_precheckArrow___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(275u);
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(282u);
x_2 = lean_unsigned_to_nat(50u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__1;
x_2 = lean_unsigned_to_nat(25u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__2;
x_4 = lean_unsigned_to_nat(50u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(275u);
x_2 = lean_unsigned_to_nat(29u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(275u);
x_2 = lean_unsigned_to_nat(38u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__4;
x_2 = lean_unsigned_to_nat(29u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__5;
x_4 = lean_unsigned_to_nat(38u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabArrow_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDepArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_15 = lean_array_push(x_14, x_11);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForall___lambda__1), 9, 1);
lean_closure_set(x_16, 0, x_13);
x_17 = l_Lean_Elab_Term_elabBinders___rarg(x_15, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabDepArrow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabDepArrow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("depArrow", 8);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabDepArrow", 12);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabDepArrow___boxed), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("The dependent arrow. `(x : α) → β` is equivalent to `∀ x : α, β`, but we usually\nreserve the latter for propositions. Also written as `Π x : α, β` (the \"Pi-type\")\nin the literature. ", 193);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4;
x_3 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString___closed__1;
x_4 = l_Lean_addBuiltinDocString(x_2, x_3, x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(288u);
x_2 = lean_unsigned_to_nat(28u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(293u);
x_2 = lean_unsigned_to_nat(38u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__1;
x_2 = lean_unsigned_to_nat(28u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__2;
x_4 = lean_unsigned_to_nat(38u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(288u);
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(288u);
x_2 = lean_unsigned_to_nat(44u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__4;
x_2 = lean_unsigned_to_nat(32u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__5;
x_4 = lean_unsigned_to_nat(44u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4;
x_3 = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = lean_usize_dec_lt(x_5, x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_uget(x_3, x_5);
lean_inc(x_12);
x_13 = l_Lean_Syntax_isOfKind(x_12, x_1);
if (x_13 == 0)
{
uint8_t x_14; 
lean_inc(x_12);
x_14 = l_Lean_Syntax_isOfKind(x_12, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
lean_object* x_17; size_t x_18; size_t x_19; 
x_17 = lean_array_push(x_6, x_12);
x_18 = 1;
x_19 = lean_usize_add(x_5, x_18);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
else
{
lean_object* x_21; size_t x_22; size_t x_23; 
x_21 = lean_array_push(x_6, x_12);
x_22 = 1;
x_23 = lean_usize_add(x_5, x_22);
x_5 = x_23;
x_6 = x_21;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_4, x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_uget(x_2, x_4);
lean_inc(x_11);
x_12 = l_Lean_Syntax_isOfKind(x_11, x_1);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2;
lean_inc(x_11);
x_14 = l_Lean_Syntax_isOfKind(x_11, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
else
{
lean_object* x_17; size_t x_18; size_t x_19; 
x_17 = lean_array_push(x_5, x_11);
x_18 = 1;
x_19 = lean_usize_add(x_4, x_18);
x_4 = x_19;
x_5 = x_17;
goto _start;
}
}
else
{
lean_object* x_21; size_t x_22; size_t x_23; 
x_21 = lean_array_push(x_5, x_11);
x_22 = 1;
x_23 = lean_usize_add(x_4, x_22);
x_4 = x_23;
x_5 = x_21;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
lean_inc(x_1);
x_7 = l_Lean_Syntax_isOfKind(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2;
lean_inc(x_1);
x_9 = l_Lean_Syntax_isOfKind(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_13 = lean_array_push(x_12, x_1);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_17 = lean_array_push(x_16, x_1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_3);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = l_Lean_Syntax_getArg(x_1, x_22);
lean_dec(x_1);
x_24 = l_Lean_Syntax_getArgs(x_23);
lean_dec(x_23);
x_25 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
lean_inc(x_21);
x_26 = l_Lean_Syntax_isOfKind(x_21, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2;
lean_inc(x_21);
x_28 = l_Lean_Syntax_isOfKind(x_21, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_24);
lean_dec(x_21);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_3);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; size_t x_35; lean_object* x_36; lean_object* x_37; 
x_31 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_32 = lean_array_push(x_31, x_21);
x_33 = lean_array_get_size(x_24);
x_34 = lean_usize_of_nat(x_33);
lean_dec(x_33);
x_35 = 0;
x_36 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_25, x_27, x_24, x_34, x_35, x_32, x_2, x_3);
lean_dec(x_24);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_36, 0, x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_36);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_36, 0);
lean_dec(x_45);
x_46 = !lean_is_exclusive(x_37);
if (x_46 == 0)
{
return x_36;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_37, 0);
lean_inc(x_47);
lean_dec(x_37);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_36, 0, x_48);
return x_36;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_36, 1);
lean_inc(x_49);
lean_dec(x_36);
x_50 = lean_ctor_get(x_37, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 x_51 = x_37;
} else {
 lean_dec_ref(x_37);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 1, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_50);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_49);
return x_53;
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; size_t x_57; size_t x_58; lean_object* x_59; lean_object* x_60; 
x_54 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_55 = lean_array_push(x_54, x_21);
x_56 = lean_array_get_size(x_24);
x_57 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_58 = 0;
x_59 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(x_25, x_24, x_57, x_58, x_55, x_2, x_3);
lean_dec(x_24);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
if (lean_obj_tag(x_60) == 0)
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_59);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_59, 0);
lean_dec(x_62);
x_63 = lean_box(0);
lean_ctor_set(x_59, 0, x_63);
return x_59;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_59, 1);
lean_inc(x_64);
lean_dec(x_59);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_59);
if (x_67 == 0)
{
lean_object* x_68; uint8_t x_69; 
x_68 = lean_ctor_get(x_59, 0);
lean_dec(x_68);
x_69 = !lean_is_exclusive(x_60);
if (x_69 == 0)
{
return x_59;
}
else
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_ctor_get(x_60, 0);
lean_inc(x_70);
lean_dec(x_60);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_59, 0, x_71);
return x_59;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_59, 1);
lean_inc(x_72);
lean_dec(x_59);
x_73 = lean_ctor_get(x_60, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 x_74 = x_60;
} else {
 lean_dec_ref(x_60);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 1, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_73);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_72);
return x_76;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_11 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__1(x_1, x_2, x_3, x_9, x_10, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___spec__2(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at_Lean_Elab_Term_expandFunBinders_loop___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_ctor_set(x_2, 0, x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_9 = l_Lean_addMacroScope(x_7, x_8, x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_11, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_dec(x_1);
x_17 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_18 = l_Lean_addMacroScope(x_16, x_17, x_11);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Term_mkFreshBinderName___at_Lean_Elab_Term_expandFunBinders_loop___spec__2(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_Lean_mkIdentFrom(x_1, x_7, x_2);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = l_Lean_mkIdentFrom(x_1, x_9, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
lean_inc(x_1);
x_9 = l_Lean_Elab_Term_mkExplicitBinder(x_6, x_1);
x_10 = 1;
x_11 = lean_usize_add(x_3, x_10);
x_12 = lean_array_uset(x_8, x_3, x_9);
x_3 = x_11;
x_4 = x_12;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
x_9 = 0;
lean_inc(x_1);
x_10 = l_Lean_mkHole(x_1, x_9);
x_11 = l_Lean_Elab_Term_mkExplicitBinder(x_6, x_10);
x_12 = 1;
x_13 = lean_usize_add(x_3, x_12);
x_14 = lean_array_uset(x_8, x_3, x_11);
x_3 = x_13;
x_4 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
x_9 = 0;
lean_inc(x_1);
x_10 = l_Lean_mkHole(x_1, x_9);
x_11 = l_Lean_Elab_Term_mkExplicitBinder(x_6, x_10);
x_12 = 1;
x_13 = lean_usize_add(x_3, x_12);
x_14 = lean_array_uset(x_8, x_3, x_11);
x_3 = x_13;
x_4 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_lt(x_3, x_2);
if (x_5 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_4, x_3);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_4, x_3, x_7);
x_9 = 0;
lean_inc(x_1);
x_10 = l_Lean_mkHole(x_1, x_9);
x_11 = l_Lean_Elab_Term_mkExplicitBinder(x_6, x_10);
x_12 = 1;
x_13 = lean_usize_add(x_3, x_12);
x_14 = lean_array_uset(x_8, x_3, x_11);
x_3 = x_13;
x_4 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_expandFunBinders_loop___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_array_uget(x_1, x_2);
x_8 = l_Lean_Syntax_getId(x_7);
lean_dec(x_7);
lean_inc(x_4);
x_9 = l_Lean_Macro_resolveGlobalName(x_8, x_4, x_5);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = l_List_isEmpty___rarg(x_11);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
lean_dec(x_4);
x_14 = 1;
x_15 = lean_box(x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
size_t x_16; size_t x_17; 
lean_free_object(x_9);
x_16 = 1;
x_17 = lean_usize_add(x_2, x_16);
x_2 = x_17;
x_5 = x_12;
goto _start;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = l_List_isEmpty___rarg(x_19);
lean_dec(x_19);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_4);
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
return x_24;
}
else
{
size_t x_25; size_t x_26; 
x_25 = 1;
x_26 = lean_usize_add(x_2, x_25);
x_2 = x_26;
x_5 = x_20;
goto _start;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_9);
if (x_28 == 0)
{
return x_9;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_9, 0);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_9);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_4);
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_5);
return x_34;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("match", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("matchDiscr", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandFunBinders_loop___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("with", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("matchAlts", 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandFunBinders_loop___closed__6;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("matchAlt", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandFunBinders_loop___closed__8;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("|", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("=>", 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("paren", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("typeAscription", 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandFunBinders_loop___closed__13;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = 0;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_1, x_3);
lean_inc(x_14);
x_15 = l_Lean_Syntax_getKind(x_14);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
switch (lean_obj_tag(x_16)) {
case 0:
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1;
x_19 = lean_string_dec_eq(x_17, x_18);
lean_dec(x_17);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_21 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_20, x_5, x_6);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_3, x_24);
lean_dec(x_3);
lean_inc(x_14);
x_26 = l_Lean_mkHole(x_14, x_20);
lean_inc(x_22);
x_27 = l_Lean_Elab_Term_mkExplicitBinder(x_22, x_26);
x_28 = lean_array_push(x_4, x_27);
lean_inc(x_5);
x_29 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_25, x_28, x_5, x_23);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_29, 0);
lean_dec(x_33);
x_34 = !lean_is_exclusive(x_30);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_30, 1);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_dec(x_38);
x_39 = lean_ctor_get(x_5, 5);
lean_inc(x_39);
lean_dec(x_5);
x_40 = l_Lean_SourceInfo_fromRef(x_39, x_20);
x_41 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_40);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_44 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_40);
x_45 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_45, 0, x_40);
lean_ctor_set(x_45, 1, x_43);
lean_ctor_set(x_45, 2, x_44);
x_46 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_45);
lean_inc(x_40);
x_47 = l_Lean_Syntax_node2(x_40, x_46, x_45, x_22);
lean_inc(x_40);
x_48 = l_Lean_Syntax_node1(x_40, x_43, x_47);
x_49 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_40);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_40);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_40);
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_40);
lean_ctor_set(x_52, 1, x_51);
lean_inc(x_40);
x_53 = l_Lean_Syntax_node1(x_40, x_43, x_14);
lean_inc(x_40);
x_54 = l_Lean_Syntax_node1(x_40, x_43, x_53);
x_55 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_40);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_40);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_40);
x_58 = l_Lean_Syntax_node4(x_40, x_57, x_52, x_54, x_56, x_37);
lean_inc(x_40);
x_59 = l_Lean_Syntax_node1(x_40, x_43, x_58);
x_60 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_40);
x_61 = l_Lean_Syntax_node1(x_40, x_60, x_59);
x_62 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_45);
x_63 = l_Lean_Syntax_node6(x_40, x_62, x_42, x_45, x_45, x_48, x_50, x_61);
x_64 = 1;
x_65 = lean_box(x_64);
lean_ctor_set(x_31, 1, x_65);
lean_ctor_set(x_31, 0, x_63);
return x_29;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; lean_object* x_93; lean_object* x_94; 
x_66 = lean_ctor_get(x_31, 0);
lean_inc(x_66);
lean_dec(x_31);
x_67 = lean_ctor_get(x_5, 5);
lean_inc(x_67);
lean_dec(x_5);
x_68 = l_Lean_SourceInfo_fromRef(x_67, x_20);
x_69 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_68);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_72 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_68);
x_73 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_71);
lean_ctor_set(x_73, 2, x_72);
x_74 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_73);
lean_inc(x_68);
x_75 = l_Lean_Syntax_node2(x_68, x_74, x_73, x_22);
lean_inc(x_68);
x_76 = l_Lean_Syntax_node1(x_68, x_71, x_75);
x_77 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_68);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_68);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_68);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_68);
lean_ctor_set(x_80, 1, x_79);
lean_inc(x_68);
x_81 = l_Lean_Syntax_node1(x_68, x_71, x_14);
lean_inc(x_68);
x_82 = l_Lean_Syntax_node1(x_68, x_71, x_81);
x_83 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_68);
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_68);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_68);
x_86 = l_Lean_Syntax_node4(x_68, x_85, x_80, x_82, x_84, x_66);
lean_inc(x_68);
x_87 = l_Lean_Syntax_node1(x_68, x_71, x_86);
x_88 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_68);
x_89 = l_Lean_Syntax_node1(x_68, x_88, x_87);
x_90 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_73);
x_91 = l_Lean_Syntax_node6(x_68, x_90, x_70, x_73, x_73, x_76, x_78, x_89);
x_92 = 1;
x_93 = lean_box(x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_30, 1, x_94);
return x_29;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_95 = lean_ctor_get(x_30, 0);
lean_inc(x_95);
lean_dec(x_30);
x_96 = lean_ctor_get(x_31, 0);
lean_inc(x_96);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_97 = x_31;
} else {
 lean_dec_ref(x_31);
 x_97 = lean_box(0);
}
x_98 = lean_ctor_get(x_5, 5);
lean_inc(x_98);
lean_dec(x_5);
x_99 = l_Lean_SourceInfo_fromRef(x_98, x_20);
x_100 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_99);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_103 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_99);
x_104 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_104, 0, x_99);
lean_ctor_set(x_104, 1, x_102);
lean_ctor_set(x_104, 2, x_103);
x_105 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_104);
lean_inc(x_99);
x_106 = l_Lean_Syntax_node2(x_99, x_105, x_104, x_22);
lean_inc(x_99);
x_107 = l_Lean_Syntax_node1(x_99, x_102, x_106);
x_108 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_99);
x_109 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_109, 0, x_99);
lean_ctor_set(x_109, 1, x_108);
x_110 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_99);
x_111 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_111, 0, x_99);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_99);
x_112 = l_Lean_Syntax_node1(x_99, x_102, x_14);
lean_inc(x_99);
x_113 = l_Lean_Syntax_node1(x_99, x_102, x_112);
x_114 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_99);
x_115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_115, 0, x_99);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_99);
x_117 = l_Lean_Syntax_node4(x_99, x_116, x_111, x_113, x_115, x_96);
lean_inc(x_99);
x_118 = l_Lean_Syntax_node1(x_99, x_102, x_117);
x_119 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_99);
x_120 = l_Lean_Syntax_node1(x_99, x_119, x_118);
x_121 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_104);
x_122 = l_Lean_Syntax_node6(x_99, x_121, x_101, x_104, x_104, x_107, x_109, x_120);
x_123 = 1;
x_124 = lean_box(x_123);
if (lean_is_scalar(x_97)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_97;
}
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_95);
lean_ctor_set(x_126, 1, x_125);
lean_ctor_set(x_29, 0, x_126);
return x_29;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_127 = lean_ctor_get(x_29, 1);
lean_inc(x_127);
lean_dec(x_29);
x_128 = lean_ctor_get(x_30, 0);
lean_inc(x_128);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_129 = x_30;
} else {
 lean_dec_ref(x_30);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_31, 0);
lean_inc(x_130);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_131 = x_31;
} else {
 lean_dec_ref(x_31);
 x_131 = lean_box(0);
}
x_132 = lean_ctor_get(x_5, 5);
lean_inc(x_132);
lean_dec(x_5);
x_133 = l_Lean_SourceInfo_fromRef(x_132, x_20);
x_134 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_133);
x_135 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_137 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_133);
x_138 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_138, 0, x_133);
lean_ctor_set(x_138, 1, x_136);
lean_ctor_set(x_138, 2, x_137);
x_139 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_138);
lean_inc(x_133);
x_140 = l_Lean_Syntax_node2(x_133, x_139, x_138, x_22);
lean_inc(x_133);
x_141 = l_Lean_Syntax_node1(x_133, x_136, x_140);
x_142 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_133);
x_143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_143, 0, x_133);
lean_ctor_set(x_143, 1, x_142);
x_144 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_133);
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_133);
lean_ctor_set(x_145, 1, x_144);
lean_inc(x_133);
x_146 = l_Lean_Syntax_node1(x_133, x_136, x_14);
lean_inc(x_133);
x_147 = l_Lean_Syntax_node1(x_133, x_136, x_146);
x_148 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_133);
x_149 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_149, 0, x_133);
lean_ctor_set(x_149, 1, x_148);
x_150 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_133);
x_151 = l_Lean_Syntax_node4(x_133, x_150, x_145, x_147, x_149, x_130);
lean_inc(x_133);
x_152 = l_Lean_Syntax_node1(x_133, x_136, x_151);
x_153 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_133);
x_154 = l_Lean_Syntax_node1(x_133, x_153, x_152);
x_155 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_138);
x_156 = l_Lean_Syntax_node6(x_133, x_155, x_135, x_138, x_138, x_141, x_143, x_154);
x_157 = 1;
x_158 = lean_box(x_157);
if (lean_is_scalar(x_131)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_131;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_158);
if (lean_is_scalar(x_129)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_129;
}
lean_ctor_set(x_160, 0, x_128);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_127);
return x_161;
}
}
else
{
uint8_t x_162; 
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_5);
x_162 = !lean_is_exclusive(x_29);
if (x_162 == 0)
{
return x_29;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_29, 0);
x_164 = lean_ctor_get(x_29, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_29);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_unsigned_to_nat(1u);
x_167 = lean_nat_add(x_3, x_166);
lean_dec(x_3);
x_168 = lean_array_push(x_4, x_14);
x_3 = x_167;
x_4 = x_168;
goto _start;
}
}
case 1:
{
lean_object* x_170; 
x_170 = lean_ctor_get(x_16, 0);
lean_inc(x_170);
if (lean_obj_tag(x_170) == 1)
{
lean_object* x_171; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
if (lean_obj_tag(x_171) == 1)
{
lean_object* x_172; 
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_173 = lean_ctor_get(x_15, 1);
lean_inc(x_173);
lean_dec(x_15);
x_174 = lean_ctor_get(x_16, 1);
lean_inc(x_174);
lean_dec(x_16);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
lean_dec(x_170);
x_176 = lean_ctor_get(x_171, 1);
lean_inc(x_176);
lean_dec(x_171);
x_177 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_178 = lean_string_dec_eq(x_176, x_177);
lean_dec(x_176);
if (x_178 == 0)
{
uint8_t x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_175);
lean_dec(x_174);
lean_dec(x_173);
x_179 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_180 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_179, x_5, x_6);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_unsigned_to_nat(1u);
x_184 = lean_nat_add(x_3, x_183);
lean_dec(x_3);
lean_inc(x_14);
x_185 = l_Lean_mkHole(x_14, x_179);
lean_inc(x_181);
x_186 = l_Lean_Elab_Term_mkExplicitBinder(x_181, x_185);
x_187 = lean_array_push(x_4, x_186);
lean_inc(x_5);
x_188 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_184, x_187, x_5, x_182);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
x_191 = !lean_is_exclusive(x_188);
if (x_191 == 0)
{
lean_object* x_192; uint8_t x_193; 
x_192 = lean_ctor_get(x_188, 0);
lean_dec(x_192);
x_193 = !lean_is_exclusive(x_189);
if (x_193 == 0)
{
lean_object* x_194; uint8_t x_195; 
x_194 = lean_ctor_get(x_189, 1);
lean_dec(x_194);
x_195 = !lean_is_exclusive(x_190);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; uint8_t x_223; lean_object* x_224; 
x_196 = lean_ctor_get(x_190, 0);
x_197 = lean_ctor_get(x_190, 1);
lean_dec(x_197);
x_198 = lean_ctor_get(x_5, 5);
lean_inc(x_198);
lean_dec(x_5);
x_199 = l_Lean_SourceInfo_fromRef(x_198, x_179);
x_200 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_199);
x_201 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
x_202 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_203 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_199);
x_204 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_204, 0, x_199);
lean_ctor_set(x_204, 1, x_202);
lean_ctor_set(x_204, 2, x_203);
x_205 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_204);
lean_inc(x_199);
x_206 = l_Lean_Syntax_node2(x_199, x_205, x_204, x_181);
lean_inc(x_199);
x_207 = l_Lean_Syntax_node1(x_199, x_202, x_206);
x_208 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_199);
x_209 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_209, 0, x_199);
lean_ctor_set(x_209, 1, x_208);
x_210 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_199);
x_211 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_211, 0, x_199);
lean_ctor_set(x_211, 1, x_210);
lean_inc(x_199);
x_212 = l_Lean_Syntax_node1(x_199, x_202, x_14);
lean_inc(x_199);
x_213 = l_Lean_Syntax_node1(x_199, x_202, x_212);
x_214 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_199);
x_215 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_215, 0, x_199);
lean_ctor_set(x_215, 1, x_214);
x_216 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_199);
x_217 = l_Lean_Syntax_node4(x_199, x_216, x_211, x_213, x_215, x_196);
lean_inc(x_199);
x_218 = l_Lean_Syntax_node1(x_199, x_202, x_217);
x_219 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_199);
x_220 = l_Lean_Syntax_node1(x_199, x_219, x_218);
x_221 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_204);
x_222 = l_Lean_Syntax_node6(x_199, x_221, x_201, x_204, x_204, x_207, x_209, x_220);
x_223 = 1;
x_224 = lean_box(x_223);
lean_ctor_set(x_190, 1, x_224);
lean_ctor_set(x_190, 0, x_222);
return x_188;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; lean_object* x_252; lean_object* x_253; 
x_225 = lean_ctor_get(x_190, 0);
lean_inc(x_225);
lean_dec(x_190);
x_226 = lean_ctor_get(x_5, 5);
lean_inc(x_226);
lean_dec(x_5);
x_227 = l_Lean_SourceInfo_fromRef(x_226, x_179);
x_228 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_227);
x_229 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
x_230 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_231 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_227);
x_232 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_232, 0, x_227);
lean_ctor_set(x_232, 1, x_230);
lean_ctor_set(x_232, 2, x_231);
x_233 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_232);
lean_inc(x_227);
x_234 = l_Lean_Syntax_node2(x_227, x_233, x_232, x_181);
lean_inc(x_227);
x_235 = l_Lean_Syntax_node1(x_227, x_230, x_234);
x_236 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_227);
x_237 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_237, 0, x_227);
lean_ctor_set(x_237, 1, x_236);
x_238 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_227);
x_239 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_239, 0, x_227);
lean_ctor_set(x_239, 1, x_238);
lean_inc(x_227);
x_240 = l_Lean_Syntax_node1(x_227, x_230, x_14);
lean_inc(x_227);
x_241 = l_Lean_Syntax_node1(x_227, x_230, x_240);
x_242 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_227);
x_243 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_243, 0, x_227);
lean_ctor_set(x_243, 1, x_242);
x_244 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_227);
x_245 = l_Lean_Syntax_node4(x_227, x_244, x_239, x_241, x_243, x_225);
lean_inc(x_227);
x_246 = l_Lean_Syntax_node1(x_227, x_230, x_245);
x_247 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_227);
x_248 = l_Lean_Syntax_node1(x_227, x_247, x_246);
x_249 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_232);
x_250 = l_Lean_Syntax_node6(x_227, x_249, x_229, x_232, x_232, x_235, x_237, x_248);
x_251 = 1;
x_252 = lean_box(x_251);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_252);
lean_ctor_set(x_189, 1, x_253);
return x_188;
}
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; uint8_t x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
x_254 = lean_ctor_get(x_189, 0);
lean_inc(x_254);
lean_dec(x_189);
x_255 = lean_ctor_get(x_190, 0);
lean_inc(x_255);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_256 = x_190;
} else {
 lean_dec_ref(x_190);
 x_256 = lean_box(0);
}
x_257 = lean_ctor_get(x_5, 5);
lean_inc(x_257);
lean_dec(x_5);
x_258 = l_Lean_SourceInfo_fromRef(x_257, x_179);
x_259 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_258);
x_260 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_260, 0, x_258);
lean_ctor_set(x_260, 1, x_259);
x_261 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_262 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_258);
x_263 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_263, 0, x_258);
lean_ctor_set(x_263, 1, x_261);
lean_ctor_set(x_263, 2, x_262);
x_264 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_263);
lean_inc(x_258);
x_265 = l_Lean_Syntax_node2(x_258, x_264, x_263, x_181);
lean_inc(x_258);
x_266 = l_Lean_Syntax_node1(x_258, x_261, x_265);
x_267 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_258);
x_268 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_268, 0, x_258);
lean_ctor_set(x_268, 1, x_267);
x_269 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_258);
x_270 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_270, 0, x_258);
lean_ctor_set(x_270, 1, x_269);
lean_inc(x_258);
x_271 = l_Lean_Syntax_node1(x_258, x_261, x_14);
lean_inc(x_258);
x_272 = l_Lean_Syntax_node1(x_258, x_261, x_271);
x_273 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_258);
x_274 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_274, 0, x_258);
lean_ctor_set(x_274, 1, x_273);
x_275 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_258);
x_276 = l_Lean_Syntax_node4(x_258, x_275, x_270, x_272, x_274, x_255);
lean_inc(x_258);
x_277 = l_Lean_Syntax_node1(x_258, x_261, x_276);
x_278 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_258);
x_279 = l_Lean_Syntax_node1(x_258, x_278, x_277);
x_280 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_263);
x_281 = l_Lean_Syntax_node6(x_258, x_280, x_260, x_263, x_263, x_266, x_268, x_279);
x_282 = 1;
x_283 = lean_box(x_282);
if (lean_is_scalar(x_256)) {
 x_284 = lean_alloc_ctor(0, 2, 0);
} else {
 x_284 = x_256;
}
lean_ctor_set(x_284, 0, x_281);
lean_ctor_set(x_284, 1, x_283);
x_285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_285, 0, x_254);
lean_ctor_set(x_285, 1, x_284);
lean_ctor_set(x_188, 0, x_285);
return x_188;
}
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; uint8_t x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; 
x_286 = lean_ctor_get(x_188, 1);
lean_inc(x_286);
lean_dec(x_188);
x_287 = lean_ctor_get(x_189, 0);
lean_inc(x_287);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 x_288 = x_189;
} else {
 lean_dec_ref(x_189);
 x_288 = lean_box(0);
}
x_289 = lean_ctor_get(x_190, 0);
lean_inc(x_289);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_290 = x_190;
} else {
 lean_dec_ref(x_190);
 x_290 = lean_box(0);
}
x_291 = lean_ctor_get(x_5, 5);
lean_inc(x_291);
lean_dec(x_5);
x_292 = l_Lean_SourceInfo_fromRef(x_291, x_179);
x_293 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_292);
x_294 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_294, 0, x_292);
lean_ctor_set(x_294, 1, x_293);
x_295 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_296 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_292);
x_297 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_297, 0, x_292);
lean_ctor_set(x_297, 1, x_295);
lean_ctor_set(x_297, 2, x_296);
x_298 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_297);
lean_inc(x_292);
x_299 = l_Lean_Syntax_node2(x_292, x_298, x_297, x_181);
lean_inc(x_292);
x_300 = l_Lean_Syntax_node1(x_292, x_295, x_299);
x_301 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_292);
x_302 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_302, 0, x_292);
lean_ctor_set(x_302, 1, x_301);
x_303 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_292);
x_304 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_304, 0, x_292);
lean_ctor_set(x_304, 1, x_303);
lean_inc(x_292);
x_305 = l_Lean_Syntax_node1(x_292, x_295, x_14);
lean_inc(x_292);
x_306 = l_Lean_Syntax_node1(x_292, x_295, x_305);
x_307 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_292);
x_308 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_308, 0, x_292);
lean_ctor_set(x_308, 1, x_307);
x_309 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_292);
x_310 = l_Lean_Syntax_node4(x_292, x_309, x_304, x_306, x_308, x_289);
lean_inc(x_292);
x_311 = l_Lean_Syntax_node1(x_292, x_295, x_310);
x_312 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_292);
x_313 = l_Lean_Syntax_node1(x_292, x_312, x_311);
x_314 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_297);
x_315 = l_Lean_Syntax_node6(x_292, x_314, x_294, x_297, x_297, x_300, x_302, x_313);
x_316 = 1;
x_317 = lean_box(x_316);
if (lean_is_scalar(x_290)) {
 x_318 = lean_alloc_ctor(0, 2, 0);
} else {
 x_318 = x_290;
}
lean_ctor_set(x_318, 0, x_315);
lean_ctor_set(x_318, 1, x_317);
if (lean_is_scalar(x_288)) {
 x_319 = lean_alloc_ctor(0, 2, 0);
} else {
 x_319 = x_288;
}
lean_ctor_set(x_319, 0, x_287);
lean_ctor_set(x_319, 1, x_318);
x_320 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_286);
return x_320;
}
}
else
{
uint8_t x_321; 
lean_dec(x_181);
lean_dec(x_14);
lean_dec(x_5);
x_321 = !lean_is_exclusive(x_188);
if (x_321 == 0)
{
return x_188;
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; 
x_322 = lean_ctor_get(x_188, 0);
x_323 = lean_ctor_get(x_188, 1);
lean_inc(x_323);
lean_inc(x_322);
lean_dec(x_188);
x_324 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_324, 0, x_322);
lean_ctor_set(x_324, 1, x_323);
return x_324;
}
}
}
else
{
lean_object* x_325; uint8_t x_326; 
x_325 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_326 = lean_string_dec_eq(x_175, x_325);
lean_dec(x_175);
if (x_326 == 0)
{
uint8_t x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
lean_dec(x_174);
lean_dec(x_173);
x_327 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_328 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_327, x_5, x_6);
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_328, 1);
lean_inc(x_330);
lean_dec(x_328);
x_331 = lean_unsigned_to_nat(1u);
x_332 = lean_nat_add(x_3, x_331);
lean_dec(x_3);
lean_inc(x_14);
x_333 = l_Lean_mkHole(x_14, x_327);
lean_inc(x_329);
x_334 = l_Lean_Elab_Term_mkExplicitBinder(x_329, x_333);
x_335 = lean_array_push(x_4, x_334);
lean_inc(x_5);
x_336 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_332, x_335, x_5, x_330);
if (lean_obj_tag(x_336) == 0)
{
lean_object* x_337; lean_object* x_338; uint8_t x_339; 
x_337 = lean_ctor_get(x_336, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_337, 1);
lean_inc(x_338);
x_339 = !lean_is_exclusive(x_336);
if (x_339 == 0)
{
lean_object* x_340; uint8_t x_341; 
x_340 = lean_ctor_get(x_336, 0);
lean_dec(x_340);
x_341 = !lean_is_exclusive(x_337);
if (x_341 == 0)
{
lean_object* x_342; uint8_t x_343; 
x_342 = lean_ctor_get(x_337, 1);
lean_dec(x_342);
x_343 = !lean_is_exclusive(x_338);
if (x_343 == 0)
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; uint8_t x_371; lean_object* x_372; 
x_344 = lean_ctor_get(x_338, 0);
x_345 = lean_ctor_get(x_338, 1);
lean_dec(x_345);
x_346 = lean_ctor_get(x_5, 5);
lean_inc(x_346);
lean_dec(x_5);
x_347 = l_Lean_SourceInfo_fromRef(x_346, x_327);
x_348 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_347);
x_349 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_349, 0, x_347);
lean_ctor_set(x_349, 1, x_348);
x_350 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_351 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_347);
x_352 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_352, 0, x_347);
lean_ctor_set(x_352, 1, x_350);
lean_ctor_set(x_352, 2, x_351);
x_353 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_352);
lean_inc(x_347);
x_354 = l_Lean_Syntax_node2(x_347, x_353, x_352, x_329);
lean_inc(x_347);
x_355 = l_Lean_Syntax_node1(x_347, x_350, x_354);
x_356 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_347);
x_357 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_357, 0, x_347);
lean_ctor_set(x_357, 1, x_356);
x_358 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_347);
x_359 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_359, 0, x_347);
lean_ctor_set(x_359, 1, x_358);
lean_inc(x_347);
x_360 = l_Lean_Syntax_node1(x_347, x_350, x_14);
lean_inc(x_347);
x_361 = l_Lean_Syntax_node1(x_347, x_350, x_360);
x_362 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_347);
x_363 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_363, 0, x_347);
lean_ctor_set(x_363, 1, x_362);
x_364 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_347);
x_365 = l_Lean_Syntax_node4(x_347, x_364, x_359, x_361, x_363, x_344);
lean_inc(x_347);
x_366 = l_Lean_Syntax_node1(x_347, x_350, x_365);
x_367 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_347);
x_368 = l_Lean_Syntax_node1(x_347, x_367, x_366);
x_369 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_352);
x_370 = l_Lean_Syntax_node6(x_347, x_369, x_349, x_352, x_352, x_355, x_357, x_368);
x_371 = 1;
x_372 = lean_box(x_371);
lean_ctor_set(x_338, 1, x_372);
lean_ctor_set(x_338, 0, x_370);
return x_336;
}
else
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; uint8_t x_399; lean_object* x_400; lean_object* x_401; 
x_373 = lean_ctor_get(x_338, 0);
lean_inc(x_373);
lean_dec(x_338);
x_374 = lean_ctor_get(x_5, 5);
lean_inc(x_374);
lean_dec(x_5);
x_375 = l_Lean_SourceInfo_fromRef(x_374, x_327);
x_376 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_375);
x_377 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_377, 0, x_375);
lean_ctor_set(x_377, 1, x_376);
x_378 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_379 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_375);
x_380 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_380, 0, x_375);
lean_ctor_set(x_380, 1, x_378);
lean_ctor_set(x_380, 2, x_379);
x_381 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_380);
lean_inc(x_375);
x_382 = l_Lean_Syntax_node2(x_375, x_381, x_380, x_329);
lean_inc(x_375);
x_383 = l_Lean_Syntax_node1(x_375, x_378, x_382);
x_384 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_375);
x_385 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_385, 0, x_375);
lean_ctor_set(x_385, 1, x_384);
x_386 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_375);
x_387 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_387, 0, x_375);
lean_ctor_set(x_387, 1, x_386);
lean_inc(x_375);
x_388 = l_Lean_Syntax_node1(x_375, x_378, x_14);
lean_inc(x_375);
x_389 = l_Lean_Syntax_node1(x_375, x_378, x_388);
x_390 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_375);
x_391 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_391, 0, x_375);
lean_ctor_set(x_391, 1, x_390);
x_392 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_375);
x_393 = l_Lean_Syntax_node4(x_375, x_392, x_387, x_389, x_391, x_373);
lean_inc(x_375);
x_394 = l_Lean_Syntax_node1(x_375, x_378, x_393);
x_395 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_375);
x_396 = l_Lean_Syntax_node1(x_375, x_395, x_394);
x_397 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_380);
x_398 = l_Lean_Syntax_node6(x_375, x_397, x_377, x_380, x_380, x_383, x_385, x_396);
x_399 = 1;
x_400 = lean_box(x_399);
x_401 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_401, 0, x_398);
lean_ctor_set(x_401, 1, x_400);
lean_ctor_set(x_337, 1, x_401);
return x_336;
}
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; uint8_t x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_402 = lean_ctor_get(x_337, 0);
lean_inc(x_402);
lean_dec(x_337);
x_403 = lean_ctor_get(x_338, 0);
lean_inc(x_403);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_404 = x_338;
} else {
 lean_dec_ref(x_338);
 x_404 = lean_box(0);
}
x_405 = lean_ctor_get(x_5, 5);
lean_inc(x_405);
lean_dec(x_5);
x_406 = l_Lean_SourceInfo_fromRef(x_405, x_327);
x_407 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_406);
x_408 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_408, 0, x_406);
lean_ctor_set(x_408, 1, x_407);
x_409 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_410 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_406);
x_411 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_411, 0, x_406);
lean_ctor_set(x_411, 1, x_409);
lean_ctor_set(x_411, 2, x_410);
x_412 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_411);
lean_inc(x_406);
x_413 = l_Lean_Syntax_node2(x_406, x_412, x_411, x_329);
lean_inc(x_406);
x_414 = l_Lean_Syntax_node1(x_406, x_409, x_413);
x_415 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_406);
x_416 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_416, 0, x_406);
lean_ctor_set(x_416, 1, x_415);
x_417 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_406);
x_418 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_418, 0, x_406);
lean_ctor_set(x_418, 1, x_417);
lean_inc(x_406);
x_419 = l_Lean_Syntax_node1(x_406, x_409, x_14);
lean_inc(x_406);
x_420 = l_Lean_Syntax_node1(x_406, x_409, x_419);
x_421 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_406);
x_422 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_422, 0, x_406);
lean_ctor_set(x_422, 1, x_421);
x_423 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_406);
x_424 = l_Lean_Syntax_node4(x_406, x_423, x_418, x_420, x_422, x_403);
lean_inc(x_406);
x_425 = l_Lean_Syntax_node1(x_406, x_409, x_424);
x_426 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_406);
x_427 = l_Lean_Syntax_node1(x_406, x_426, x_425);
x_428 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_411);
x_429 = l_Lean_Syntax_node6(x_406, x_428, x_408, x_411, x_411, x_414, x_416, x_427);
x_430 = 1;
x_431 = lean_box(x_430);
if (lean_is_scalar(x_404)) {
 x_432 = lean_alloc_ctor(0, 2, 0);
} else {
 x_432 = x_404;
}
lean_ctor_set(x_432, 0, x_429);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_433, 0, x_402);
lean_ctor_set(x_433, 1, x_432);
lean_ctor_set(x_336, 0, x_433);
return x_336;
}
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; uint8_t x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
x_434 = lean_ctor_get(x_336, 1);
lean_inc(x_434);
lean_dec(x_336);
x_435 = lean_ctor_get(x_337, 0);
lean_inc(x_435);
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 lean_ctor_release(x_337, 1);
 x_436 = x_337;
} else {
 lean_dec_ref(x_337);
 x_436 = lean_box(0);
}
x_437 = lean_ctor_get(x_338, 0);
lean_inc(x_437);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_438 = x_338;
} else {
 lean_dec_ref(x_338);
 x_438 = lean_box(0);
}
x_439 = lean_ctor_get(x_5, 5);
lean_inc(x_439);
lean_dec(x_5);
x_440 = l_Lean_SourceInfo_fromRef(x_439, x_327);
x_441 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_440);
x_442 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_442, 0, x_440);
lean_ctor_set(x_442, 1, x_441);
x_443 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_444 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_440);
x_445 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_445, 0, x_440);
lean_ctor_set(x_445, 1, x_443);
lean_ctor_set(x_445, 2, x_444);
x_446 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_445);
lean_inc(x_440);
x_447 = l_Lean_Syntax_node2(x_440, x_446, x_445, x_329);
lean_inc(x_440);
x_448 = l_Lean_Syntax_node1(x_440, x_443, x_447);
x_449 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_440);
x_450 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_450, 0, x_440);
lean_ctor_set(x_450, 1, x_449);
x_451 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_440);
x_452 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_452, 0, x_440);
lean_ctor_set(x_452, 1, x_451);
lean_inc(x_440);
x_453 = l_Lean_Syntax_node1(x_440, x_443, x_14);
lean_inc(x_440);
x_454 = l_Lean_Syntax_node1(x_440, x_443, x_453);
x_455 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_440);
x_456 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_456, 0, x_440);
lean_ctor_set(x_456, 1, x_455);
x_457 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_440);
x_458 = l_Lean_Syntax_node4(x_440, x_457, x_452, x_454, x_456, x_437);
lean_inc(x_440);
x_459 = l_Lean_Syntax_node1(x_440, x_443, x_458);
x_460 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_440);
x_461 = l_Lean_Syntax_node1(x_440, x_460, x_459);
x_462 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_445);
x_463 = l_Lean_Syntax_node6(x_440, x_462, x_442, x_445, x_445, x_448, x_450, x_461);
x_464 = 1;
x_465 = lean_box(x_464);
if (lean_is_scalar(x_438)) {
 x_466 = lean_alloc_ctor(0, 2, 0);
} else {
 x_466 = x_438;
}
lean_ctor_set(x_466, 0, x_463);
lean_ctor_set(x_466, 1, x_465);
if (lean_is_scalar(x_436)) {
 x_467 = lean_alloc_ctor(0, 2, 0);
} else {
 x_467 = x_436;
}
lean_ctor_set(x_467, 0, x_435);
lean_ctor_set(x_467, 1, x_466);
x_468 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_468, 0, x_467);
lean_ctor_set(x_468, 1, x_434);
return x_468;
}
}
else
{
uint8_t x_469; 
lean_dec(x_329);
lean_dec(x_14);
lean_dec(x_5);
x_469 = !lean_is_exclusive(x_336);
if (x_469 == 0)
{
return x_336;
}
else
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_470 = lean_ctor_get(x_336, 0);
x_471 = lean_ctor_get(x_336, 1);
lean_inc(x_471);
lean_inc(x_470);
lean_dec(x_336);
x_472 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_471);
return x_472;
}
}
}
else
{
lean_object* x_473; uint8_t x_474; 
x_473 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_474 = lean_string_dec_eq(x_174, x_473);
lean_dec(x_174);
if (x_474 == 0)
{
uint8_t x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; 
lean_dec(x_173);
x_475 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_476 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_475, x_5, x_6);
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_476, 1);
lean_inc(x_478);
lean_dec(x_476);
x_479 = lean_unsigned_to_nat(1u);
x_480 = lean_nat_add(x_3, x_479);
lean_dec(x_3);
lean_inc(x_14);
x_481 = l_Lean_mkHole(x_14, x_475);
lean_inc(x_477);
x_482 = l_Lean_Elab_Term_mkExplicitBinder(x_477, x_481);
x_483 = lean_array_push(x_4, x_482);
lean_inc(x_5);
x_484 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_480, x_483, x_5, x_478);
if (lean_obj_tag(x_484) == 0)
{
lean_object* x_485; lean_object* x_486; uint8_t x_487; 
x_485 = lean_ctor_get(x_484, 0);
lean_inc(x_485);
x_486 = lean_ctor_get(x_485, 1);
lean_inc(x_486);
x_487 = !lean_is_exclusive(x_484);
if (x_487 == 0)
{
lean_object* x_488; uint8_t x_489; 
x_488 = lean_ctor_get(x_484, 0);
lean_dec(x_488);
x_489 = !lean_is_exclusive(x_485);
if (x_489 == 0)
{
lean_object* x_490; uint8_t x_491; 
x_490 = lean_ctor_get(x_485, 1);
lean_dec(x_490);
x_491 = !lean_is_exclusive(x_486);
if (x_491 == 0)
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; uint8_t x_519; lean_object* x_520; 
x_492 = lean_ctor_get(x_486, 0);
x_493 = lean_ctor_get(x_486, 1);
lean_dec(x_493);
x_494 = lean_ctor_get(x_5, 5);
lean_inc(x_494);
lean_dec(x_5);
x_495 = l_Lean_SourceInfo_fromRef(x_494, x_475);
x_496 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_495);
x_497 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_497, 0, x_495);
lean_ctor_set(x_497, 1, x_496);
x_498 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_499 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_495);
x_500 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_500, 0, x_495);
lean_ctor_set(x_500, 1, x_498);
lean_ctor_set(x_500, 2, x_499);
x_501 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_500);
lean_inc(x_495);
x_502 = l_Lean_Syntax_node2(x_495, x_501, x_500, x_477);
lean_inc(x_495);
x_503 = l_Lean_Syntax_node1(x_495, x_498, x_502);
x_504 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_495);
x_505 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_505, 0, x_495);
lean_ctor_set(x_505, 1, x_504);
x_506 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_495);
x_507 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_507, 0, x_495);
lean_ctor_set(x_507, 1, x_506);
lean_inc(x_495);
x_508 = l_Lean_Syntax_node1(x_495, x_498, x_14);
lean_inc(x_495);
x_509 = l_Lean_Syntax_node1(x_495, x_498, x_508);
x_510 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_495);
x_511 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_511, 0, x_495);
lean_ctor_set(x_511, 1, x_510);
x_512 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_495);
x_513 = l_Lean_Syntax_node4(x_495, x_512, x_507, x_509, x_511, x_492);
lean_inc(x_495);
x_514 = l_Lean_Syntax_node1(x_495, x_498, x_513);
x_515 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_495);
x_516 = l_Lean_Syntax_node1(x_495, x_515, x_514);
x_517 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_500);
x_518 = l_Lean_Syntax_node6(x_495, x_517, x_497, x_500, x_500, x_503, x_505, x_516);
x_519 = 1;
x_520 = lean_box(x_519);
lean_ctor_set(x_486, 1, x_520);
lean_ctor_set(x_486, 0, x_518);
return x_484;
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; uint8_t x_547; lean_object* x_548; lean_object* x_549; 
x_521 = lean_ctor_get(x_486, 0);
lean_inc(x_521);
lean_dec(x_486);
x_522 = lean_ctor_get(x_5, 5);
lean_inc(x_522);
lean_dec(x_5);
x_523 = l_Lean_SourceInfo_fromRef(x_522, x_475);
x_524 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_523);
x_525 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_525, 0, x_523);
lean_ctor_set(x_525, 1, x_524);
x_526 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_527 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_523);
x_528 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_528, 0, x_523);
lean_ctor_set(x_528, 1, x_526);
lean_ctor_set(x_528, 2, x_527);
x_529 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_528);
lean_inc(x_523);
x_530 = l_Lean_Syntax_node2(x_523, x_529, x_528, x_477);
lean_inc(x_523);
x_531 = l_Lean_Syntax_node1(x_523, x_526, x_530);
x_532 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_523);
x_533 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_533, 0, x_523);
lean_ctor_set(x_533, 1, x_532);
x_534 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_523);
x_535 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_535, 0, x_523);
lean_ctor_set(x_535, 1, x_534);
lean_inc(x_523);
x_536 = l_Lean_Syntax_node1(x_523, x_526, x_14);
lean_inc(x_523);
x_537 = l_Lean_Syntax_node1(x_523, x_526, x_536);
x_538 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_523);
x_539 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_539, 0, x_523);
lean_ctor_set(x_539, 1, x_538);
x_540 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_523);
x_541 = l_Lean_Syntax_node4(x_523, x_540, x_535, x_537, x_539, x_521);
lean_inc(x_523);
x_542 = l_Lean_Syntax_node1(x_523, x_526, x_541);
x_543 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_523);
x_544 = l_Lean_Syntax_node1(x_523, x_543, x_542);
x_545 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_528);
x_546 = l_Lean_Syntax_node6(x_523, x_545, x_525, x_528, x_528, x_531, x_533, x_544);
x_547 = 1;
x_548 = lean_box(x_547);
x_549 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_549, 0, x_546);
lean_ctor_set(x_549, 1, x_548);
lean_ctor_set(x_485, 1, x_549);
return x_484;
}
}
else
{
lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; uint8_t x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; 
x_550 = lean_ctor_get(x_485, 0);
lean_inc(x_550);
lean_dec(x_485);
x_551 = lean_ctor_get(x_486, 0);
lean_inc(x_551);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_552 = x_486;
} else {
 lean_dec_ref(x_486);
 x_552 = lean_box(0);
}
x_553 = lean_ctor_get(x_5, 5);
lean_inc(x_553);
lean_dec(x_5);
x_554 = l_Lean_SourceInfo_fromRef(x_553, x_475);
x_555 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_554);
x_556 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_556, 0, x_554);
lean_ctor_set(x_556, 1, x_555);
x_557 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_558 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_554);
x_559 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_559, 0, x_554);
lean_ctor_set(x_559, 1, x_557);
lean_ctor_set(x_559, 2, x_558);
x_560 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_559);
lean_inc(x_554);
x_561 = l_Lean_Syntax_node2(x_554, x_560, x_559, x_477);
lean_inc(x_554);
x_562 = l_Lean_Syntax_node1(x_554, x_557, x_561);
x_563 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_554);
x_564 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_564, 0, x_554);
lean_ctor_set(x_564, 1, x_563);
x_565 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_554);
x_566 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_566, 0, x_554);
lean_ctor_set(x_566, 1, x_565);
lean_inc(x_554);
x_567 = l_Lean_Syntax_node1(x_554, x_557, x_14);
lean_inc(x_554);
x_568 = l_Lean_Syntax_node1(x_554, x_557, x_567);
x_569 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_554);
x_570 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_570, 0, x_554);
lean_ctor_set(x_570, 1, x_569);
x_571 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_554);
x_572 = l_Lean_Syntax_node4(x_554, x_571, x_566, x_568, x_570, x_551);
lean_inc(x_554);
x_573 = l_Lean_Syntax_node1(x_554, x_557, x_572);
x_574 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_554);
x_575 = l_Lean_Syntax_node1(x_554, x_574, x_573);
x_576 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_559);
x_577 = l_Lean_Syntax_node6(x_554, x_576, x_556, x_559, x_559, x_562, x_564, x_575);
x_578 = 1;
x_579 = lean_box(x_578);
if (lean_is_scalar(x_552)) {
 x_580 = lean_alloc_ctor(0, 2, 0);
} else {
 x_580 = x_552;
}
lean_ctor_set(x_580, 0, x_577);
lean_ctor_set(x_580, 1, x_579);
x_581 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_581, 0, x_550);
lean_ctor_set(x_581, 1, x_580);
lean_ctor_set(x_484, 0, x_581);
return x_484;
}
}
else
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; uint8_t x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; 
x_582 = lean_ctor_get(x_484, 1);
lean_inc(x_582);
lean_dec(x_484);
x_583 = lean_ctor_get(x_485, 0);
lean_inc(x_583);
if (lean_is_exclusive(x_485)) {
 lean_ctor_release(x_485, 0);
 lean_ctor_release(x_485, 1);
 x_584 = x_485;
} else {
 lean_dec_ref(x_485);
 x_584 = lean_box(0);
}
x_585 = lean_ctor_get(x_486, 0);
lean_inc(x_585);
if (lean_is_exclusive(x_486)) {
 lean_ctor_release(x_486, 0);
 lean_ctor_release(x_486, 1);
 x_586 = x_486;
} else {
 lean_dec_ref(x_486);
 x_586 = lean_box(0);
}
x_587 = lean_ctor_get(x_5, 5);
lean_inc(x_587);
lean_dec(x_5);
x_588 = l_Lean_SourceInfo_fromRef(x_587, x_475);
x_589 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_588);
x_590 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_590, 0, x_588);
lean_ctor_set(x_590, 1, x_589);
x_591 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_592 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_588);
x_593 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_593, 0, x_588);
lean_ctor_set(x_593, 1, x_591);
lean_ctor_set(x_593, 2, x_592);
x_594 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_593);
lean_inc(x_588);
x_595 = l_Lean_Syntax_node2(x_588, x_594, x_593, x_477);
lean_inc(x_588);
x_596 = l_Lean_Syntax_node1(x_588, x_591, x_595);
x_597 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_588);
x_598 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_598, 0, x_588);
lean_ctor_set(x_598, 1, x_597);
x_599 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_588);
x_600 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_600, 0, x_588);
lean_ctor_set(x_600, 1, x_599);
lean_inc(x_588);
x_601 = l_Lean_Syntax_node1(x_588, x_591, x_14);
lean_inc(x_588);
x_602 = l_Lean_Syntax_node1(x_588, x_591, x_601);
x_603 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_588);
x_604 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_604, 0, x_588);
lean_ctor_set(x_604, 1, x_603);
x_605 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_588);
x_606 = l_Lean_Syntax_node4(x_588, x_605, x_600, x_602, x_604, x_585);
lean_inc(x_588);
x_607 = l_Lean_Syntax_node1(x_588, x_591, x_606);
x_608 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_588);
x_609 = l_Lean_Syntax_node1(x_588, x_608, x_607);
x_610 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_593);
x_611 = l_Lean_Syntax_node6(x_588, x_610, x_590, x_593, x_593, x_596, x_598, x_609);
x_612 = 1;
x_613 = lean_box(x_612);
if (lean_is_scalar(x_586)) {
 x_614 = lean_alloc_ctor(0, 2, 0);
} else {
 x_614 = x_586;
}
lean_ctor_set(x_614, 0, x_611);
lean_ctor_set(x_614, 1, x_613);
if (lean_is_scalar(x_584)) {
 x_615 = lean_alloc_ctor(0, 2, 0);
} else {
 x_615 = x_584;
}
lean_ctor_set(x_615, 0, x_583);
lean_ctor_set(x_615, 1, x_614);
x_616 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_616, 0, x_615);
lean_ctor_set(x_616, 1, x_582);
return x_616;
}
}
else
{
uint8_t x_617; 
lean_dec(x_477);
lean_dec(x_14);
lean_dec(x_5);
x_617 = !lean_is_exclusive(x_484);
if (x_617 == 0)
{
return x_484;
}
else
{
lean_object* x_618; lean_object* x_619; lean_object* x_620; 
x_618 = lean_ctor_get(x_484, 0);
x_619 = lean_ctor_get(x_484, 1);
lean_inc(x_619);
lean_inc(x_618);
lean_dec(x_484);
x_620 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_620, 0, x_618);
lean_ctor_set(x_620, 1, x_619);
return x_620;
}
}
}
else
{
lean_object* x_621; uint8_t x_622; 
x_621 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__3;
x_622 = lean_string_dec_eq(x_173, x_621);
if (x_622 == 0)
{
lean_object* x_623; uint8_t x_624; 
x_623 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__5;
x_624 = lean_string_dec_eq(x_173, x_623);
if (x_624 == 0)
{
lean_object* x_625; uint8_t x_626; 
x_625 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__7;
x_626 = lean_string_dec_eq(x_173, x_625);
if (x_626 == 0)
{
lean_object* x_627; uint8_t x_628; 
x_627 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__1;
x_628 = lean_string_dec_eq(x_173, x_627);
if (x_628 == 0)
{
lean_object* x_629; uint8_t x_630; 
x_629 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__4;
x_630 = lean_string_dec_eq(x_173, x_629);
if (x_630 == 0)
{
lean_object* x_631; uint8_t x_632; 
x_631 = l_Lean_Elab_Term_expandFunBinders_loop___closed__12;
x_632 = lean_string_dec_eq(x_173, x_631);
lean_dec(x_173);
if (x_632 == 0)
{
uint8_t x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; 
x_633 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_634 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_633, x_5, x_6);
x_635 = lean_ctor_get(x_634, 0);
lean_inc(x_635);
x_636 = lean_ctor_get(x_634, 1);
lean_inc(x_636);
lean_dec(x_634);
x_637 = lean_unsigned_to_nat(1u);
x_638 = lean_nat_add(x_3, x_637);
lean_dec(x_3);
lean_inc(x_14);
x_639 = l_Lean_mkHole(x_14, x_633);
lean_inc(x_635);
x_640 = l_Lean_Elab_Term_mkExplicitBinder(x_635, x_639);
x_641 = lean_array_push(x_4, x_640);
lean_inc(x_5);
x_642 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_638, x_641, x_5, x_636);
if (lean_obj_tag(x_642) == 0)
{
lean_object* x_643; lean_object* x_644; uint8_t x_645; 
x_643 = lean_ctor_get(x_642, 0);
lean_inc(x_643);
x_644 = lean_ctor_get(x_643, 1);
lean_inc(x_644);
x_645 = !lean_is_exclusive(x_642);
if (x_645 == 0)
{
lean_object* x_646; uint8_t x_647; 
x_646 = lean_ctor_get(x_642, 0);
lean_dec(x_646);
x_647 = !lean_is_exclusive(x_643);
if (x_647 == 0)
{
lean_object* x_648; uint8_t x_649; 
x_648 = lean_ctor_get(x_643, 1);
lean_dec(x_648);
x_649 = !lean_is_exclusive(x_644);
if (x_649 == 0)
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; uint8_t x_677; lean_object* x_678; 
x_650 = lean_ctor_get(x_644, 0);
x_651 = lean_ctor_get(x_644, 1);
lean_dec(x_651);
x_652 = lean_ctor_get(x_5, 5);
lean_inc(x_652);
lean_dec(x_5);
x_653 = l_Lean_SourceInfo_fromRef(x_652, x_633);
x_654 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_653);
x_655 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_655, 0, x_653);
lean_ctor_set(x_655, 1, x_654);
x_656 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_657 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_653);
x_658 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_658, 0, x_653);
lean_ctor_set(x_658, 1, x_656);
lean_ctor_set(x_658, 2, x_657);
x_659 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_658);
lean_inc(x_653);
x_660 = l_Lean_Syntax_node2(x_653, x_659, x_658, x_635);
lean_inc(x_653);
x_661 = l_Lean_Syntax_node1(x_653, x_656, x_660);
x_662 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_653);
x_663 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_663, 0, x_653);
lean_ctor_set(x_663, 1, x_662);
x_664 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_653);
x_665 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_665, 0, x_653);
lean_ctor_set(x_665, 1, x_664);
lean_inc(x_653);
x_666 = l_Lean_Syntax_node1(x_653, x_656, x_14);
lean_inc(x_653);
x_667 = l_Lean_Syntax_node1(x_653, x_656, x_666);
x_668 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_653);
x_669 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_669, 0, x_653);
lean_ctor_set(x_669, 1, x_668);
x_670 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_653);
x_671 = l_Lean_Syntax_node4(x_653, x_670, x_665, x_667, x_669, x_650);
lean_inc(x_653);
x_672 = l_Lean_Syntax_node1(x_653, x_656, x_671);
x_673 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_653);
x_674 = l_Lean_Syntax_node1(x_653, x_673, x_672);
x_675 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_658);
x_676 = l_Lean_Syntax_node6(x_653, x_675, x_655, x_658, x_658, x_661, x_663, x_674);
x_677 = 1;
x_678 = lean_box(x_677);
lean_ctor_set(x_644, 1, x_678);
lean_ctor_set(x_644, 0, x_676);
return x_642;
}
else
{
lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; uint8_t x_705; lean_object* x_706; lean_object* x_707; 
x_679 = lean_ctor_get(x_644, 0);
lean_inc(x_679);
lean_dec(x_644);
x_680 = lean_ctor_get(x_5, 5);
lean_inc(x_680);
lean_dec(x_5);
x_681 = l_Lean_SourceInfo_fromRef(x_680, x_633);
x_682 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_681);
x_683 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_683, 0, x_681);
lean_ctor_set(x_683, 1, x_682);
x_684 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_685 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_681);
x_686 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_686, 0, x_681);
lean_ctor_set(x_686, 1, x_684);
lean_ctor_set(x_686, 2, x_685);
x_687 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_686);
lean_inc(x_681);
x_688 = l_Lean_Syntax_node2(x_681, x_687, x_686, x_635);
lean_inc(x_681);
x_689 = l_Lean_Syntax_node1(x_681, x_684, x_688);
x_690 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_681);
x_691 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_691, 0, x_681);
lean_ctor_set(x_691, 1, x_690);
x_692 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_681);
x_693 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_693, 0, x_681);
lean_ctor_set(x_693, 1, x_692);
lean_inc(x_681);
x_694 = l_Lean_Syntax_node1(x_681, x_684, x_14);
lean_inc(x_681);
x_695 = l_Lean_Syntax_node1(x_681, x_684, x_694);
x_696 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_681);
x_697 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_697, 0, x_681);
lean_ctor_set(x_697, 1, x_696);
x_698 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_681);
x_699 = l_Lean_Syntax_node4(x_681, x_698, x_693, x_695, x_697, x_679);
lean_inc(x_681);
x_700 = l_Lean_Syntax_node1(x_681, x_684, x_699);
x_701 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_681);
x_702 = l_Lean_Syntax_node1(x_681, x_701, x_700);
x_703 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_686);
x_704 = l_Lean_Syntax_node6(x_681, x_703, x_683, x_686, x_686, x_689, x_691, x_702);
x_705 = 1;
x_706 = lean_box(x_705);
x_707 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_707, 0, x_704);
lean_ctor_set(x_707, 1, x_706);
lean_ctor_set(x_643, 1, x_707);
return x_642;
}
}
else
{
lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; uint8_t x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; 
x_708 = lean_ctor_get(x_643, 0);
lean_inc(x_708);
lean_dec(x_643);
x_709 = lean_ctor_get(x_644, 0);
lean_inc(x_709);
if (lean_is_exclusive(x_644)) {
 lean_ctor_release(x_644, 0);
 lean_ctor_release(x_644, 1);
 x_710 = x_644;
} else {
 lean_dec_ref(x_644);
 x_710 = lean_box(0);
}
x_711 = lean_ctor_get(x_5, 5);
lean_inc(x_711);
lean_dec(x_5);
x_712 = l_Lean_SourceInfo_fromRef(x_711, x_633);
x_713 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_712);
x_714 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_714, 0, x_712);
lean_ctor_set(x_714, 1, x_713);
x_715 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_716 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_712);
x_717 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_717, 0, x_712);
lean_ctor_set(x_717, 1, x_715);
lean_ctor_set(x_717, 2, x_716);
x_718 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_717);
lean_inc(x_712);
x_719 = l_Lean_Syntax_node2(x_712, x_718, x_717, x_635);
lean_inc(x_712);
x_720 = l_Lean_Syntax_node1(x_712, x_715, x_719);
x_721 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_712);
x_722 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_722, 0, x_712);
lean_ctor_set(x_722, 1, x_721);
x_723 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_712);
x_724 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_724, 0, x_712);
lean_ctor_set(x_724, 1, x_723);
lean_inc(x_712);
x_725 = l_Lean_Syntax_node1(x_712, x_715, x_14);
lean_inc(x_712);
x_726 = l_Lean_Syntax_node1(x_712, x_715, x_725);
x_727 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_712);
x_728 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_728, 0, x_712);
lean_ctor_set(x_728, 1, x_727);
x_729 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_712);
x_730 = l_Lean_Syntax_node4(x_712, x_729, x_724, x_726, x_728, x_709);
lean_inc(x_712);
x_731 = l_Lean_Syntax_node1(x_712, x_715, x_730);
x_732 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_712);
x_733 = l_Lean_Syntax_node1(x_712, x_732, x_731);
x_734 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_717);
x_735 = l_Lean_Syntax_node6(x_712, x_734, x_714, x_717, x_717, x_720, x_722, x_733);
x_736 = 1;
x_737 = lean_box(x_736);
if (lean_is_scalar(x_710)) {
 x_738 = lean_alloc_ctor(0, 2, 0);
} else {
 x_738 = x_710;
}
lean_ctor_set(x_738, 0, x_735);
lean_ctor_set(x_738, 1, x_737);
x_739 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_739, 0, x_708);
lean_ctor_set(x_739, 1, x_738);
lean_ctor_set(x_642, 0, x_739);
return x_642;
}
}
else
{
lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; uint8_t x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; 
x_740 = lean_ctor_get(x_642, 1);
lean_inc(x_740);
lean_dec(x_642);
x_741 = lean_ctor_get(x_643, 0);
lean_inc(x_741);
if (lean_is_exclusive(x_643)) {
 lean_ctor_release(x_643, 0);
 lean_ctor_release(x_643, 1);
 x_742 = x_643;
} else {
 lean_dec_ref(x_643);
 x_742 = lean_box(0);
}
x_743 = lean_ctor_get(x_644, 0);
lean_inc(x_743);
if (lean_is_exclusive(x_644)) {
 lean_ctor_release(x_644, 0);
 lean_ctor_release(x_644, 1);
 x_744 = x_644;
} else {
 lean_dec_ref(x_644);
 x_744 = lean_box(0);
}
x_745 = lean_ctor_get(x_5, 5);
lean_inc(x_745);
lean_dec(x_5);
x_746 = l_Lean_SourceInfo_fromRef(x_745, x_633);
x_747 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_746);
x_748 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_748, 0, x_746);
lean_ctor_set(x_748, 1, x_747);
x_749 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_750 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_746);
x_751 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_751, 0, x_746);
lean_ctor_set(x_751, 1, x_749);
lean_ctor_set(x_751, 2, x_750);
x_752 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_751);
lean_inc(x_746);
x_753 = l_Lean_Syntax_node2(x_746, x_752, x_751, x_635);
lean_inc(x_746);
x_754 = l_Lean_Syntax_node1(x_746, x_749, x_753);
x_755 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_746);
x_756 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_756, 0, x_746);
lean_ctor_set(x_756, 1, x_755);
x_757 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_746);
x_758 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_758, 0, x_746);
lean_ctor_set(x_758, 1, x_757);
lean_inc(x_746);
x_759 = l_Lean_Syntax_node1(x_746, x_749, x_14);
lean_inc(x_746);
x_760 = l_Lean_Syntax_node1(x_746, x_749, x_759);
x_761 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_746);
x_762 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_762, 0, x_746);
lean_ctor_set(x_762, 1, x_761);
x_763 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_746);
x_764 = l_Lean_Syntax_node4(x_746, x_763, x_758, x_760, x_762, x_743);
lean_inc(x_746);
x_765 = l_Lean_Syntax_node1(x_746, x_749, x_764);
x_766 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_746);
x_767 = l_Lean_Syntax_node1(x_746, x_766, x_765);
x_768 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_751);
x_769 = l_Lean_Syntax_node6(x_746, x_768, x_748, x_751, x_751, x_754, x_756, x_767);
x_770 = 1;
x_771 = lean_box(x_770);
if (lean_is_scalar(x_744)) {
 x_772 = lean_alloc_ctor(0, 2, 0);
} else {
 x_772 = x_744;
}
lean_ctor_set(x_772, 0, x_769);
lean_ctor_set(x_772, 1, x_771);
if (lean_is_scalar(x_742)) {
 x_773 = lean_alloc_ctor(0, 2, 0);
} else {
 x_773 = x_742;
}
lean_ctor_set(x_773, 0, x_741);
lean_ctor_set(x_773, 1, x_772);
x_774 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_774, 0, x_773);
lean_ctor_set(x_774, 1, x_740);
return x_774;
}
}
else
{
uint8_t x_775; 
lean_dec(x_635);
lean_dec(x_14);
lean_dec(x_5);
x_775 = !lean_is_exclusive(x_642);
if (x_775 == 0)
{
return x_642;
}
else
{
lean_object* x_776; lean_object* x_777; lean_object* x_778; 
x_776 = lean_ctor_get(x_642, 0);
x_777 = lean_ctor_get(x_642, 1);
lean_inc(x_777);
lean_inc(x_776);
lean_dec(x_642);
x_778 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_778, 0, x_776);
lean_ctor_set(x_778, 1, x_777);
return x_778;
}
}
}
else
{
lean_object* x_779; lean_object* x_780; uint8_t x_781; 
x_779 = lean_unsigned_to_nat(1u);
x_780 = l_Lean_Syntax_getArg(x_14, x_779);
x_781 = l_Lean_Syntax_isNone(x_780);
if (x_781 == 0)
{
lean_object* x_782; lean_object* x_783; lean_object* x_784; uint8_t x_785; 
x_782 = lean_unsigned_to_nat(0u);
x_783 = l_Lean_Syntax_getArg(x_780, x_782);
x_784 = l_Lean_Syntax_getArg(x_780, x_779);
lean_dec(x_780);
x_785 = l_Lean_Syntax_isNone(x_784);
if (x_785 == 0)
{
lean_object* x_786; lean_object* x_787; lean_object* x_788; uint8_t x_789; 
x_786 = l_Lean_Syntax_getArg(x_784, x_782);
lean_dec(x_784);
lean_inc(x_786);
x_787 = l_Lean_Syntax_getKind(x_786);
x_788 = l_Lean_Elab_Term_expandFunBinders_loop___closed__14;
x_789 = lean_name_eq(x_787, x_788);
lean_dec(x_787);
if (x_789 == 0)
{
uint8_t x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; 
lean_dec(x_786);
lean_dec(x_783);
x_790 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_791 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_790, x_5, x_6);
x_792 = lean_ctor_get(x_791, 0);
lean_inc(x_792);
x_793 = lean_ctor_get(x_791, 1);
lean_inc(x_793);
lean_dec(x_791);
x_794 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
lean_inc(x_14);
x_795 = l_Lean_mkHole(x_14, x_790);
lean_inc(x_792);
x_796 = l_Lean_Elab_Term_mkExplicitBinder(x_792, x_795);
x_797 = lean_array_push(x_4, x_796);
lean_inc(x_5);
x_798 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_794, x_797, x_5, x_793);
if (lean_obj_tag(x_798) == 0)
{
lean_object* x_799; lean_object* x_800; uint8_t x_801; 
x_799 = lean_ctor_get(x_798, 0);
lean_inc(x_799);
x_800 = lean_ctor_get(x_799, 1);
lean_inc(x_800);
x_801 = !lean_is_exclusive(x_798);
if (x_801 == 0)
{
lean_object* x_802; uint8_t x_803; 
x_802 = lean_ctor_get(x_798, 0);
lean_dec(x_802);
x_803 = !lean_is_exclusive(x_799);
if (x_803 == 0)
{
lean_object* x_804; uint8_t x_805; 
x_804 = lean_ctor_get(x_799, 1);
lean_dec(x_804);
x_805 = !lean_is_exclusive(x_800);
if (x_805 == 0)
{
lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; uint8_t x_833; lean_object* x_834; 
x_806 = lean_ctor_get(x_800, 0);
x_807 = lean_ctor_get(x_800, 1);
lean_dec(x_807);
x_808 = lean_ctor_get(x_5, 5);
lean_inc(x_808);
lean_dec(x_5);
x_809 = l_Lean_SourceInfo_fromRef(x_808, x_790);
x_810 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_809);
x_811 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_811, 0, x_809);
lean_ctor_set(x_811, 1, x_810);
x_812 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_813 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_809);
x_814 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_814, 0, x_809);
lean_ctor_set(x_814, 1, x_812);
lean_ctor_set(x_814, 2, x_813);
x_815 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_814);
lean_inc(x_809);
x_816 = l_Lean_Syntax_node2(x_809, x_815, x_814, x_792);
lean_inc(x_809);
x_817 = l_Lean_Syntax_node1(x_809, x_812, x_816);
x_818 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_809);
x_819 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_819, 0, x_809);
lean_ctor_set(x_819, 1, x_818);
x_820 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_809);
x_821 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_821, 0, x_809);
lean_ctor_set(x_821, 1, x_820);
lean_inc(x_809);
x_822 = l_Lean_Syntax_node1(x_809, x_812, x_14);
lean_inc(x_809);
x_823 = l_Lean_Syntax_node1(x_809, x_812, x_822);
x_824 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_809);
x_825 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_825, 0, x_809);
lean_ctor_set(x_825, 1, x_824);
x_826 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_809);
x_827 = l_Lean_Syntax_node4(x_809, x_826, x_821, x_823, x_825, x_806);
lean_inc(x_809);
x_828 = l_Lean_Syntax_node1(x_809, x_812, x_827);
x_829 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_809);
x_830 = l_Lean_Syntax_node1(x_809, x_829, x_828);
x_831 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_814);
x_832 = l_Lean_Syntax_node6(x_809, x_831, x_811, x_814, x_814, x_817, x_819, x_830);
x_833 = 1;
x_834 = lean_box(x_833);
lean_ctor_set(x_800, 1, x_834);
lean_ctor_set(x_800, 0, x_832);
return x_798;
}
else
{
lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; uint8_t x_861; lean_object* x_862; lean_object* x_863; 
x_835 = lean_ctor_get(x_800, 0);
lean_inc(x_835);
lean_dec(x_800);
x_836 = lean_ctor_get(x_5, 5);
lean_inc(x_836);
lean_dec(x_5);
x_837 = l_Lean_SourceInfo_fromRef(x_836, x_790);
x_838 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_837);
x_839 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_839, 0, x_837);
lean_ctor_set(x_839, 1, x_838);
x_840 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_841 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_837);
x_842 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_842, 0, x_837);
lean_ctor_set(x_842, 1, x_840);
lean_ctor_set(x_842, 2, x_841);
x_843 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_842);
lean_inc(x_837);
x_844 = l_Lean_Syntax_node2(x_837, x_843, x_842, x_792);
lean_inc(x_837);
x_845 = l_Lean_Syntax_node1(x_837, x_840, x_844);
x_846 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_837);
x_847 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_847, 0, x_837);
lean_ctor_set(x_847, 1, x_846);
x_848 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_837);
x_849 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_849, 0, x_837);
lean_ctor_set(x_849, 1, x_848);
lean_inc(x_837);
x_850 = l_Lean_Syntax_node1(x_837, x_840, x_14);
lean_inc(x_837);
x_851 = l_Lean_Syntax_node1(x_837, x_840, x_850);
x_852 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_837);
x_853 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_853, 0, x_837);
lean_ctor_set(x_853, 1, x_852);
x_854 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_837);
x_855 = l_Lean_Syntax_node4(x_837, x_854, x_849, x_851, x_853, x_835);
lean_inc(x_837);
x_856 = l_Lean_Syntax_node1(x_837, x_840, x_855);
x_857 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_837);
x_858 = l_Lean_Syntax_node1(x_837, x_857, x_856);
x_859 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_842);
x_860 = l_Lean_Syntax_node6(x_837, x_859, x_839, x_842, x_842, x_845, x_847, x_858);
x_861 = 1;
x_862 = lean_box(x_861);
x_863 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_863, 0, x_860);
lean_ctor_set(x_863, 1, x_862);
lean_ctor_set(x_799, 1, x_863);
return x_798;
}
}
else
{
lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; uint8_t x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; 
x_864 = lean_ctor_get(x_799, 0);
lean_inc(x_864);
lean_dec(x_799);
x_865 = lean_ctor_get(x_800, 0);
lean_inc(x_865);
if (lean_is_exclusive(x_800)) {
 lean_ctor_release(x_800, 0);
 lean_ctor_release(x_800, 1);
 x_866 = x_800;
} else {
 lean_dec_ref(x_800);
 x_866 = lean_box(0);
}
x_867 = lean_ctor_get(x_5, 5);
lean_inc(x_867);
lean_dec(x_5);
x_868 = l_Lean_SourceInfo_fromRef(x_867, x_790);
x_869 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_868);
x_870 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_870, 0, x_868);
lean_ctor_set(x_870, 1, x_869);
x_871 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_872 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_868);
x_873 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_873, 0, x_868);
lean_ctor_set(x_873, 1, x_871);
lean_ctor_set(x_873, 2, x_872);
x_874 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_873);
lean_inc(x_868);
x_875 = l_Lean_Syntax_node2(x_868, x_874, x_873, x_792);
lean_inc(x_868);
x_876 = l_Lean_Syntax_node1(x_868, x_871, x_875);
x_877 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_868);
x_878 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_878, 0, x_868);
lean_ctor_set(x_878, 1, x_877);
x_879 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_868);
x_880 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_880, 0, x_868);
lean_ctor_set(x_880, 1, x_879);
lean_inc(x_868);
x_881 = l_Lean_Syntax_node1(x_868, x_871, x_14);
lean_inc(x_868);
x_882 = l_Lean_Syntax_node1(x_868, x_871, x_881);
x_883 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_868);
x_884 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_884, 0, x_868);
lean_ctor_set(x_884, 1, x_883);
x_885 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_868);
x_886 = l_Lean_Syntax_node4(x_868, x_885, x_880, x_882, x_884, x_865);
lean_inc(x_868);
x_887 = l_Lean_Syntax_node1(x_868, x_871, x_886);
x_888 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_868);
x_889 = l_Lean_Syntax_node1(x_868, x_888, x_887);
x_890 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_873);
x_891 = l_Lean_Syntax_node6(x_868, x_890, x_870, x_873, x_873, x_876, x_878, x_889);
x_892 = 1;
x_893 = lean_box(x_892);
if (lean_is_scalar(x_866)) {
 x_894 = lean_alloc_ctor(0, 2, 0);
} else {
 x_894 = x_866;
}
lean_ctor_set(x_894, 0, x_891);
lean_ctor_set(x_894, 1, x_893);
x_895 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_895, 0, x_864);
lean_ctor_set(x_895, 1, x_894);
lean_ctor_set(x_798, 0, x_895);
return x_798;
}
}
else
{
lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; uint8_t x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; 
x_896 = lean_ctor_get(x_798, 1);
lean_inc(x_896);
lean_dec(x_798);
x_897 = lean_ctor_get(x_799, 0);
lean_inc(x_897);
if (lean_is_exclusive(x_799)) {
 lean_ctor_release(x_799, 0);
 lean_ctor_release(x_799, 1);
 x_898 = x_799;
} else {
 lean_dec_ref(x_799);
 x_898 = lean_box(0);
}
x_899 = lean_ctor_get(x_800, 0);
lean_inc(x_899);
if (lean_is_exclusive(x_800)) {
 lean_ctor_release(x_800, 0);
 lean_ctor_release(x_800, 1);
 x_900 = x_800;
} else {
 lean_dec_ref(x_800);
 x_900 = lean_box(0);
}
x_901 = lean_ctor_get(x_5, 5);
lean_inc(x_901);
lean_dec(x_5);
x_902 = l_Lean_SourceInfo_fromRef(x_901, x_790);
x_903 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_902);
x_904 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_904, 0, x_902);
lean_ctor_set(x_904, 1, x_903);
x_905 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_906 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_902);
x_907 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_907, 0, x_902);
lean_ctor_set(x_907, 1, x_905);
lean_ctor_set(x_907, 2, x_906);
x_908 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_907);
lean_inc(x_902);
x_909 = l_Lean_Syntax_node2(x_902, x_908, x_907, x_792);
lean_inc(x_902);
x_910 = l_Lean_Syntax_node1(x_902, x_905, x_909);
x_911 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_902);
x_912 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_912, 0, x_902);
lean_ctor_set(x_912, 1, x_911);
x_913 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_902);
x_914 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_914, 0, x_902);
lean_ctor_set(x_914, 1, x_913);
lean_inc(x_902);
x_915 = l_Lean_Syntax_node1(x_902, x_905, x_14);
lean_inc(x_902);
x_916 = l_Lean_Syntax_node1(x_902, x_905, x_915);
x_917 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_902);
x_918 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_918, 0, x_902);
lean_ctor_set(x_918, 1, x_917);
x_919 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_902);
x_920 = l_Lean_Syntax_node4(x_902, x_919, x_914, x_916, x_918, x_899);
lean_inc(x_902);
x_921 = l_Lean_Syntax_node1(x_902, x_905, x_920);
x_922 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_902);
x_923 = l_Lean_Syntax_node1(x_902, x_922, x_921);
x_924 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_907);
x_925 = l_Lean_Syntax_node6(x_902, x_924, x_904, x_907, x_907, x_910, x_912, x_923);
x_926 = 1;
x_927 = lean_box(x_926);
if (lean_is_scalar(x_900)) {
 x_928 = lean_alloc_ctor(0, 2, 0);
} else {
 x_928 = x_900;
}
lean_ctor_set(x_928, 0, x_925);
lean_ctor_set(x_928, 1, x_927);
if (lean_is_scalar(x_898)) {
 x_929 = lean_alloc_ctor(0, 2, 0);
} else {
 x_929 = x_898;
}
lean_ctor_set(x_929, 0, x_897);
lean_ctor_set(x_929, 1, x_928);
x_930 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_930, 0, x_929);
lean_ctor_set(x_930, 1, x_896);
return x_930;
}
}
else
{
uint8_t x_931; 
lean_dec(x_792);
lean_dec(x_14);
lean_dec(x_5);
x_931 = !lean_is_exclusive(x_798);
if (x_931 == 0)
{
return x_798;
}
else
{
lean_object* x_932; lean_object* x_933; lean_object* x_934; 
x_932 = lean_ctor_get(x_798, 0);
x_933 = lean_ctor_get(x_798, 1);
lean_inc(x_933);
lean_inc(x_932);
lean_dec(x_798);
x_934 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_934, 0, x_932);
lean_ctor_set(x_934, 1, x_933);
return x_934;
}
}
}
else
{
lean_object* x_935; lean_object* x_936; lean_object* x_937; 
x_935 = l_Lean_Syntax_getArg(x_786, x_779);
lean_dec(x_786);
x_936 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(x_783, x_5, x_6);
x_937 = lean_ctor_get(x_936, 0);
lean_inc(x_937);
if (lean_obj_tag(x_937) == 0)
{
lean_object* x_938; uint8_t x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; 
lean_dec(x_935);
x_938 = lean_ctor_get(x_936, 1);
lean_inc(x_938);
lean_dec(x_936);
x_939 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_940 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_939, x_5, x_938);
x_941 = lean_ctor_get(x_940, 0);
lean_inc(x_941);
x_942 = lean_ctor_get(x_940, 1);
lean_inc(x_942);
lean_dec(x_940);
x_943 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
lean_inc(x_14);
x_944 = l_Lean_mkHole(x_14, x_939);
lean_inc(x_941);
x_945 = l_Lean_Elab_Term_mkExplicitBinder(x_941, x_944);
x_946 = lean_array_push(x_4, x_945);
lean_inc(x_5);
x_947 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_943, x_946, x_5, x_942);
if (lean_obj_tag(x_947) == 0)
{
lean_object* x_948; lean_object* x_949; uint8_t x_950; 
x_948 = lean_ctor_get(x_947, 0);
lean_inc(x_948);
x_949 = lean_ctor_get(x_948, 1);
lean_inc(x_949);
x_950 = !lean_is_exclusive(x_947);
if (x_950 == 0)
{
lean_object* x_951; uint8_t x_952; 
x_951 = lean_ctor_get(x_947, 0);
lean_dec(x_951);
x_952 = !lean_is_exclusive(x_948);
if (x_952 == 0)
{
lean_object* x_953; uint8_t x_954; 
x_953 = lean_ctor_get(x_948, 1);
lean_dec(x_953);
x_954 = !lean_is_exclusive(x_949);
if (x_954 == 0)
{
lean_object* x_955; lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; uint8_t x_982; lean_object* x_983; 
x_955 = lean_ctor_get(x_949, 0);
x_956 = lean_ctor_get(x_949, 1);
lean_dec(x_956);
x_957 = lean_ctor_get(x_5, 5);
lean_inc(x_957);
lean_dec(x_5);
x_958 = l_Lean_SourceInfo_fromRef(x_957, x_939);
x_959 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_958);
x_960 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_960, 0, x_958);
lean_ctor_set(x_960, 1, x_959);
x_961 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_962 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_958);
x_963 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_963, 0, x_958);
lean_ctor_set(x_963, 1, x_961);
lean_ctor_set(x_963, 2, x_962);
x_964 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_963);
lean_inc(x_958);
x_965 = l_Lean_Syntax_node2(x_958, x_964, x_963, x_941);
lean_inc(x_958);
x_966 = l_Lean_Syntax_node1(x_958, x_961, x_965);
x_967 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_958);
x_968 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_968, 0, x_958);
lean_ctor_set(x_968, 1, x_967);
x_969 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_958);
x_970 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_970, 0, x_958);
lean_ctor_set(x_970, 1, x_969);
lean_inc(x_958);
x_971 = l_Lean_Syntax_node1(x_958, x_961, x_14);
lean_inc(x_958);
x_972 = l_Lean_Syntax_node1(x_958, x_961, x_971);
x_973 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_958);
x_974 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_974, 0, x_958);
lean_ctor_set(x_974, 1, x_973);
x_975 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_958);
x_976 = l_Lean_Syntax_node4(x_958, x_975, x_970, x_972, x_974, x_955);
lean_inc(x_958);
x_977 = l_Lean_Syntax_node1(x_958, x_961, x_976);
x_978 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_958);
x_979 = l_Lean_Syntax_node1(x_958, x_978, x_977);
x_980 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_963);
x_981 = l_Lean_Syntax_node6(x_958, x_980, x_960, x_963, x_963, x_966, x_968, x_979);
x_982 = 1;
x_983 = lean_box(x_982);
lean_ctor_set(x_949, 1, x_983);
lean_ctor_set(x_949, 0, x_981);
return x_947;
}
else
{
lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; uint8_t x_1010; lean_object* x_1011; lean_object* x_1012; 
x_984 = lean_ctor_get(x_949, 0);
lean_inc(x_984);
lean_dec(x_949);
x_985 = lean_ctor_get(x_5, 5);
lean_inc(x_985);
lean_dec(x_5);
x_986 = l_Lean_SourceInfo_fromRef(x_985, x_939);
x_987 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_986);
x_988 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_988, 0, x_986);
lean_ctor_set(x_988, 1, x_987);
x_989 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_990 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_986);
x_991 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_991, 0, x_986);
lean_ctor_set(x_991, 1, x_989);
lean_ctor_set(x_991, 2, x_990);
x_992 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_991);
lean_inc(x_986);
x_993 = l_Lean_Syntax_node2(x_986, x_992, x_991, x_941);
lean_inc(x_986);
x_994 = l_Lean_Syntax_node1(x_986, x_989, x_993);
x_995 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_986);
x_996 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_996, 0, x_986);
lean_ctor_set(x_996, 1, x_995);
x_997 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_986);
x_998 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_998, 0, x_986);
lean_ctor_set(x_998, 1, x_997);
lean_inc(x_986);
x_999 = l_Lean_Syntax_node1(x_986, x_989, x_14);
lean_inc(x_986);
x_1000 = l_Lean_Syntax_node1(x_986, x_989, x_999);
x_1001 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_986);
x_1002 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1002, 0, x_986);
lean_ctor_set(x_1002, 1, x_1001);
x_1003 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_986);
x_1004 = l_Lean_Syntax_node4(x_986, x_1003, x_998, x_1000, x_1002, x_984);
lean_inc(x_986);
x_1005 = l_Lean_Syntax_node1(x_986, x_989, x_1004);
x_1006 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_986);
x_1007 = l_Lean_Syntax_node1(x_986, x_1006, x_1005);
x_1008 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_991);
x_1009 = l_Lean_Syntax_node6(x_986, x_1008, x_988, x_991, x_991, x_994, x_996, x_1007);
x_1010 = 1;
x_1011 = lean_box(x_1010);
x_1012 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1012, 0, x_1009);
lean_ctor_set(x_1012, 1, x_1011);
lean_ctor_set(x_948, 1, x_1012);
return x_947;
}
}
else
{
lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; uint8_t x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; 
x_1013 = lean_ctor_get(x_948, 0);
lean_inc(x_1013);
lean_dec(x_948);
x_1014 = lean_ctor_get(x_949, 0);
lean_inc(x_1014);
if (lean_is_exclusive(x_949)) {
 lean_ctor_release(x_949, 0);
 lean_ctor_release(x_949, 1);
 x_1015 = x_949;
} else {
 lean_dec_ref(x_949);
 x_1015 = lean_box(0);
}
x_1016 = lean_ctor_get(x_5, 5);
lean_inc(x_1016);
lean_dec(x_5);
x_1017 = l_Lean_SourceInfo_fromRef(x_1016, x_939);
x_1018 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1017);
x_1019 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1019, 0, x_1017);
lean_ctor_set(x_1019, 1, x_1018);
x_1020 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1021 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1017);
x_1022 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1022, 0, x_1017);
lean_ctor_set(x_1022, 1, x_1020);
lean_ctor_set(x_1022, 2, x_1021);
x_1023 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1022);
lean_inc(x_1017);
x_1024 = l_Lean_Syntax_node2(x_1017, x_1023, x_1022, x_941);
lean_inc(x_1017);
x_1025 = l_Lean_Syntax_node1(x_1017, x_1020, x_1024);
x_1026 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1017);
x_1027 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1027, 0, x_1017);
lean_ctor_set(x_1027, 1, x_1026);
x_1028 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1017);
x_1029 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1029, 0, x_1017);
lean_ctor_set(x_1029, 1, x_1028);
lean_inc(x_1017);
x_1030 = l_Lean_Syntax_node1(x_1017, x_1020, x_14);
lean_inc(x_1017);
x_1031 = l_Lean_Syntax_node1(x_1017, x_1020, x_1030);
x_1032 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1017);
x_1033 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1033, 0, x_1017);
lean_ctor_set(x_1033, 1, x_1032);
x_1034 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1017);
x_1035 = l_Lean_Syntax_node4(x_1017, x_1034, x_1029, x_1031, x_1033, x_1014);
lean_inc(x_1017);
x_1036 = l_Lean_Syntax_node1(x_1017, x_1020, x_1035);
x_1037 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1017);
x_1038 = l_Lean_Syntax_node1(x_1017, x_1037, x_1036);
x_1039 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1022);
x_1040 = l_Lean_Syntax_node6(x_1017, x_1039, x_1019, x_1022, x_1022, x_1025, x_1027, x_1038);
x_1041 = 1;
x_1042 = lean_box(x_1041);
if (lean_is_scalar(x_1015)) {
 x_1043 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1043 = x_1015;
}
lean_ctor_set(x_1043, 0, x_1040);
lean_ctor_set(x_1043, 1, x_1042);
x_1044 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1044, 0, x_1013);
lean_ctor_set(x_1044, 1, x_1043);
lean_ctor_set(x_947, 0, x_1044);
return x_947;
}
}
else
{
lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; uint8_t x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; 
x_1045 = lean_ctor_get(x_947, 1);
lean_inc(x_1045);
lean_dec(x_947);
x_1046 = lean_ctor_get(x_948, 0);
lean_inc(x_1046);
if (lean_is_exclusive(x_948)) {
 lean_ctor_release(x_948, 0);
 lean_ctor_release(x_948, 1);
 x_1047 = x_948;
} else {
 lean_dec_ref(x_948);
 x_1047 = lean_box(0);
}
x_1048 = lean_ctor_get(x_949, 0);
lean_inc(x_1048);
if (lean_is_exclusive(x_949)) {
 lean_ctor_release(x_949, 0);
 lean_ctor_release(x_949, 1);
 x_1049 = x_949;
} else {
 lean_dec_ref(x_949);
 x_1049 = lean_box(0);
}
x_1050 = lean_ctor_get(x_5, 5);
lean_inc(x_1050);
lean_dec(x_5);
x_1051 = l_Lean_SourceInfo_fromRef(x_1050, x_939);
x_1052 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1051);
x_1053 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1053, 0, x_1051);
lean_ctor_set(x_1053, 1, x_1052);
x_1054 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1055 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1051);
x_1056 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1056, 0, x_1051);
lean_ctor_set(x_1056, 1, x_1054);
lean_ctor_set(x_1056, 2, x_1055);
x_1057 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1056);
lean_inc(x_1051);
x_1058 = l_Lean_Syntax_node2(x_1051, x_1057, x_1056, x_941);
lean_inc(x_1051);
x_1059 = l_Lean_Syntax_node1(x_1051, x_1054, x_1058);
x_1060 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1051);
x_1061 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1061, 0, x_1051);
lean_ctor_set(x_1061, 1, x_1060);
x_1062 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1051);
x_1063 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1063, 0, x_1051);
lean_ctor_set(x_1063, 1, x_1062);
lean_inc(x_1051);
x_1064 = l_Lean_Syntax_node1(x_1051, x_1054, x_14);
lean_inc(x_1051);
x_1065 = l_Lean_Syntax_node1(x_1051, x_1054, x_1064);
x_1066 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1051);
x_1067 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1067, 0, x_1051);
lean_ctor_set(x_1067, 1, x_1066);
x_1068 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1051);
x_1069 = l_Lean_Syntax_node4(x_1051, x_1068, x_1063, x_1065, x_1067, x_1048);
lean_inc(x_1051);
x_1070 = l_Lean_Syntax_node1(x_1051, x_1054, x_1069);
x_1071 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1051);
x_1072 = l_Lean_Syntax_node1(x_1051, x_1071, x_1070);
x_1073 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1056);
x_1074 = l_Lean_Syntax_node6(x_1051, x_1073, x_1053, x_1056, x_1056, x_1059, x_1061, x_1072);
x_1075 = 1;
x_1076 = lean_box(x_1075);
if (lean_is_scalar(x_1049)) {
 x_1077 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1077 = x_1049;
}
lean_ctor_set(x_1077, 0, x_1074);
lean_ctor_set(x_1077, 1, x_1076);
if (lean_is_scalar(x_1047)) {
 x_1078 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1078 = x_1047;
}
lean_ctor_set(x_1078, 0, x_1046);
lean_ctor_set(x_1078, 1, x_1077);
x_1079 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1079, 0, x_1078);
lean_ctor_set(x_1079, 1, x_1045);
return x_1079;
}
}
else
{
uint8_t x_1080; 
lean_dec(x_941);
lean_dec(x_14);
lean_dec(x_5);
x_1080 = !lean_is_exclusive(x_947);
if (x_1080 == 0)
{
return x_947;
}
else
{
lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; 
x_1081 = lean_ctor_get(x_947, 0);
x_1082 = lean_ctor_get(x_947, 1);
lean_inc(x_1082);
lean_inc(x_1081);
lean_dec(x_947);
x_1083 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1083, 0, x_1081);
lean_ctor_set(x_1083, 1, x_1082);
return x_1083;
}
}
}
else
{
lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; size_t x_1088; size_t x_1089; lean_object* x_1090; lean_object* x_1091; 
lean_dec(x_14);
x_1084 = lean_ctor_get(x_936, 1);
lean_inc(x_1084);
lean_dec(x_936);
x_1085 = lean_ctor_get(x_937, 0);
lean_inc(x_1085);
lean_dec(x_937);
x_1086 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
x_1087 = lean_array_get_size(x_1085);
x_1088 = lean_usize_of_nat(x_1087);
lean_dec(x_1087);
x_1089 = 0;
x_1090 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(x_935, x_1088, x_1089, x_1085);
x_1091 = l_Array_append___rarg(x_4, x_1090);
x_3 = x_1086;
x_4 = x_1091;
x_6 = x_1084;
goto _start;
}
}
}
else
{
lean_object* x_1093; lean_object* x_1094; 
lean_dec(x_784);
x_1093 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_getFunBinderIds_x3f(x_783, x_5, x_6);
x_1094 = lean_ctor_get(x_1093, 0);
lean_inc(x_1094);
if (lean_obj_tag(x_1094) == 0)
{
lean_object* x_1095; uint8_t x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; 
x_1095 = lean_ctor_get(x_1093, 1);
lean_inc(x_1095);
lean_dec(x_1093);
x_1096 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_1097 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_1096, x_5, x_1095);
x_1098 = lean_ctor_get(x_1097, 0);
lean_inc(x_1098);
x_1099 = lean_ctor_get(x_1097, 1);
lean_inc(x_1099);
lean_dec(x_1097);
x_1100 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
lean_inc(x_14);
x_1101 = l_Lean_mkHole(x_14, x_1096);
lean_inc(x_1098);
x_1102 = l_Lean_Elab_Term_mkExplicitBinder(x_1098, x_1101);
x_1103 = lean_array_push(x_4, x_1102);
lean_inc(x_5);
x_1104 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1100, x_1103, x_5, x_1099);
if (lean_obj_tag(x_1104) == 0)
{
lean_object* x_1105; lean_object* x_1106; uint8_t x_1107; 
x_1105 = lean_ctor_get(x_1104, 0);
lean_inc(x_1105);
x_1106 = lean_ctor_get(x_1105, 1);
lean_inc(x_1106);
x_1107 = !lean_is_exclusive(x_1104);
if (x_1107 == 0)
{
lean_object* x_1108; uint8_t x_1109; 
x_1108 = lean_ctor_get(x_1104, 0);
lean_dec(x_1108);
x_1109 = !lean_is_exclusive(x_1105);
if (x_1109 == 0)
{
lean_object* x_1110; uint8_t x_1111; 
x_1110 = lean_ctor_get(x_1105, 1);
lean_dec(x_1110);
x_1111 = !lean_is_exclusive(x_1106);
if (x_1111 == 0)
{
lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; uint8_t x_1139; lean_object* x_1140; 
x_1112 = lean_ctor_get(x_1106, 0);
x_1113 = lean_ctor_get(x_1106, 1);
lean_dec(x_1113);
x_1114 = lean_ctor_get(x_5, 5);
lean_inc(x_1114);
lean_dec(x_5);
x_1115 = l_Lean_SourceInfo_fromRef(x_1114, x_1096);
x_1116 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1115);
x_1117 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1117, 0, x_1115);
lean_ctor_set(x_1117, 1, x_1116);
x_1118 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1119 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1115);
x_1120 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1120, 0, x_1115);
lean_ctor_set(x_1120, 1, x_1118);
lean_ctor_set(x_1120, 2, x_1119);
x_1121 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1120);
lean_inc(x_1115);
x_1122 = l_Lean_Syntax_node2(x_1115, x_1121, x_1120, x_1098);
lean_inc(x_1115);
x_1123 = l_Lean_Syntax_node1(x_1115, x_1118, x_1122);
x_1124 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1115);
x_1125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1125, 0, x_1115);
lean_ctor_set(x_1125, 1, x_1124);
x_1126 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1115);
x_1127 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1127, 0, x_1115);
lean_ctor_set(x_1127, 1, x_1126);
lean_inc(x_1115);
x_1128 = l_Lean_Syntax_node1(x_1115, x_1118, x_14);
lean_inc(x_1115);
x_1129 = l_Lean_Syntax_node1(x_1115, x_1118, x_1128);
x_1130 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1115);
x_1131 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1131, 0, x_1115);
lean_ctor_set(x_1131, 1, x_1130);
x_1132 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1115);
x_1133 = l_Lean_Syntax_node4(x_1115, x_1132, x_1127, x_1129, x_1131, x_1112);
lean_inc(x_1115);
x_1134 = l_Lean_Syntax_node1(x_1115, x_1118, x_1133);
x_1135 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1115);
x_1136 = l_Lean_Syntax_node1(x_1115, x_1135, x_1134);
x_1137 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1120);
x_1138 = l_Lean_Syntax_node6(x_1115, x_1137, x_1117, x_1120, x_1120, x_1123, x_1125, x_1136);
x_1139 = 1;
x_1140 = lean_box(x_1139);
lean_ctor_set(x_1106, 1, x_1140);
lean_ctor_set(x_1106, 0, x_1138);
return x_1104;
}
else
{
lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; uint8_t x_1167; lean_object* x_1168; lean_object* x_1169; 
x_1141 = lean_ctor_get(x_1106, 0);
lean_inc(x_1141);
lean_dec(x_1106);
x_1142 = lean_ctor_get(x_5, 5);
lean_inc(x_1142);
lean_dec(x_5);
x_1143 = l_Lean_SourceInfo_fromRef(x_1142, x_1096);
x_1144 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1143);
x_1145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1145, 0, x_1143);
lean_ctor_set(x_1145, 1, x_1144);
x_1146 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1147 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1143);
x_1148 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1148, 0, x_1143);
lean_ctor_set(x_1148, 1, x_1146);
lean_ctor_set(x_1148, 2, x_1147);
x_1149 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1148);
lean_inc(x_1143);
x_1150 = l_Lean_Syntax_node2(x_1143, x_1149, x_1148, x_1098);
lean_inc(x_1143);
x_1151 = l_Lean_Syntax_node1(x_1143, x_1146, x_1150);
x_1152 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1143);
x_1153 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1153, 0, x_1143);
lean_ctor_set(x_1153, 1, x_1152);
x_1154 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1143);
x_1155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1155, 0, x_1143);
lean_ctor_set(x_1155, 1, x_1154);
lean_inc(x_1143);
x_1156 = l_Lean_Syntax_node1(x_1143, x_1146, x_14);
lean_inc(x_1143);
x_1157 = l_Lean_Syntax_node1(x_1143, x_1146, x_1156);
x_1158 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1143);
x_1159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1159, 0, x_1143);
lean_ctor_set(x_1159, 1, x_1158);
x_1160 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1143);
x_1161 = l_Lean_Syntax_node4(x_1143, x_1160, x_1155, x_1157, x_1159, x_1141);
lean_inc(x_1143);
x_1162 = l_Lean_Syntax_node1(x_1143, x_1146, x_1161);
x_1163 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1143);
x_1164 = l_Lean_Syntax_node1(x_1143, x_1163, x_1162);
x_1165 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1148);
x_1166 = l_Lean_Syntax_node6(x_1143, x_1165, x_1145, x_1148, x_1148, x_1151, x_1153, x_1164);
x_1167 = 1;
x_1168 = lean_box(x_1167);
x_1169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1169, 0, x_1166);
lean_ctor_set(x_1169, 1, x_1168);
lean_ctor_set(x_1105, 1, x_1169);
return x_1104;
}
}
else
{
lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; uint8_t x_1198; lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; 
x_1170 = lean_ctor_get(x_1105, 0);
lean_inc(x_1170);
lean_dec(x_1105);
x_1171 = lean_ctor_get(x_1106, 0);
lean_inc(x_1171);
if (lean_is_exclusive(x_1106)) {
 lean_ctor_release(x_1106, 0);
 lean_ctor_release(x_1106, 1);
 x_1172 = x_1106;
} else {
 lean_dec_ref(x_1106);
 x_1172 = lean_box(0);
}
x_1173 = lean_ctor_get(x_5, 5);
lean_inc(x_1173);
lean_dec(x_5);
x_1174 = l_Lean_SourceInfo_fromRef(x_1173, x_1096);
x_1175 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1174);
x_1176 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1176, 0, x_1174);
lean_ctor_set(x_1176, 1, x_1175);
x_1177 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1178 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1174);
x_1179 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1179, 0, x_1174);
lean_ctor_set(x_1179, 1, x_1177);
lean_ctor_set(x_1179, 2, x_1178);
x_1180 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1179);
lean_inc(x_1174);
x_1181 = l_Lean_Syntax_node2(x_1174, x_1180, x_1179, x_1098);
lean_inc(x_1174);
x_1182 = l_Lean_Syntax_node1(x_1174, x_1177, x_1181);
x_1183 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1174);
x_1184 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1184, 0, x_1174);
lean_ctor_set(x_1184, 1, x_1183);
x_1185 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1174);
x_1186 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1186, 0, x_1174);
lean_ctor_set(x_1186, 1, x_1185);
lean_inc(x_1174);
x_1187 = l_Lean_Syntax_node1(x_1174, x_1177, x_14);
lean_inc(x_1174);
x_1188 = l_Lean_Syntax_node1(x_1174, x_1177, x_1187);
x_1189 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1174);
x_1190 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1190, 0, x_1174);
lean_ctor_set(x_1190, 1, x_1189);
x_1191 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1174);
x_1192 = l_Lean_Syntax_node4(x_1174, x_1191, x_1186, x_1188, x_1190, x_1171);
lean_inc(x_1174);
x_1193 = l_Lean_Syntax_node1(x_1174, x_1177, x_1192);
x_1194 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1174);
x_1195 = l_Lean_Syntax_node1(x_1174, x_1194, x_1193);
x_1196 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1179);
x_1197 = l_Lean_Syntax_node6(x_1174, x_1196, x_1176, x_1179, x_1179, x_1182, x_1184, x_1195);
x_1198 = 1;
x_1199 = lean_box(x_1198);
if (lean_is_scalar(x_1172)) {
 x_1200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1200 = x_1172;
}
lean_ctor_set(x_1200, 0, x_1197);
lean_ctor_set(x_1200, 1, x_1199);
x_1201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1201, 0, x_1170);
lean_ctor_set(x_1201, 1, x_1200);
lean_ctor_set(x_1104, 0, x_1201);
return x_1104;
}
}
else
{
lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; lean_object* x_1209; lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; uint8_t x_1232; lean_object* x_1233; lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; 
x_1202 = lean_ctor_get(x_1104, 1);
lean_inc(x_1202);
lean_dec(x_1104);
x_1203 = lean_ctor_get(x_1105, 0);
lean_inc(x_1203);
if (lean_is_exclusive(x_1105)) {
 lean_ctor_release(x_1105, 0);
 lean_ctor_release(x_1105, 1);
 x_1204 = x_1105;
} else {
 lean_dec_ref(x_1105);
 x_1204 = lean_box(0);
}
x_1205 = lean_ctor_get(x_1106, 0);
lean_inc(x_1205);
if (lean_is_exclusive(x_1106)) {
 lean_ctor_release(x_1106, 0);
 lean_ctor_release(x_1106, 1);
 x_1206 = x_1106;
} else {
 lean_dec_ref(x_1106);
 x_1206 = lean_box(0);
}
x_1207 = lean_ctor_get(x_5, 5);
lean_inc(x_1207);
lean_dec(x_5);
x_1208 = l_Lean_SourceInfo_fromRef(x_1207, x_1096);
x_1209 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1208);
x_1210 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1210, 0, x_1208);
lean_ctor_set(x_1210, 1, x_1209);
x_1211 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1212 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1208);
x_1213 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1213, 0, x_1208);
lean_ctor_set(x_1213, 1, x_1211);
lean_ctor_set(x_1213, 2, x_1212);
x_1214 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1213);
lean_inc(x_1208);
x_1215 = l_Lean_Syntax_node2(x_1208, x_1214, x_1213, x_1098);
lean_inc(x_1208);
x_1216 = l_Lean_Syntax_node1(x_1208, x_1211, x_1215);
x_1217 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1208);
x_1218 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1218, 0, x_1208);
lean_ctor_set(x_1218, 1, x_1217);
x_1219 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1208);
x_1220 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1220, 0, x_1208);
lean_ctor_set(x_1220, 1, x_1219);
lean_inc(x_1208);
x_1221 = l_Lean_Syntax_node1(x_1208, x_1211, x_14);
lean_inc(x_1208);
x_1222 = l_Lean_Syntax_node1(x_1208, x_1211, x_1221);
x_1223 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1208);
x_1224 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1224, 0, x_1208);
lean_ctor_set(x_1224, 1, x_1223);
x_1225 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1208);
x_1226 = l_Lean_Syntax_node4(x_1208, x_1225, x_1220, x_1222, x_1224, x_1205);
lean_inc(x_1208);
x_1227 = l_Lean_Syntax_node1(x_1208, x_1211, x_1226);
x_1228 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1208);
x_1229 = l_Lean_Syntax_node1(x_1208, x_1228, x_1227);
x_1230 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1213);
x_1231 = l_Lean_Syntax_node6(x_1208, x_1230, x_1210, x_1213, x_1213, x_1216, x_1218, x_1229);
x_1232 = 1;
x_1233 = lean_box(x_1232);
if (lean_is_scalar(x_1206)) {
 x_1234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1234 = x_1206;
}
lean_ctor_set(x_1234, 0, x_1231);
lean_ctor_set(x_1234, 1, x_1233);
if (lean_is_scalar(x_1204)) {
 x_1235 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1235 = x_1204;
}
lean_ctor_set(x_1235, 0, x_1203);
lean_ctor_set(x_1235, 1, x_1234);
x_1236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1236, 0, x_1235);
lean_ctor_set(x_1236, 1, x_1202);
return x_1236;
}
}
else
{
uint8_t x_1237; 
lean_dec(x_1098);
lean_dec(x_14);
lean_dec(x_5);
x_1237 = !lean_is_exclusive(x_1104);
if (x_1237 == 0)
{
return x_1104;
}
else
{
lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; 
x_1238 = lean_ctor_get(x_1104, 0);
x_1239 = lean_ctor_get(x_1104, 1);
lean_inc(x_1239);
lean_inc(x_1238);
lean_dec(x_1104);
x_1240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1240, 0, x_1238);
lean_ctor_set(x_1240, 1, x_1239);
return x_1240;
}
}
}
else
{
lean_object* x_1241; lean_object* x_1242; uint8_t x_1243; lean_object* x_1244; lean_object* x_1398; uint8_t x_1399; 
x_1241 = lean_ctor_get(x_1093, 1);
lean_inc(x_1241);
lean_dec(x_1093);
x_1242 = lean_ctor_get(x_1094, 0);
lean_inc(x_1242);
lean_dec(x_1094);
x_1398 = lean_array_get_size(x_1242);
x_1399 = lean_nat_dec_lt(x_782, x_1398);
if (x_1399 == 0)
{
lean_object* x_1400; size_t x_1401; size_t x_1402; lean_object* x_1403; lean_object* x_1404; 
x_1400 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
x_1401 = lean_usize_of_nat(x_1398);
lean_dec(x_1398);
x_1402 = 0;
x_1403 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__5(x_14, x_1401, x_1402, x_1242);
x_1404 = l_Array_append___rarg(x_4, x_1403);
x_3 = x_1400;
x_4 = x_1404;
x_6 = x_1241;
goto _start;
}
else
{
uint8_t x_1406; 
x_1406 = lean_nat_dec_le(x_1398, x_1398);
if (x_1406 == 0)
{
lean_object* x_1407; size_t x_1408; size_t x_1409; lean_object* x_1410; lean_object* x_1411; 
x_1407 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
x_1408 = lean_usize_of_nat(x_1398);
lean_dec(x_1398);
x_1409 = 0;
x_1410 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__6(x_14, x_1408, x_1409, x_1242);
x_1411 = l_Array_append___rarg(x_4, x_1410);
x_3 = x_1407;
x_4 = x_1411;
x_6 = x_1241;
goto _start;
}
else
{
size_t x_1413; size_t x_1414; lean_object* x_1415; 
x_1413 = 0;
x_1414 = lean_usize_of_nat(x_1398);
lean_dec(x_1398);
lean_inc(x_5);
x_1415 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_expandFunBinders_loop___spec__7(x_1242, x_1413, x_1414, x_5, x_1241);
if (lean_obj_tag(x_1415) == 0)
{
lean_object* x_1416; uint8_t x_1417; 
x_1416 = lean_ctor_get(x_1415, 0);
lean_inc(x_1416);
x_1417 = lean_unbox(x_1416);
lean_dec(x_1416);
if (x_1417 == 0)
{
lean_object* x_1418; uint8_t x_1419; 
x_1418 = lean_ctor_get(x_1415, 1);
lean_inc(x_1418);
lean_dec(x_1415);
x_1419 = 1;
x_1243 = x_1419;
x_1244 = x_1418;
goto block_1397;
}
else
{
lean_object* x_1420; uint8_t x_1421; 
x_1420 = lean_ctor_get(x_1415, 1);
lean_inc(x_1420);
lean_dec(x_1415);
x_1421 = 0;
x_1243 = x_1421;
x_1244 = x_1420;
goto block_1397;
}
}
else
{
uint8_t x_1422; 
lean_dec(x_1242);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_1422 = !lean_is_exclusive(x_1415);
if (x_1422 == 0)
{
return x_1415;
}
else
{
lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; 
x_1423 = lean_ctor_get(x_1415, 0);
x_1424 = lean_ctor_get(x_1415, 1);
lean_inc(x_1424);
lean_inc(x_1423);
lean_dec(x_1415);
x_1425 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1425, 0, x_1423);
lean_ctor_set(x_1425, 1, x_1424);
return x_1425;
}
}
}
}
block_1397:
{
if (x_1243 == 0)
{
uint8_t x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; 
lean_dec(x_1242);
x_1245 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_1246 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_1245, x_5, x_1244);
x_1247 = lean_ctor_get(x_1246, 0);
lean_inc(x_1247);
x_1248 = lean_ctor_get(x_1246, 1);
lean_inc(x_1248);
lean_dec(x_1246);
x_1249 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
lean_inc(x_14);
x_1250 = l_Lean_mkHole(x_14, x_1245);
lean_inc(x_1247);
x_1251 = l_Lean_Elab_Term_mkExplicitBinder(x_1247, x_1250);
x_1252 = lean_array_push(x_4, x_1251);
lean_inc(x_5);
x_1253 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1249, x_1252, x_5, x_1248);
if (lean_obj_tag(x_1253) == 0)
{
lean_object* x_1254; lean_object* x_1255; uint8_t x_1256; 
x_1254 = lean_ctor_get(x_1253, 0);
lean_inc(x_1254);
x_1255 = lean_ctor_get(x_1254, 1);
lean_inc(x_1255);
x_1256 = !lean_is_exclusive(x_1253);
if (x_1256 == 0)
{
lean_object* x_1257; uint8_t x_1258; 
x_1257 = lean_ctor_get(x_1253, 0);
lean_dec(x_1257);
x_1258 = !lean_is_exclusive(x_1254);
if (x_1258 == 0)
{
lean_object* x_1259; uint8_t x_1260; 
x_1259 = lean_ctor_get(x_1254, 1);
lean_dec(x_1259);
x_1260 = !lean_is_exclusive(x_1255);
if (x_1260 == 0)
{
lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; uint8_t x_1288; lean_object* x_1289; 
x_1261 = lean_ctor_get(x_1255, 0);
x_1262 = lean_ctor_get(x_1255, 1);
lean_dec(x_1262);
x_1263 = lean_ctor_get(x_5, 5);
lean_inc(x_1263);
lean_dec(x_5);
x_1264 = l_Lean_SourceInfo_fromRef(x_1263, x_1245);
x_1265 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1264);
x_1266 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1266, 0, x_1264);
lean_ctor_set(x_1266, 1, x_1265);
x_1267 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1268 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1264);
x_1269 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1269, 0, x_1264);
lean_ctor_set(x_1269, 1, x_1267);
lean_ctor_set(x_1269, 2, x_1268);
x_1270 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1269);
lean_inc(x_1264);
x_1271 = l_Lean_Syntax_node2(x_1264, x_1270, x_1269, x_1247);
lean_inc(x_1264);
x_1272 = l_Lean_Syntax_node1(x_1264, x_1267, x_1271);
x_1273 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1264);
x_1274 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1274, 0, x_1264);
lean_ctor_set(x_1274, 1, x_1273);
x_1275 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1264);
x_1276 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1276, 0, x_1264);
lean_ctor_set(x_1276, 1, x_1275);
lean_inc(x_1264);
x_1277 = l_Lean_Syntax_node1(x_1264, x_1267, x_14);
lean_inc(x_1264);
x_1278 = l_Lean_Syntax_node1(x_1264, x_1267, x_1277);
x_1279 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1264);
x_1280 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1280, 0, x_1264);
lean_ctor_set(x_1280, 1, x_1279);
x_1281 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1264);
x_1282 = l_Lean_Syntax_node4(x_1264, x_1281, x_1276, x_1278, x_1280, x_1261);
lean_inc(x_1264);
x_1283 = l_Lean_Syntax_node1(x_1264, x_1267, x_1282);
x_1284 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1264);
x_1285 = l_Lean_Syntax_node1(x_1264, x_1284, x_1283);
x_1286 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1269);
x_1287 = l_Lean_Syntax_node6(x_1264, x_1286, x_1266, x_1269, x_1269, x_1272, x_1274, x_1285);
x_1288 = 1;
x_1289 = lean_box(x_1288);
lean_ctor_set(x_1255, 1, x_1289);
lean_ctor_set(x_1255, 0, x_1287);
return x_1253;
}
else
{
lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; uint8_t x_1316; lean_object* x_1317; lean_object* x_1318; 
x_1290 = lean_ctor_get(x_1255, 0);
lean_inc(x_1290);
lean_dec(x_1255);
x_1291 = lean_ctor_get(x_5, 5);
lean_inc(x_1291);
lean_dec(x_5);
x_1292 = l_Lean_SourceInfo_fromRef(x_1291, x_1245);
x_1293 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1292);
x_1294 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1294, 0, x_1292);
lean_ctor_set(x_1294, 1, x_1293);
x_1295 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1296 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1292);
x_1297 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1297, 0, x_1292);
lean_ctor_set(x_1297, 1, x_1295);
lean_ctor_set(x_1297, 2, x_1296);
x_1298 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1297);
lean_inc(x_1292);
x_1299 = l_Lean_Syntax_node2(x_1292, x_1298, x_1297, x_1247);
lean_inc(x_1292);
x_1300 = l_Lean_Syntax_node1(x_1292, x_1295, x_1299);
x_1301 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1292);
x_1302 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1302, 0, x_1292);
lean_ctor_set(x_1302, 1, x_1301);
x_1303 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1292);
x_1304 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1304, 0, x_1292);
lean_ctor_set(x_1304, 1, x_1303);
lean_inc(x_1292);
x_1305 = l_Lean_Syntax_node1(x_1292, x_1295, x_14);
lean_inc(x_1292);
x_1306 = l_Lean_Syntax_node1(x_1292, x_1295, x_1305);
x_1307 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1292);
x_1308 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1308, 0, x_1292);
lean_ctor_set(x_1308, 1, x_1307);
x_1309 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1292);
x_1310 = l_Lean_Syntax_node4(x_1292, x_1309, x_1304, x_1306, x_1308, x_1290);
lean_inc(x_1292);
x_1311 = l_Lean_Syntax_node1(x_1292, x_1295, x_1310);
x_1312 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1292);
x_1313 = l_Lean_Syntax_node1(x_1292, x_1312, x_1311);
x_1314 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1297);
x_1315 = l_Lean_Syntax_node6(x_1292, x_1314, x_1294, x_1297, x_1297, x_1300, x_1302, x_1313);
x_1316 = 1;
x_1317 = lean_box(x_1316);
x_1318 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1318, 0, x_1315);
lean_ctor_set(x_1318, 1, x_1317);
lean_ctor_set(x_1254, 1, x_1318);
return x_1253;
}
}
else
{
lean_object* x_1319; lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; uint8_t x_1347; lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; 
x_1319 = lean_ctor_get(x_1254, 0);
lean_inc(x_1319);
lean_dec(x_1254);
x_1320 = lean_ctor_get(x_1255, 0);
lean_inc(x_1320);
if (lean_is_exclusive(x_1255)) {
 lean_ctor_release(x_1255, 0);
 lean_ctor_release(x_1255, 1);
 x_1321 = x_1255;
} else {
 lean_dec_ref(x_1255);
 x_1321 = lean_box(0);
}
x_1322 = lean_ctor_get(x_5, 5);
lean_inc(x_1322);
lean_dec(x_5);
x_1323 = l_Lean_SourceInfo_fromRef(x_1322, x_1245);
x_1324 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1323);
x_1325 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1325, 0, x_1323);
lean_ctor_set(x_1325, 1, x_1324);
x_1326 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1327 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1323);
x_1328 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1328, 0, x_1323);
lean_ctor_set(x_1328, 1, x_1326);
lean_ctor_set(x_1328, 2, x_1327);
x_1329 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1328);
lean_inc(x_1323);
x_1330 = l_Lean_Syntax_node2(x_1323, x_1329, x_1328, x_1247);
lean_inc(x_1323);
x_1331 = l_Lean_Syntax_node1(x_1323, x_1326, x_1330);
x_1332 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1323);
x_1333 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1333, 0, x_1323);
lean_ctor_set(x_1333, 1, x_1332);
x_1334 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1323);
x_1335 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1335, 0, x_1323);
lean_ctor_set(x_1335, 1, x_1334);
lean_inc(x_1323);
x_1336 = l_Lean_Syntax_node1(x_1323, x_1326, x_14);
lean_inc(x_1323);
x_1337 = l_Lean_Syntax_node1(x_1323, x_1326, x_1336);
x_1338 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1323);
x_1339 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1339, 0, x_1323);
lean_ctor_set(x_1339, 1, x_1338);
x_1340 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1323);
x_1341 = l_Lean_Syntax_node4(x_1323, x_1340, x_1335, x_1337, x_1339, x_1320);
lean_inc(x_1323);
x_1342 = l_Lean_Syntax_node1(x_1323, x_1326, x_1341);
x_1343 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1323);
x_1344 = l_Lean_Syntax_node1(x_1323, x_1343, x_1342);
x_1345 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1328);
x_1346 = l_Lean_Syntax_node6(x_1323, x_1345, x_1325, x_1328, x_1328, x_1331, x_1333, x_1344);
x_1347 = 1;
x_1348 = lean_box(x_1347);
if (lean_is_scalar(x_1321)) {
 x_1349 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1349 = x_1321;
}
lean_ctor_set(x_1349, 0, x_1346);
lean_ctor_set(x_1349, 1, x_1348);
x_1350 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1350, 0, x_1319);
lean_ctor_set(x_1350, 1, x_1349);
lean_ctor_set(x_1253, 0, x_1350);
return x_1253;
}
}
else
{
lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; lean_object* x_1380; uint8_t x_1381; lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; 
x_1351 = lean_ctor_get(x_1253, 1);
lean_inc(x_1351);
lean_dec(x_1253);
x_1352 = lean_ctor_get(x_1254, 0);
lean_inc(x_1352);
if (lean_is_exclusive(x_1254)) {
 lean_ctor_release(x_1254, 0);
 lean_ctor_release(x_1254, 1);
 x_1353 = x_1254;
} else {
 lean_dec_ref(x_1254);
 x_1353 = lean_box(0);
}
x_1354 = lean_ctor_get(x_1255, 0);
lean_inc(x_1354);
if (lean_is_exclusive(x_1255)) {
 lean_ctor_release(x_1255, 0);
 lean_ctor_release(x_1255, 1);
 x_1355 = x_1255;
} else {
 lean_dec_ref(x_1255);
 x_1355 = lean_box(0);
}
x_1356 = lean_ctor_get(x_5, 5);
lean_inc(x_1356);
lean_dec(x_5);
x_1357 = l_Lean_SourceInfo_fromRef(x_1356, x_1245);
x_1358 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1357);
x_1359 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1359, 0, x_1357);
lean_ctor_set(x_1359, 1, x_1358);
x_1360 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1361 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1357);
x_1362 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1362, 0, x_1357);
lean_ctor_set(x_1362, 1, x_1360);
lean_ctor_set(x_1362, 2, x_1361);
x_1363 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1362);
lean_inc(x_1357);
x_1364 = l_Lean_Syntax_node2(x_1357, x_1363, x_1362, x_1247);
lean_inc(x_1357);
x_1365 = l_Lean_Syntax_node1(x_1357, x_1360, x_1364);
x_1366 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1357);
x_1367 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1367, 0, x_1357);
lean_ctor_set(x_1367, 1, x_1366);
x_1368 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1357);
x_1369 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1369, 0, x_1357);
lean_ctor_set(x_1369, 1, x_1368);
lean_inc(x_1357);
x_1370 = l_Lean_Syntax_node1(x_1357, x_1360, x_14);
lean_inc(x_1357);
x_1371 = l_Lean_Syntax_node1(x_1357, x_1360, x_1370);
x_1372 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1357);
x_1373 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1373, 0, x_1357);
lean_ctor_set(x_1373, 1, x_1372);
x_1374 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1357);
x_1375 = l_Lean_Syntax_node4(x_1357, x_1374, x_1369, x_1371, x_1373, x_1354);
lean_inc(x_1357);
x_1376 = l_Lean_Syntax_node1(x_1357, x_1360, x_1375);
x_1377 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1357);
x_1378 = l_Lean_Syntax_node1(x_1357, x_1377, x_1376);
x_1379 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1362);
x_1380 = l_Lean_Syntax_node6(x_1357, x_1379, x_1359, x_1362, x_1362, x_1365, x_1367, x_1378);
x_1381 = 1;
x_1382 = lean_box(x_1381);
if (lean_is_scalar(x_1355)) {
 x_1383 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1383 = x_1355;
}
lean_ctor_set(x_1383, 0, x_1380);
lean_ctor_set(x_1383, 1, x_1382);
if (lean_is_scalar(x_1353)) {
 x_1384 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1384 = x_1353;
}
lean_ctor_set(x_1384, 0, x_1352);
lean_ctor_set(x_1384, 1, x_1383);
x_1385 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1385, 0, x_1384);
lean_ctor_set(x_1385, 1, x_1351);
return x_1385;
}
}
else
{
uint8_t x_1386; 
lean_dec(x_1247);
lean_dec(x_14);
lean_dec(x_5);
x_1386 = !lean_is_exclusive(x_1253);
if (x_1386 == 0)
{
return x_1253;
}
else
{
lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; 
x_1387 = lean_ctor_get(x_1253, 0);
x_1388 = lean_ctor_get(x_1253, 1);
lean_inc(x_1388);
lean_inc(x_1387);
lean_dec(x_1253);
x_1389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1389, 0, x_1387);
lean_ctor_set(x_1389, 1, x_1388);
return x_1389;
}
}
}
else
{
lean_object* x_1390; lean_object* x_1391; size_t x_1392; size_t x_1393; lean_object* x_1394; lean_object* x_1395; 
x_1390 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
x_1391 = lean_array_get_size(x_1242);
x_1392 = lean_usize_of_nat(x_1391);
lean_dec(x_1391);
x_1393 = 0;
x_1394 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__4(x_14, x_1392, x_1393, x_1242);
x_1395 = l_Array_append___rarg(x_4, x_1394);
x_3 = x_1390;
x_4 = x_1395;
x_6 = x_1244;
goto _start;
}
}
}
}
}
else
{
uint8_t x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; 
lean_dec(x_780);
x_1426 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_1427 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_1426, x_5, x_6);
x_1428 = lean_ctor_get(x_1427, 0);
lean_inc(x_1428);
x_1429 = lean_ctor_get(x_1427, 1);
lean_inc(x_1429);
lean_dec(x_1427);
x_1430 = lean_nat_add(x_3, x_779);
lean_dec(x_3);
lean_inc(x_14);
x_1431 = l_Lean_mkHole(x_14, x_1426);
lean_inc(x_1428);
x_1432 = l_Lean_Elab_Term_mkExplicitBinder(x_1428, x_1431);
x_1433 = lean_array_push(x_4, x_1432);
lean_inc(x_5);
x_1434 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1430, x_1433, x_5, x_1429);
if (lean_obj_tag(x_1434) == 0)
{
lean_object* x_1435; lean_object* x_1436; uint8_t x_1437; 
x_1435 = lean_ctor_get(x_1434, 0);
lean_inc(x_1435);
x_1436 = lean_ctor_get(x_1435, 1);
lean_inc(x_1436);
x_1437 = !lean_is_exclusive(x_1434);
if (x_1437 == 0)
{
lean_object* x_1438; uint8_t x_1439; 
x_1438 = lean_ctor_get(x_1434, 0);
lean_dec(x_1438);
x_1439 = !lean_is_exclusive(x_1435);
if (x_1439 == 0)
{
lean_object* x_1440; uint8_t x_1441; 
x_1440 = lean_ctor_get(x_1435, 1);
lean_dec(x_1440);
x_1441 = !lean_is_exclusive(x_1436);
if (x_1441 == 0)
{
lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; uint8_t x_1469; lean_object* x_1470; 
x_1442 = lean_ctor_get(x_1436, 0);
x_1443 = lean_ctor_get(x_1436, 1);
lean_dec(x_1443);
x_1444 = lean_ctor_get(x_5, 5);
lean_inc(x_1444);
lean_dec(x_5);
x_1445 = l_Lean_SourceInfo_fromRef(x_1444, x_1426);
x_1446 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1445);
x_1447 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1447, 0, x_1445);
lean_ctor_set(x_1447, 1, x_1446);
x_1448 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1449 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1445);
x_1450 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1450, 0, x_1445);
lean_ctor_set(x_1450, 1, x_1448);
lean_ctor_set(x_1450, 2, x_1449);
x_1451 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1450);
lean_inc(x_1445);
x_1452 = l_Lean_Syntax_node2(x_1445, x_1451, x_1450, x_1428);
lean_inc(x_1445);
x_1453 = l_Lean_Syntax_node1(x_1445, x_1448, x_1452);
x_1454 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1445);
x_1455 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1455, 0, x_1445);
lean_ctor_set(x_1455, 1, x_1454);
x_1456 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1445);
x_1457 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1457, 0, x_1445);
lean_ctor_set(x_1457, 1, x_1456);
lean_inc(x_1445);
x_1458 = l_Lean_Syntax_node1(x_1445, x_1448, x_14);
lean_inc(x_1445);
x_1459 = l_Lean_Syntax_node1(x_1445, x_1448, x_1458);
x_1460 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1445);
x_1461 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1461, 0, x_1445);
lean_ctor_set(x_1461, 1, x_1460);
x_1462 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1445);
x_1463 = l_Lean_Syntax_node4(x_1445, x_1462, x_1457, x_1459, x_1461, x_1442);
lean_inc(x_1445);
x_1464 = l_Lean_Syntax_node1(x_1445, x_1448, x_1463);
x_1465 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1445);
x_1466 = l_Lean_Syntax_node1(x_1445, x_1465, x_1464);
x_1467 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1450);
x_1468 = l_Lean_Syntax_node6(x_1445, x_1467, x_1447, x_1450, x_1450, x_1453, x_1455, x_1466);
x_1469 = 1;
x_1470 = lean_box(x_1469);
lean_ctor_set(x_1436, 1, x_1470);
lean_ctor_set(x_1436, 0, x_1468);
return x_1434;
}
else
{
lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; lean_object* x_1477; lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; lean_object* x_1496; uint8_t x_1497; lean_object* x_1498; lean_object* x_1499; 
x_1471 = lean_ctor_get(x_1436, 0);
lean_inc(x_1471);
lean_dec(x_1436);
x_1472 = lean_ctor_get(x_5, 5);
lean_inc(x_1472);
lean_dec(x_5);
x_1473 = l_Lean_SourceInfo_fromRef(x_1472, x_1426);
x_1474 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1473);
x_1475 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1475, 0, x_1473);
lean_ctor_set(x_1475, 1, x_1474);
x_1476 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1477 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1473);
x_1478 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1478, 0, x_1473);
lean_ctor_set(x_1478, 1, x_1476);
lean_ctor_set(x_1478, 2, x_1477);
x_1479 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1478);
lean_inc(x_1473);
x_1480 = l_Lean_Syntax_node2(x_1473, x_1479, x_1478, x_1428);
lean_inc(x_1473);
x_1481 = l_Lean_Syntax_node1(x_1473, x_1476, x_1480);
x_1482 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1473);
x_1483 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1483, 0, x_1473);
lean_ctor_set(x_1483, 1, x_1482);
x_1484 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1473);
x_1485 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1485, 0, x_1473);
lean_ctor_set(x_1485, 1, x_1484);
lean_inc(x_1473);
x_1486 = l_Lean_Syntax_node1(x_1473, x_1476, x_14);
lean_inc(x_1473);
x_1487 = l_Lean_Syntax_node1(x_1473, x_1476, x_1486);
x_1488 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1473);
x_1489 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1489, 0, x_1473);
lean_ctor_set(x_1489, 1, x_1488);
x_1490 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1473);
x_1491 = l_Lean_Syntax_node4(x_1473, x_1490, x_1485, x_1487, x_1489, x_1471);
lean_inc(x_1473);
x_1492 = l_Lean_Syntax_node1(x_1473, x_1476, x_1491);
x_1493 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1473);
x_1494 = l_Lean_Syntax_node1(x_1473, x_1493, x_1492);
x_1495 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1478);
x_1496 = l_Lean_Syntax_node6(x_1473, x_1495, x_1475, x_1478, x_1478, x_1481, x_1483, x_1494);
x_1497 = 1;
x_1498 = lean_box(x_1497);
x_1499 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1499, 0, x_1496);
lean_ctor_set(x_1499, 1, x_1498);
lean_ctor_set(x_1435, 1, x_1499);
return x_1434;
}
}
else
{
lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; uint8_t x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; 
x_1500 = lean_ctor_get(x_1435, 0);
lean_inc(x_1500);
lean_dec(x_1435);
x_1501 = lean_ctor_get(x_1436, 0);
lean_inc(x_1501);
if (lean_is_exclusive(x_1436)) {
 lean_ctor_release(x_1436, 0);
 lean_ctor_release(x_1436, 1);
 x_1502 = x_1436;
} else {
 lean_dec_ref(x_1436);
 x_1502 = lean_box(0);
}
x_1503 = lean_ctor_get(x_5, 5);
lean_inc(x_1503);
lean_dec(x_5);
x_1504 = l_Lean_SourceInfo_fromRef(x_1503, x_1426);
x_1505 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1504);
x_1506 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1506, 0, x_1504);
lean_ctor_set(x_1506, 1, x_1505);
x_1507 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1508 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1504);
x_1509 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1509, 0, x_1504);
lean_ctor_set(x_1509, 1, x_1507);
lean_ctor_set(x_1509, 2, x_1508);
x_1510 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1509);
lean_inc(x_1504);
x_1511 = l_Lean_Syntax_node2(x_1504, x_1510, x_1509, x_1428);
lean_inc(x_1504);
x_1512 = l_Lean_Syntax_node1(x_1504, x_1507, x_1511);
x_1513 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1504);
x_1514 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1514, 0, x_1504);
lean_ctor_set(x_1514, 1, x_1513);
x_1515 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1504);
x_1516 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1516, 0, x_1504);
lean_ctor_set(x_1516, 1, x_1515);
lean_inc(x_1504);
x_1517 = l_Lean_Syntax_node1(x_1504, x_1507, x_14);
lean_inc(x_1504);
x_1518 = l_Lean_Syntax_node1(x_1504, x_1507, x_1517);
x_1519 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1504);
x_1520 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1520, 0, x_1504);
lean_ctor_set(x_1520, 1, x_1519);
x_1521 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1504);
x_1522 = l_Lean_Syntax_node4(x_1504, x_1521, x_1516, x_1518, x_1520, x_1501);
lean_inc(x_1504);
x_1523 = l_Lean_Syntax_node1(x_1504, x_1507, x_1522);
x_1524 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1504);
x_1525 = l_Lean_Syntax_node1(x_1504, x_1524, x_1523);
x_1526 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1509);
x_1527 = l_Lean_Syntax_node6(x_1504, x_1526, x_1506, x_1509, x_1509, x_1512, x_1514, x_1525);
x_1528 = 1;
x_1529 = lean_box(x_1528);
if (lean_is_scalar(x_1502)) {
 x_1530 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1530 = x_1502;
}
lean_ctor_set(x_1530, 0, x_1527);
lean_ctor_set(x_1530, 1, x_1529);
x_1531 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1531, 0, x_1500);
lean_ctor_set(x_1531, 1, x_1530);
lean_ctor_set(x_1434, 0, x_1531);
return x_1434;
}
}
else
{
lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; lean_object* x_1548; lean_object* x_1549; lean_object* x_1550; lean_object* x_1551; lean_object* x_1552; lean_object* x_1553; lean_object* x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; uint8_t x_1562; lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; 
x_1532 = lean_ctor_get(x_1434, 1);
lean_inc(x_1532);
lean_dec(x_1434);
x_1533 = lean_ctor_get(x_1435, 0);
lean_inc(x_1533);
if (lean_is_exclusive(x_1435)) {
 lean_ctor_release(x_1435, 0);
 lean_ctor_release(x_1435, 1);
 x_1534 = x_1435;
} else {
 lean_dec_ref(x_1435);
 x_1534 = lean_box(0);
}
x_1535 = lean_ctor_get(x_1436, 0);
lean_inc(x_1535);
if (lean_is_exclusive(x_1436)) {
 lean_ctor_release(x_1436, 0);
 lean_ctor_release(x_1436, 1);
 x_1536 = x_1436;
} else {
 lean_dec_ref(x_1436);
 x_1536 = lean_box(0);
}
x_1537 = lean_ctor_get(x_5, 5);
lean_inc(x_1537);
lean_dec(x_5);
x_1538 = l_Lean_SourceInfo_fromRef(x_1537, x_1426);
x_1539 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1538);
x_1540 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1540, 0, x_1538);
lean_ctor_set(x_1540, 1, x_1539);
x_1541 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1542 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1538);
x_1543 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1543, 0, x_1538);
lean_ctor_set(x_1543, 1, x_1541);
lean_ctor_set(x_1543, 2, x_1542);
x_1544 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1543);
lean_inc(x_1538);
x_1545 = l_Lean_Syntax_node2(x_1538, x_1544, x_1543, x_1428);
lean_inc(x_1538);
x_1546 = l_Lean_Syntax_node1(x_1538, x_1541, x_1545);
x_1547 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1538);
x_1548 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1548, 0, x_1538);
lean_ctor_set(x_1548, 1, x_1547);
x_1549 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1538);
x_1550 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1550, 0, x_1538);
lean_ctor_set(x_1550, 1, x_1549);
lean_inc(x_1538);
x_1551 = l_Lean_Syntax_node1(x_1538, x_1541, x_14);
lean_inc(x_1538);
x_1552 = l_Lean_Syntax_node1(x_1538, x_1541, x_1551);
x_1553 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1538);
x_1554 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1554, 0, x_1538);
lean_ctor_set(x_1554, 1, x_1553);
x_1555 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1538);
x_1556 = l_Lean_Syntax_node4(x_1538, x_1555, x_1550, x_1552, x_1554, x_1535);
lean_inc(x_1538);
x_1557 = l_Lean_Syntax_node1(x_1538, x_1541, x_1556);
x_1558 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1538);
x_1559 = l_Lean_Syntax_node1(x_1538, x_1558, x_1557);
x_1560 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1543);
x_1561 = l_Lean_Syntax_node6(x_1538, x_1560, x_1540, x_1543, x_1543, x_1546, x_1548, x_1559);
x_1562 = 1;
x_1563 = lean_box(x_1562);
if (lean_is_scalar(x_1536)) {
 x_1564 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1564 = x_1536;
}
lean_ctor_set(x_1564, 0, x_1561);
lean_ctor_set(x_1564, 1, x_1563);
if (lean_is_scalar(x_1534)) {
 x_1565 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1565 = x_1534;
}
lean_ctor_set(x_1565, 0, x_1533);
lean_ctor_set(x_1565, 1, x_1564);
x_1566 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1566, 0, x_1565);
lean_ctor_set(x_1566, 1, x_1532);
return x_1566;
}
}
else
{
uint8_t x_1567; 
lean_dec(x_1428);
lean_dec(x_14);
lean_dec(x_5);
x_1567 = !lean_is_exclusive(x_1434);
if (x_1567 == 0)
{
return x_1434;
}
else
{
lean_object* x_1568; lean_object* x_1569; lean_object* x_1570; 
x_1568 = lean_ctor_get(x_1434, 0);
x_1569 = lean_ctor_get(x_1434, 1);
lean_inc(x_1569);
lean_inc(x_1568);
lean_dec(x_1434);
x_1570 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1570, 0, x_1568);
lean_ctor_set(x_1570, 1, x_1569);
return x_1570;
}
}
}
}
}
else
{
lean_object* x_1571; lean_object* x_1572; lean_object* x_1573; 
lean_dec(x_173);
x_1571 = lean_unsigned_to_nat(1u);
x_1572 = lean_nat_add(x_3, x_1571);
lean_dec(x_3);
x_1573 = lean_array_push(x_4, x_14);
x_3 = x_1572;
x_4 = x_1573;
goto _start;
}
}
else
{
lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; 
lean_dec(x_173);
x_1575 = lean_unsigned_to_nat(1u);
x_1576 = lean_nat_add(x_3, x_1575);
lean_dec(x_3);
x_1577 = lean_array_push(x_4, x_14);
x_3 = x_1576;
x_4 = x_1577;
goto _start;
}
}
else
{
lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; 
lean_dec(x_173);
x_1579 = lean_unsigned_to_nat(1u);
x_1580 = lean_nat_add(x_3, x_1579);
lean_dec(x_3);
x_1581 = lean_array_push(x_4, x_14);
x_3 = x_1580;
x_4 = x_1581;
goto _start;
}
}
else
{
lean_object* x_1583; lean_object* x_1584; lean_object* x_1585; 
lean_dec(x_173);
x_1583 = lean_unsigned_to_nat(1u);
x_1584 = lean_nat_add(x_3, x_1583);
lean_dec(x_3);
x_1585 = lean_array_push(x_4, x_14);
x_3 = x_1584;
x_4 = x_1585;
goto _start;
}
}
else
{
lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; 
lean_dec(x_173);
x_1587 = lean_unsigned_to_nat(1u);
x_1588 = lean_nat_add(x_3, x_1587);
lean_dec(x_3);
x_1589 = lean_array_push(x_4, x_14);
x_3 = x_1588;
x_4 = x_1589;
goto _start;
}
}
}
}
}
else
{
uint8_t x_1591; lean_object* x_1592; lean_object* x_1593; lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; lean_object* x_1597; lean_object* x_1598; lean_object* x_1599; lean_object* x_1600; 
lean_dec(x_172);
lean_dec(x_171);
lean_dec(x_170);
lean_dec(x_16);
lean_dec(x_15);
x_1591 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_1592 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_1591, x_5, x_6);
x_1593 = lean_ctor_get(x_1592, 0);
lean_inc(x_1593);
x_1594 = lean_ctor_get(x_1592, 1);
lean_inc(x_1594);
lean_dec(x_1592);
x_1595 = lean_unsigned_to_nat(1u);
x_1596 = lean_nat_add(x_3, x_1595);
lean_dec(x_3);
lean_inc(x_14);
x_1597 = l_Lean_mkHole(x_14, x_1591);
lean_inc(x_1593);
x_1598 = l_Lean_Elab_Term_mkExplicitBinder(x_1593, x_1597);
x_1599 = lean_array_push(x_4, x_1598);
lean_inc(x_5);
x_1600 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1596, x_1599, x_5, x_1594);
if (lean_obj_tag(x_1600) == 0)
{
lean_object* x_1601; lean_object* x_1602; uint8_t x_1603; 
x_1601 = lean_ctor_get(x_1600, 0);
lean_inc(x_1601);
x_1602 = lean_ctor_get(x_1601, 1);
lean_inc(x_1602);
x_1603 = !lean_is_exclusive(x_1600);
if (x_1603 == 0)
{
lean_object* x_1604; uint8_t x_1605; 
x_1604 = lean_ctor_get(x_1600, 0);
lean_dec(x_1604);
x_1605 = !lean_is_exclusive(x_1601);
if (x_1605 == 0)
{
lean_object* x_1606; uint8_t x_1607; 
x_1606 = lean_ctor_get(x_1601, 1);
lean_dec(x_1606);
x_1607 = !lean_is_exclusive(x_1602);
if (x_1607 == 0)
{
lean_object* x_1608; lean_object* x_1609; lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; lean_object* x_1614; lean_object* x_1615; lean_object* x_1616; lean_object* x_1617; lean_object* x_1618; lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; lean_object* x_1625; lean_object* x_1626; lean_object* x_1627; lean_object* x_1628; lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; lean_object* x_1634; uint8_t x_1635; lean_object* x_1636; 
x_1608 = lean_ctor_get(x_1602, 0);
x_1609 = lean_ctor_get(x_1602, 1);
lean_dec(x_1609);
x_1610 = lean_ctor_get(x_5, 5);
lean_inc(x_1610);
lean_dec(x_5);
x_1611 = l_Lean_SourceInfo_fromRef(x_1610, x_1591);
x_1612 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1611);
x_1613 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1613, 0, x_1611);
lean_ctor_set(x_1613, 1, x_1612);
x_1614 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1615 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1611);
x_1616 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1616, 0, x_1611);
lean_ctor_set(x_1616, 1, x_1614);
lean_ctor_set(x_1616, 2, x_1615);
x_1617 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1616);
lean_inc(x_1611);
x_1618 = l_Lean_Syntax_node2(x_1611, x_1617, x_1616, x_1593);
lean_inc(x_1611);
x_1619 = l_Lean_Syntax_node1(x_1611, x_1614, x_1618);
x_1620 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1611);
x_1621 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1621, 0, x_1611);
lean_ctor_set(x_1621, 1, x_1620);
x_1622 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1611);
x_1623 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1623, 0, x_1611);
lean_ctor_set(x_1623, 1, x_1622);
lean_inc(x_1611);
x_1624 = l_Lean_Syntax_node1(x_1611, x_1614, x_14);
lean_inc(x_1611);
x_1625 = l_Lean_Syntax_node1(x_1611, x_1614, x_1624);
x_1626 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1611);
x_1627 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1627, 0, x_1611);
lean_ctor_set(x_1627, 1, x_1626);
x_1628 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1611);
x_1629 = l_Lean_Syntax_node4(x_1611, x_1628, x_1623, x_1625, x_1627, x_1608);
lean_inc(x_1611);
x_1630 = l_Lean_Syntax_node1(x_1611, x_1614, x_1629);
x_1631 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1611);
x_1632 = l_Lean_Syntax_node1(x_1611, x_1631, x_1630);
x_1633 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1616);
x_1634 = l_Lean_Syntax_node6(x_1611, x_1633, x_1613, x_1616, x_1616, x_1619, x_1621, x_1632);
x_1635 = 1;
x_1636 = lean_box(x_1635);
lean_ctor_set(x_1602, 1, x_1636);
lean_ctor_set(x_1602, 0, x_1634);
return x_1600;
}
else
{
lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; lean_object* x_1641; lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; uint8_t x_1663; lean_object* x_1664; lean_object* x_1665; 
x_1637 = lean_ctor_get(x_1602, 0);
lean_inc(x_1637);
lean_dec(x_1602);
x_1638 = lean_ctor_get(x_5, 5);
lean_inc(x_1638);
lean_dec(x_5);
x_1639 = l_Lean_SourceInfo_fromRef(x_1638, x_1591);
x_1640 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1639);
x_1641 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1641, 0, x_1639);
lean_ctor_set(x_1641, 1, x_1640);
x_1642 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1643 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1639);
x_1644 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1644, 0, x_1639);
lean_ctor_set(x_1644, 1, x_1642);
lean_ctor_set(x_1644, 2, x_1643);
x_1645 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1644);
lean_inc(x_1639);
x_1646 = l_Lean_Syntax_node2(x_1639, x_1645, x_1644, x_1593);
lean_inc(x_1639);
x_1647 = l_Lean_Syntax_node1(x_1639, x_1642, x_1646);
x_1648 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1639);
x_1649 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1649, 0, x_1639);
lean_ctor_set(x_1649, 1, x_1648);
x_1650 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1639);
x_1651 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1651, 0, x_1639);
lean_ctor_set(x_1651, 1, x_1650);
lean_inc(x_1639);
x_1652 = l_Lean_Syntax_node1(x_1639, x_1642, x_14);
lean_inc(x_1639);
x_1653 = l_Lean_Syntax_node1(x_1639, x_1642, x_1652);
x_1654 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1639);
x_1655 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1655, 0, x_1639);
lean_ctor_set(x_1655, 1, x_1654);
x_1656 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1639);
x_1657 = l_Lean_Syntax_node4(x_1639, x_1656, x_1651, x_1653, x_1655, x_1637);
lean_inc(x_1639);
x_1658 = l_Lean_Syntax_node1(x_1639, x_1642, x_1657);
x_1659 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1639);
x_1660 = l_Lean_Syntax_node1(x_1639, x_1659, x_1658);
x_1661 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1644);
x_1662 = l_Lean_Syntax_node6(x_1639, x_1661, x_1641, x_1644, x_1644, x_1647, x_1649, x_1660);
x_1663 = 1;
x_1664 = lean_box(x_1663);
x_1665 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1665, 0, x_1662);
lean_ctor_set(x_1665, 1, x_1664);
lean_ctor_set(x_1601, 1, x_1665);
return x_1600;
}
}
else
{
lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; lean_object* x_1671; lean_object* x_1672; lean_object* x_1673; lean_object* x_1674; lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; lean_object* x_1680; lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; lean_object* x_1690; lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; uint8_t x_1694; lean_object* x_1695; lean_object* x_1696; lean_object* x_1697; 
x_1666 = lean_ctor_get(x_1601, 0);
lean_inc(x_1666);
lean_dec(x_1601);
x_1667 = lean_ctor_get(x_1602, 0);
lean_inc(x_1667);
if (lean_is_exclusive(x_1602)) {
 lean_ctor_release(x_1602, 0);
 lean_ctor_release(x_1602, 1);
 x_1668 = x_1602;
} else {
 lean_dec_ref(x_1602);
 x_1668 = lean_box(0);
}
x_1669 = lean_ctor_get(x_5, 5);
lean_inc(x_1669);
lean_dec(x_5);
x_1670 = l_Lean_SourceInfo_fromRef(x_1669, x_1591);
x_1671 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1670);
x_1672 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1672, 0, x_1670);
lean_ctor_set(x_1672, 1, x_1671);
x_1673 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1674 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1670);
x_1675 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1675, 0, x_1670);
lean_ctor_set(x_1675, 1, x_1673);
lean_ctor_set(x_1675, 2, x_1674);
x_1676 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1675);
lean_inc(x_1670);
x_1677 = l_Lean_Syntax_node2(x_1670, x_1676, x_1675, x_1593);
lean_inc(x_1670);
x_1678 = l_Lean_Syntax_node1(x_1670, x_1673, x_1677);
x_1679 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1670);
x_1680 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1680, 0, x_1670);
lean_ctor_set(x_1680, 1, x_1679);
x_1681 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1670);
x_1682 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1682, 0, x_1670);
lean_ctor_set(x_1682, 1, x_1681);
lean_inc(x_1670);
x_1683 = l_Lean_Syntax_node1(x_1670, x_1673, x_14);
lean_inc(x_1670);
x_1684 = l_Lean_Syntax_node1(x_1670, x_1673, x_1683);
x_1685 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1670);
x_1686 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1686, 0, x_1670);
lean_ctor_set(x_1686, 1, x_1685);
x_1687 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1670);
x_1688 = l_Lean_Syntax_node4(x_1670, x_1687, x_1682, x_1684, x_1686, x_1667);
lean_inc(x_1670);
x_1689 = l_Lean_Syntax_node1(x_1670, x_1673, x_1688);
x_1690 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1670);
x_1691 = l_Lean_Syntax_node1(x_1670, x_1690, x_1689);
x_1692 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1675);
x_1693 = l_Lean_Syntax_node6(x_1670, x_1692, x_1672, x_1675, x_1675, x_1678, x_1680, x_1691);
x_1694 = 1;
x_1695 = lean_box(x_1694);
if (lean_is_scalar(x_1668)) {
 x_1696 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1696 = x_1668;
}
lean_ctor_set(x_1696, 0, x_1693);
lean_ctor_set(x_1696, 1, x_1695);
x_1697 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1697, 0, x_1666);
lean_ctor_set(x_1697, 1, x_1696);
lean_ctor_set(x_1600, 0, x_1697);
return x_1600;
}
}
else
{
lean_object* x_1698; lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; lean_object* x_1702; lean_object* x_1703; lean_object* x_1704; lean_object* x_1705; lean_object* x_1706; lean_object* x_1707; lean_object* x_1708; lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; lean_object* x_1713; lean_object* x_1714; lean_object* x_1715; lean_object* x_1716; lean_object* x_1717; lean_object* x_1718; lean_object* x_1719; lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; lean_object* x_1724; lean_object* x_1725; lean_object* x_1726; lean_object* x_1727; uint8_t x_1728; lean_object* x_1729; lean_object* x_1730; lean_object* x_1731; lean_object* x_1732; 
x_1698 = lean_ctor_get(x_1600, 1);
lean_inc(x_1698);
lean_dec(x_1600);
x_1699 = lean_ctor_get(x_1601, 0);
lean_inc(x_1699);
if (lean_is_exclusive(x_1601)) {
 lean_ctor_release(x_1601, 0);
 lean_ctor_release(x_1601, 1);
 x_1700 = x_1601;
} else {
 lean_dec_ref(x_1601);
 x_1700 = lean_box(0);
}
x_1701 = lean_ctor_get(x_1602, 0);
lean_inc(x_1701);
if (lean_is_exclusive(x_1602)) {
 lean_ctor_release(x_1602, 0);
 lean_ctor_release(x_1602, 1);
 x_1702 = x_1602;
} else {
 lean_dec_ref(x_1602);
 x_1702 = lean_box(0);
}
x_1703 = lean_ctor_get(x_5, 5);
lean_inc(x_1703);
lean_dec(x_5);
x_1704 = l_Lean_SourceInfo_fromRef(x_1703, x_1591);
x_1705 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1704);
x_1706 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1706, 0, x_1704);
lean_ctor_set(x_1706, 1, x_1705);
x_1707 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1708 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1704);
x_1709 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1709, 0, x_1704);
lean_ctor_set(x_1709, 1, x_1707);
lean_ctor_set(x_1709, 2, x_1708);
x_1710 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1709);
lean_inc(x_1704);
x_1711 = l_Lean_Syntax_node2(x_1704, x_1710, x_1709, x_1593);
lean_inc(x_1704);
x_1712 = l_Lean_Syntax_node1(x_1704, x_1707, x_1711);
x_1713 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1704);
x_1714 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1714, 0, x_1704);
lean_ctor_set(x_1714, 1, x_1713);
x_1715 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1704);
x_1716 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1716, 0, x_1704);
lean_ctor_set(x_1716, 1, x_1715);
lean_inc(x_1704);
x_1717 = l_Lean_Syntax_node1(x_1704, x_1707, x_14);
lean_inc(x_1704);
x_1718 = l_Lean_Syntax_node1(x_1704, x_1707, x_1717);
x_1719 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1704);
x_1720 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1720, 0, x_1704);
lean_ctor_set(x_1720, 1, x_1719);
x_1721 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1704);
x_1722 = l_Lean_Syntax_node4(x_1704, x_1721, x_1716, x_1718, x_1720, x_1701);
lean_inc(x_1704);
x_1723 = l_Lean_Syntax_node1(x_1704, x_1707, x_1722);
x_1724 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1704);
x_1725 = l_Lean_Syntax_node1(x_1704, x_1724, x_1723);
x_1726 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1709);
x_1727 = l_Lean_Syntax_node6(x_1704, x_1726, x_1706, x_1709, x_1709, x_1712, x_1714, x_1725);
x_1728 = 1;
x_1729 = lean_box(x_1728);
if (lean_is_scalar(x_1702)) {
 x_1730 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1730 = x_1702;
}
lean_ctor_set(x_1730, 0, x_1727);
lean_ctor_set(x_1730, 1, x_1729);
if (lean_is_scalar(x_1700)) {
 x_1731 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1731 = x_1700;
}
lean_ctor_set(x_1731, 0, x_1699);
lean_ctor_set(x_1731, 1, x_1730);
x_1732 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1732, 0, x_1731);
lean_ctor_set(x_1732, 1, x_1698);
return x_1732;
}
}
else
{
uint8_t x_1733; 
lean_dec(x_1593);
lean_dec(x_14);
lean_dec(x_5);
x_1733 = !lean_is_exclusive(x_1600);
if (x_1733 == 0)
{
return x_1600;
}
else
{
lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; 
x_1734 = lean_ctor_get(x_1600, 0);
x_1735 = lean_ctor_get(x_1600, 1);
lean_inc(x_1735);
lean_inc(x_1734);
lean_dec(x_1600);
x_1736 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1736, 0, x_1734);
lean_ctor_set(x_1736, 1, x_1735);
return x_1736;
}
}
}
}
else
{
uint8_t x_1737; lean_object* x_1738; lean_object* x_1739; lean_object* x_1740; lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; 
lean_dec(x_171);
lean_dec(x_170);
lean_dec(x_16);
lean_dec(x_15);
x_1737 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_1738 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_1737, x_5, x_6);
x_1739 = lean_ctor_get(x_1738, 0);
lean_inc(x_1739);
x_1740 = lean_ctor_get(x_1738, 1);
lean_inc(x_1740);
lean_dec(x_1738);
x_1741 = lean_unsigned_to_nat(1u);
x_1742 = lean_nat_add(x_3, x_1741);
lean_dec(x_3);
lean_inc(x_14);
x_1743 = l_Lean_mkHole(x_14, x_1737);
lean_inc(x_1739);
x_1744 = l_Lean_Elab_Term_mkExplicitBinder(x_1739, x_1743);
x_1745 = lean_array_push(x_4, x_1744);
lean_inc(x_5);
x_1746 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1742, x_1745, x_5, x_1740);
if (lean_obj_tag(x_1746) == 0)
{
lean_object* x_1747; lean_object* x_1748; uint8_t x_1749; 
x_1747 = lean_ctor_get(x_1746, 0);
lean_inc(x_1747);
x_1748 = lean_ctor_get(x_1747, 1);
lean_inc(x_1748);
x_1749 = !lean_is_exclusive(x_1746);
if (x_1749 == 0)
{
lean_object* x_1750; uint8_t x_1751; 
x_1750 = lean_ctor_get(x_1746, 0);
lean_dec(x_1750);
x_1751 = !lean_is_exclusive(x_1747);
if (x_1751 == 0)
{
lean_object* x_1752; uint8_t x_1753; 
x_1752 = lean_ctor_get(x_1747, 1);
lean_dec(x_1752);
x_1753 = !lean_is_exclusive(x_1748);
if (x_1753 == 0)
{
lean_object* x_1754; lean_object* x_1755; lean_object* x_1756; lean_object* x_1757; lean_object* x_1758; lean_object* x_1759; lean_object* x_1760; lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; lean_object* x_1765; lean_object* x_1766; lean_object* x_1767; lean_object* x_1768; lean_object* x_1769; lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; lean_object* x_1774; lean_object* x_1775; lean_object* x_1776; lean_object* x_1777; lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; uint8_t x_1781; lean_object* x_1782; 
x_1754 = lean_ctor_get(x_1748, 0);
x_1755 = lean_ctor_get(x_1748, 1);
lean_dec(x_1755);
x_1756 = lean_ctor_get(x_5, 5);
lean_inc(x_1756);
lean_dec(x_5);
x_1757 = l_Lean_SourceInfo_fromRef(x_1756, x_1737);
x_1758 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1757);
x_1759 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1759, 0, x_1757);
lean_ctor_set(x_1759, 1, x_1758);
x_1760 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1761 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1757);
x_1762 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1762, 0, x_1757);
lean_ctor_set(x_1762, 1, x_1760);
lean_ctor_set(x_1762, 2, x_1761);
x_1763 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1762);
lean_inc(x_1757);
x_1764 = l_Lean_Syntax_node2(x_1757, x_1763, x_1762, x_1739);
lean_inc(x_1757);
x_1765 = l_Lean_Syntax_node1(x_1757, x_1760, x_1764);
x_1766 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1757);
x_1767 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1767, 0, x_1757);
lean_ctor_set(x_1767, 1, x_1766);
x_1768 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1757);
x_1769 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1769, 0, x_1757);
lean_ctor_set(x_1769, 1, x_1768);
lean_inc(x_1757);
x_1770 = l_Lean_Syntax_node1(x_1757, x_1760, x_14);
lean_inc(x_1757);
x_1771 = l_Lean_Syntax_node1(x_1757, x_1760, x_1770);
x_1772 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1757);
x_1773 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1773, 0, x_1757);
lean_ctor_set(x_1773, 1, x_1772);
x_1774 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1757);
x_1775 = l_Lean_Syntax_node4(x_1757, x_1774, x_1769, x_1771, x_1773, x_1754);
lean_inc(x_1757);
x_1776 = l_Lean_Syntax_node1(x_1757, x_1760, x_1775);
x_1777 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1757);
x_1778 = l_Lean_Syntax_node1(x_1757, x_1777, x_1776);
x_1779 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1762);
x_1780 = l_Lean_Syntax_node6(x_1757, x_1779, x_1759, x_1762, x_1762, x_1765, x_1767, x_1778);
x_1781 = 1;
x_1782 = lean_box(x_1781);
lean_ctor_set(x_1748, 1, x_1782);
lean_ctor_set(x_1748, 0, x_1780);
return x_1746;
}
else
{
lean_object* x_1783; lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; lean_object* x_1789; lean_object* x_1790; lean_object* x_1791; lean_object* x_1792; lean_object* x_1793; lean_object* x_1794; lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; lean_object* x_1799; lean_object* x_1800; lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; lean_object* x_1808; uint8_t x_1809; lean_object* x_1810; lean_object* x_1811; 
x_1783 = lean_ctor_get(x_1748, 0);
lean_inc(x_1783);
lean_dec(x_1748);
x_1784 = lean_ctor_get(x_5, 5);
lean_inc(x_1784);
lean_dec(x_5);
x_1785 = l_Lean_SourceInfo_fromRef(x_1784, x_1737);
x_1786 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1785);
x_1787 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1787, 0, x_1785);
lean_ctor_set(x_1787, 1, x_1786);
x_1788 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1789 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1785);
x_1790 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1790, 0, x_1785);
lean_ctor_set(x_1790, 1, x_1788);
lean_ctor_set(x_1790, 2, x_1789);
x_1791 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1790);
lean_inc(x_1785);
x_1792 = l_Lean_Syntax_node2(x_1785, x_1791, x_1790, x_1739);
lean_inc(x_1785);
x_1793 = l_Lean_Syntax_node1(x_1785, x_1788, x_1792);
x_1794 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1785);
x_1795 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1795, 0, x_1785);
lean_ctor_set(x_1795, 1, x_1794);
x_1796 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1785);
x_1797 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1797, 0, x_1785);
lean_ctor_set(x_1797, 1, x_1796);
lean_inc(x_1785);
x_1798 = l_Lean_Syntax_node1(x_1785, x_1788, x_14);
lean_inc(x_1785);
x_1799 = l_Lean_Syntax_node1(x_1785, x_1788, x_1798);
x_1800 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1785);
x_1801 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1801, 0, x_1785);
lean_ctor_set(x_1801, 1, x_1800);
x_1802 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1785);
x_1803 = l_Lean_Syntax_node4(x_1785, x_1802, x_1797, x_1799, x_1801, x_1783);
lean_inc(x_1785);
x_1804 = l_Lean_Syntax_node1(x_1785, x_1788, x_1803);
x_1805 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1785);
x_1806 = l_Lean_Syntax_node1(x_1785, x_1805, x_1804);
x_1807 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1790);
x_1808 = l_Lean_Syntax_node6(x_1785, x_1807, x_1787, x_1790, x_1790, x_1793, x_1795, x_1806);
x_1809 = 1;
x_1810 = lean_box(x_1809);
x_1811 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1811, 0, x_1808);
lean_ctor_set(x_1811, 1, x_1810);
lean_ctor_set(x_1747, 1, x_1811);
return x_1746;
}
}
else
{
lean_object* x_1812; lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; lean_object* x_1821; lean_object* x_1822; lean_object* x_1823; lean_object* x_1824; lean_object* x_1825; lean_object* x_1826; lean_object* x_1827; lean_object* x_1828; lean_object* x_1829; lean_object* x_1830; lean_object* x_1831; lean_object* x_1832; lean_object* x_1833; lean_object* x_1834; lean_object* x_1835; lean_object* x_1836; lean_object* x_1837; lean_object* x_1838; lean_object* x_1839; uint8_t x_1840; lean_object* x_1841; lean_object* x_1842; lean_object* x_1843; 
x_1812 = lean_ctor_get(x_1747, 0);
lean_inc(x_1812);
lean_dec(x_1747);
x_1813 = lean_ctor_get(x_1748, 0);
lean_inc(x_1813);
if (lean_is_exclusive(x_1748)) {
 lean_ctor_release(x_1748, 0);
 lean_ctor_release(x_1748, 1);
 x_1814 = x_1748;
} else {
 lean_dec_ref(x_1748);
 x_1814 = lean_box(0);
}
x_1815 = lean_ctor_get(x_5, 5);
lean_inc(x_1815);
lean_dec(x_5);
x_1816 = l_Lean_SourceInfo_fromRef(x_1815, x_1737);
x_1817 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1816);
x_1818 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1818, 0, x_1816);
lean_ctor_set(x_1818, 1, x_1817);
x_1819 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1820 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1816);
x_1821 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1821, 0, x_1816);
lean_ctor_set(x_1821, 1, x_1819);
lean_ctor_set(x_1821, 2, x_1820);
x_1822 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1821);
lean_inc(x_1816);
x_1823 = l_Lean_Syntax_node2(x_1816, x_1822, x_1821, x_1739);
lean_inc(x_1816);
x_1824 = l_Lean_Syntax_node1(x_1816, x_1819, x_1823);
x_1825 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1816);
x_1826 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1826, 0, x_1816);
lean_ctor_set(x_1826, 1, x_1825);
x_1827 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1816);
x_1828 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1828, 0, x_1816);
lean_ctor_set(x_1828, 1, x_1827);
lean_inc(x_1816);
x_1829 = l_Lean_Syntax_node1(x_1816, x_1819, x_14);
lean_inc(x_1816);
x_1830 = l_Lean_Syntax_node1(x_1816, x_1819, x_1829);
x_1831 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1816);
x_1832 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1832, 0, x_1816);
lean_ctor_set(x_1832, 1, x_1831);
x_1833 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1816);
x_1834 = l_Lean_Syntax_node4(x_1816, x_1833, x_1828, x_1830, x_1832, x_1813);
lean_inc(x_1816);
x_1835 = l_Lean_Syntax_node1(x_1816, x_1819, x_1834);
x_1836 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1816);
x_1837 = l_Lean_Syntax_node1(x_1816, x_1836, x_1835);
x_1838 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1821);
x_1839 = l_Lean_Syntax_node6(x_1816, x_1838, x_1818, x_1821, x_1821, x_1824, x_1826, x_1837);
x_1840 = 1;
x_1841 = lean_box(x_1840);
if (lean_is_scalar(x_1814)) {
 x_1842 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1842 = x_1814;
}
lean_ctor_set(x_1842, 0, x_1839);
lean_ctor_set(x_1842, 1, x_1841);
x_1843 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1843, 0, x_1812);
lean_ctor_set(x_1843, 1, x_1842);
lean_ctor_set(x_1746, 0, x_1843);
return x_1746;
}
}
else
{
lean_object* x_1844; lean_object* x_1845; lean_object* x_1846; lean_object* x_1847; lean_object* x_1848; lean_object* x_1849; lean_object* x_1850; lean_object* x_1851; lean_object* x_1852; lean_object* x_1853; lean_object* x_1854; lean_object* x_1855; lean_object* x_1856; lean_object* x_1857; lean_object* x_1858; lean_object* x_1859; lean_object* x_1860; lean_object* x_1861; lean_object* x_1862; lean_object* x_1863; lean_object* x_1864; lean_object* x_1865; lean_object* x_1866; lean_object* x_1867; lean_object* x_1868; lean_object* x_1869; lean_object* x_1870; lean_object* x_1871; lean_object* x_1872; lean_object* x_1873; uint8_t x_1874; lean_object* x_1875; lean_object* x_1876; lean_object* x_1877; lean_object* x_1878; 
x_1844 = lean_ctor_get(x_1746, 1);
lean_inc(x_1844);
lean_dec(x_1746);
x_1845 = lean_ctor_get(x_1747, 0);
lean_inc(x_1845);
if (lean_is_exclusive(x_1747)) {
 lean_ctor_release(x_1747, 0);
 lean_ctor_release(x_1747, 1);
 x_1846 = x_1747;
} else {
 lean_dec_ref(x_1747);
 x_1846 = lean_box(0);
}
x_1847 = lean_ctor_get(x_1748, 0);
lean_inc(x_1847);
if (lean_is_exclusive(x_1748)) {
 lean_ctor_release(x_1748, 0);
 lean_ctor_release(x_1748, 1);
 x_1848 = x_1748;
} else {
 lean_dec_ref(x_1748);
 x_1848 = lean_box(0);
}
x_1849 = lean_ctor_get(x_5, 5);
lean_inc(x_1849);
lean_dec(x_5);
x_1850 = l_Lean_SourceInfo_fromRef(x_1849, x_1737);
x_1851 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1850);
x_1852 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1852, 0, x_1850);
lean_ctor_set(x_1852, 1, x_1851);
x_1853 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1854 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1850);
x_1855 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1855, 0, x_1850);
lean_ctor_set(x_1855, 1, x_1853);
lean_ctor_set(x_1855, 2, x_1854);
x_1856 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1855);
lean_inc(x_1850);
x_1857 = l_Lean_Syntax_node2(x_1850, x_1856, x_1855, x_1739);
lean_inc(x_1850);
x_1858 = l_Lean_Syntax_node1(x_1850, x_1853, x_1857);
x_1859 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1850);
x_1860 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1860, 0, x_1850);
lean_ctor_set(x_1860, 1, x_1859);
x_1861 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1850);
x_1862 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1862, 0, x_1850);
lean_ctor_set(x_1862, 1, x_1861);
lean_inc(x_1850);
x_1863 = l_Lean_Syntax_node1(x_1850, x_1853, x_14);
lean_inc(x_1850);
x_1864 = l_Lean_Syntax_node1(x_1850, x_1853, x_1863);
x_1865 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1850);
x_1866 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1866, 0, x_1850);
lean_ctor_set(x_1866, 1, x_1865);
x_1867 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1850);
x_1868 = l_Lean_Syntax_node4(x_1850, x_1867, x_1862, x_1864, x_1866, x_1847);
lean_inc(x_1850);
x_1869 = l_Lean_Syntax_node1(x_1850, x_1853, x_1868);
x_1870 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1850);
x_1871 = l_Lean_Syntax_node1(x_1850, x_1870, x_1869);
x_1872 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1855);
x_1873 = l_Lean_Syntax_node6(x_1850, x_1872, x_1852, x_1855, x_1855, x_1858, x_1860, x_1871);
x_1874 = 1;
x_1875 = lean_box(x_1874);
if (lean_is_scalar(x_1848)) {
 x_1876 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1876 = x_1848;
}
lean_ctor_set(x_1876, 0, x_1873);
lean_ctor_set(x_1876, 1, x_1875);
if (lean_is_scalar(x_1846)) {
 x_1877 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1877 = x_1846;
}
lean_ctor_set(x_1877, 0, x_1845);
lean_ctor_set(x_1877, 1, x_1876);
x_1878 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1878, 0, x_1877);
lean_ctor_set(x_1878, 1, x_1844);
return x_1878;
}
}
else
{
uint8_t x_1879; 
lean_dec(x_1739);
lean_dec(x_14);
lean_dec(x_5);
x_1879 = !lean_is_exclusive(x_1746);
if (x_1879 == 0)
{
return x_1746;
}
else
{
lean_object* x_1880; lean_object* x_1881; lean_object* x_1882; 
x_1880 = lean_ctor_get(x_1746, 0);
x_1881 = lean_ctor_get(x_1746, 1);
lean_inc(x_1881);
lean_inc(x_1880);
lean_dec(x_1746);
x_1882 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1882, 0, x_1880);
lean_ctor_set(x_1882, 1, x_1881);
return x_1882;
}
}
}
}
else
{
uint8_t x_1883; lean_object* x_1884; lean_object* x_1885; lean_object* x_1886; lean_object* x_1887; lean_object* x_1888; lean_object* x_1889; lean_object* x_1890; lean_object* x_1891; lean_object* x_1892; 
lean_dec(x_170);
lean_dec(x_16);
lean_dec(x_15);
x_1883 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_1884 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_1883, x_5, x_6);
x_1885 = lean_ctor_get(x_1884, 0);
lean_inc(x_1885);
x_1886 = lean_ctor_get(x_1884, 1);
lean_inc(x_1886);
lean_dec(x_1884);
x_1887 = lean_unsigned_to_nat(1u);
x_1888 = lean_nat_add(x_3, x_1887);
lean_dec(x_3);
lean_inc(x_14);
x_1889 = l_Lean_mkHole(x_14, x_1883);
lean_inc(x_1885);
x_1890 = l_Lean_Elab_Term_mkExplicitBinder(x_1885, x_1889);
x_1891 = lean_array_push(x_4, x_1890);
lean_inc(x_5);
x_1892 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_1888, x_1891, x_5, x_1886);
if (lean_obj_tag(x_1892) == 0)
{
lean_object* x_1893; lean_object* x_1894; uint8_t x_1895; 
x_1893 = lean_ctor_get(x_1892, 0);
lean_inc(x_1893);
x_1894 = lean_ctor_get(x_1893, 1);
lean_inc(x_1894);
x_1895 = !lean_is_exclusive(x_1892);
if (x_1895 == 0)
{
lean_object* x_1896; uint8_t x_1897; 
x_1896 = lean_ctor_get(x_1892, 0);
lean_dec(x_1896);
x_1897 = !lean_is_exclusive(x_1893);
if (x_1897 == 0)
{
lean_object* x_1898; uint8_t x_1899; 
x_1898 = lean_ctor_get(x_1893, 1);
lean_dec(x_1898);
x_1899 = !lean_is_exclusive(x_1894);
if (x_1899 == 0)
{
lean_object* x_1900; lean_object* x_1901; lean_object* x_1902; lean_object* x_1903; lean_object* x_1904; lean_object* x_1905; lean_object* x_1906; lean_object* x_1907; lean_object* x_1908; lean_object* x_1909; lean_object* x_1910; lean_object* x_1911; lean_object* x_1912; lean_object* x_1913; lean_object* x_1914; lean_object* x_1915; lean_object* x_1916; lean_object* x_1917; lean_object* x_1918; lean_object* x_1919; lean_object* x_1920; lean_object* x_1921; lean_object* x_1922; lean_object* x_1923; lean_object* x_1924; lean_object* x_1925; lean_object* x_1926; uint8_t x_1927; lean_object* x_1928; 
x_1900 = lean_ctor_get(x_1894, 0);
x_1901 = lean_ctor_get(x_1894, 1);
lean_dec(x_1901);
x_1902 = lean_ctor_get(x_5, 5);
lean_inc(x_1902);
lean_dec(x_5);
x_1903 = l_Lean_SourceInfo_fromRef(x_1902, x_1883);
x_1904 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1903);
x_1905 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1905, 0, x_1903);
lean_ctor_set(x_1905, 1, x_1904);
x_1906 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1907 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1903);
x_1908 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1908, 0, x_1903);
lean_ctor_set(x_1908, 1, x_1906);
lean_ctor_set(x_1908, 2, x_1907);
x_1909 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1908);
lean_inc(x_1903);
x_1910 = l_Lean_Syntax_node2(x_1903, x_1909, x_1908, x_1885);
lean_inc(x_1903);
x_1911 = l_Lean_Syntax_node1(x_1903, x_1906, x_1910);
x_1912 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1903);
x_1913 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1913, 0, x_1903);
lean_ctor_set(x_1913, 1, x_1912);
x_1914 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1903);
x_1915 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1915, 0, x_1903);
lean_ctor_set(x_1915, 1, x_1914);
lean_inc(x_1903);
x_1916 = l_Lean_Syntax_node1(x_1903, x_1906, x_14);
lean_inc(x_1903);
x_1917 = l_Lean_Syntax_node1(x_1903, x_1906, x_1916);
x_1918 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1903);
x_1919 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1919, 0, x_1903);
lean_ctor_set(x_1919, 1, x_1918);
x_1920 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1903);
x_1921 = l_Lean_Syntax_node4(x_1903, x_1920, x_1915, x_1917, x_1919, x_1900);
lean_inc(x_1903);
x_1922 = l_Lean_Syntax_node1(x_1903, x_1906, x_1921);
x_1923 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1903);
x_1924 = l_Lean_Syntax_node1(x_1903, x_1923, x_1922);
x_1925 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1908);
x_1926 = l_Lean_Syntax_node6(x_1903, x_1925, x_1905, x_1908, x_1908, x_1911, x_1913, x_1924);
x_1927 = 1;
x_1928 = lean_box(x_1927);
lean_ctor_set(x_1894, 1, x_1928);
lean_ctor_set(x_1894, 0, x_1926);
return x_1892;
}
else
{
lean_object* x_1929; lean_object* x_1930; lean_object* x_1931; lean_object* x_1932; lean_object* x_1933; lean_object* x_1934; lean_object* x_1935; lean_object* x_1936; lean_object* x_1937; lean_object* x_1938; lean_object* x_1939; lean_object* x_1940; lean_object* x_1941; lean_object* x_1942; lean_object* x_1943; lean_object* x_1944; lean_object* x_1945; lean_object* x_1946; lean_object* x_1947; lean_object* x_1948; lean_object* x_1949; lean_object* x_1950; lean_object* x_1951; lean_object* x_1952; lean_object* x_1953; lean_object* x_1954; uint8_t x_1955; lean_object* x_1956; lean_object* x_1957; 
x_1929 = lean_ctor_get(x_1894, 0);
lean_inc(x_1929);
lean_dec(x_1894);
x_1930 = lean_ctor_get(x_5, 5);
lean_inc(x_1930);
lean_dec(x_5);
x_1931 = l_Lean_SourceInfo_fromRef(x_1930, x_1883);
x_1932 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1931);
x_1933 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1933, 0, x_1931);
lean_ctor_set(x_1933, 1, x_1932);
x_1934 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1935 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1931);
x_1936 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1936, 0, x_1931);
lean_ctor_set(x_1936, 1, x_1934);
lean_ctor_set(x_1936, 2, x_1935);
x_1937 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1936);
lean_inc(x_1931);
x_1938 = l_Lean_Syntax_node2(x_1931, x_1937, x_1936, x_1885);
lean_inc(x_1931);
x_1939 = l_Lean_Syntax_node1(x_1931, x_1934, x_1938);
x_1940 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1931);
x_1941 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1941, 0, x_1931);
lean_ctor_set(x_1941, 1, x_1940);
x_1942 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1931);
x_1943 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1943, 0, x_1931);
lean_ctor_set(x_1943, 1, x_1942);
lean_inc(x_1931);
x_1944 = l_Lean_Syntax_node1(x_1931, x_1934, x_14);
lean_inc(x_1931);
x_1945 = l_Lean_Syntax_node1(x_1931, x_1934, x_1944);
x_1946 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1931);
x_1947 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1947, 0, x_1931);
lean_ctor_set(x_1947, 1, x_1946);
x_1948 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1931);
x_1949 = l_Lean_Syntax_node4(x_1931, x_1948, x_1943, x_1945, x_1947, x_1929);
lean_inc(x_1931);
x_1950 = l_Lean_Syntax_node1(x_1931, x_1934, x_1949);
x_1951 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1931);
x_1952 = l_Lean_Syntax_node1(x_1931, x_1951, x_1950);
x_1953 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1936);
x_1954 = l_Lean_Syntax_node6(x_1931, x_1953, x_1933, x_1936, x_1936, x_1939, x_1941, x_1952);
x_1955 = 1;
x_1956 = lean_box(x_1955);
x_1957 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1957, 0, x_1954);
lean_ctor_set(x_1957, 1, x_1956);
lean_ctor_set(x_1893, 1, x_1957);
return x_1892;
}
}
else
{
lean_object* x_1958; lean_object* x_1959; lean_object* x_1960; lean_object* x_1961; lean_object* x_1962; lean_object* x_1963; lean_object* x_1964; lean_object* x_1965; lean_object* x_1966; lean_object* x_1967; lean_object* x_1968; lean_object* x_1969; lean_object* x_1970; lean_object* x_1971; lean_object* x_1972; lean_object* x_1973; lean_object* x_1974; lean_object* x_1975; lean_object* x_1976; lean_object* x_1977; lean_object* x_1978; lean_object* x_1979; lean_object* x_1980; lean_object* x_1981; lean_object* x_1982; lean_object* x_1983; lean_object* x_1984; lean_object* x_1985; uint8_t x_1986; lean_object* x_1987; lean_object* x_1988; lean_object* x_1989; 
x_1958 = lean_ctor_get(x_1893, 0);
lean_inc(x_1958);
lean_dec(x_1893);
x_1959 = lean_ctor_get(x_1894, 0);
lean_inc(x_1959);
if (lean_is_exclusive(x_1894)) {
 lean_ctor_release(x_1894, 0);
 lean_ctor_release(x_1894, 1);
 x_1960 = x_1894;
} else {
 lean_dec_ref(x_1894);
 x_1960 = lean_box(0);
}
x_1961 = lean_ctor_get(x_5, 5);
lean_inc(x_1961);
lean_dec(x_5);
x_1962 = l_Lean_SourceInfo_fromRef(x_1961, x_1883);
x_1963 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1962);
x_1964 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1964, 0, x_1962);
lean_ctor_set(x_1964, 1, x_1963);
x_1965 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_1966 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1962);
x_1967 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_1967, 0, x_1962);
lean_ctor_set(x_1967, 1, x_1965);
lean_ctor_set(x_1967, 2, x_1966);
x_1968 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_1967);
lean_inc(x_1962);
x_1969 = l_Lean_Syntax_node2(x_1962, x_1968, x_1967, x_1885);
lean_inc(x_1962);
x_1970 = l_Lean_Syntax_node1(x_1962, x_1965, x_1969);
x_1971 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1962);
x_1972 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1972, 0, x_1962);
lean_ctor_set(x_1972, 1, x_1971);
x_1973 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1962);
x_1974 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1974, 0, x_1962);
lean_ctor_set(x_1974, 1, x_1973);
lean_inc(x_1962);
x_1975 = l_Lean_Syntax_node1(x_1962, x_1965, x_14);
lean_inc(x_1962);
x_1976 = l_Lean_Syntax_node1(x_1962, x_1965, x_1975);
x_1977 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1962);
x_1978 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1978, 0, x_1962);
lean_ctor_set(x_1978, 1, x_1977);
x_1979 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1962);
x_1980 = l_Lean_Syntax_node4(x_1962, x_1979, x_1974, x_1976, x_1978, x_1959);
lean_inc(x_1962);
x_1981 = l_Lean_Syntax_node1(x_1962, x_1965, x_1980);
x_1982 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1962);
x_1983 = l_Lean_Syntax_node1(x_1962, x_1982, x_1981);
x_1984 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_1967);
x_1985 = l_Lean_Syntax_node6(x_1962, x_1984, x_1964, x_1967, x_1967, x_1970, x_1972, x_1983);
x_1986 = 1;
x_1987 = lean_box(x_1986);
if (lean_is_scalar(x_1960)) {
 x_1988 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1988 = x_1960;
}
lean_ctor_set(x_1988, 0, x_1985);
lean_ctor_set(x_1988, 1, x_1987);
x_1989 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1989, 0, x_1958);
lean_ctor_set(x_1989, 1, x_1988);
lean_ctor_set(x_1892, 0, x_1989);
return x_1892;
}
}
else
{
lean_object* x_1990; lean_object* x_1991; lean_object* x_1992; lean_object* x_1993; lean_object* x_1994; lean_object* x_1995; lean_object* x_1996; lean_object* x_1997; lean_object* x_1998; lean_object* x_1999; lean_object* x_2000; lean_object* x_2001; lean_object* x_2002; lean_object* x_2003; lean_object* x_2004; lean_object* x_2005; lean_object* x_2006; lean_object* x_2007; lean_object* x_2008; lean_object* x_2009; lean_object* x_2010; lean_object* x_2011; lean_object* x_2012; lean_object* x_2013; lean_object* x_2014; lean_object* x_2015; lean_object* x_2016; lean_object* x_2017; lean_object* x_2018; lean_object* x_2019; uint8_t x_2020; lean_object* x_2021; lean_object* x_2022; lean_object* x_2023; lean_object* x_2024; 
x_1990 = lean_ctor_get(x_1892, 1);
lean_inc(x_1990);
lean_dec(x_1892);
x_1991 = lean_ctor_get(x_1893, 0);
lean_inc(x_1991);
if (lean_is_exclusive(x_1893)) {
 lean_ctor_release(x_1893, 0);
 lean_ctor_release(x_1893, 1);
 x_1992 = x_1893;
} else {
 lean_dec_ref(x_1893);
 x_1992 = lean_box(0);
}
x_1993 = lean_ctor_get(x_1894, 0);
lean_inc(x_1993);
if (lean_is_exclusive(x_1894)) {
 lean_ctor_release(x_1894, 0);
 lean_ctor_release(x_1894, 1);
 x_1994 = x_1894;
} else {
 lean_dec_ref(x_1894);
 x_1994 = lean_box(0);
}
x_1995 = lean_ctor_get(x_5, 5);
lean_inc(x_1995);
lean_dec(x_5);
x_1996 = l_Lean_SourceInfo_fromRef(x_1995, x_1883);
x_1997 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_1996);
x_1998 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1998, 0, x_1996);
lean_ctor_set(x_1998, 1, x_1997);
x_1999 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2000 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_1996);
x_2001 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2001, 0, x_1996);
lean_ctor_set(x_2001, 1, x_1999);
lean_ctor_set(x_2001, 2, x_2000);
x_2002 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2001);
lean_inc(x_1996);
x_2003 = l_Lean_Syntax_node2(x_1996, x_2002, x_2001, x_1885);
lean_inc(x_1996);
x_2004 = l_Lean_Syntax_node1(x_1996, x_1999, x_2003);
x_2005 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_1996);
x_2006 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2006, 0, x_1996);
lean_ctor_set(x_2006, 1, x_2005);
x_2007 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_1996);
x_2008 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2008, 0, x_1996);
lean_ctor_set(x_2008, 1, x_2007);
lean_inc(x_1996);
x_2009 = l_Lean_Syntax_node1(x_1996, x_1999, x_14);
lean_inc(x_1996);
x_2010 = l_Lean_Syntax_node1(x_1996, x_1999, x_2009);
x_2011 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_1996);
x_2012 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2012, 0, x_1996);
lean_ctor_set(x_2012, 1, x_2011);
x_2013 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_1996);
x_2014 = l_Lean_Syntax_node4(x_1996, x_2013, x_2008, x_2010, x_2012, x_1993);
lean_inc(x_1996);
x_2015 = l_Lean_Syntax_node1(x_1996, x_1999, x_2014);
x_2016 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_1996);
x_2017 = l_Lean_Syntax_node1(x_1996, x_2016, x_2015);
x_2018 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2001);
x_2019 = l_Lean_Syntax_node6(x_1996, x_2018, x_1998, x_2001, x_2001, x_2004, x_2006, x_2017);
x_2020 = 1;
x_2021 = lean_box(x_2020);
if (lean_is_scalar(x_1994)) {
 x_2022 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2022 = x_1994;
}
lean_ctor_set(x_2022, 0, x_2019);
lean_ctor_set(x_2022, 1, x_2021);
if (lean_is_scalar(x_1992)) {
 x_2023 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2023 = x_1992;
}
lean_ctor_set(x_2023, 0, x_1991);
lean_ctor_set(x_2023, 1, x_2022);
x_2024 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2024, 0, x_2023);
lean_ctor_set(x_2024, 1, x_1990);
return x_2024;
}
}
else
{
uint8_t x_2025; 
lean_dec(x_1885);
lean_dec(x_14);
lean_dec(x_5);
x_2025 = !lean_is_exclusive(x_1892);
if (x_2025 == 0)
{
return x_1892;
}
else
{
lean_object* x_2026; lean_object* x_2027; lean_object* x_2028; 
x_2026 = lean_ctor_get(x_1892, 0);
x_2027 = lean_ctor_get(x_1892, 1);
lean_inc(x_2027);
lean_inc(x_2026);
lean_dec(x_1892);
x_2028 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2028, 0, x_2026);
lean_ctor_set(x_2028, 1, x_2027);
return x_2028;
}
}
}
}
default: 
{
uint8_t x_2029; lean_object* x_2030; lean_object* x_2031; lean_object* x_2032; lean_object* x_2033; lean_object* x_2034; lean_object* x_2035; lean_object* x_2036; lean_object* x_2037; lean_object* x_2038; 
lean_dec(x_16);
lean_dec(x_15);
x_2029 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_2030 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_2029, x_5, x_6);
x_2031 = lean_ctor_get(x_2030, 0);
lean_inc(x_2031);
x_2032 = lean_ctor_get(x_2030, 1);
lean_inc(x_2032);
lean_dec(x_2030);
x_2033 = lean_unsigned_to_nat(1u);
x_2034 = lean_nat_add(x_3, x_2033);
lean_dec(x_3);
lean_inc(x_14);
x_2035 = l_Lean_mkHole(x_14, x_2029);
lean_inc(x_2031);
x_2036 = l_Lean_Elab_Term_mkExplicitBinder(x_2031, x_2035);
x_2037 = lean_array_push(x_4, x_2036);
lean_inc(x_5);
x_2038 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2034, x_2037, x_5, x_2032);
if (lean_obj_tag(x_2038) == 0)
{
lean_object* x_2039; lean_object* x_2040; uint8_t x_2041; 
x_2039 = lean_ctor_get(x_2038, 0);
lean_inc(x_2039);
x_2040 = lean_ctor_get(x_2039, 1);
lean_inc(x_2040);
x_2041 = !lean_is_exclusive(x_2038);
if (x_2041 == 0)
{
lean_object* x_2042; uint8_t x_2043; 
x_2042 = lean_ctor_get(x_2038, 0);
lean_dec(x_2042);
x_2043 = !lean_is_exclusive(x_2039);
if (x_2043 == 0)
{
lean_object* x_2044; uint8_t x_2045; 
x_2044 = lean_ctor_get(x_2039, 1);
lean_dec(x_2044);
x_2045 = !lean_is_exclusive(x_2040);
if (x_2045 == 0)
{
lean_object* x_2046; lean_object* x_2047; lean_object* x_2048; lean_object* x_2049; lean_object* x_2050; lean_object* x_2051; lean_object* x_2052; lean_object* x_2053; lean_object* x_2054; lean_object* x_2055; lean_object* x_2056; lean_object* x_2057; lean_object* x_2058; lean_object* x_2059; lean_object* x_2060; lean_object* x_2061; lean_object* x_2062; lean_object* x_2063; lean_object* x_2064; lean_object* x_2065; lean_object* x_2066; lean_object* x_2067; lean_object* x_2068; lean_object* x_2069; lean_object* x_2070; lean_object* x_2071; lean_object* x_2072; uint8_t x_2073; lean_object* x_2074; 
x_2046 = lean_ctor_get(x_2040, 0);
x_2047 = lean_ctor_get(x_2040, 1);
lean_dec(x_2047);
x_2048 = lean_ctor_get(x_5, 5);
lean_inc(x_2048);
lean_dec(x_5);
x_2049 = l_Lean_SourceInfo_fromRef(x_2048, x_2029);
x_2050 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2049);
x_2051 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2051, 0, x_2049);
lean_ctor_set(x_2051, 1, x_2050);
x_2052 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2053 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2049);
x_2054 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2054, 0, x_2049);
lean_ctor_set(x_2054, 1, x_2052);
lean_ctor_set(x_2054, 2, x_2053);
x_2055 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2054);
lean_inc(x_2049);
x_2056 = l_Lean_Syntax_node2(x_2049, x_2055, x_2054, x_2031);
lean_inc(x_2049);
x_2057 = l_Lean_Syntax_node1(x_2049, x_2052, x_2056);
x_2058 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2049);
x_2059 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2059, 0, x_2049);
lean_ctor_set(x_2059, 1, x_2058);
x_2060 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2049);
x_2061 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2061, 0, x_2049);
lean_ctor_set(x_2061, 1, x_2060);
lean_inc(x_2049);
x_2062 = l_Lean_Syntax_node1(x_2049, x_2052, x_14);
lean_inc(x_2049);
x_2063 = l_Lean_Syntax_node1(x_2049, x_2052, x_2062);
x_2064 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2049);
x_2065 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2065, 0, x_2049);
lean_ctor_set(x_2065, 1, x_2064);
x_2066 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2049);
x_2067 = l_Lean_Syntax_node4(x_2049, x_2066, x_2061, x_2063, x_2065, x_2046);
lean_inc(x_2049);
x_2068 = l_Lean_Syntax_node1(x_2049, x_2052, x_2067);
x_2069 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2049);
x_2070 = l_Lean_Syntax_node1(x_2049, x_2069, x_2068);
x_2071 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2054);
x_2072 = l_Lean_Syntax_node6(x_2049, x_2071, x_2051, x_2054, x_2054, x_2057, x_2059, x_2070);
x_2073 = 1;
x_2074 = lean_box(x_2073);
lean_ctor_set(x_2040, 1, x_2074);
lean_ctor_set(x_2040, 0, x_2072);
return x_2038;
}
else
{
lean_object* x_2075; lean_object* x_2076; lean_object* x_2077; lean_object* x_2078; lean_object* x_2079; lean_object* x_2080; lean_object* x_2081; lean_object* x_2082; lean_object* x_2083; lean_object* x_2084; lean_object* x_2085; lean_object* x_2086; lean_object* x_2087; lean_object* x_2088; lean_object* x_2089; lean_object* x_2090; lean_object* x_2091; lean_object* x_2092; lean_object* x_2093; lean_object* x_2094; lean_object* x_2095; lean_object* x_2096; lean_object* x_2097; lean_object* x_2098; lean_object* x_2099; lean_object* x_2100; uint8_t x_2101; lean_object* x_2102; lean_object* x_2103; 
x_2075 = lean_ctor_get(x_2040, 0);
lean_inc(x_2075);
lean_dec(x_2040);
x_2076 = lean_ctor_get(x_5, 5);
lean_inc(x_2076);
lean_dec(x_5);
x_2077 = l_Lean_SourceInfo_fromRef(x_2076, x_2029);
x_2078 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2077);
x_2079 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2079, 0, x_2077);
lean_ctor_set(x_2079, 1, x_2078);
x_2080 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2081 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2077);
x_2082 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2082, 0, x_2077);
lean_ctor_set(x_2082, 1, x_2080);
lean_ctor_set(x_2082, 2, x_2081);
x_2083 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2082);
lean_inc(x_2077);
x_2084 = l_Lean_Syntax_node2(x_2077, x_2083, x_2082, x_2031);
lean_inc(x_2077);
x_2085 = l_Lean_Syntax_node1(x_2077, x_2080, x_2084);
x_2086 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2077);
x_2087 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2087, 0, x_2077);
lean_ctor_set(x_2087, 1, x_2086);
x_2088 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2077);
x_2089 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2089, 0, x_2077);
lean_ctor_set(x_2089, 1, x_2088);
lean_inc(x_2077);
x_2090 = l_Lean_Syntax_node1(x_2077, x_2080, x_14);
lean_inc(x_2077);
x_2091 = l_Lean_Syntax_node1(x_2077, x_2080, x_2090);
x_2092 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2077);
x_2093 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2093, 0, x_2077);
lean_ctor_set(x_2093, 1, x_2092);
x_2094 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2077);
x_2095 = l_Lean_Syntax_node4(x_2077, x_2094, x_2089, x_2091, x_2093, x_2075);
lean_inc(x_2077);
x_2096 = l_Lean_Syntax_node1(x_2077, x_2080, x_2095);
x_2097 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2077);
x_2098 = l_Lean_Syntax_node1(x_2077, x_2097, x_2096);
x_2099 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2082);
x_2100 = l_Lean_Syntax_node6(x_2077, x_2099, x_2079, x_2082, x_2082, x_2085, x_2087, x_2098);
x_2101 = 1;
x_2102 = lean_box(x_2101);
x_2103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2103, 0, x_2100);
lean_ctor_set(x_2103, 1, x_2102);
lean_ctor_set(x_2039, 1, x_2103);
return x_2038;
}
}
else
{
lean_object* x_2104; lean_object* x_2105; lean_object* x_2106; lean_object* x_2107; lean_object* x_2108; lean_object* x_2109; lean_object* x_2110; lean_object* x_2111; lean_object* x_2112; lean_object* x_2113; lean_object* x_2114; lean_object* x_2115; lean_object* x_2116; lean_object* x_2117; lean_object* x_2118; lean_object* x_2119; lean_object* x_2120; lean_object* x_2121; lean_object* x_2122; lean_object* x_2123; lean_object* x_2124; lean_object* x_2125; lean_object* x_2126; lean_object* x_2127; lean_object* x_2128; lean_object* x_2129; lean_object* x_2130; lean_object* x_2131; uint8_t x_2132; lean_object* x_2133; lean_object* x_2134; lean_object* x_2135; 
x_2104 = lean_ctor_get(x_2039, 0);
lean_inc(x_2104);
lean_dec(x_2039);
x_2105 = lean_ctor_get(x_2040, 0);
lean_inc(x_2105);
if (lean_is_exclusive(x_2040)) {
 lean_ctor_release(x_2040, 0);
 lean_ctor_release(x_2040, 1);
 x_2106 = x_2040;
} else {
 lean_dec_ref(x_2040);
 x_2106 = lean_box(0);
}
x_2107 = lean_ctor_get(x_5, 5);
lean_inc(x_2107);
lean_dec(x_5);
x_2108 = l_Lean_SourceInfo_fromRef(x_2107, x_2029);
x_2109 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2108);
x_2110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2110, 0, x_2108);
lean_ctor_set(x_2110, 1, x_2109);
x_2111 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2112 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2108);
x_2113 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2113, 0, x_2108);
lean_ctor_set(x_2113, 1, x_2111);
lean_ctor_set(x_2113, 2, x_2112);
x_2114 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2113);
lean_inc(x_2108);
x_2115 = l_Lean_Syntax_node2(x_2108, x_2114, x_2113, x_2031);
lean_inc(x_2108);
x_2116 = l_Lean_Syntax_node1(x_2108, x_2111, x_2115);
x_2117 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2108);
x_2118 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2118, 0, x_2108);
lean_ctor_set(x_2118, 1, x_2117);
x_2119 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2108);
x_2120 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2120, 0, x_2108);
lean_ctor_set(x_2120, 1, x_2119);
lean_inc(x_2108);
x_2121 = l_Lean_Syntax_node1(x_2108, x_2111, x_14);
lean_inc(x_2108);
x_2122 = l_Lean_Syntax_node1(x_2108, x_2111, x_2121);
x_2123 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2108);
x_2124 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2124, 0, x_2108);
lean_ctor_set(x_2124, 1, x_2123);
x_2125 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2108);
x_2126 = l_Lean_Syntax_node4(x_2108, x_2125, x_2120, x_2122, x_2124, x_2105);
lean_inc(x_2108);
x_2127 = l_Lean_Syntax_node1(x_2108, x_2111, x_2126);
x_2128 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2108);
x_2129 = l_Lean_Syntax_node1(x_2108, x_2128, x_2127);
x_2130 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2113);
x_2131 = l_Lean_Syntax_node6(x_2108, x_2130, x_2110, x_2113, x_2113, x_2116, x_2118, x_2129);
x_2132 = 1;
x_2133 = lean_box(x_2132);
if (lean_is_scalar(x_2106)) {
 x_2134 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2134 = x_2106;
}
lean_ctor_set(x_2134, 0, x_2131);
lean_ctor_set(x_2134, 1, x_2133);
x_2135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2135, 0, x_2104);
lean_ctor_set(x_2135, 1, x_2134);
lean_ctor_set(x_2038, 0, x_2135);
return x_2038;
}
}
else
{
lean_object* x_2136; lean_object* x_2137; lean_object* x_2138; lean_object* x_2139; lean_object* x_2140; lean_object* x_2141; lean_object* x_2142; lean_object* x_2143; lean_object* x_2144; lean_object* x_2145; lean_object* x_2146; lean_object* x_2147; lean_object* x_2148; lean_object* x_2149; lean_object* x_2150; lean_object* x_2151; lean_object* x_2152; lean_object* x_2153; lean_object* x_2154; lean_object* x_2155; lean_object* x_2156; lean_object* x_2157; lean_object* x_2158; lean_object* x_2159; lean_object* x_2160; lean_object* x_2161; lean_object* x_2162; lean_object* x_2163; lean_object* x_2164; lean_object* x_2165; uint8_t x_2166; lean_object* x_2167; lean_object* x_2168; lean_object* x_2169; lean_object* x_2170; 
x_2136 = lean_ctor_get(x_2038, 1);
lean_inc(x_2136);
lean_dec(x_2038);
x_2137 = lean_ctor_get(x_2039, 0);
lean_inc(x_2137);
if (lean_is_exclusive(x_2039)) {
 lean_ctor_release(x_2039, 0);
 lean_ctor_release(x_2039, 1);
 x_2138 = x_2039;
} else {
 lean_dec_ref(x_2039);
 x_2138 = lean_box(0);
}
x_2139 = lean_ctor_get(x_2040, 0);
lean_inc(x_2139);
if (lean_is_exclusive(x_2040)) {
 lean_ctor_release(x_2040, 0);
 lean_ctor_release(x_2040, 1);
 x_2140 = x_2040;
} else {
 lean_dec_ref(x_2040);
 x_2140 = lean_box(0);
}
x_2141 = lean_ctor_get(x_5, 5);
lean_inc(x_2141);
lean_dec(x_5);
x_2142 = l_Lean_SourceInfo_fromRef(x_2141, x_2029);
x_2143 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2142);
x_2144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2144, 0, x_2142);
lean_ctor_set(x_2144, 1, x_2143);
x_2145 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2146 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2142);
x_2147 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2147, 0, x_2142);
lean_ctor_set(x_2147, 1, x_2145);
lean_ctor_set(x_2147, 2, x_2146);
x_2148 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2147);
lean_inc(x_2142);
x_2149 = l_Lean_Syntax_node2(x_2142, x_2148, x_2147, x_2031);
lean_inc(x_2142);
x_2150 = l_Lean_Syntax_node1(x_2142, x_2145, x_2149);
x_2151 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2142);
x_2152 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2152, 0, x_2142);
lean_ctor_set(x_2152, 1, x_2151);
x_2153 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2142);
x_2154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2154, 0, x_2142);
lean_ctor_set(x_2154, 1, x_2153);
lean_inc(x_2142);
x_2155 = l_Lean_Syntax_node1(x_2142, x_2145, x_14);
lean_inc(x_2142);
x_2156 = l_Lean_Syntax_node1(x_2142, x_2145, x_2155);
x_2157 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2142);
x_2158 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2158, 0, x_2142);
lean_ctor_set(x_2158, 1, x_2157);
x_2159 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2142);
x_2160 = l_Lean_Syntax_node4(x_2142, x_2159, x_2154, x_2156, x_2158, x_2139);
lean_inc(x_2142);
x_2161 = l_Lean_Syntax_node1(x_2142, x_2145, x_2160);
x_2162 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2142);
x_2163 = l_Lean_Syntax_node1(x_2142, x_2162, x_2161);
x_2164 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2147);
x_2165 = l_Lean_Syntax_node6(x_2142, x_2164, x_2144, x_2147, x_2147, x_2150, x_2152, x_2163);
x_2166 = 1;
x_2167 = lean_box(x_2166);
if (lean_is_scalar(x_2140)) {
 x_2168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2168 = x_2140;
}
lean_ctor_set(x_2168, 0, x_2165);
lean_ctor_set(x_2168, 1, x_2167);
if (lean_is_scalar(x_2138)) {
 x_2169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2169 = x_2138;
}
lean_ctor_set(x_2169, 0, x_2137);
lean_ctor_set(x_2169, 1, x_2168);
x_2170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2170, 0, x_2169);
lean_ctor_set(x_2170, 1, x_2136);
return x_2170;
}
}
else
{
uint8_t x_2171; 
lean_dec(x_2031);
lean_dec(x_14);
lean_dec(x_5);
x_2171 = !lean_is_exclusive(x_2038);
if (x_2171 == 0)
{
return x_2038;
}
else
{
lean_object* x_2172; lean_object* x_2173; lean_object* x_2174; 
x_2172 = lean_ctor_get(x_2038, 0);
x_2173 = lean_ctor_get(x_2038, 1);
lean_inc(x_2173);
lean_inc(x_2172);
lean_dec(x_2038);
x_2174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2174, 0, x_2172);
lean_ctor_set(x_2174, 1, x_2173);
return x_2174;
}
}
}
}
}
else
{
uint8_t x_2175; lean_object* x_2176; lean_object* x_2177; lean_object* x_2178; lean_object* x_2179; lean_object* x_2180; lean_object* x_2181; lean_object* x_2182; lean_object* x_2183; lean_object* x_2184; 
lean_dec(x_15);
x_2175 = 0;
lean_inc(x_5);
lean_inc(x_14);
x_2176 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_14, x_2175, x_5, x_6);
x_2177 = lean_ctor_get(x_2176, 0);
lean_inc(x_2177);
x_2178 = lean_ctor_get(x_2176, 1);
lean_inc(x_2178);
lean_dec(x_2176);
x_2179 = lean_unsigned_to_nat(1u);
x_2180 = lean_nat_add(x_3, x_2179);
lean_dec(x_3);
lean_inc(x_14);
x_2181 = l_Lean_mkHole(x_14, x_2175);
lean_inc(x_2177);
x_2182 = l_Lean_Elab_Term_mkExplicitBinder(x_2177, x_2181);
x_2183 = lean_array_push(x_4, x_2182);
lean_inc(x_5);
x_2184 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_2180, x_2183, x_5, x_2178);
if (lean_obj_tag(x_2184) == 0)
{
lean_object* x_2185; lean_object* x_2186; uint8_t x_2187; 
x_2185 = lean_ctor_get(x_2184, 0);
lean_inc(x_2185);
x_2186 = lean_ctor_get(x_2185, 1);
lean_inc(x_2186);
x_2187 = !lean_is_exclusive(x_2184);
if (x_2187 == 0)
{
lean_object* x_2188; uint8_t x_2189; 
x_2188 = lean_ctor_get(x_2184, 0);
lean_dec(x_2188);
x_2189 = !lean_is_exclusive(x_2185);
if (x_2189 == 0)
{
lean_object* x_2190; uint8_t x_2191; 
x_2190 = lean_ctor_get(x_2185, 1);
lean_dec(x_2190);
x_2191 = !lean_is_exclusive(x_2186);
if (x_2191 == 0)
{
lean_object* x_2192; lean_object* x_2193; lean_object* x_2194; lean_object* x_2195; lean_object* x_2196; lean_object* x_2197; lean_object* x_2198; lean_object* x_2199; lean_object* x_2200; lean_object* x_2201; lean_object* x_2202; lean_object* x_2203; lean_object* x_2204; lean_object* x_2205; lean_object* x_2206; lean_object* x_2207; lean_object* x_2208; lean_object* x_2209; lean_object* x_2210; lean_object* x_2211; lean_object* x_2212; lean_object* x_2213; lean_object* x_2214; lean_object* x_2215; lean_object* x_2216; lean_object* x_2217; lean_object* x_2218; uint8_t x_2219; lean_object* x_2220; 
x_2192 = lean_ctor_get(x_2186, 0);
x_2193 = lean_ctor_get(x_2186, 1);
lean_dec(x_2193);
x_2194 = lean_ctor_get(x_5, 5);
lean_inc(x_2194);
lean_dec(x_5);
x_2195 = l_Lean_SourceInfo_fromRef(x_2194, x_2175);
x_2196 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2195);
x_2197 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2197, 0, x_2195);
lean_ctor_set(x_2197, 1, x_2196);
x_2198 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2199 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2195);
x_2200 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2200, 0, x_2195);
lean_ctor_set(x_2200, 1, x_2198);
lean_ctor_set(x_2200, 2, x_2199);
x_2201 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2200);
lean_inc(x_2195);
x_2202 = l_Lean_Syntax_node2(x_2195, x_2201, x_2200, x_2177);
lean_inc(x_2195);
x_2203 = l_Lean_Syntax_node1(x_2195, x_2198, x_2202);
x_2204 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2195);
x_2205 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2205, 0, x_2195);
lean_ctor_set(x_2205, 1, x_2204);
x_2206 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2195);
x_2207 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2207, 0, x_2195);
lean_ctor_set(x_2207, 1, x_2206);
lean_inc(x_2195);
x_2208 = l_Lean_Syntax_node1(x_2195, x_2198, x_14);
lean_inc(x_2195);
x_2209 = l_Lean_Syntax_node1(x_2195, x_2198, x_2208);
x_2210 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2195);
x_2211 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2211, 0, x_2195);
lean_ctor_set(x_2211, 1, x_2210);
x_2212 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2195);
x_2213 = l_Lean_Syntax_node4(x_2195, x_2212, x_2207, x_2209, x_2211, x_2192);
lean_inc(x_2195);
x_2214 = l_Lean_Syntax_node1(x_2195, x_2198, x_2213);
x_2215 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2195);
x_2216 = l_Lean_Syntax_node1(x_2195, x_2215, x_2214);
x_2217 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2200);
x_2218 = l_Lean_Syntax_node6(x_2195, x_2217, x_2197, x_2200, x_2200, x_2203, x_2205, x_2216);
x_2219 = 1;
x_2220 = lean_box(x_2219);
lean_ctor_set(x_2186, 1, x_2220);
lean_ctor_set(x_2186, 0, x_2218);
return x_2184;
}
else
{
lean_object* x_2221; lean_object* x_2222; lean_object* x_2223; lean_object* x_2224; lean_object* x_2225; lean_object* x_2226; lean_object* x_2227; lean_object* x_2228; lean_object* x_2229; lean_object* x_2230; lean_object* x_2231; lean_object* x_2232; lean_object* x_2233; lean_object* x_2234; lean_object* x_2235; lean_object* x_2236; lean_object* x_2237; lean_object* x_2238; lean_object* x_2239; lean_object* x_2240; lean_object* x_2241; lean_object* x_2242; lean_object* x_2243; lean_object* x_2244; lean_object* x_2245; lean_object* x_2246; uint8_t x_2247; lean_object* x_2248; lean_object* x_2249; 
x_2221 = lean_ctor_get(x_2186, 0);
lean_inc(x_2221);
lean_dec(x_2186);
x_2222 = lean_ctor_get(x_5, 5);
lean_inc(x_2222);
lean_dec(x_5);
x_2223 = l_Lean_SourceInfo_fromRef(x_2222, x_2175);
x_2224 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2223);
x_2225 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2225, 0, x_2223);
lean_ctor_set(x_2225, 1, x_2224);
x_2226 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2227 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2223);
x_2228 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2228, 0, x_2223);
lean_ctor_set(x_2228, 1, x_2226);
lean_ctor_set(x_2228, 2, x_2227);
x_2229 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2228);
lean_inc(x_2223);
x_2230 = l_Lean_Syntax_node2(x_2223, x_2229, x_2228, x_2177);
lean_inc(x_2223);
x_2231 = l_Lean_Syntax_node1(x_2223, x_2226, x_2230);
x_2232 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2223);
x_2233 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2233, 0, x_2223);
lean_ctor_set(x_2233, 1, x_2232);
x_2234 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2223);
x_2235 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2235, 0, x_2223);
lean_ctor_set(x_2235, 1, x_2234);
lean_inc(x_2223);
x_2236 = l_Lean_Syntax_node1(x_2223, x_2226, x_14);
lean_inc(x_2223);
x_2237 = l_Lean_Syntax_node1(x_2223, x_2226, x_2236);
x_2238 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2223);
x_2239 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2239, 0, x_2223);
lean_ctor_set(x_2239, 1, x_2238);
x_2240 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2223);
x_2241 = l_Lean_Syntax_node4(x_2223, x_2240, x_2235, x_2237, x_2239, x_2221);
lean_inc(x_2223);
x_2242 = l_Lean_Syntax_node1(x_2223, x_2226, x_2241);
x_2243 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2223);
x_2244 = l_Lean_Syntax_node1(x_2223, x_2243, x_2242);
x_2245 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2228);
x_2246 = l_Lean_Syntax_node6(x_2223, x_2245, x_2225, x_2228, x_2228, x_2231, x_2233, x_2244);
x_2247 = 1;
x_2248 = lean_box(x_2247);
x_2249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2249, 0, x_2246);
lean_ctor_set(x_2249, 1, x_2248);
lean_ctor_set(x_2185, 1, x_2249);
return x_2184;
}
}
else
{
lean_object* x_2250; lean_object* x_2251; lean_object* x_2252; lean_object* x_2253; lean_object* x_2254; lean_object* x_2255; lean_object* x_2256; lean_object* x_2257; lean_object* x_2258; lean_object* x_2259; lean_object* x_2260; lean_object* x_2261; lean_object* x_2262; lean_object* x_2263; lean_object* x_2264; lean_object* x_2265; lean_object* x_2266; lean_object* x_2267; lean_object* x_2268; lean_object* x_2269; lean_object* x_2270; lean_object* x_2271; lean_object* x_2272; lean_object* x_2273; lean_object* x_2274; lean_object* x_2275; lean_object* x_2276; lean_object* x_2277; uint8_t x_2278; lean_object* x_2279; lean_object* x_2280; lean_object* x_2281; 
x_2250 = lean_ctor_get(x_2185, 0);
lean_inc(x_2250);
lean_dec(x_2185);
x_2251 = lean_ctor_get(x_2186, 0);
lean_inc(x_2251);
if (lean_is_exclusive(x_2186)) {
 lean_ctor_release(x_2186, 0);
 lean_ctor_release(x_2186, 1);
 x_2252 = x_2186;
} else {
 lean_dec_ref(x_2186);
 x_2252 = lean_box(0);
}
x_2253 = lean_ctor_get(x_5, 5);
lean_inc(x_2253);
lean_dec(x_5);
x_2254 = l_Lean_SourceInfo_fromRef(x_2253, x_2175);
x_2255 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2254);
x_2256 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2256, 0, x_2254);
lean_ctor_set(x_2256, 1, x_2255);
x_2257 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2258 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2254);
x_2259 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2259, 0, x_2254);
lean_ctor_set(x_2259, 1, x_2257);
lean_ctor_set(x_2259, 2, x_2258);
x_2260 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2259);
lean_inc(x_2254);
x_2261 = l_Lean_Syntax_node2(x_2254, x_2260, x_2259, x_2177);
lean_inc(x_2254);
x_2262 = l_Lean_Syntax_node1(x_2254, x_2257, x_2261);
x_2263 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2254);
x_2264 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2264, 0, x_2254);
lean_ctor_set(x_2264, 1, x_2263);
x_2265 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2254);
x_2266 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2266, 0, x_2254);
lean_ctor_set(x_2266, 1, x_2265);
lean_inc(x_2254);
x_2267 = l_Lean_Syntax_node1(x_2254, x_2257, x_14);
lean_inc(x_2254);
x_2268 = l_Lean_Syntax_node1(x_2254, x_2257, x_2267);
x_2269 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2254);
x_2270 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2270, 0, x_2254);
lean_ctor_set(x_2270, 1, x_2269);
x_2271 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2254);
x_2272 = l_Lean_Syntax_node4(x_2254, x_2271, x_2266, x_2268, x_2270, x_2251);
lean_inc(x_2254);
x_2273 = l_Lean_Syntax_node1(x_2254, x_2257, x_2272);
x_2274 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2254);
x_2275 = l_Lean_Syntax_node1(x_2254, x_2274, x_2273);
x_2276 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2259);
x_2277 = l_Lean_Syntax_node6(x_2254, x_2276, x_2256, x_2259, x_2259, x_2262, x_2264, x_2275);
x_2278 = 1;
x_2279 = lean_box(x_2278);
if (lean_is_scalar(x_2252)) {
 x_2280 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2280 = x_2252;
}
lean_ctor_set(x_2280, 0, x_2277);
lean_ctor_set(x_2280, 1, x_2279);
x_2281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2281, 0, x_2250);
lean_ctor_set(x_2281, 1, x_2280);
lean_ctor_set(x_2184, 0, x_2281);
return x_2184;
}
}
else
{
lean_object* x_2282; lean_object* x_2283; lean_object* x_2284; lean_object* x_2285; lean_object* x_2286; lean_object* x_2287; lean_object* x_2288; lean_object* x_2289; lean_object* x_2290; lean_object* x_2291; lean_object* x_2292; lean_object* x_2293; lean_object* x_2294; lean_object* x_2295; lean_object* x_2296; lean_object* x_2297; lean_object* x_2298; lean_object* x_2299; lean_object* x_2300; lean_object* x_2301; lean_object* x_2302; lean_object* x_2303; lean_object* x_2304; lean_object* x_2305; lean_object* x_2306; lean_object* x_2307; lean_object* x_2308; lean_object* x_2309; lean_object* x_2310; lean_object* x_2311; uint8_t x_2312; lean_object* x_2313; lean_object* x_2314; lean_object* x_2315; lean_object* x_2316; 
x_2282 = lean_ctor_get(x_2184, 1);
lean_inc(x_2282);
lean_dec(x_2184);
x_2283 = lean_ctor_get(x_2185, 0);
lean_inc(x_2283);
if (lean_is_exclusive(x_2185)) {
 lean_ctor_release(x_2185, 0);
 lean_ctor_release(x_2185, 1);
 x_2284 = x_2185;
} else {
 lean_dec_ref(x_2185);
 x_2284 = lean_box(0);
}
x_2285 = lean_ctor_get(x_2186, 0);
lean_inc(x_2285);
if (lean_is_exclusive(x_2186)) {
 lean_ctor_release(x_2186, 0);
 lean_ctor_release(x_2186, 1);
 x_2286 = x_2186;
} else {
 lean_dec_ref(x_2186);
 x_2286 = lean_box(0);
}
x_2287 = lean_ctor_get(x_5, 5);
lean_inc(x_2287);
lean_dec(x_5);
x_2288 = l_Lean_SourceInfo_fromRef(x_2287, x_2175);
x_2289 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_2288);
x_2290 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2290, 0, x_2288);
lean_ctor_set(x_2290, 1, x_2289);
x_2291 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_2292 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_2288);
x_2293 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_2293, 0, x_2288);
lean_ctor_set(x_2293, 1, x_2291);
lean_ctor_set(x_2293, 2, x_2292);
x_2294 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2293);
lean_inc(x_2288);
x_2295 = l_Lean_Syntax_node2(x_2288, x_2294, x_2293, x_2177);
lean_inc(x_2288);
x_2296 = l_Lean_Syntax_node1(x_2288, x_2291, x_2295);
x_2297 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_2288);
x_2298 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2298, 0, x_2288);
lean_ctor_set(x_2298, 1, x_2297);
x_2299 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_2288);
x_2300 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2300, 0, x_2288);
lean_ctor_set(x_2300, 1, x_2299);
lean_inc(x_2288);
x_2301 = l_Lean_Syntax_node1(x_2288, x_2291, x_14);
lean_inc(x_2288);
x_2302 = l_Lean_Syntax_node1(x_2288, x_2291, x_2301);
x_2303 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_2288);
x_2304 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_2304, 0, x_2288);
lean_ctor_set(x_2304, 1, x_2303);
x_2305 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_2288);
x_2306 = l_Lean_Syntax_node4(x_2288, x_2305, x_2300, x_2302, x_2304, x_2285);
lean_inc(x_2288);
x_2307 = l_Lean_Syntax_node1(x_2288, x_2291, x_2306);
x_2308 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_2288);
x_2309 = l_Lean_Syntax_node1(x_2288, x_2308, x_2307);
x_2310 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_2293);
x_2311 = l_Lean_Syntax_node6(x_2288, x_2310, x_2290, x_2293, x_2293, x_2296, x_2298, x_2309);
x_2312 = 1;
x_2313 = lean_box(x_2312);
if (lean_is_scalar(x_2286)) {
 x_2314 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2314 = x_2286;
}
lean_ctor_set(x_2314, 0, x_2311);
lean_ctor_set(x_2314, 1, x_2313);
if (lean_is_scalar(x_2284)) {
 x_2315 = lean_alloc_ctor(0, 2, 0);
} else {
 x_2315 = x_2284;
}
lean_ctor_set(x_2315, 0, x_2283);
lean_ctor_set(x_2315, 1, x_2314);
x_2316 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2316, 0, x_2315);
lean_ctor_set(x_2316, 1, x_2282);
return x_2316;
}
}
else
{
uint8_t x_2317; 
lean_dec(x_2177);
lean_dec(x_14);
lean_dec(x_5);
x_2317 = !lean_is_exclusive(x_2184);
if (x_2317 == 0)
{
return x_2184;
}
else
{
lean_object* x_2318; lean_object* x_2319; lean_object* x_2320; 
x_2318 = lean_ctor_get(x_2184, 0);
x_2319 = lean_ctor_get(x_2184, 1);
lean_inc(x_2319);
lean_inc(x_2318);
lean_dec(x_2184);
x_2320 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_2320, 0, x_2318);
lean_ctor_set(x_2320, 1, x_2319);
return x_2320;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Elab_Term_mkFreshIdent___at_Lean_Elab_Term_expandFunBinders_loop___spec__1(x_1, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__3(x_1, x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__4(x_1, x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__5(x_1, x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFunBinders_loop___spec__6(x_1, x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Term_expandFunBinders_loop___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Array_anyMUnsafe_any___at_Lean_Elab_Term_expandFunBinders_loop___spec__7(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_7 = l_Lean_Elab_Term_expandFunBinders_loop(x_1, x_2, x_5, x_6, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandFunBinders(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_FunBinders_State_fvars___default() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_3, 3);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l_Lean_Meta_whnfForall(x_14, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 7)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 2);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_Meta_isExprDefEq(x_2, x_18, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_expr_instantiate1(x_19, x_1);
lean_dec(x_19);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_3, 2);
lean_inc(x_26);
lean_dec(x_3);
lean_ctor_set(x_11, 0, x_23);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_26);
lean_ctor_set(x_27, 3, x_11);
lean_ctor_set(x_20, 0, x_27);
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_dec(x_20);
x_29 = lean_expr_instantiate1(x_19, x_1);
lean_dec(x_19);
x_30 = lean_ctor_get(x_3, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_3, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_3, 2);
lean_inc(x_32);
lean_dec(x_3);
lean_ctor_set(x_11, 0, x_29);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_31);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_11);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_28);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_19);
lean_free_object(x_11);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
return x_20;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_20, 0);
x_37 = lean_ctor_get(x_20, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_20);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_16);
lean_free_object(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_15);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_dec(x_40);
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_3, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_3, 2);
lean_inc(x_43);
lean_dec(x_3);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_42);
lean_ctor_set(x_45, 2, x_43);
lean_ctor_set(x_45, 3, x_44);
lean_ctor_set(x_15, 0, x_45);
return x_15;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_46 = lean_ctor_get(x_15, 1);
lean_inc(x_46);
lean_dec(x_15);
x_47 = lean_ctor_get(x_3, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_3, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_3, 2);
lean_inc(x_49);
lean_dec(x_3);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_47);
lean_ctor_set(x_51, 1, x_48);
lean_ctor_set(x_51, 2, x_49);
lean_ctor_set(x_51, 3, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_46);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_free_object(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_15);
if (x_53 == 0)
{
return x_15;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_15, 0);
x_55 = lean_ctor_get(x_15, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_15);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_11, 0);
lean_inc(x_57);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_58 = l_Lean_Meta_whnfForall(x_57, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
if (lean_obj_tag(x_59) == 7)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_59, 2);
lean_inc(x_62);
lean_dec(x_59);
x_63 = l_Lean_Meta_isExprDefEq(x_2, x_61, x_6, x_7, x_8, x_9, x_60);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
x_66 = lean_expr_instantiate1(x_62, x_1);
lean_dec(x_62);
x_67 = lean_ctor_get(x_3, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_3, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_3, 2);
lean_inc(x_69);
lean_dec(x_3);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_66);
x_71 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_71, 0, x_67);
lean_ctor_set(x_71, 1, x_68);
lean_ctor_set(x_71, 2, x_69);
lean_ctor_set(x_71, 3, x_70);
if (lean_is_scalar(x_65)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_65;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_64);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_62);
lean_dec(x_3);
x_73 = lean_ctor_get(x_63, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_63, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_75 = x_63;
} else {
 lean_dec_ref(x_63);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_59);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_77 = lean_ctor_get(x_58, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_78 = x_58;
} else {
 lean_dec_ref(x_58);
 x_78 = lean_box(0);
}
x_79 = lean_ctor_get(x_3, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_3, 1);
lean_inc(x_80);
x_81 = lean_ctor_get(x_3, 2);
lean_inc(x_81);
lean_dec(x_3);
x_82 = lean_box(0);
x_83 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_83, 0, x_79);
lean_ctor_set(x_83, 1, x_80);
lean_ctor_set(x_83, 2, x_81);
lean_ctor_set(x_83, 3, x_82);
if (lean_is_scalar(x_78)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_78;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_77);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_85 = lean_ctor_get(x_58, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_58, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_87 = x_58;
} else {
 lean_dec_ref(x_58);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
x_10 = l_Lean_Name_num___override(x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_12);
x_13 = lean_st_ref_take(x_1, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 2);
lean_dec(x_17);
lean_ctor_set(x_14, 2, x_5);
x_18 = lean_st_ref_set(x_1, x_14, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
x_25 = lean_ctor_get(x_14, 3);
x_26 = lean_ctor_get(x_14, 4);
x_27 = lean_ctor_get(x_14, 5);
x_28 = lean_ctor_get(x_14, 6);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_29 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_24);
lean_ctor_set(x_29, 2, x_5);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set(x_29, 4, x_26);
lean_ctor_set(x_29, 5, x_27);
lean_ctor_set(x_29, 6, x_28);
x_30 = lean_st_ref_set(x_1, x_29, x_15);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_10);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_34 = lean_ctor_get(x_5, 0);
x_35 = lean_ctor_get(x_5, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_5);
lean_inc(x_35);
lean_inc(x_34);
x_36 = l_Lean_Name_num___override(x_34, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_35, x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_34);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_st_ref_take(x_1, x_6);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_41, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_41, 3);
lean_inc(x_45);
x_46 = lean_ctor_get(x_41, 4);
lean_inc(x_46);
x_47 = lean_ctor_get(x_41, 5);
lean_inc(x_47);
x_48 = lean_ctor_get(x_41, 6);
lean_inc(x_48);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 lean_ctor_release(x_41, 2);
 lean_ctor_release(x_41, 3);
 lean_ctor_release(x_41, 4);
 lean_ctor_release(x_41, 5);
 lean_ctor_release(x_41, 6);
 x_49 = x_41;
} else {
 lean_dec_ref(x_41);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 7, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_43);
lean_ctor_set(x_50, 1, x_44);
lean_ctor_set(x_50, 2, x_39);
lean_ctor_set(x_50, 3, x_45);
lean_ctor_set(x_50, 4, x_46);
lean_ctor_set(x_50, 5, x_47);
lean_ctor_set(x_50, 6, x_48);
x_51 = lean_st_ref_set(x_1, x_50, x_42);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_36);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___rarg___boxed), 2, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___rarg(x_6, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_apply_2(x_3, x_4, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp___rarg(x_1, x_2, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_15 = l_Lean_Elab_Term_elabType(x_1, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo(x_16, x_1, x_8, x_9, x_10, x_11, x_12, x_13, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_mkFreshFVarId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(x_8, x_9, x_10, x_11, x_12, x_13, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_21);
x_23 = l_Lean_Expr_fvar___override(x_21);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_inc(x_23);
x_25 = lean_array_push(x_24, x_23);
x_26 = lean_ctor_get(x_2, 3);
lean_inc(x_26);
lean_dec(x_2);
lean_inc(x_3);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_3);
lean_ctor_set(x_27, 2, x_4);
lean_ctor_set(x_27, 3, x_26);
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
x_29 = l_Lean_Syntax_getId(x_28);
lean_inc(x_29);
x_30 = l_Lean_Elab_Term_kindOfBinderName(x_29);
x_31 = lean_ctor_get_uint8(x_5, sizeof(void*)*3);
lean_inc(x_16);
x_32 = l_Lean_LocalContext_mkLocalDecl(x_3, x_21, x_29, x_16, x_31, x_30);
x_33 = lean_ctor_get(x_5, 0);
lean_inc(x_33);
lean_dec(x_5);
x_34 = lean_box(0);
lean_inc(x_32);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_32);
x_36 = lean_box(0);
x_37 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_23);
x_38 = l_Lean_Elab_Term_addTermInfo_x27(x_33, x_23, x_34, x_35, x_36, x_37, x_8, x_9, x_10, x_11, x_12, x_13, x_22);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get(x_12, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_12, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_12, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_12, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_12, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_12, 5);
lean_inc(x_45);
x_46 = lean_ctor_get(x_12, 6);
lean_inc(x_46);
x_47 = lean_ctor_get(x_12, 7);
lean_inc(x_47);
x_48 = lean_ctor_get(x_12, 8);
lean_inc(x_48);
x_49 = lean_ctor_get(x_12, 9);
lean_inc(x_49);
x_50 = lean_ctor_get(x_12, 10);
lean_inc(x_50);
x_51 = l_Lean_replaceRef(x_28, x_45);
lean_dec(x_45);
lean_dec(x_28);
x_52 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_52, 0, x_40);
lean_ctor_set(x_52, 1, x_41);
lean_ctor_set(x_52, 2, x_42);
lean_ctor_set(x_52, 3, x_43);
lean_ctor_set(x_52, 4, x_44);
lean_ctor_set(x_52, 5, x_51);
lean_ctor_set(x_52, 6, x_46);
lean_ctor_set(x_52, 7, x_47);
lean_ctor_set(x_52, 8, x_48);
lean_ctor_set(x_52, 9, x_49);
lean_ctor_set(x_52, 10, x_50);
lean_inc(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_16);
x_53 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_propagateExpectedType(x_23, x_16, x_27, x_8, x_9, x_10, x_11, x_52, x_13, x_39);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_57 = lean_ctor_get(x_54, 0);
x_58 = lean_ctor_get(x_54, 2);
x_59 = lean_ctor_get(x_54, 3);
x_60 = lean_ctor_get(x_54, 1);
lean_dec(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_32);
lean_inc(x_57);
lean_ctor_set(x_54, 1, x_32);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_61 = l_Lean_Meta_isClass_x3f(x_16, x_10, x_11, x_12, x_13, x_55);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_32);
lean_dec(x_23);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_nat_add(x_6, x_64);
lean_dec(x_6);
x_66 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_65, x_54, x_8, x_9, x_10, x_11, x_12, x_13, x_63);
return x_66;
}
else
{
lean_object* x_67; 
x_67 = lean_box(x_30);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_54);
x_68 = lean_ctor_get(x_61, 1);
lean_inc(x_68);
lean_dec(x_61);
x_69 = lean_ctor_get(x_62, 0);
lean_inc(x_69);
lean_dec(x_62);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_23);
x_71 = lean_array_push(x_58, x_70);
x_72 = lean_unsigned_to_nat(1u);
x_73 = lean_nat_add(x_6, x_72);
lean_dec(x_6);
x_74 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_74, 0, x_57);
lean_ctor_set(x_74, 1, x_32);
lean_ctor_set(x_74, 2, x_71);
lean_ctor_set(x_74, 3, x_59);
x_75 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_68);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_78 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_73, x_74, x_8, x_9, x_10, x_11, x_12, x_13, x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = l_Lean_Meta_restoreSynthInstanceCache(x_76, x_10, x_11, x_12, x_13, x_80);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; 
x_83 = lean_ctor_get(x_81, 0);
lean_dec(x_83);
lean_ctor_set(x_81, 0, x_79);
return x_81;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_79);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_86 = lean_ctor_get(x_78, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_78, 1);
lean_inc(x_87);
lean_dec(x_78);
x_88 = l_Lean_Meta_restoreSynthInstanceCache(x_76, x_10, x_11, x_12, x_13, x_87);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; 
x_90 = lean_ctor_get(x_88, 0);
lean_dec(x_90);
lean_ctor_set_tag(x_88, 1);
lean_ctor_set(x_88, 0, x_86);
return x_88;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_dec(x_88);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_86);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_67);
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_32);
lean_dec(x_23);
x_93 = lean_ctor_get(x_61, 1);
lean_inc(x_93);
lean_dec(x_61);
x_94 = lean_unsigned_to_nat(1u);
x_95 = lean_nat_add(x_6, x_94);
lean_dec(x_6);
x_96 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_95, x_54, x_8, x_9, x_10, x_11, x_12, x_13, x_93);
return x_96;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_97 = lean_ctor_get(x_54, 0);
x_98 = lean_ctor_get(x_54, 2);
x_99 = lean_ctor_get(x_54, 3);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_54);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_32);
lean_inc(x_97);
x_100 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_32);
lean_ctor_set(x_100, 2, x_98);
lean_ctor_set(x_100, 3, x_99);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_101 = l_Lean_Meta_isClass_x3f(x_16, x_10, x_11, x_12, x_13, x_55);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_32);
lean_dec(x_23);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_unsigned_to_nat(1u);
x_105 = lean_nat_add(x_6, x_104);
lean_dec(x_6);
x_106 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_105, x_100, x_8, x_9, x_10, x_11, x_12, x_13, x_103);
return x_106;
}
else
{
lean_object* x_107; 
x_107 = lean_box(x_30);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_100);
x_108 = lean_ctor_get(x_101, 1);
lean_inc(x_108);
lean_dec(x_101);
x_109 = lean_ctor_get(x_102, 0);
lean_inc(x_109);
lean_dec(x_102);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_23);
x_111 = lean_array_push(x_98, x_110);
x_112 = lean_unsigned_to_nat(1u);
x_113 = lean_nat_add(x_6, x_112);
lean_dec(x_6);
x_114 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_114, 0, x_97);
lean_ctor_set(x_114, 1, x_32);
lean_ctor_set(x_114, 2, x_111);
lean_ctor_set(x_114, 3, x_99);
x_115 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_11, x_12, x_13, x_108);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_118 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_113, x_114, x_8, x_9, x_10, x_11, x_12, x_13, x_117);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = l_Lean_Meta_restoreSynthInstanceCache(x_116, x_10, x_11, x_12, x_13, x_120);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_122 = lean_ctor_get(x_121, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_123 = x_121;
} else {
 lean_dec_ref(x_121);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_119);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_125 = lean_ctor_get(x_118, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_118, 1);
lean_inc(x_126);
lean_dec(x_118);
x_127 = l_Lean_Meta_restoreSynthInstanceCache(x_116, x_10, x_11, x_12, x_13, x_126);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_128 = lean_ctor_get(x_127, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_129 = x_127;
} else {
 lean_dec_ref(x_127);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(1, 2, 0);
} else {
 x_130 = x_129;
 lean_ctor_set_tag(x_130, 1);
}
lean_ctor_set(x_130, 0, x_125);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_107);
lean_dec(x_102);
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_97);
lean_dec(x_32);
lean_dec(x_23);
x_131 = lean_ctor_get(x_101, 1);
lean_inc(x_131);
lean_dec(x_101);
x_132 = lean_unsigned_to_nat(1u);
x_133 = lean_nat_add(x_6, x_132);
lean_dec(x_6);
x_134 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_7, x_133, x_100, x_8, x_9, x_10, x_11, x_12, x_13, x_131);
return x_134;
}
}
}
}
else
{
uint8_t x_135; 
lean_dec(x_32);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_135 = !lean_is_exclusive(x_53);
if (x_135 == 0)
{
return x_53;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_53, 0);
x_137 = lean_ctor_get(x_53, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_53);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
else
{
uint8_t x_139; 
lean_dec(x_32);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_139 = !lean_is_exclusive(x_38);
if (x_139 == 0)
{
return x_38;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_38, 0);
x_141 = lean_ctor_get(x_38, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_38);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
else
{
uint8_t x_143; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_143 = !lean_is_exclusive(x_15);
if (x_143 == 0)
{
return x_15;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_15, 0);
x_145 = lean_ctor_get(x_15, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_15);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_nat_dec_lt(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_1, x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_14, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_3, 2);
lean_inc(x_19);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
x_20 = lean_alloc_closure((void*)(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___lambda__1), 14, 7);
lean_closure_set(x_20, 0, x_17);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_18);
lean_closure_set(x_20, 3, x_19);
lean_closure_set(x_20, 4, x_14);
lean_closure_set(x_20, 5, x_2);
lean_closure_set(x_20, 6, x_1);
x_21 = !lean_is_exclusive(x_8);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_8, 5);
x_23 = l_Lean_replaceRef(x_17, x_22);
lean_dec(x_22);
lean_dec(x_17);
lean_ctor_set(x_8, 5, x_23);
x_24 = l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3___rarg(x_18, x_19, x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_8, 0);
x_26 = lean_ctor_get(x_8, 1);
x_27 = lean_ctor_get(x_8, 2);
x_28 = lean_ctor_get(x_8, 3);
x_29 = lean_ctor_get(x_8, 4);
x_30 = lean_ctor_get(x_8, 5);
x_31 = lean_ctor_get(x_8, 6);
x_32 = lean_ctor_get(x_8, 7);
x_33 = lean_ctor_get(x_8, 8);
x_34 = lean_ctor_get(x_8, 9);
x_35 = lean_ctor_get(x_8, 10);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_8);
x_36 = l_Lean_replaceRef(x_17, x_30);
lean_dec(x_30);
lean_dec(x_17);
x_37 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_37, 0, x_25);
lean_ctor_set(x_37, 1, x_26);
lean_ctor_set(x_37, 2, x_27);
lean_ctor_set(x_37, 3, x_28);
lean_ctor_set(x_37, 4, x_29);
lean_ctor_set(x_37, 5, x_36);
lean_ctor_set(x_37, 6, x_31);
lean_ctor_set(x_37, 7, x_32);
lean_ctor_set(x_37, 8, x_33);
lean_ctor_set(x_37, 9, x_34);
lean_ctor_set(x_37, 10, x_35);
x_38 = l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3___rarg(x_18, x_19, x_20, x_4, x_5, x_6, x_7, x_37, x_9, x_16);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_15);
if (x_39 == 0)
{
return x_15;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_15, 0);
x_41 = lean_ctor_get(x_15, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_15);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_mkFreshId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_mkFreshFVarId___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_1);
x_12 = lean_nat_dec_lt(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_1, x_2);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews(x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews(x_16, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_2, x_22);
lean_dec(x_2);
x_2 = x_23;
x_3 = x_20;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_15);
if (x_29 == 0)
{
return x_15;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_15, 0);
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_15);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_FunBinders_elabFunBindersAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFunBinders___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Array_isEmpty___rarg(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
x_13 = l_Lean_Meta_getLocalInstances(x_6, x_7, x_8, x_9, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_2);
x_18 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_Elab_Term_FunBinders_elabFunBindersAux(x_1, x_18, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_get_size(x_14);
lean_dec(x_14);
x_23 = lean_ctor_get(x_20, 2);
lean_inc(x_23);
x_24 = lean_array_get_size(x_23);
x_25 = lean_nat_dec_lt(x_22, x_24);
lean_dec(x_24);
lean_dec(x_22);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_20, 3);
lean_inc(x_28);
lean_dec(x_20);
x_29 = lean_apply_2(x_3, x_27, x_28);
if (x_25 == 0)
{
lean_object* x_30; 
x_30 = l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3___rarg(x_26, x_23, x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = l_Lean_Meta_saveAndResetSynthInstanceCache___rarg(x_7, x_8, x_9, x_21);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_34 = l_Lean_Meta_withLCtx___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_FunBinders_elabFunBinderViews___spec__3___rarg(x_26, x_23, x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Meta_restoreSynthInstanceCache(x_32, x_6, x_7, x_8, x_9, x_36);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
lean_ctor_set(x_37, 0, x_35);
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_34, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_34, 1);
lean_inc(x_43);
lean_dec(x_34);
x_44 = l_Lean_Meta_restoreSynthInstanceCache(x_32, x_6, x_7, x_8, x_9, x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
lean_ctor_set_tag(x_44, 1);
lean_ctor_set(x_44, 0, x_42);
return x_44;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_19);
if (x_49 == 0)
{
return x_19;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_19, 0);
x_51 = lean_ctor_get(x_19, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_19);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_54 = lean_apply_9(x_3, x_53, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_54;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFunBinders(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFunBinders___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFunBinders___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabFunBinders___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Term_expandWhereDecls___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_3, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_3, x_11);
lean_dec(x_3);
x_13 = lean_array_fget(x_1, x_4);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_box(0);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_18 = lean_array_push(x_5, x_16);
x_3 = x_12;
x_4 = x_17;
x_5 = x_18;
goto _start;
}
}
else
{
lean_object* x_20; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_5);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Term_expandWhereDecls___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_sequenceMap_loop___at_Lean_Elab_Term_expandWhereDecls___spec__2(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("letRecDecl", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDecls___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__2;
lean_inc(x_1);
x_3 = l_Lean_Syntax_isOfKind(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_1);
return x_5;
}
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("whereDecls", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandWhereDecls___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandWhereDecls___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("letrec", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandWhereDecls___closed__5;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("group", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_expandWhereDecls___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("let", 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("rec", 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("letRecDecls", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandWhereDecls___closed__11;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(2);
x_2 = l_Lean_Elab_Term_expandForall___closed__5;
x_3 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandWhereDecls___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(";", 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Term_expandWhereDecls___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(1);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
lean_dec(x_1);
x_11 = l_Lean_Syntax_getArgs(x_10);
lean_dec(x_10);
x_12 = lean_array_get_size(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_object* x_44; 
lean_dec(x_12);
lean_dec(x_11);
x_44 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_15 = x_44;
goto block_43;
}
else
{
uint8_t x_45; 
x_45 = lean_nat_dec_le(x_12, x_12);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_12);
lean_dec(x_11);
x_46 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_15 = x_46;
goto block_43;
}
else
{
size_t x_47; size_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = 0;
x_48 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_49 = l_Lean_Elab_Term_expandWhereDecls___closed__3;
x_50 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_11, x_47, x_48, x_49);
lean_dec(x_11);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_15 = x_51;
goto block_43;
}
}
block_43:
{
lean_object* x_16; lean_object* x_17; 
x_16 = l_Lean_Elab_Term_expandWhereDecls___closed__4;
x_17 = l_Array_sequenceMap___at_Lean_Elab_Term_expandWhereDecls___spec__1(x_15, x_16);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_box(1);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_4);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_3, 5);
lean_inc(x_21);
lean_dec(x_3);
x_22 = 0;
x_23 = l_Lean_SourceInfo_fromRef(x_21, x_22);
x_24 = l_Lean_Elab_Term_expandWhereDecls___closed__9;
lean_inc(x_23);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Elab_Term_expandWhereDecls___closed__10;
lean_inc(x_23);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Elab_Term_expandWhereDecls___closed__8;
lean_inc(x_23);
x_29 = l_Lean_Syntax_node2(x_23, x_28, x_25, x_27);
x_30 = l_Lean_Elab_Term_expandWhereDecls___closed__13;
x_31 = l_Lean_mkSepArray(x_20, x_30);
lean_dec(x_20);
x_32 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_33 = l_Array_append___rarg(x_32, x_31);
x_34 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_23);
x_35 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_35, 0, x_23);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_33);
x_36 = l_Lean_Elab_Term_expandWhereDecls___closed__12;
lean_inc(x_23);
x_37 = l_Lean_Syntax_node1(x_23, x_36, x_35);
x_38 = l_Lean_Elab_Term_expandWhereDecls___closed__14;
lean_inc(x_23);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_23);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Lean_Elab_Term_expandWhereDecls___closed__6;
x_41 = l_Lean_Syntax_node4(x_23, x_40, x_29, x_37, x_39, x_2);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_4);
return x_42;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap_loop___at_Lean_Elab_Term_expandWhereDecls___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_sequenceMap_loop___at_Lean_Elab_Term_expandWhereDecls___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_sequenceMap___at_Lean_Elab_Term_expandWhereDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_sequenceMap___at_Lean_Elab_Term_expandWhereDecls___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_Syntax_isNone(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l_Lean_Elab_Term_expandWhereDecls(x_7, x_2, x_3, x_4);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandWhereDeclsOpt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_7 = lean_array_uget(x_5, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_5, x_4, x_8);
x_10 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Syntax_node2(x_1, x_10, x_2, x_7);
x_12 = 1;
x_13 = lean_usize_add(x_4, x_12);
x_14 = lean_array_uset(x_9, x_4, x_11);
x_4 = x_13;
x_5 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_7 = lean_array_uget(x_5, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_5, x_4, x_8);
x_10 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Syntax_node2(x_1, x_10, x_2, x_7);
x_12 = 1;
x_13 = lean_usize_add(x_4, x_12);
x_14 = lean_array_uset(x_9, x_4, x_11);
x_4 = x_13;
x_5 = x_14;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__1;
x_2 = l_String_toSubstring_x27(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("explicit", 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("@", 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("fun", 3);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("basicFun", 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__7;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Tactic", 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("seq1", 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__10;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("intro", 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9;
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9;
x_4 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_4, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_4, x_11);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_nat_add(x_14, x_11);
lean_ctor_set(x_8, 0, x_15);
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_17 = lean_ctor_get(x_7, 1);
x_18 = lean_ctor_get(x_7, 5);
x_19 = lean_ctor_get(x_7, 2);
lean_dec(x_19);
lean_inc(x_18);
lean_inc(x_14);
lean_inc(x_17);
lean_ctor_set(x_7, 2, x_14);
x_20 = 0;
x_21 = l_Lean_SourceInfo_fromRef(x_18, x_20);
x_22 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_23 = l_Lean_addMacroScope(x_17, x_22, x_14);
x_24 = lean_box(0);
x_25 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
lean_inc(x_21);
x_26 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_21);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_21);
lean_ctor_set(x_28, 1, x_27);
x_29 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
lean_inc(x_26);
lean_inc(x_28);
lean_inc(x_21);
x_30 = l_Lean_Syntax_node2(x_21, x_29, x_28, x_26);
x_31 = lean_array_push(x_5, x_30);
lean_inc(x_26);
x_32 = lean_array_push(x_6, x_26);
x_33 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_3, x_12, x_31, x_32, x_7, x_8);
lean_dec(x_12);
if (x_2 == 0)
{
if (x_3 == 0)
{
uint8_t x_34; 
lean_dec(x_28);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_21);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_21);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_21);
x_39 = l_Lean_Syntax_node1(x_21, x_38, x_26);
x_40 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_21);
x_41 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_41, 0, x_21);
lean_ctor_set(x_41, 1, x_38);
lean_ctor_set(x_41, 2, x_40);
x_42 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_21);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_21);
lean_ctor_set(x_43, 1, x_42);
x_44 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_21);
x_45 = l_Lean_Syntax_node4(x_21, x_44, x_39, x_41, x_43, x_35);
x_46 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
x_47 = l_Lean_Syntax_node2(x_21, x_46, x_37, x_45);
lean_ctor_set(x_33, 0, x_47);
return x_33;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_48 = lean_ctor_get(x_33, 0);
x_49 = lean_ctor_get(x_33, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_33);
x_50 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_21);
x_51 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_51, 0, x_21);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_21);
x_53 = l_Lean_Syntax_node1(x_21, x_52, x_26);
x_54 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_21);
x_55 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_55, 0, x_21);
lean_ctor_set(x_55, 1, x_52);
lean_ctor_set(x_55, 2, x_54);
x_56 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_21);
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_21);
lean_ctor_set(x_57, 1, x_56);
x_58 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_21);
x_59 = l_Lean_Syntax_node4(x_21, x_58, x_53, x_55, x_57, x_48);
x_60 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
x_61 = l_Lean_Syntax_node2(x_21, x_60, x_51, x_59);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_49);
return x_62;
}
}
else
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_33);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_64 = lean_ctor_get(x_33, 0);
x_65 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_21);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_21);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_21);
x_68 = l_Lean_Syntax_node1(x_21, x_67, x_26);
x_69 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_21);
x_70 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_70, 0, x_21);
lean_ctor_set(x_70, 1, x_67);
lean_ctor_set(x_70, 2, x_69);
x_71 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_21);
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_21);
lean_ctor_set(x_72, 1, x_71);
x_73 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_21);
x_74 = l_Lean_Syntax_node4(x_21, x_73, x_68, x_70, x_72, x_64);
x_75 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_21);
x_76 = l_Lean_Syntax_node2(x_21, x_75, x_66, x_74);
x_77 = l_Lean_Syntax_node2(x_21, x_29, x_28, x_76);
lean_ctor_set(x_33, 0, x_77);
return x_33;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_78 = lean_ctor_get(x_33, 0);
x_79 = lean_ctor_get(x_33, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_33);
x_80 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_21);
x_81 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_81, 0, x_21);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_21);
x_83 = l_Lean_Syntax_node1(x_21, x_82, x_26);
x_84 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_21);
x_85 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_85, 0, x_21);
lean_ctor_set(x_85, 1, x_82);
lean_ctor_set(x_85, 2, x_84);
x_86 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_21);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_21);
lean_ctor_set(x_87, 1, x_86);
x_88 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_21);
x_89 = l_Lean_Syntax_node4(x_21, x_88, x_83, x_85, x_87, x_78);
x_90 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_21);
x_91 = l_Lean_Syntax_node2(x_21, x_90, x_81, x_89);
x_92 = l_Lean_Syntax_node2(x_21, x_29, x_28, x_91);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_79);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_28);
x_94 = !lean_is_exclusive(x_33);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_95 = lean_ctor_get(x_33, 0);
x_96 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12;
lean_inc(x_21);
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_21);
lean_ctor_set(x_97, 1, x_96);
x_98 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_21);
x_99 = l_Lean_Syntax_node1(x_21, x_98, x_26);
x_100 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13;
lean_inc(x_21);
x_101 = l_Lean_Syntax_node2(x_21, x_100, x_97, x_99);
x_102 = l_Lean_Elab_Term_expandWhereDecls___closed__14;
lean_inc(x_21);
x_103 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_103, 0, x_21);
lean_ctor_set(x_103, 1, x_102);
lean_inc(x_21);
x_104 = l_Lean_Syntax_node3(x_21, x_98, x_101, x_103, x_95);
x_105 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11;
x_106 = l_Lean_Syntax_node1(x_21, x_105, x_104);
lean_ctor_set(x_33, 0, x_106);
return x_33;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_107 = lean_ctor_get(x_33, 0);
x_108 = lean_ctor_get(x_33, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_33);
x_109 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12;
lean_inc(x_21);
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_21);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_21);
x_112 = l_Lean_Syntax_node1(x_21, x_111, x_26);
x_113 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13;
lean_inc(x_21);
x_114 = l_Lean_Syntax_node2(x_21, x_113, x_110, x_112);
x_115 = l_Lean_Elab_Term_expandWhereDecls___closed__14;
lean_inc(x_21);
x_116 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_116, 0, x_21);
lean_ctor_set(x_116, 1, x_115);
lean_inc(x_21);
x_117 = l_Lean_Syntax_node3(x_21, x_111, x_114, x_116, x_107);
x_118 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11;
x_119 = l_Lean_Syntax_node1(x_21, x_118, x_117);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_108);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_121 = lean_ctor_get(x_7, 0);
x_122 = lean_ctor_get(x_7, 1);
x_123 = lean_ctor_get(x_7, 3);
x_124 = lean_ctor_get(x_7, 4);
x_125 = lean_ctor_get(x_7, 5);
lean_inc(x_125);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_7);
lean_inc(x_125);
lean_inc(x_14);
lean_inc(x_122);
x_126 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_126, 0, x_121);
lean_ctor_set(x_126, 1, x_122);
lean_ctor_set(x_126, 2, x_14);
lean_ctor_set(x_126, 3, x_123);
lean_ctor_set(x_126, 4, x_124);
lean_ctor_set(x_126, 5, x_125);
x_127 = 0;
x_128 = l_Lean_SourceInfo_fromRef(x_125, x_127);
x_129 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_130 = l_Lean_addMacroScope(x_122, x_129, x_14);
x_131 = lean_box(0);
x_132 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
lean_inc(x_128);
x_133 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_133, 0, x_128);
lean_ctor_set(x_133, 1, x_132);
lean_ctor_set(x_133, 2, x_130);
lean_ctor_set(x_133, 3, x_131);
x_134 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_128);
x_135 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_135, 0, x_128);
lean_ctor_set(x_135, 1, x_134);
x_136 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
lean_inc(x_133);
lean_inc(x_135);
lean_inc(x_128);
x_137 = l_Lean_Syntax_node2(x_128, x_136, x_135, x_133);
x_138 = lean_array_push(x_5, x_137);
lean_inc(x_133);
x_139 = lean_array_push(x_6, x_133);
x_140 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_3, x_12, x_138, x_139, x_126, x_8);
lean_dec(x_12);
if (x_2 == 0)
{
if (x_3 == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_135);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_143 = x_140;
} else {
 lean_dec_ref(x_140);
 x_143 = lean_box(0);
}
x_144 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_128);
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_128);
lean_ctor_set(x_145, 1, x_144);
x_146 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_128);
x_147 = l_Lean_Syntax_node1(x_128, x_146, x_133);
x_148 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_128);
x_149 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_149, 0, x_128);
lean_ctor_set(x_149, 1, x_146);
lean_ctor_set(x_149, 2, x_148);
x_150 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_128);
x_151 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_151, 0, x_128);
lean_ctor_set(x_151, 1, x_150);
x_152 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_128);
x_153 = l_Lean_Syntax_node4(x_128, x_152, x_147, x_149, x_151, x_141);
x_154 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
x_155 = l_Lean_Syntax_node2(x_128, x_154, x_145, x_153);
if (lean_is_scalar(x_143)) {
 x_156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_156 = x_143;
}
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_142);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_157 = lean_ctor_get(x_140, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_140, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_159 = x_140;
} else {
 lean_dec_ref(x_140);
 x_159 = lean_box(0);
}
x_160 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_128);
x_161 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_161, 0, x_128);
lean_ctor_set(x_161, 1, x_160);
x_162 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_128);
x_163 = l_Lean_Syntax_node1(x_128, x_162, x_133);
x_164 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_128);
x_165 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_165, 0, x_128);
lean_ctor_set(x_165, 1, x_162);
lean_ctor_set(x_165, 2, x_164);
x_166 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_128);
x_167 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_167, 0, x_128);
lean_ctor_set(x_167, 1, x_166);
x_168 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_128);
x_169 = l_Lean_Syntax_node4(x_128, x_168, x_163, x_165, x_167, x_157);
x_170 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_128);
x_171 = l_Lean_Syntax_node2(x_128, x_170, x_161, x_169);
x_172 = l_Lean_Syntax_node2(x_128, x_136, x_135, x_171);
if (lean_is_scalar(x_159)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_159;
}
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_158);
return x_173;
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_135);
x_174 = lean_ctor_get(x_140, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_140, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_140)) {
 lean_ctor_release(x_140, 0);
 lean_ctor_release(x_140, 1);
 x_176 = x_140;
} else {
 lean_dec_ref(x_140);
 x_176 = lean_box(0);
}
x_177 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12;
lean_inc(x_128);
x_178 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_178, 0, x_128);
lean_ctor_set(x_178, 1, x_177);
x_179 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_128);
x_180 = l_Lean_Syntax_node1(x_128, x_179, x_133);
x_181 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13;
lean_inc(x_128);
x_182 = l_Lean_Syntax_node2(x_128, x_181, x_178, x_180);
x_183 = l_Lean_Elab_Term_expandWhereDecls___closed__14;
lean_inc(x_128);
x_184 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_184, 0, x_128);
lean_ctor_set(x_184, 1, x_183);
lean_inc(x_128);
x_185 = l_Lean_Syntax_node3(x_128, x_179, x_182, x_184, x_174);
x_186 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11;
x_187 = l_Lean_Syntax_node1(x_128, x_186, x_185);
if (lean_is_scalar(x_176)) {
 x_188 = lean_alloc_ctor(0, 2, 0);
} else {
 x_188 = x_176;
}
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_175);
return x_188;
}
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; uint8_t x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_189 = lean_ctor_get(x_8, 0);
x_190 = lean_ctor_get(x_8, 1);
lean_inc(x_190);
lean_inc(x_189);
lean_dec(x_8);
x_191 = lean_nat_add(x_189, x_11);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_190);
x_193 = lean_ctor_get(x_7, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_7, 1);
lean_inc(x_194);
x_195 = lean_ctor_get(x_7, 3);
lean_inc(x_195);
x_196 = lean_ctor_get(x_7, 4);
lean_inc(x_196);
x_197 = lean_ctor_get(x_7, 5);
lean_inc(x_197);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 x_198 = x_7;
} else {
 lean_dec_ref(x_7);
 x_198 = lean_box(0);
}
lean_inc(x_197);
lean_inc(x_189);
lean_inc(x_194);
if (lean_is_scalar(x_198)) {
 x_199 = lean_alloc_ctor(0, 6, 0);
} else {
 x_199 = x_198;
}
lean_ctor_set(x_199, 0, x_193);
lean_ctor_set(x_199, 1, x_194);
lean_ctor_set(x_199, 2, x_189);
lean_ctor_set(x_199, 3, x_195);
lean_ctor_set(x_199, 4, x_196);
lean_ctor_set(x_199, 5, x_197);
x_200 = 0;
x_201 = l_Lean_SourceInfo_fromRef(x_197, x_200);
x_202 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_203 = l_Lean_addMacroScope(x_194, x_202, x_189);
x_204 = lean_box(0);
x_205 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
lean_inc(x_201);
x_206 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_206, 0, x_201);
lean_ctor_set(x_206, 1, x_205);
lean_ctor_set(x_206, 2, x_203);
lean_ctor_set(x_206, 3, x_204);
x_207 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_201);
x_208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_208, 0, x_201);
lean_ctor_set(x_208, 1, x_207);
x_209 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
lean_inc(x_206);
lean_inc(x_208);
lean_inc(x_201);
x_210 = l_Lean_Syntax_node2(x_201, x_209, x_208, x_206);
x_211 = lean_array_push(x_5, x_210);
lean_inc(x_206);
x_212 = lean_array_push(x_6, x_206);
x_213 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_2, x_3, x_12, x_211, x_212, x_199, x_192);
lean_dec(x_12);
if (x_2 == 0)
{
if (x_3 == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_208);
x_214 = lean_ctor_get(x_213, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_213, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_213)) {
 lean_ctor_release(x_213, 0);
 lean_ctor_release(x_213, 1);
 x_216 = x_213;
} else {
 lean_dec_ref(x_213);
 x_216 = lean_box(0);
}
x_217 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_201);
x_218 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_218, 0, x_201);
lean_ctor_set(x_218, 1, x_217);
x_219 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_201);
x_220 = l_Lean_Syntax_node1(x_201, x_219, x_206);
x_221 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_201);
x_222 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_222, 0, x_201);
lean_ctor_set(x_222, 1, x_219);
lean_ctor_set(x_222, 2, x_221);
x_223 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_201);
x_224 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_224, 0, x_201);
lean_ctor_set(x_224, 1, x_223);
x_225 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_201);
x_226 = l_Lean_Syntax_node4(x_201, x_225, x_220, x_222, x_224, x_214);
x_227 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
x_228 = l_Lean_Syntax_node2(x_201, x_227, x_218, x_226);
if (lean_is_scalar(x_216)) {
 x_229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_229 = x_216;
}
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_215);
return x_229;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_230 = lean_ctor_get(x_213, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_213, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_213)) {
 lean_ctor_release(x_213, 0);
 lean_ctor_release(x_213, 1);
 x_232 = x_213;
} else {
 lean_dec_ref(x_213);
 x_232 = lean_box(0);
}
x_233 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_201);
x_234 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_234, 0, x_201);
lean_ctor_set(x_234, 1, x_233);
x_235 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_201);
x_236 = l_Lean_Syntax_node1(x_201, x_235, x_206);
x_237 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_201);
x_238 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_238, 0, x_201);
lean_ctor_set(x_238, 1, x_235);
lean_ctor_set(x_238, 2, x_237);
x_239 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_201);
x_240 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_240, 0, x_201);
lean_ctor_set(x_240, 1, x_239);
x_241 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_201);
x_242 = l_Lean_Syntax_node4(x_201, x_241, x_236, x_238, x_240, x_230);
x_243 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_201);
x_244 = l_Lean_Syntax_node2(x_201, x_243, x_234, x_242);
x_245 = l_Lean_Syntax_node2(x_201, x_209, x_208, x_244);
if (lean_is_scalar(x_232)) {
 x_246 = lean_alloc_ctor(0, 2, 0);
} else {
 x_246 = x_232;
}
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_231);
return x_246;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_208);
x_247 = lean_ctor_get(x_213, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_213, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_213)) {
 lean_ctor_release(x_213, 0);
 lean_ctor_release(x_213, 1);
 x_249 = x_213;
} else {
 lean_dec_ref(x_213);
 x_249 = lean_box(0);
}
x_250 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12;
lean_inc(x_201);
x_251 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_251, 0, x_201);
lean_ctor_set(x_251, 1, x_250);
x_252 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_201);
x_253 = l_Lean_Syntax_node1(x_201, x_252, x_206);
x_254 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13;
lean_inc(x_201);
x_255 = l_Lean_Syntax_node2(x_201, x_254, x_251, x_253);
x_256 = l_Lean_Elab_Term_expandWhereDecls___closed__14;
lean_inc(x_201);
x_257 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_257, 0, x_201);
lean_ctor_set(x_257, 1, x_256);
lean_inc(x_201);
x_258 = l_Lean_Syntax_node3(x_201, x_252, x_255, x_257, x_247);
x_259 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11;
x_260 = l_Lean_Syntax_node1(x_201, x_259, x_258);
if (lean_is_scalar(x_249)) {
 x_261 = lean_alloc_ctor(0, 2, 0);
} else {
 x_261 = x_249;
}
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_248);
return x_261;
}
}
}
else
{
if (x_2 == 0)
{
lean_object* x_262; uint8_t x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; size_t x_271; size_t x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_262 = lean_ctor_get(x_7, 5);
lean_inc(x_262);
x_263 = 0;
x_264 = l_Lean_SourceInfo_fromRef(x_262, x_263);
x_265 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_264);
x_266 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
x_267 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_268 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_264);
x_269 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_269, 0, x_264);
lean_ctor_set(x_269, 1, x_267);
lean_ctor_set(x_269, 2, x_268);
x_270 = lean_array_get_size(x_5);
x_271 = lean_usize_of_nat(x_270);
lean_dec(x_270);
x_272 = 0;
lean_inc(x_269);
lean_inc(x_264);
x_273 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(x_264, x_269, x_271, x_272, x_5);
x_274 = l_Lean_Elab_Term_expandWhereDecls___closed__13;
x_275 = l_Lean_mkSepArray(x_273, x_274);
lean_dec(x_273);
x_276 = l_Array_append___rarg(x_268, x_275);
lean_inc(x_264);
x_277 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_277, 0, x_264);
lean_ctor_set(x_277, 1, x_267);
lean_ctor_set(x_277, 2, x_276);
x_278 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_264);
x_279 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_279, 0, x_264);
lean_ctor_set(x_279, 1, x_278);
x_280 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_269);
x_281 = l_Lean_Syntax_node6(x_264, x_280, x_266, x_269, x_269, x_277, x_279, x_1);
x_282 = l_Lean_Elab_Term_clearInMatch(x_281, x_6, x_7, x_8);
lean_dec(x_6);
return x_282;
}
else
{
lean_object* x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; size_t x_292; size_t x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_6);
x_283 = lean_ctor_get(x_7, 5);
lean_inc(x_283);
lean_dec(x_7);
x_284 = 0;
x_285 = l_Lean_SourceInfo_fromRef(x_283, x_284);
x_286 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_285);
x_287 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_287, 0, x_285);
lean_ctor_set(x_287, 1, x_286);
x_288 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_289 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_285);
x_290 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_290, 0, x_285);
lean_ctor_set(x_290, 1, x_288);
lean_ctor_set(x_290, 2, x_289);
x_291 = lean_array_get_size(x_5);
x_292 = lean_usize_of_nat(x_291);
lean_dec(x_291);
x_293 = 0;
lean_inc(x_290);
lean_inc(x_285);
x_294 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(x_285, x_290, x_292, x_293, x_5);
x_295 = l_Lean_Elab_Term_expandWhereDecls___closed__13;
x_296 = l_Lean_mkSepArray(x_294, x_295);
lean_dec(x_294);
x_297 = l_Array_append___rarg(x_289, x_296);
lean_inc(x_285);
x_298 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_298, 0, x_285);
lean_ctor_set(x_298, 1, x_288);
lean_ctor_set(x_298, 2, x_297);
x_299 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_285);
x_300 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_300, 0, x_285);
lean_ctor_set(x_300, 1, x_299);
x_301 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__14;
lean_inc(x_290);
x_302 = l_Lean_Syntax_node6(x_285, x_301, x_287, x_290, x_290, x_298, x_300, x_1);
x_303 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_8);
return x_303;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__1(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___spec__2(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = lean_unbox(x_3);
lean_dec(x_3);
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_1, x_9, x_10, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Elab_Term_getMatchAltsNumPatterns(x_2);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_4, 5);
x_9 = l_Lean_replaceRef(x_1, x_8);
lean_dec(x_8);
lean_ctor_set(x_4, 5, x_9);
x_10 = 0;
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_10, x_3, x_6, x_11, x_11, x_4, x_5);
lean_dec(x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_4, 2);
x_16 = lean_ctor_get(x_4, 3);
x_17 = lean_ctor_get(x_4, 4);
x_18 = lean_ctor_get(x_4, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_19 = l_Lean_replaceRef(x_1, x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_19);
x_21 = 0;
x_22 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_23 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_21, x_3, x_6, x_22, x_22, x_20, x_5);
lean_dec(x_6);
return x_23;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Term_getMatchAltsNumPatterns(x_2);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_3, 5);
x_8 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
lean_ctor_set(x_3, 5, x_8);
x_9 = 1;
x_10 = 0;
x_11 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_9, x_10, x_5, x_11, x_11, x_3, x_4);
lean_dec(x_5);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_19 = l_Lean_replaceRef(x_1, x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_15);
lean_ctor_set(x_20, 3, x_16);
lean_ctor_set(x_20, 4, x_17);
lean_ctor_set(x_20, 5, x_19);
x_21 = 1;
x_22 = 0;
x_23 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_24 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux(x_2, x_21, x_22, x_5, x_23, x_23, x_20, x_4);
lean_dec(x_5);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_expandMatchAltsIntoMatchTactic(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_7 = lean_array_uget(x_5, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_5, x_4, x_8);
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_1);
x_11 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
x_12 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
lean_inc(x_1);
x_13 = l_Lean_Syntax_node2(x_1, x_12, x_11, x_7);
x_14 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Lean_Syntax_node2(x_1, x_14, x_2, x_13);
x_16 = 1;
x_17 = lean_usize_add(x_4, x_16);
x_18 = lean_array_uset(x_9, x_4, x_15);
x_4 = x_17;
x_5 = x_18;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_3, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_nat_add(x_12, x_9);
lean_ctor_set(x_6, 0, x_13);
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_15 = lean_ctor_get(x_5, 1);
x_16 = lean_ctor_get(x_5, 5);
x_17 = lean_ctor_get(x_5, 2);
lean_dec(x_17);
lean_inc(x_16);
lean_inc(x_12);
lean_inc(x_15);
lean_ctor_set(x_5, 2, x_12);
x_18 = 0;
x_19 = l_Lean_SourceInfo_fromRef(x_16, x_18);
x_20 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_21 = l_Lean_addMacroScope(x_15, x_20, x_12);
x_22 = lean_box(0);
x_23 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
lean_inc(x_19);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_22);
lean_inc(x_24);
x_25 = lean_array_push(x_4, x_24);
x_26 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_25, x_5, x_6);
lean_dec(x_10);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_19);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_29);
x_31 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_19);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_19);
x_34 = l_Lean_Syntax_node1(x_19, x_33, x_24);
x_35 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_19);
x_36 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_36, 0, x_19);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_35);
x_37 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_19);
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_19);
lean_ctor_set(x_38, 1, x_37);
x_39 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_19);
x_40 = l_Lean_Syntax_node4(x_19, x_39, x_34, x_36, x_38, x_28);
x_41 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_19);
x_42 = l_Lean_Syntax_node2(x_19, x_41, x_32, x_40);
x_43 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
x_44 = l_Lean_Syntax_node2(x_19, x_43, x_30, x_42);
lean_ctor_set(x_26, 0, x_44);
return x_26;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_45 = lean_ctor_get(x_26, 0);
x_46 = lean_ctor_get(x_26, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_26);
x_47 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_19);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_19);
lean_ctor_set(x_48, 1, x_47);
x_49 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_19);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_19);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_19);
x_52 = l_Lean_Syntax_node1(x_19, x_51, x_24);
x_53 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_19);
x_54 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_54, 0, x_19);
lean_ctor_set(x_54, 1, x_51);
lean_ctor_set(x_54, 2, x_53);
x_55 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_19);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_19);
lean_ctor_set(x_56, 1, x_55);
x_57 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_19);
x_58 = l_Lean_Syntax_node4(x_19, x_57, x_52, x_54, x_56, x_45);
x_59 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_19);
x_60 = l_Lean_Syntax_node2(x_19, x_59, x_50, x_58);
x_61 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
x_62 = l_Lean_Syntax_node2(x_19, x_61, x_48, x_60);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_46);
return x_63;
}
}
else
{
uint8_t x_64; 
lean_dec(x_24);
lean_dec(x_19);
x_64 = !lean_is_exclusive(x_26);
if (x_64 == 0)
{
return x_26;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_26, 0);
x_66 = lean_ctor_get(x_26, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_26);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_68 = lean_ctor_get(x_5, 0);
x_69 = lean_ctor_get(x_5, 1);
x_70 = lean_ctor_get(x_5, 3);
x_71 = lean_ctor_get(x_5, 4);
x_72 = lean_ctor_get(x_5, 5);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_5);
lean_inc(x_72);
lean_inc(x_12);
lean_inc(x_69);
x_73 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_69);
lean_ctor_set(x_73, 2, x_12);
lean_ctor_set(x_73, 3, x_70);
lean_ctor_set(x_73, 4, x_71);
lean_ctor_set(x_73, 5, x_72);
x_74 = 0;
x_75 = l_Lean_SourceInfo_fromRef(x_72, x_74);
x_76 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_77 = l_Lean_addMacroScope(x_69, x_76, x_12);
x_78 = lean_box(0);
x_79 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
lean_inc(x_75);
x_80 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_80, 0, x_75);
lean_ctor_set(x_80, 1, x_79);
lean_ctor_set(x_80, 2, x_77);
lean_ctor_set(x_80, 3, x_78);
lean_inc(x_80);
x_81 = lean_array_push(x_4, x_80);
x_82 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_81, x_73, x_6);
lean_dec(x_10);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_85 = x_82;
} else {
 lean_dec_ref(x_82);
 x_85 = lean_box(0);
}
x_86 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_75);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_75);
lean_ctor_set(x_87, 1, x_86);
x_88 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_75);
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_75);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_75);
x_91 = l_Lean_Syntax_node1(x_75, x_90, x_80);
x_92 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_75);
x_93 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_93, 0, x_75);
lean_ctor_set(x_93, 1, x_90);
lean_ctor_set(x_93, 2, x_92);
x_94 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_75);
x_95 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_95, 0, x_75);
lean_ctor_set(x_95, 1, x_94);
x_96 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_75);
x_97 = l_Lean_Syntax_node4(x_75, x_96, x_91, x_93, x_95, x_83);
x_98 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_75);
x_99 = l_Lean_Syntax_node2(x_75, x_98, x_89, x_97);
x_100 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
x_101 = l_Lean_Syntax_node2(x_75, x_100, x_87, x_99);
if (lean_is_scalar(x_85)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_85;
}
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_84);
return x_102;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_80);
lean_dec(x_75);
x_103 = lean_ctor_get(x_82, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_82, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_105 = x_82;
} else {
 lean_dec_ref(x_82);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_105;
}
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_107 = lean_ctor_get(x_6, 0);
x_108 = lean_ctor_get(x_6, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_6);
x_109 = lean_nat_add(x_107, x_9);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_108);
x_111 = lean_ctor_get(x_5, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_5, 1);
lean_inc(x_112);
x_113 = lean_ctor_get(x_5, 3);
lean_inc(x_113);
x_114 = lean_ctor_get(x_5, 4);
lean_inc(x_114);
x_115 = lean_ctor_get(x_5, 5);
lean_inc(x_115);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 lean_ctor_release(x_5, 4);
 lean_ctor_release(x_5, 5);
 x_116 = x_5;
} else {
 lean_dec_ref(x_5);
 x_116 = lean_box(0);
}
lean_inc(x_115);
lean_inc(x_107);
lean_inc(x_112);
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(0, 6, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_111);
lean_ctor_set(x_117, 1, x_112);
lean_ctor_set(x_117, 2, x_107);
lean_ctor_set(x_117, 3, x_113);
lean_ctor_set(x_117, 4, x_114);
lean_ctor_set(x_117, 5, x_115);
x_118 = 0;
x_119 = l_Lean_SourceInfo_fromRef(x_115, x_118);
x_120 = l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2;
x_121 = l_Lean_addMacroScope(x_112, x_120, x_107);
x_122 = lean_box(0);
x_123 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1;
lean_inc(x_119);
x_124 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_124, 0, x_119);
lean_ctor_set(x_124, 1, x_123);
lean_ctor_set(x_124, 2, x_121);
lean_ctor_set(x_124, 3, x_122);
lean_inc(x_124);
x_125 = lean_array_push(x_4, x_124);
x_126 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_10, x_125, x_117, x_110);
lean_dec(x_10);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_129 = x_126;
} else {
 lean_dec_ref(x_126);
 x_129 = lean_box(0);
}
x_130 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4;
lean_inc(x_119);
x_131 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_131, 0, x_119);
lean_ctor_set(x_131, 1, x_130);
x_132 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_119);
x_133 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_133, 0, x_119);
lean_ctor_set(x_133, 1, x_132);
x_134 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_119);
x_135 = l_Lean_Syntax_node1(x_119, x_134, x_124);
x_136 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_119);
x_137 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_137, 0, x_119);
lean_ctor_set(x_137, 1, x_134);
lean_ctor_set(x_137, 2, x_136);
x_138 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_119);
x_139 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_139, 0, x_119);
lean_ctor_set(x_139, 1, x_138);
x_140 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_119);
x_141 = l_Lean_Syntax_node4(x_119, x_140, x_135, x_137, x_139, x_127);
x_142 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_119);
x_143 = l_Lean_Syntax_node2(x_119, x_142, x_133, x_141);
x_144 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
x_145 = l_Lean_Syntax_node2(x_119, x_144, x_131, x_143);
if (lean_is_scalar(x_129)) {
 x_146 = lean_alloc_ctor(0, 2, 0);
} else {
 x_146 = x_129;
}
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_128);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_124);
lean_dec(x_119);
x_147 = lean_ctor_get(x_126, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_126, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_149 = x_126;
} else {
 lean_dec_ref(x_126);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
}
else
{
lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; size_t x_160; size_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_151 = lean_ctor_get(x_5, 5);
lean_inc(x_151);
x_152 = 0;
x_153 = l_Lean_SourceInfo_fromRef(x_151, x_152);
x_154 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_153);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_157 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_153);
x_158 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_158, 0, x_153);
lean_ctor_set(x_158, 1, x_156);
lean_ctor_set(x_158, 2, x_157);
x_159 = lean_array_get_size(x_4);
x_160 = lean_usize_of_nat(x_159);
lean_dec(x_159);
x_161 = 0;
lean_inc(x_4);
lean_inc(x_158);
lean_inc(x_153);
x_162 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(x_153, x_158, x_160, x_161, x_4);
x_163 = l_Lean_Elab_Term_expandWhereDecls___closed__13;
x_164 = l_Lean_mkSepArray(x_162, x_163);
lean_dec(x_162);
x_165 = l_Array_append___rarg(x_157, x_164);
lean_inc(x_153);
x_166 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_166, 0, x_153);
lean_ctor_set(x_166, 1, x_156);
lean_ctor_set(x_166, 2, x_165);
x_167 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_153);
x_168 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_168, 0, x_153);
lean_ctor_set(x_168, 1, x_167);
x_169 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_158);
x_170 = l_Lean_Syntax_node6(x_153, x_169, x_155, x_158, x_158, x_166, x_168, x_1);
lean_inc(x_5);
x_171 = l_Lean_Elab_Term_clearInMatch(x_170, x_4, x_5, x_6);
lean_dec(x_4);
x_172 = !lean_is_exclusive(x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_173 = lean_ctor_get(x_171, 0);
x_174 = lean_ctor_get(x_171, 1);
x_175 = l_Lean_Syntax_isNone(x_2);
if (x_175 == 0)
{
lean_object* x_176; 
lean_free_object(x_171);
x_176 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_2, x_173, x_5, x_174);
return x_176;
}
else
{
lean_dec(x_5);
return x_171;
}
}
else
{
lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_177 = lean_ctor_get(x_171, 0);
x_178 = lean_ctor_get(x_171, 1);
lean_inc(x_178);
lean_inc(x_177);
lean_dec(x_171);
x_179 = l_Lean_Syntax_isNone(x_2);
if (x_179 == 0)
{
lean_object* x_180; 
x_180 = l_Lean_Elab_Term_expandWhereDeclsOpt(x_2, x_177, x_5, x_178);
return x_180;
}
else
{
lean_object* x_181; 
lean_dec(x_5);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_177);
lean_ctor_set(x_181, 1, x_178);
return x_181;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___spec__1(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l_Lean_Elab_Term_getMatchAltsNumPatterns(x_5);
x_9 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_10 = l_Lean_Elab_Term_expandMatchAltsWhereDecls_loop(x_5, x_7, x_8, x_9, x_2, x_3);
lean_dec(x_8);
lean_dec(x_7);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandMatchAltsWhereDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_expandMatchAltsWhereDecls(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFun___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_4, x_3);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_uget(x_5, x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_5, x_4, x_11);
lean_inc(x_6);
lean_inc(x_2);
x_13 = l_Lean_Elab_Term_expandSimpleBinderWithType(x_2, x_10, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = lean_usize_add(x_4, x_16);
x_18 = lean_array_uset(x_12, x_4, x_14);
x_4 = x_17;
x_5 = x_18;
x_7 = x_15;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_9);
x_13 = l_Lean_Syntax_isOfKind(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
uint8_t x_16; lean_object* x_17; 
x_16 = 0;
x_17 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_1, x_9, x_16, x_2, x_3);
lean_dec(x_1);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_getArg(x_9, x_18);
x_20 = l_Lean_Syntax_getArg(x_9, x_8);
lean_inc(x_20);
x_21 = l_Lean_Syntax_matchesNull(x_20, x_8);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Syntax_matchesNull(x_20, x_18);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_2);
x_23 = lean_box(1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_unsigned_to_nat(3u);
x_26 = l_Lean_Syntax_getArg(x_9, x_25);
lean_dec(x_9);
x_27 = l_Lean_Syntax_getArgs(x_19);
lean_dec(x_19);
lean_inc(x_2);
x_28 = l_Lean_Elab_Term_expandFunBinders(x_27, x_26, x_2, x_3);
lean_dec(x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
uint8_t x_33; 
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_28, 0);
lean_dec(x_34);
x_35 = lean_box(1);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 0, x_35);
return x_28;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_dec(x_28);
x_37 = lean_box(1);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_28);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_40 = lean_ctor_get(x_28, 0);
lean_dec(x_40);
x_41 = lean_ctor_get(x_29, 0);
lean_inc(x_41);
lean_dec(x_29);
x_42 = lean_ctor_get(x_30, 0);
lean_inc(x_42);
lean_dec(x_30);
x_43 = lean_ctor_get(x_2, 5);
lean_inc(x_43);
lean_dec(x_2);
x_44 = 0;
x_45 = l_Lean_SourceInfo_fromRef(x_43, x_44);
x_46 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_45);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_49 = l_Array_append___rarg(x_48, x_41);
x_50 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_45);
x_51 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_51, 0, x_45);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_51, 2, x_49);
lean_inc(x_45);
x_52 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_52, 0, x_45);
lean_ctor_set(x_52, 1, x_50);
lean_ctor_set(x_52, 2, x_48);
x_53 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_45);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_45);
lean_ctor_set(x_54, 1, x_53);
lean_inc(x_45);
x_55 = l_Lean_Syntax_node4(x_45, x_10, x_51, x_52, x_54, x_42);
x_56 = l_Lean_Syntax_node2(x_45, x_4, x_47, x_55);
lean_ctor_set(x_28, 0, x_56);
return x_28;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_57 = lean_ctor_get(x_28, 1);
lean_inc(x_57);
lean_dec(x_28);
x_58 = lean_ctor_get(x_29, 0);
lean_inc(x_58);
lean_dec(x_29);
x_59 = lean_ctor_get(x_30, 0);
lean_inc(x_59);
lean_dec(x_30);
x_60 = lean_ctor_get(x_2, 5);
lean_inc(x_60);
lean_dec(x_2);
x_61 = 0;
x_62 = l_Lean_SourceInfo_fromRef(x_60, x_61);
x_63 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_62);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_66 = l_Array_append___rarg(x_65, x_58);
x_67 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_62);
x_68 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_66);
lean_inc(x_62);
x_69 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_69, 0, x_62);
lean_ctor_set(x_69, 1, x_67);
lean_ctor_set(x_69, 2, x_65);
x_70 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_62);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_62);
lean_ctor_set(x_71, 1, x_70);
lean_inc(x_62);
x_72 = l_Lean_Syntax_node4(x_62, x_10, x_68, x_69, x_71, x_59);
x_73 = l_Lean_Syntax_node2(x_62, x_4, x_64, x_72);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_57);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_28);
if (x_75 == 0)
{
return x_28;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_28, 0);
x_77 = lean_ctor_get(x_28, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_28);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_79 = l_Lean_Syntax_getArg(x_20, x_18);
lean_dec(x_20);
x_80 = l_Lean_Elab_Term_expandForall___closed__4;
lean_inc(x_79);
x_81 = l_Lean_Syntax_isOfKind(x_79, x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
lean_dec(x_79);
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_2);
x_82 = lean_box(1);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_3);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; size_t x_89; size_t x_90; lean_object* x_91; lean_object* x_92; 
x_84 = l_Lean_Syntax_getArg(x_79, x_8);
lean_dec(x_79);
x_85 = lean_unsigned_to_nat(3u);
x_86 = l_Lean_Syntax_getArg(x_9, x_85);
lean_dec(x_9);
x_87 = l_Lean_Syntax_getArgs(x_19);
lean_dec(x_19);
x_88 = lean_array_get_size(x_87);
x_89 = lean_usize_of_nat(x_88);
lean_dec(x_88);
x_90 = 0;
x_91 = l_Lean_Elab_Term_quoteAutoTactic___closed__11;
lean_inc(x_2);
x_92 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFun___spec__1(x_91, x_84, x_89, x_90, x_87, x_2, x_3);
if (lean_obj_tag(x_92) == 0)
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_92);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_94 = lean_ctor_get(x_92, 0);
x_95 = lean_ctor_get(x_2, 5);
lean_inc(x_95);
lean_dec(x_2);
x_96 = 0;
x_97 = l_Lean_SourceInfo_fromRef(x_95, x_96);
x_98 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_97);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_100 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_101 = l_Array_append___rarg(x_100, x_94);
x_102 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_97);
x_103 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_103, 0, x_97);
lean_ctor_set(x_103, 1, x_102);
lean_ctor_set(x_103, 2, x_101);
lean_inc(x_97);
x_104 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_104, 0, x_97);
lean_ctor_set(x_104, 1, x_102);
lean_ctor_set(x_104, 2, x_100);
x_105 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_97);
x_106 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_106, 0, x_97);
lean_ctor_set(x_106, 1, x_105);
lean_inc(x_97);
x_107 = l_Lean_Syntax_node4(x_97, x_10, x_103, x_104, x_106, x_86);
x_108 = l_Lean_Syntax_node2(x_97, x_4, x_99, x_107);
lean_ctor_set(x_92, 0, x_108);
return x_92;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_109 = lean_ctor_get(x_92, 0);
x_110 = lean_ctor_get(x_92, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_92);
x_111 = lean_ctor_get(x_2, 5);
lean_inc(x_111);
lean_dec(x_2);
x_112 = 0;
x_113 = l_Lean_SourceInfo_fromRef(x_111, x_112);
x_114 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5;
lean_inc(x_113);
x_115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_117 = l_Array_append___rarg(x_116, x_109);
x_118 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
lean_inc(x_113);
x_119 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_119, 0, x_113);
lean_ctor_set(x_119, 1, x_118);
lean_ctor_set(x_119, 2, x_117);
lean_inc(x_113);
x_120 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_120, 0, x_113);
lean_ctor_set(x_120, 1, x_118);
lean_ctor_set(x_120, 2, x_116);
x_121 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_113);
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_113);
lean_ctor_set(x_122, 1, x_121);
lean_inc(x_113);
x_123 = l_Lean_Syntax_node4(x_113, x_10, x_119, x_120, x_122, x_86);
x_124 = l_Lean_Syntax_node2(x_113, x_4, x_115, x_123);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_110);
return x_125;
}
}
else
{
uint8_t x_126; 
lean_dec(x_86);
lean_dec(x_2);
x_126 = !lean_is_exclusive(x_92);
if (x_126 == 0)
{
return x_92;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_92, 0);
x_128 = lean_ctor_get(x_92, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_92);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFun___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_expandFun___spec__1(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("expandFun", 9);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_expandFun___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFun), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_expandForall___closed__3;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
x_4 = l___regBuiltin_Lean_Elab_Term_expandFun___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandFun___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(596u);
x_2 = lean_unsigned_to_nat(40u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(607u);
x_2 = lean_unsigned_to_nat(31u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__1;
x_2 = lean_unsigned_to_nat(40u);
x_3 = l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__2;
x_4 = lean_unsigned_to_nat(31u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(596u);
x_2 = lean_unsigned_to_nat(44u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(596u);
x_2 = lean_unsigned_to_nat(53u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__4;
x_2 = lean_unsigned_to_nat(44u);
x_3 = l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__5;
x_4 = lean_unsigned_to_nat(53u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandFun_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_expandFun___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandExplicitFun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_2);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = l_Lean_Syntax_getArg(x_9, x_8);
x_15 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_2);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
else
{
uint8_t x_19; lean_object* x_20; 
x_19 = 1;
x_20 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_9, x_14, x_19, x_2, x_3);
lean_dec(x_9);
return x_20;
}
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("expandExplicitFun", 17);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandExplicitFun), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_expandForall___closed__3;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(609u);
x_2 = lean_unsigned_to_nat(45u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(612u);
x_2 = lean_unsigned_to_nat(31u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__1;
x_2 = lean_unsigned_to_nat(45u);
x_3 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__2;
x_4 = lean_unsigned_to_nat(31u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(609u);
x_2 = lean_unsigned_to_nat(49u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(609u);
x_2 = lean_unsigned_to_nat(66u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__4;
x_2 = lean_unsigned_to_nat(49u);
x_3 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__5;
x_4 = lean_unsigned_to_nat(66u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 5);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 5);
x_13 = l_Lean_replaceRef(x_1, x_12);
lean_dec(x_12);
lean_dec(x_1);
lean_ctor_set(x_8, 5, x_13);
x_14 = l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__3(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
x_17 = lean_ctor_get(x_8, 2);
x_18 = lean_ctor_get(x_8, 3);
x_19 = lean_ctor_get(x_8, 4);
x_20 = lean_ctor_get(x_8, 5);
x_21 = lean_ctor_get(x_8, 6);
x_22 = lean_ctor_get(x_8, 7);
x_23 = lean_ctor_get(x_8, 8);
x_24 = lean_ctor_get(x_8, 9);
x_25 = lean_ctor_get(x_8, 10);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_26 = l_Lean_replaceRef(x_1, x_20);
lean_dec(x_20);
lean_dec(x_1);
x_27 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_27, 0, x_15);
lean_ctor_set(x_27, 1, x_16);
lean_ctor_set(x_27, 2, x_17);
lean_ctor_set(x_27, 3, x_18);
lean_ctor_set(x_27, 4, x_19);
lean_ctor_set(x_27, 5, x_26);
lean_ctor_set(x_27, 6, x_21);
lean_ctor_set(x_27, 7, x_22);
lean_ctor_set(x_27, 8, x_23);
lean_ctor_set(x_27, 9, x_24);
lean_ctor_set(x_27, 10, x_25);
x_28 = l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__3(x_2, x_3, x_4, x_5, x_6, x_7, x_27, x_9, x_10);
lean_dec(x_9);
lean_dec(x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_28;
}
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_maxRecDepthErrorMessage;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__2;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg), 1, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_expandMacroImpl_x3f(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_free_object(x_6);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_15, x_3, x_16);
lean_dec(x_15);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_20, x_3, x_16);
lean_dec(x_20);
return x_21;
}
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_6, 0, x_24);
lean_ctor_set(x_15, 0, x_6);
x_25 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_15, x_3, x_22);
lean_dec(x_15);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
lean_inc(x_26);
lean_dec(x_15);
lean_ctor_set(x_6, 0, x_26);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_6);
x_28 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_27, x_3, x_22);
lean_dec(x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_6, 0);
lean_inc(x_29);
lean_dec(x_6);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
lean_dec(x_5);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 1, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_32);
x_35 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_34, x_3, x_31);
lean_dec(x_34);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_5, 1);
lean_inc(x_36);
lean_dec(x_5);
x_37 = lean_ctor_get(x_30, 0);
lean_inc(x_37);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_38 = x_30;
} else {
 lean_dec_ref(x_30);
 x_38 = lean_box(0);
}
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_37);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(1, 1, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_39);
x_41 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_40, x_3, x_36);
lean_dec(x_40);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Environment_contains(x_1, x_2);
x_6 = lean_box(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_ResolveName_resolveNamespace(x_1, x_2, x_3, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_ResolveName_resolveGlobalName(x_1, x_2, x_3, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_7, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_7, 4);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 5);
lean_inc(x_16);
x_17 = lean_ctor_get(x_7, 6);
lean_inc(x_17);
x_18 = lean_ctor_get(x_7, 7);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 10);
lean_inc(x_19);
lean_inc(x_13);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__1___boxed), 4, 1);
lean_closure_set(x_20, 0, x_13);
lean_inc(x_17);
x_21 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_21, 0, x_17);
lean_inc(x_13);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__2___boxed), 4, 1);
lean_closure_set(x_22, 0, x_13);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_13);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__3___boxed), 6, 3);
lean_closure_set(x_23, 0, x_13);
lean_closure_set(x_23, 1, x_17);
lean_closure_set(x_23, 2, x_18);
lean_inc(x_13);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__4___boxed), 6, 3);
lean_closure_set(x_24, 0, x_13);
lean_closure_set(x_24, 1, x_17);
lean_closure_set(x_24, 2, x_18);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_23);
lean_ctor_set(x_25, 4, x_24);
x_26 = lean_st_ref_get(x_8, x_12);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_environment_main_module(x_13);
x_31 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_31, 2, x_19);
lean_ctor_set(x_31, 3, x_14);
lean_ctor_set(x_31, 4, x_15);
lean_ctor_set(x_31, 5, x_16);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_apply_2(x_1, x_31, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_st_ref_take(x_8, x_28);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = !lean_is_exclusive(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_42 = lean_ctor_get(x_39, 1);
lean_dec(x_42);
lean_ctor_set(x_39, 1, x_37);
x_43 = lean_st_ref_set(x_8, x_39, x_40);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_dec(x_36);
x_46 = l_List_reverse___rarg(x_45);
x_47 = l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__4(x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_44);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set(x_47, 0, x_35);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_35);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_52 = lean_ctor_get(x_39, 0);
x_53 = lean_ctor_get(x_39, 2);
x_54 = lean_ctor_get(x_39, 3);
x_55 = lean_ctor_get(x_39, 4);
x_56 = lean_ctor_get(x_39, 5);
x_57 = lean_ctor_get(x_39, 6);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_39);
x_58 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_58, 0, x_52);
lean_ctor_set(x_58, 1, x_37);
lean_ctor_set(x_58, 2, x_53);
lean_ctor_set(x_58, 3, x_54);
lean_ctor_set(x_58, 4, x_55);
lean_ctor_set(x_58, 5, x_56);
lean_ctor_set(x_58, 6, x_57);
x_59 = lean_st_ref_set(x_8, x_58, x_40);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_ctor_get(x_36, 1);
lean_inc(x_61);
lean_dec(x_36);
x_62 = l_List_reverse___rarg(x_61);
x_63 = l_List_forM___at_Lean_Elab_Term_Quotation_precheck___spec__4(x_62, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_60);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_35);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_34, 0);
lean_inc(x_67);
lean_dec(x_34);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_maxRecDepthErrorMessage;
x_71 = lean_string_dec_eq(x_69, x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_72, 0, x_69);
x_73 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = l_Lean_throwErrorAt___at_Lean_Elab_Term_precheckFun___spec__2(x_68, x_73, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_28);
return x_74;
}
else
{
lean_object* x_75; 
lean_dec(x_69);
x_75 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4(x_68, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_28);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_75;
}
}
else
{
lean_object* x_76; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___rarg(x_28);
return x_76;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_3, x_2);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_uget(x_1, x_3);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Quotation_precheck), 9, 1);
lean_closure_set(x_17, 0, x_16);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Elab_Term_Quotation_withNewLocals___rarg(x_4, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = l_Lean_Syntax_getId(x_20);
lean_dec(x_20);
x_22 = lean_array_push(x_4, x_21);
x_23 = 1;
x_24 = lean_usize_add(x_3, x_23);
x_3 = x_24;
x_4 = x_22;
x_12 = x_19;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_3, x_2);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_array_uget(x_1, x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_16 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews(x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_get_size(x_17);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_22 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__6(x_17, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_17);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
x_26 = lean_usize_add(x_3, x_25);
x_3 = x_26;
x_4 = x_23;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
return x_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_22);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_16);
if (x_32 == 0)
{
return x_16;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckFun___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_unsigned_to_nat(3u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Syntax_getArgs(x_2);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFunBinders___boxed), 4, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1(x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_array_get_size(x_21);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = 0;
x_26 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__7(x_21, x_24, x_25, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_20);
lean_dec(x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_closure((void*)(l_Lean_Elab_Term_Quotation_precheck), 9, 1);
lean_closure_set(x_30, 0, x_22);
x_31 = l_Lean_Elab_Term_Quotation_withNewLocals___rarg(x_28, x_30, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_29);
lean_dec(x_28);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_36 = !lean_is_exclusive(x_17);
if (x_36 == 0)
{
return x_17;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_17, 0);
x_38 = lean_ctor_get(x_17, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_17);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
lean_dec(x_1);
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_getArg(x_14, x_18);
x_20 = l_Lean_Syntax_getArg(x_14, x_13);
x_21 = l_Lean_Syntax_isNone(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
lean_inc(x_20);
x_22 = l_Lean_Syntax_matchesNull(x_20, x_13);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = l_Lean_Syntax_getArg(x_20, x_18);
lean_dec(x_20);
x_25 = l_Lean_Elab_Term_expandForall___closed__4;
lean_inc(x_24);
x_26 = l_Lean_Syntax_isOfKind(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_Quotation_precheckIdent___spec__1___rarg(x_9);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = l_Lean_Syntax_getArg(x_24, x_13);
lean_dec(x_24);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_box(0);
x_31 = l_Lean_Elab_Term_precheckFun___lambda__1(x_14, x_19, x_30, x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_29);
lean_dec(x_19);
lean_dec(x_14);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_20);
x_32 = lean_box(0);
x_33 = lean_box(0);
x_34 = l_Lean_Elab_Term_precheckFun___lambda__1(x_14, x_19, x_33, x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_19);
lean_dec(x_14);
return x_34;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at_Lean_Elab_Term_precheckFun___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_precheckFun___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__6(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_precheckFun___spec__7(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_precheckFun___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_precheckFun___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("precheckFun", 11);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_precheckFun), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_precheckFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__3;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
x_4 = l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 5);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 5);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_dec(x_1);
lean_ctor_set(x_7, 5, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__3(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
x_22 = lean_ctor_get(x_7, 8);
x_23 = lean_ctor_get(x_7, 9);
x_24 = lean_ctor_get(x_7, 10);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_25 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_19);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_15);
lean_ctor_set(x_26, 2, x_16);
lean_ctor_set(x_26, 3, x_17);
lean_ctor_set(x_26, 4, x_18);
lean_ctor_set(x_26, 5, x_25);
lean_ctor_set(x_26, 6, x_20);
lean_ctor_set(x_26, 7, x_21);
lean_ctor_set(x_26, 8, x_22);
lean_ctor_set(x_26, 9, x_23);
lean_ctor_set(x_26, 10, x_24);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__3(x_2, x_3, x_4, x_5, x_6, x_26, x_8, x_9);
lean_dec(x_8);
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_27;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_elabFun___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__2;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5___rarg), 1, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_elabFun___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_6, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_6, 4);
lean_inc(x_14);
x_15 = lean_ctor_get(x_6, 5);
lean_inc(x_15);
x_16 = lean_ctor_get(x_6, 6);
lean_inc(x_16);
x_17 = lean_ctor_get(x_6, 7);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 10);
lean_inc(x_18);
lean_inc(x_12);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__1___boxed), 4, 1);
lean_closure_set(x_19, 0, x_12);
lean_inc(x_16);
x_20 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_20, 0, x_16);
lean_inc(x_12);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__2___boxed), 4, 1);
lean_closure_set(x_21, 0, x_12);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_12);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__3___boxed), 6, 3);
lean_closure_set(x_22, 0, x_12);
lean_closure_set(x_22, 1, x_16);
lean_closure_set(x_22, 2, x_17);
lean_inc(x_12);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_precheckFun___spec__1___lambda__4___boxed), 6, 3);
lean_closure_set(x_23, 0, x_12);
lean_closure_set(x_23, 1, x_16);
lean_closure_set(x_23, 2, x_17);
x_24 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_20);
lean_ctor_set(x_24, 2, x_21);
lean_ctor_set(x_24, 3, x_22);
lean_ctor_set(x_24, 4, x_23);
x_25 = lean_st_ref_get(x_7, x_11);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_environment_main_module(x_12);
x_30 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_18);
lean_ctor_set(x_30, 3, x_13);
lean_ctor_set(x_30, 4, x_14);
lean_ctor_set(x_30, 5, x_15);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_apply_2(x_1, x_30, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_st_ref_take(x_7, x_27);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_41 = lean_ctor_get(x_38, 1);
lean_dec(x_41);
lean_ctor_set(x_38, 1, x_36);
x_42 = lean_st_ref_set(x_7, x_38, x_39);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_ctor_get(x_35, 1);
lean_inc(x_44);
lean_dec(x_35);
x_45 = l_List_reverse___rarg(x_44);
x_46 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_45, x_2, x_3, x_4, x_5, x_6, x_7, x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
lean_ctor_set(x_46, 0, x_34);
return x_46;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_34);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_51 = lean_ctor_get(x_38, 0);
x_52 = lean_ctor_get(x_38, 2);
x_53 = lean_ctor_get(x_38, 3);
x_54 = lean_ctor_get(x_38, 4);
x_55 = lean_ctor_get(x_38, 5);
x_56 = lean_ctor_get(x_38, 6);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_38);
x_57 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_57, 0, x_51);
lean_ctor_set(x_57, 1, x_36);
lean_ctor_set(x_57, 2, x_52);
lean_ctor_set(x_57, 3, x_53);
lean_ctor_set(x_57, 4, x_54);
lean_ctor_set(x_57, 5, x_55);
lean_ctor_set(x_57, 6, x_56);
x_58 = lean_st_ref_set(x_7, x_57, x_39);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_ctor_get(x_35, 1);
lean_inc(x_60);
lean_dec(x_35);
x_61 = l_List_reverse___rarg(x_60);
x_62 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_61, x_2, x_3, x_4, x_5, x_6, x_7, x_59);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_64 = x_62;
} else {
 lean_dec_ref(x_62);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_34);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
else
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_33, 0);
lean_inc(x_66);
lean_dec(x_33);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_Lean_maxRecDepthErrorMessage;
x_70 = lean_string_dec_eq(x_68, x_69);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_71, 0, x_68);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = l_Lean_throwErrorAt___at_Lean_Elab_Term_elabFun___spec__2(x_67, x_72, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
return x_73;
}
else
{
lean_object* x_74; 
lean_dec(x_68);
x_74 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_elabFun___spec__4(x_67, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_74;
}
}
else
{
lean_object* x_75; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_75 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5___rarg(x_27);
return x_75;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFun___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_box(0);
x_12 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Elab_Term_elabTermEnsuringType(x_1, x_3, x_12, x_12, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 0;
x_17 = 1;
x_18 = l_Lean_Meta_mkLambdaFVars(x_2, x_14, x_16, x_12, x_17, x_6, x_7, x_8, x_9, x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
lean_dec(x_1);
x_15 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8;
lean_inc(x_14);
x_16 = l_Lean_Syntax_isOfKind(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_getArg(x_14, x_18);
x_20 = l_Lean_Syntax_getArg(x_14, x_13);
x_21 = l_Lean_Syntax_matchesNull(x_20, x_18);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_unsigned_to_nat(3u);
x_24 = l_Lean_Syntax_getArg(x_14, x_23);
lean_dec(x_14);
x_25 = l_Lean_Syntax_getArgs(x_19);
lean_dec(x_19);
x_26 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFunBinders___boxed), 4, 2);
lean_closure_set(x_26, 0, x_25);
lean_closure_set(x_26, 1, x_24);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_27 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Term_elabFun___spec__1(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_ctor_get(x_28, 0);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFun___lambda__1), 10, 1);
lean_closure_set(x_33, 0, x_32);
x_34 = l_Lean_Elab_Term_elabFunBinders___rarg(x_31, x_2, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_31);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
return x_27;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_elabFun___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_elabFun___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_elabFun___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabFun___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabFun", 7);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabFun), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabFun(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6;
x_4 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(626u);
x_2 = lean_unsigned_to_nat(33u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(639u);
x_2 = lean_unsigned_to_nat(31u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__1;
x_2 = lean_unsigned_to_nat(33u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__2;
x_4 = lean_unsigned_to_nat(31u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(626u);
x_2 = lean_unsigned_to_nat(37u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(626u);
x_2 = lean_unsigned_to_nat(44u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__4;
x_2 = lean_unsigned_to_nat(37u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__5;
x_4 = lean_unsigned_to_nat(44u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabFun_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabFun___closed__2;
x_3 = l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_elabLetDeclAux___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_3, x_2);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_array_uget(x_1, x_3);
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_4, 2);
lean_inc(x_17);
x_18 = lean_nat_dec_lt(x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_4);
lean_ctor_set(x_19, 1, x_11);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_4);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_4, 2);
lean_dec(x_21);
x_22 = lean_ctor_get(x_4, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_4, 0);
lean_dec(x_23);
x_24 = lean_array_fget(x_15, x_16);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_16, x_25);
lean_dec(x_16);
lean_ctor_set(x_4, 1, x_26);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_27 = l_Lean_Elab_Term_addLocalVarInfo(x_14, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; size_t x_29; size_t x_30; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = 1;
x_30 = lean_usize_add(x_3, x_29);
x_3 = x_30;
x_11 = x_28;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_4);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_4);
x_36 = lean_array_fget(x_15, x_16);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_add(x_16, x_37);
lean_dec(x_16);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_15);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_40 = l_Lean_Elab_Term_addLocalVarInfo(x_14, x_36, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; size_t x_42; size_t x_43; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = 1;
x_43 = lean_usize_add(x_3, x_42);
x_3 = x_43;
x_4 = x_39;
x_11 = x_41;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_39);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_45 = lean_ctor_get(x_40, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(1, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_apply_8(x_1, x_4, x_2, x_3, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg___lambda__1), 9, 3);
lean_closure_set(x_13, 0, x_4);
lean_closure_set(x_13, 1, x_6);
lean_closure_set(x_13, 2, x_7);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_1, x_2, x_3, x_13, x_5, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg___boxed), 12, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("failed to infer 'let' declaration type", 38);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Array_unzip___rarg(x_4);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_16 = l_Lean_Elab_Term_elabType(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3;
x_20 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_17, x_1, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (x_2 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_inc(x_17);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_17);
x_23 = lean_box(0);
x_24 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_25 = l_Lean_Elab_Term_elabTermEnsuringType(x_3, x_22, x_24, x_24, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 0;
x_29 = 1;
lean_inc(x_15);
x_30 = l_Lean_Meta_mkForallFVars(x_15, x_17, x_28, x_24, x_29, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Meta_mkLambdaFVars(x_15, x_26, x_28, x_28, x_29, x_7, x_8, x_9, x_10, x_32);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_35);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_12);
lean_ctor_set(x_33, 0, x_36);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_33, 0);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_33);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_31);
lean_ctor_set(x_39, 1, x_12);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_31);
lean_free_object(x_12);
lean_dec(x_14);
x_41 = !lean_is_exclusive(x_33);
if (x_41 == 0)
{
return x_33;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_33, 0);
x_43 = lean_ctor_get(x_33, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_33);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_26);
lean_free_object(x_12);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_45 = !lean_is_exclusive(x_30);
if (x_45 == 0)
{
return x_30;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_30, 0);
x_47 = lean_ctor_get(x_30, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_30);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_17);
lean_free_object(x_12);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_49 = !lean_is_exclusive(x_25);
if (x_49 == 0)
{
return x_25;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_25, 0);
x_51 = lean_ctor_get(x_25, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_25);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; lean_object* x_57; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_53 = lean_ctor_get(x_20, 1);
lean_inc(x_53);
lean_dec(x_20);
x_54 = 0;
x_55 = 1;
x_56 = 1;
x_57 = l_Lean_Meta_mkForallFVars(x_15, x_17, x_54, x_55, x_56, x_7, x_8, x_9, x_10, x_53);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_58);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_58);
x_61 = 0;
x_62 = lean_box(0);
x_63 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_60, x_61, x_62, x_7, x_8, x_9, x_10, x_59);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_63, 0);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_65);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_58);
lean_ctor_set(x_66, 1, x_12);
lean_ctor_set(x_63, 0, x_66);
return x_63;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_63, 0);
x_68 = lean_ctor_get(x_63, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_63);
lean_ctor_set(x_12, 1, x_14);
lean_ctor_set(x_12, 0, x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_58);
lean_ctor_set(x_69, 1, x_12);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_free_object(x_12);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_71 = !lean_is_exclusive(x_57);
if (x_71 == 0)
{
return x_57;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_57, 0);
x_73 = lean_ctor_get(x_57, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_57);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
else
{
uint8_t x_75; 
lean_free_object(x_12);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_16);
if (x_75 == 0)
{
return x_16;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_16, 0);
x_77 = lean_ctor_get(x_16, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_16);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_12, 0);
x_80 = lean_ctor_get(x_12, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_81 = l_Lean_Elab_Term_elabType(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3;
x_85 = l_Lean_Elab_Term_registerCustomErrorIfMVar(x_82, x_1, x_84, x_5, x_6, x_7, x_8, x_9, x_10, x_83);
if (x_2 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; 
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
lean_inc(x_82);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_82);
x_88 = lean_box(0);
x_89 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_90 = l_Lean_Elab_Term_elabTermEnsuringType(x_3, x_87, x_89, x_89, x_88, x_5, x_6, x_7, x_8, x_9, x_10, x_86);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; uint8_t x_93; uint8_t x_94; lean_object* x_95; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = 0;
x_94 = 1;
lean_inc(x_80);
x_95 = l_Lean_Meta_mkForallFVars(x_80, x_82, x_93, x_89, x_94, x_7, x_8, x_9, x_10, x_92);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_Lean_Meta_mkLambdaFVars(x_80, x_91, x_93, x_93, x_94, x_7, x_8, x_9, x_10, x_97);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_101 = x_98;
} else {
 lean_dec_ref(x_98);
 x_101 = lean_box(0);
}
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_79);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_96);
lean_ctor_set(x_103, 1, x_102);
if (lean_is_scalar(x_101)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_101;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_100);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_96);
lean_dec(x_79);
x_105 = lean_ctor_get(x_98, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_98, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_107 = x_98;
} else {
 lean_dec_ref(x_98);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_91);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_109 = lean_ctor_get(x_95, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_95, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_111 = x_95;
} else {
 lean_dec_ref(x_95);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_82);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_113 = lean_ctor_get(x_90, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_90, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_115 = x_90;
} else {
 lean_dec_ref(x_90);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(1, 2, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
else
{
lean_object* x_117; uint8_t x_118; uint8_t x_119; uint8_t x_120; lean_object* x_121; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_117 = lean_ctor_get(x_85, 1);
lean_inc(x_117);
lean_dec(x_85);
x_118 = 0;
x_119 = 1;
x_120 = 1;
x_121 = l_Lean_Meta_mkForallFVars(x_80, x_82, x_118, x_119, x_120, x_7, x_8, x_9, x_10, x_117);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
lean_inc(x_122);
x_124 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_124, 0, x_122);
x_125 = 0;
x_126 = lean_box(0);
x_127 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_124, x_125, x_126, x_7, x_8, x_9, x_10, x_123);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_79);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_122);
lean_ctor_set(x_132, 1, x_131);
if (lean_is_scalar(x_130)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_130;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_129);
return x_133;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_134 = lean_ctor_get(x_121, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_121, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_136 = x_121;
} else {
 lean_dec_ref(x_121);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(1, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_138 = lean_ctor_get(x_81, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_81, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_140 = x_81;
} else {
 lean_dec_ref(x_81);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unexpected error when elaborating 'let'", 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; 
x_14 = lean_array_get_size(x_5);
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_5);
x_16 = l_Array_toSubarray___rarg(x_5, x_15, x_14);
x_17 = lean_usize_of_nat(x_1);
x_18 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_19 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_2, x_17, x_18, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_6);
x_22 = lean_box(0);
x_23 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_24 = l_Lean_Elab_Term_elabTermEnsuringType(x_3, x_21, x_23, x_23, x_22, x_7, x_8, x_9, x_10, x_11, x_12, x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 0;
x_28 = 1;
x_29 = l_Lean_Meta_mkLambdaFVars(x_5, x_25, x_27, x_27, x_28, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_32 = l_Lean_Meta_isExprDefEq(x_4, x_30, x_9, x_10, x_11, x_12, x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
lean_dec(x_32);
x_36 = l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__2;
x_37 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_36, x_7, x_8, x_9, x_10, x_11, x_12, x_35);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_38 = !lean_is_exclusive(x_32);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_32, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_32, 0, x_40);
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 1);
lean_inc(x_41);
lean_dec(x_32);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_44 = !lean_is_exclusive(x_32);
if (x_44 == 0)
{
return x_32;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_32, 0);
x_46 = lean_ctor_get(x_32, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_32);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_29);
if (x_48 == 0)
{
return x_29;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_29, 0);
x_50 = lean_ctor_get(x_29, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_29);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_52 = !lean_is_exclusive(x_24);
if (x_52 == 0)
{
return x_24;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_24, 0);
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_24);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_56 = !lean_is_exclusive(x_19);
if (x_56 == 0)
{
return x_19;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_19, 0);
x_58 = lean_ctor_get(x_19, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_19);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__4(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (x_1 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_array_get_size(x_2);
lean_inc(x_15);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__3___boxed), 13, 4);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_2);
lean_closure_set(x_17, 2, x_3);
lean_closure_set(x_17, 3, x_4);
x_18 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Term_addAutoBoundImplicits_x27___spec__2___rarg(x_5, x_16, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_6);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_6);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_6);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_12 = l_Lean_Elab_Term_addLocalVarInfo(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Elab_Term_elabTermEnsuringType(x_2, x_3, x_15, x_15, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_6);
lean_dec(x_5);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_23 = lean_array_push(x_22, x_4);
x_24 = 0;
x_25 = 1;
x_26 = l_Lean_Meta_mkLambdaFVars(x_23, x_20, x_24, x_24, x_25, x_7, x_8, x_9, x_10, x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_27 = !lean_is_exclusive(x_16);
if (x_27 == 0)
{
return x_16;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_16, 0);
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_16);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_12);
if (x_31 == 0)
{
return x_12;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_12, 0);
x_33 = lean_ctor_get(x_12, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_12);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Elab_Term_addLocalVarInfo(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_box(0);
x_16 = 1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_Lean_Elab_Term_elabTermEnsuringType(x_2, x_3, x_16, x_16, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_instantiateMVars___at_Lean_Elab_Term_MVarErrorInfo_logError___spec__1(x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
lean_dec(x_7);
lean_dec(x_6);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Term_quoteAutoTactic___closed__44;
x_24 = lean_array_push(x_23, x_5);
x_25 = 0;
x_26 = 1;
x_27 = l_Lean_Meta_mkLambdaFVars(x_24, x_21, x_25, x_4, x_26, x_8, x_9, x_10, x_11, x_22);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_28 = !lean_is_exclusive(x_17);
if (x_28 == 0)
{
return x_17;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_13);
if (x_32 == 0)
{
return x_13;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_13, 0);
x_34 = lean_ctor_get(x_13, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_13);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__7(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, uint8_t x_11, uint8_t x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_dec(x_13);
if (x_6 == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__5), 11, 3);
lean_closure_set(x_21, 0, x_7);
lean_closure_set(x_21, 1, x_8);
lean_closure_set(x_21, 2, x_9);
x_22 = 0;
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_5);
x_23 = l_Lean_Meta_withLocalDecl___at_Lean_Elab_Term_withAuxDecl___spec__3___rarg(x_10, x_22, x_5, x_21, x_11, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_4);
x_26 = l_Lean_Expr_app___override(x_24, x_4);
x_27 = l_Lean_mkLetFunAnnotation(x_26);
x_28 = l_Lean_Elab_Term_elabLetDeclAux___lambda__4(x_1, x_2, x_3, x_4, x_5, x_27, x_14, x_15, x_16, x_17, x_18, x_19, x_25);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_23);
if (x_29 == 0)
{
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_box(x_12);
x_34 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__6___boxed), 12, 4);
lean_closure_set(x_34, 0, x_7);
lean_closure_set(x_34, 1, x_8);
lean_closure_set(x_34, 2, x_9);
lean_closure_set(x_34, 3, x_33);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_4);
lean_inc(x_5);
x_35 = l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(x_10, x_5, x_4, x_34, x_11, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Elab_Term_elabLetDeclAux___lambda__4(x_1, x_2, x_3, x_4, x_5, x_36, x_14, x_15, x_16, x_17, x_18, x_19, x_37);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
return x_35;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_35, 0);
x_41 = lean_ctor_get(x_35, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_35);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("decl", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_2 = l_Lean_Elab_Term_expandWhereDecls___closed__9;
x_3 = l_Lean_Elab_Term_elabLetDeclAux___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" : ", 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" := ", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclAux___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclAux___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, uint8_t x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_box(x_8);
lean_inc(x_4);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___boxed), 11, 3);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, x_17);
lean_closure_set(x_18, 2, x_4);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_19 = l_Lean_Elab_Term_elabBindersEx___rarg(x_2, x_18, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = l_Lean_Syntax_getId(x_1);
lean_inc(x_26);
x_27 = l_Lean_Elab_Term_kindOfBinderName(x_26);
x_28 = l_Lean_Elab_Term_elabLetDeclAux___closed__2;
x_29 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_28, x_10, x_11, x_12, x_13, x_14, x_15, x_22);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_box(0);
x_34 = l_Lean_Elab_Term_elabLetDeclAux___lambda__7(x_8, x_25, x_4, x_24, x_23, x_7, x_1, x_5, x_6, x_26, x_27, x_9, x_33, x_10, x_11, x_12, x_13, x_14, x_15, x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
lean_inc(x_26);
x_36 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_36, 0, x_26);
x_37 = l_Lean_Elab_Term_elabLetDeclAux___closed__3;
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_Elab_Term_elabLetDeclAux___closed__5;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
lean_inc(x_23);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_23);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_Elab_Term_elabLetDeclAux___closed__7;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
lean_inc(x_24);
x_45 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_45, 0, x_24);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_37);
x_48 = l_Lean_addTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__2(x_28, x_47, x_10, x_11, x_12, x_13, x_14, x_15, x_35);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_Elab_Term_elabLetDeclAux___lambda__7(x_8, x_25, x_4, x_24, x_23, x_7, x_1, x_5, x_6, x_26, x_27, x_9, x_49, x_10, x_11, x_12, x_13, x_14, x_15, x_50);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_19);
if (x_52 == 0)
{
return x_19;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_19, 0);
x_54 = lean_ctor_get(x_19, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_19);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Term_elabLetDeclAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_elabLetDeclAux___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_5);
lean_dec(x_5);
x_14 = l_Lean_Meta_withLetDecl___at_Lean_Elab_Term_elabLetDeclAux___spec__2___rarg(x_1, x_2, x_3, x_4, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Term_elabLetDeclAux___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabLetDeclAux___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Term_elabLetDeclAux___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_1);
lean_dec(x_1);
x_15 = l_Lean_Elab_Term_elabLetDeclAux___lambda__4(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_Elab_Term_elabLetDeclAux___lambda__6(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___lambda__7___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; lean_object* x_25; 
x_21 = lean_unbox(x_1);
lean_dec(x_1);
x_22 = lean_unbox(x_6);
lean_dec(x_6);
x_23 = lean_unbox(x_11);
lean_dec(x_11);
x_24 = lean_unbox(x_12);
lean_dec(x_12);
x_25 = l_Lean_Elab_Term_elabLetDeclAux___lambda__7(x_21, x_2, x_3, x_4, x_5, x_22, x_7, x_8, x_9, x_10, x_23, x_24, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_17 = lean_unbox(x_7);
lean_dec(x_7);
x_18 = lean_unbox(x_8);
lean_dec(x_8);
x_19 = lean_unbox(x_9);
lean_dec(x_9);
x_20 = l_Lean_Elab_Term_elabLetDeclAux(x_1, x_2, x_3, x_4, x_5, x_6, x_17, x_18, x_19, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_1, x_7);
lean_inc(x_3);
x_9 = l_Lean_Elab_Term_expandOptType(x_3, x_8);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(4u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_6);
lean_ctor_set(x_12, 2, x_9);
lean_ctor_set(x_12, 3, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkLetIdDeclView___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_mkLetIdDeclView(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandLetEqnsDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("letIdDecl", 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandLetEqnsDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandLetEqnsDecl___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_expandLetEqnsDecl___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetEqnsDecl(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_unsigned_to_nat(3u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Elab_Term_expandMatchAltsIntoMatch(x_1, x_6, x_2, x_3, x_4);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_Lean_Elab_Term_elabLetDeclAux___closed__6;
x_17 = 0;
x_18 = l_Lean_mkAtomFrom(x_1, x_16, x_17);
x_19 = l_Lean_Elab_Term_expandLetEqnsDecl___closed__3;
x_20 = lean_array_push(x_19, x_11);
x_21 = lean_array_push(x_20, x_13);
x_22 = lean_array_push(x_21, x_15);
x_23 = lean_array_push(x_22, x_18);
x_24 = lean_array_push(x_23, x_9);
x_25 = lean_box(2);
x_26 = l_Lean_Elab_Term_expandLetEqnsDecl___closed__2;
x_27 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_24);
lean_ctor_set(x_7, 0, x_27);
return x_7;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_28 = lean_ctor_get(x_7, 0);
x_29 = lean_ctor_get(x_7, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_7);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Syntax_getArg(x_1, x_30);
x_32 = lean_unsigned_to_nat(1u);
x_33 = l_Lean_Syntax_getArg(x_1, x_32);
x_34 = lean_unsigned_to_nat(2u);
x_35 = l_Lean_Syntax_getArg(x_1, x_34);
x_36 = l_Lean_Elab_Term_elabLetDeclAux___closed__6;
x_37 = 0;
x_38 = l_Lean_mkAtomFrom(x_1, x_36, x_37);
x_39 = l_Lean_Elab_Term_expandLetEqnsDecl___closed__3;
x_40 = lean_array_push(x_39, x_31);
x_41 = lean_array_push(x_40, x_33);
x_42 = lean_array_push(x_41, x_35);
x_43 = lean_array_push(x_42, x_38);
x_44 = lean_array_push(x_43, x_28);
x_45 = lean_box(2);
x_46 = l_Lean_Elab_Term_expandLetEqnsDecl___closed__2;
x_47 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_47, 2, x_44);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_29);
return x_48;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_Elab_Term_expandLetEqnsDecl(x_1, x_5, x_3, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_box(x_11);
lean_inc(x_3);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(x_14, 0, x_3);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_12);
lean_closure_set(x_14, 3, x_13);
x_15 = l_Lean_Elab_Term_withMacroExpansion___rarg(x_2, x_3, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandFunBinders_loop___closed__12;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_8);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
x_20 = lean_unsigned_to_nat(4u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
lean_dec(x_1);
lean_inc(x_17);
x_22 = l_Lean_Syntax_getKind(x_17);
x_23 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5;
x_24 = lean_name_eq(x_22, x_23);
lean_dec(x_22);
if (x_24 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Syntax_isNone(x_19);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_26 = l_Lean_Syntax_getArg(x_19, x_16);
lean_dec(x_19);
x_27 = lean_unsigned_to_nat(1u);
x_28 = l_Lean_Syntax_getArg(x_26, x_27);
lean_dec(x_26);
x_29 = lean_ctor_get(x_13, 5);
lean_inc(x_29);
x_30 = 0;
x_31 = l_Lean_SourceInfo_fromRef(x_29, x_30);
x_32 = lean_st_ref_get(x_14, x_15);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_31);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_31);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_37 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_31);
x_38 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_38, 0, x_31);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set(x_38, 2, x_37);
x_39 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2;
lean_inc(x_31);
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_31);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3;
lean_inc(x_31);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_31);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_Elab_Term_expandFunBinders_loop___closed__14;
lean_inc(x_31);
x_44 = l_Lean_Syntax_node2(x_31, x_43, x_42, x_28);
lean_inc(x_31);
x_45 = l_Lean_Syntax_node1(x_31, x_36, x_44);
lean_inc(x_31);
x_46 = l_Lean_Syntax_node2(x_31, x_36, x_21, x_45);
x_47 = l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4;
lean_inc(x_31);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_31);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_Elab_Term_elabLetDeclCore___lambda__2___closed__1;
lean_inc(x_31);
x_50 = l_Lean_Syntax_node3(x_31, x_49, x_40, x_46, x_48);
x_51 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_38);
lean_inc(x_31);
x_52 = l_Lean_Syntax_node2(x_31, x_51, x_38, x_50);
lean_inc(x_31);
x_53 = l_Lean_Syntax_node1(x_31, x_36, x_52);
x_54 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_31);
x_55 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_55, 0, x_31);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_31);
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_31);
lean_ctor_set(x_57, 1, x_56);
lean_inc(x_31);
x_58 = l_Lean_Syntax_node1(x_31, x_36, x_17);
lean_inc(x_31);
x_59 = l_Lean_Syntax_node1(x_31, x_36, x_58);
x_60 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_31);
x_61 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_61, 0, x_31);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_31);
x_63 = l_Lean_Syntax_node4(x_31, x_62, x_57, x_59, x_61, x_4);
lean_inc(x_31);
x_64 = l_Lean_Syntax_node1(x_31, x_36, x_63);
x_65 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_31);
x_66 = l_Lean_Syntax_node1(x_31, x_65, x_64);
x_67 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_38);
x_68 = l_Lean_Syntax_node6(x_31, x_67, x_35, x_38, x_38, x_53, x_55, x_66);
x_69 = l_Lean_Elab_Term_elabLetDeclCore___lambda__1(x_2, x_3, x_68, x_9, x_10, x_11, x_12, x_13, x_14, x_33);
return x_69;
}
else
{
lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_19);
x_70 = lean_ctor_get(x_13, 5);
lean_inc(x_70);
x_71 = 0;
x_72 = l_Lean_SourceInfo_fromRef(x_70, x_71);
x_73 = lean_st_ref_get(x_14, x_15);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = l_Lean_Elab_Term_expandFunBinders_loop___closed__1;
lean_inc(x_72);
x_76 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_76, 0, x_72);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9;
x_78 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
lean_inc(x_72);
x_79 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_79, 0, x_72);
lean_ctor_set(x_79, 1, x_77);
lean_ctor_set(x_79, 2, x_78);
x_80 = l_Lean_Elab_Term_expandFunBinders_loop___closed__4;
lean_inc(x_79);
lean_inc(x_72);
x_81 = l_Lean_Syntax_node2(x_72, x_80, x_79, x_21);
lean_inc(x_72);
x_82 = l_Lean_Syntax_node1(x_72, x_77, x_81);
x_83 = l_Lean_Elab_Term_expandFunBinders_loop___closed__5;
lean_inc(x_72);
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_72);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_Lean_Elab_Term_expandFunBinders_loop___closed__10;
lean_inc(x_72);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_72);
lean_ctor_set(x_86, 1, x_85);
lean_inc(x_72);
x_87 = l_Lean_Syntax_node1(x_72, x_77, x_17);
lean_inc(x_72);
x_88 = l_Lean_Syntax_node1(x_72, x_77, x_87);
x_89 = l_Lean_Elab_Term_expandFunBinders_loop___closed__11;
lean_inc(x_72);
x_90 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_90, 0, x_72);
lean_ctor_set(x_90, 1, x_89);
x_91 = l_Lean_Elab_Term_expandFunBinders_loop___closed__9;
lean_inc(x_72);
x_92 = l_Lean_Syntax_node4(x_72, x_91, x_86, x_88, x_90, x_4);
lean_inc(x_72);
x_93 = l_Lean_Syntax_node1(x_72, x_77, x_92);
x_94 = l_Lean_Elab_Term_expandFunBinders_loop___closed__7;
lean_inc(x_72);
x_95 = l_Lean_Syntax_node1(x_72, x_94, x_93);
x_96 = l_Lean_Elab_Term_expandFunBinders_loop___closed__2;
lean_inc(x_79);
x_97 = l_Lean_Syntax_node6(x_72, x_96, x_76, x_79, x_79, x_82, x_84, x_95);
x_98 = l_Lean_Elab_Term_elabLetDeclCore___lambda__1(x_2, x_3, x_97, x_9, x_10, x_11, x_12, x_13, x_14, x_74);
return x_98;
}
}
else
{
uint8_t x_99; lean_object* x_100; 
lean_dec(x_3);
x_99 = 1;
lean_inc(x_14);
lean_inc(x_13);
x_100 = l_Lean_Elab_Term_mkFreshIdent___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__1(x_17, x_99, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
lean_inc(x_101);
x_103 = l_Lean_Elab_Term_expandOptType(x_101, x_19);
lean_dec(x_19);
x_104 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1;
x_105 = l_Lean_Elab_Term_elabLetDeclAux(x_101, x_104, x_103, x_21, x_4, x_2, x_5, x_6, x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_102);
return x_105;
}
else
{
uint8_t x_106; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_100);
if (x_106 == 0)
{
return x_100;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_100, 0);
x_108 = lean_ctor_get(x_100, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_100);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("letPatDecl", 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_elabLetDeclCore___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("letEqnsDecl", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_elabLetDeclCore___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("'let_delayed' with patterns is not allowed", 42);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_elabLetDeclCore___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabLetDeclCore___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Syntax_getArg(x_14, x_15);
x_17 = lean_unsigned_to_nat(3u);
x_18 = l_Lean_Syntax_getArg(x_1, x_17);
lean_inc(x_16);
x_19 = l_Lean_Syntax_getKind(x_16);
x_20 = l_Lean_Elab_Term_expandLetEqnsDecl___closed__2;
x_21 = lean_name_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = l_Lean_Elab_Term_elabLetDeclCore___closed__2;
x_23 = lean_name_eq(x_19, x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
lean_dec(x_18);
x_24 = l_Lean_Elab_Term_elabLetDeclCore___closed__4;
x_25 = lean_name_eq(x_19, x_24);
lean_dec(x_19);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_26 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_12);
return x_26;
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = 1;
x_28 = lean_box(x_27);
x_29 = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLetEqnsDecl___boxed), 4, 2);
lean_closure_set(x_29, 0, x_16);
lean_closure_set(x_29, 1, x_28);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_30 = l_Lean_Elab_liftMacroM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__8(x_29, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Syntax_setArg(x_14, x_15, x_31);
lean_inc(x_1);
x_34 = l_Lean_Syntax_setArg(x_1, x_13, x_33);
x_35 = lean_box(x_27);
x_36 = lean_box(x_27);
lean_inc(x_34);
x_37 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(x_37, 0, x_34);
lean_closure_set(x_37, 1, x_2);
lean_closure_set(x_37, 2, x_35);
lean_closure_set(x_37, 3, x_36);
x_38 = l_Lean_Elab_Term_withMacroExpansion___rarg(x_1, x_34, x_37, x_6, x_7, x_8, x_9, x_10, x_11, x_32);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_30);
if (x_39 == 0)
{
return x_30;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_30, 0);
x_41 = lean_ctor_get(x_30, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_30);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
lean_dec(x_19);
lean_dec(x_14);
if (x_4 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_box(0);
x_44 = l_Lean_Elab_Term_elabLetDeclCore___lambda__2(x_16, x_2, x_1, x_18, x_3, x_4, x_5, x_43, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_45 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
x_46 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__3(x_45, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
return x_46;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_46);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_1);
x_51 = l_Lean_Elab_Term_mkLetIdDeclView(x_16);
lean_dec(x_16);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_51, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_51, 3);
lean_inc(x_55);
lean_dec(x_51);
x_56 = l_Lean_Elab_Term_elabLetDeclAux(x_52, x_53, x_54, x_55, x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_56;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_unbox(x_5);
lean_dec(x_5);
x_17 = lean_unbox(x_6);
lean_dec(x_6);
x_18 = lean_unbox(x_7);
lean_dec(x_7);
x_19 = l_Lean_Elab_Term_elabLetDeclCore___lambda__2(x_1, x_2, x_3, x_4, x_16, x_17, x_18, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_19;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDeclCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = lean_unbox(x_5);
lean_dec(x_5);
x_16 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_13, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_10, x_11, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l_Lean_Elab_Term_expandWhereDecls___closed__9;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabLetDecl", 11);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDecl), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(751u);
x_2 = lean_unsigned_to_nat(25u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(752u);
x_2 = lean_unsigned_to_nat(129u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__1;
x_2 = lean_unsigned_to_nat(25u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__2;
x_4 = lean_unsigned_to_nat(129u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(751u);
x_2 = lean_unsigned_to_nat(29u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(751u);
x_2 = lean_unsigned_to_nat(40u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__4;
x_2 = lean_unsigned_to_nat(29u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__5;
x_4 = lean_unsigned_to_nat(40u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetFunDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
x_11 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_10, x_10, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("let_fun", 7);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabLetFunDecl", 14);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetFunDecl), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(754u);
x_2 = lean_unsigned_to_nat(29u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(755u);
x_2 = lean_unsigned_to_nat(130u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__1;
x_2 = lean_unsigned_to_nat(29u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__2;
x_4 = lean_unsigned_to_nat(130u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(754u);
x_2 = lean_unsigned_to_nat(33u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(754u);
x_2 = lean_unsigned_to_nat(47u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__4;
x_2 = lean_unsigned_to_nat(33u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__5;
x_4 = lean_unsigned_to_nat(47u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__4;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetDelayedDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_10, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("let_delayed", 11);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabLetDelayedDecl", 18);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetDelayedDecl), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(757u);
x_2 = lean_unsigned_to_nat(33u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(758u);
x_2 = lean_unsigned_to_nat(128u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__1;
x_2 = lean_unsigned_to_nat(33u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__2;
x_4 = lean_unsigned_to_nat(128u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(757u);
x_2 = lean_unsigned_to_nat(37u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(757u);
x_2 = lean_unsigned_to_nat(55u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__4;
x_2 = lean_unsigned_to_nat(37u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__5;
x_4 = lean_unsigned_to_nat(55u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__4;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabLetTmpDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = 1;
x_11 = 0;
x_12 = l_Lean_Elab_Term_elabLetDeclCore(x_1, x_2, x_10, x_11, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("let_tmp", 7);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__1;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("elabLetTmpDecl", 14);
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1;
x_2 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_3 = l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__3;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabLetTmpDecl), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabForall___closed__3;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(760u);
x_2 = lean_unsigned_to_nat(29u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(761u);
x_2 = lean_unsigned_to_nat(128u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__1;
x_2 = lean_unsigned_to_nat(29u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__2;
x_4 = lean_unsigned_to_nat(128u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(760u);
x_2 = lean_unsigned_to_nat(33u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(760u);
x_2 = lean_unsigned_to_nat(47u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__4;
x_2 = lean_unsigned_to_nat(33u);
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__5;
x_4 = lean_unsigned_to_nat(47u);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__4;
x_3 = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__7;
x_4 = l_Lean_addBuiltinDeclarationRanges(x_2, x_3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4;
x_2 = l_Lean_Elab_Term_expandWhereDecls___closed__9;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410____closed__1;
x_3 = 0;
x_4 = l_Lean_registerTraceClass(x_2, x_3, x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Quotation_Precheck(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Term(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_BindersUtil(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Binders(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Quotation_Precheck(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BindersUtil(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__1 = _init_l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__1);
l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2 = _init_l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_mkFreshBinderName___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___spec__2___rarg___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__4);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderIdent___closed__5);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandOptIdent___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__7 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__7();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__7);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__8 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__8();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__8);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__9);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__10 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__10();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__10);
l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__11 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__11();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Term_quoteAutoTactic___spec__1___closed__11);
l_Lean_Elab_Term_quoteAutoTactic___closed__1 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__1);
l_Lean_Elab_Term_quoteAutoTactic___closed__2 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__2);
l_Lean_Elab_Term_quoteAutoTactic___closed__3 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__3);
l_Lean_Elab_Term_quoteAutoTactic___closed__4 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__4);
l_Lean_Elab_Term_quoteAutoTactic___closed__5 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__5);
l_Lean_Elab_Term_quoteAutoTactic___closed__6 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__6);
l_Lean_Elab_Term_quoteAutoTactic___closed__7 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__7);
l_Lean_Elab_Term_quoteAutoTactic___closed__8 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__8);
l_Lean_Elab_Term_quoteAutoTactic___closed__9 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__9);
l_Lean_Elab_Term_quoteAutoTactic___closed__10 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__10);
l_Lean_Elab_Term_quoteAutoTactic___closed__11 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__11);
l_Lean_Elab_Term_quoteAutoTactic___closed__12 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__12);
l_Lean_Elab_Term_quoteAutoTactic___closed__13 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__13);
l_Lean_Elab_Term_quoteAutoTactic___closed__14 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__14);
l_Lean_Elab_Term_quoteAutoTactic___closed__15 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__15();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__15);
l_Lean_Elab_Term_quoteAutoTactic___closed__16 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__16();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__16);
l_Lean_Elab_Term_quoteAutoTactic___closed__17 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__17();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__17);
l_Lean_Elab_Term_quoteAutoTactic___closed__18 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__18();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__18);
l_Lean_Elab_Term_quoteAutoTactic___closed__19 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__19();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__19);
l_Lean_Elab_Term_quoteAutoTactic___closed__20 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__20();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__20);
l_Lean_Elab_Term_quoteAutoTactic___closed__21 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__21();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__21);
l_Lean_Elab_Term_quoteAutoTactic___closed__22 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__22();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__22);
l_Lean_Elab_Term_quoteAutoTactic___closed__23 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__23();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__23);
l_Lean_Elab_Term_quoteAutoTactic___closed__24 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__24();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__24);
l_Lean_Elab_Term_quoteAutoTactic___closed__25 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__25();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__25);
l_Lean_Elab_Term_quoteAutoTactic___closed__26 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__26();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__26);
l_Lean_Elab_Term_quoteAutoTactic___closed__27 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__27();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__27);
l_Lean_Elab_Term_quoteAutoTactic___closed__28 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__28();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__28);
l_Lean_Elab_Term_quoteAutoTactic___closed__29 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__29();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__29);
l_Lean_Elab_Term_quoteAutoTactic___closed__30 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__30();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__30);
l_Lean_Elab_Term_quoteAutoTactic___closed__31 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__31();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__31);
l_Lean_Elab_Term_quoteAutoTactic___closed__32 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__32();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__32);
l_Lean_Elab_Term_quoteAutoTactic___closed__33 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__33();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__33);
l_Lean_Elab_Term_quoteAutoTactic___closed__34 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__34();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__34);
l_Lean_Elab_Term_quoteAutoTactic___closed__35 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__35();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__35);
l_Lean_Elab_Term_quoteAutoTactic___closed__36 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__36();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__36);
l_Lean_Elab_Term_quoteAutoTactic___closed__37 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__37();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__37);
l_Lean_Elab_Term_quoteAutoTactic___closed__38 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__38();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__38);
l_Lean_Elab_Term_quoteAutoTactic___closed__39 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__39();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__39);
l_Lean_Elab_Term_quoteAutoTactic___closed__40 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__40();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__40);
l_Lean_Elab_Term_quoteAutoTactic___closed__41 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__41();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__41);
l_Lean_Elab_Term_quoteAutoTactic___closed__42 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__42();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__42);
l_Lean_Elab_Term_quoteAutoTactic___closed__43 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__43();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__43);
l_Lean_Elab_Term_quoteAutoTactic___closed__44 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__44();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__44);
l_Lean_Elab_Term_quoteAutoTactic___closed__45 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__45();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__45);
l_Lean_Elab_Term_quoteAutoTactic___closed__46 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__46();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__46);
l_Lean_Elab_Term_quoteAutoTactic___closed__47 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__47();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__47);
l_Lean_Elab_Term_quoteAutoTactic___closed__48 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__48();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__48);
l_Lean_Elab_Term_quoteAutoTactic___closed__49 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__49();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__49);
l_Lean_Elab_Term_quoteAutoTactic___closed__50 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__50();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__50);
l_Lean_Elab_Term_quoteAutoTactic___closed__51 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__51();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__51);
l_Lean_Elab_Term_quoteAutoTactic___closed__52 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__52();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__52);
l_Lean_Elab_Term_quoteAutoTactic___closed__53 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__53();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__53);
l_Lean_Elab_Term_quoteAutoTactic___closed__54 = _init_l_Lean_Elab_Term_quoteAutoTactic___closed__54();
lean_mark_persistent(l_Lean_Elab_Term_quoteAutoTactic___closed__54);
l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__1 = _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__1);
l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2 = _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__2);
l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__3 = _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__3);
l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4 = _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__4);
l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5 = _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__5);
l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__6 = _init_l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___lambda__2___closed__6);
l_Lean_Elab_Term_declareTacticSyntax___closed__1 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__1);
l_Lean_Elab_Term_declareTacticSyntax___closed__2 = _init_l_Lean_Elab_Term_declareTacticSyntax___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_declareTacticSyntax___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__4);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__5);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__6);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__7);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__8);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__9 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__9);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__10 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__10);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__11);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__12 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__12);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__13 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandBinderModifier___closed__13);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__3 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__3);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__4 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__4();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_getBinderIds___spec__1___closed__4);
l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__1 = _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__1);
l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2 = _init_l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___spec__1___rarg___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__4);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__5 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__5);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__6 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__6);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__7 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__7);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__8 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_toBinderViews___closed__8);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_registerFailedToInferBinderTypeInfo___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_ensureAtomicBinderName___closed__4);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__1 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__1();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__1);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__2 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__2();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__2);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__3 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__3();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__3);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__4 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__4();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__4);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__5 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__5();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412____closed__5);
if (builtin) {res = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_2412_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_checkBinderAnnotations = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_checkBinderAnnotations);
lean_dec_ref(res);
}l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_checkLocalInstanceParameters___closed__4);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__4);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__5 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBinderViews_loop___rarg___closed__5);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_elabBindersAux___rarg___closed__1);
l_Lean_Elab_Term_expandSimpleBinderWithType___closed__1 = _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandSimpleBinderWithType___closed__1);
l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2 = _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandSimpleBinderWithType___closed__2);
l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3 = _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandSimpleBinderWithType___closed__3);
l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4 = _init_l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandSimpleBinderWithType___closed__4);
l_Lean_Elab_Term_expandForall___closed__1 = _init_l_Lean_Elab_Term_expandForall___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandForall___closed__1);
l_Lean_Elab_Term_expandForall___closed__2 = _init_l_Lean_Elab_Term_expandForall___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandForall___closed__2);
l_Lean_Elab_Term_expandForall___closed__3 = _init_l_Lean_Elab_Term_expandForall___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandForall___closed__3);
l_Lean_Elab_Term_expandForall___closed__4 = _init_l_Lean_Elab_Term_expandForall___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandForall___closed__4);
l_Lean_Elab_Term_expandForall___closed__5 = _init_l_Lean_Elab_Term_expandForall___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandForall___closed__5);
l___regBuiltin_Lean_Elab_Term_expandForall___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall___closed__1);
l___regBuiltin_Lean_Elab_Term_expandForall___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall___closed__2);
l___regBuiltin_Lean_Elab_Term_expandForall___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall___closed__3);
l___regBuiltin_Lean_Elab_Term_expandForall___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_expandForall___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall___closed__4);
res = l___regBuiltin_Lean_Elab_Term_expandForall(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandForall_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_expandForall_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__1);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__2);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__3);
l___regBuiltin_Lean_Elab_Term_elabForall___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabForall___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall___closed__4);
res = l___regBuiltin_Lean_Elab_Term_elabForall(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForall_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabForall_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_precheckArrow___closed__1 = _init_l_Lean_Elab_Term_precheckArrow___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_precheckArrow___closed__1);
l_Lean_Elab_Term_precheckArrow___closed__2 = _init_l_Lean_Elab_Term_precheckArrow___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_precheckArrow___closed__2);
l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__1);
l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__2);
l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__3);
l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckArrow___closed__4);
res = l___regBuiltin_Lean_Elab_Term_precheckArrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabArrow___closed__1 = _init_l_Lean_Elab_Term_elabArrow___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___closed__1);
l_Lean_Elab_Term_elabArrow___closed__2 = _init_l_Lean_Elab_Term_elabArrow___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabArrow___closed__2);
l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow___closed__1);
l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow___closed__2);
l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabArrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabArrow_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabArrow_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__1);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__2);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__3);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__4);
l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow___closed__5);
res = l___regBuiltin_Lean_Elab_Term_elabDepArrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabDepArrow_docString(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabDepArrow_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_expandFunBinders_loop___closed__1 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__1);
l_Lean_Elab_Term_expandFunBinders_loop___closed__2 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__2);
l_Lean_Elab_Term_expandFunBinders_loop___closed__3 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__3);
l_Lean_Elab_Term_expandFunBinders_loop___closed__4 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__4);
l_Lean_Elab_Term_expandFunBinders_loop___closed__5 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__5);
l_Lean_Elab_Term_expandFunBinders_loop___closed__6 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__6);
l_Lean_Elab_Term_expandFunBinders_loop___closed__7 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__7);
l_Lean_Elab_Term_expandFunBinders_loop___closed__8 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__8);
l_Lean_Elab_Term_expandFunBinders_loop___closed__9 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__9);
l_Lean_Elab_Term_expandFunBinders_loop___closed__10 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__10);
l_Lean_Elab_Term_expandFunBinders_loop___closed__11 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__11);
l_Lean_Elab_Term_expandFunBinders_loop___closed__12 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__12);
l_Lean_Elab_Term_expandFunBinders_loop___closed__13 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__13);
l_Lean_Elab_Term_expandFunBinders_loop___closed__14 = _init_l_Lean_Elab_Term_expandFunBinders_loop___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_expandFunBinders_loop___closed__14);
l_Lean_Elab_Term_FunBinders_State_fvars___default = _init_l_Lean_Elab_Term_FunBinders_State_fvars___default();
lean_mark_persistent(l_Lean_Elab_Term_FunBinders_State_fvars___default);
l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default = _init_l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default();
lean_mark_persistent(l_Lean_Elab_Term_FunBinders_State_expectedType_x3f___default);
l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__1 = _init_l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__1);
l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__2 = _init_l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___lambda__1___closed__2);
l_Lean_Elab_Term_expandWhereDecls___closed__1 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__1);
l_Lean_Elab_Term_expandWhereDecls___closed__2 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__2);
l_Lean_Elab_Term_expandWhereDecls___closed__3 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__3);
l_Lean_Elab_Term_expandWhereDecls___closed__4 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__4);
l_Lean_Elab_Term_expandWhereDecls___closed__5 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__5);
l_Lean_Elab_Term_expandWhereDecls___closed__6 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__6);
l_Lean_Elab_Term_expandWhereDecls___closed__7 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__7);
l_Lean_Elab_Term_expandWhereDecls___closed__8 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__8();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__8);
l_Lean_Elab_Term_expandWhereDecls___closed__9 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__9();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__9);
l_Lean_Elab_Term_expandWhereDecls___closed__10 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__10();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__10);
l_Lean_Elab_Term_expandWhereDecls___closed__11 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__11();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__11);
l_Lean_Elab_Term_expandWhereDecls___closed__12 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__12();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__12);
l_Lean_Elab_Term_expandWhereDecls___closed__13 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__13();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__13);
l_Lean_Elab_Term_expandWhereDecls___closed__14 = _init_l_Lean_Elab_Term_expandWhereDecls___closed__14();
lean_mark_persistent(l_Lean_Elab_Term_expandWhereDecls___closed__14);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__1);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__2);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__3);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__4);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__5);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__6);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__7 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__7);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__8);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__9);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__10 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__10);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__11);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__12);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__13);
l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__14 = _init_l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__14();
lean_mark_persistent(l___private_Lean_Elab_Binders_0__Lean_Elab_Term_expandMatchAltsIntoMatchAux___closed__14);
l___regBuiltin_Lean_Elab_Term_expandFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun___closed__1);
l___regBuiltin_Lean_Elab_Term_expandFun___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun___closed__2);
l___regBuiltin_Lean_Elab_Term_expandFun___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandFun___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandFun_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_expandFun_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__1);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__2);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun___closed__3);
res = l___regBuiltin_Lean_Elab_Term_expandExplicitFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_expandExplicitFun_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__1 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__1();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__1);
l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__2 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__2();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Term_precheckFun___spec__4___closed__2);
l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckFun___closed__1);
l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckFun___closed__2);
l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_precheckFun___closed__3);
res = l___regBuiltin_Lean_Elab_Term_precheckFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabFun___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun___closed__1);
l___regBuiltin_Lean_Elab_Term_elabFun___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun___closed__2);
l___regBuiltin_Lean_Elab_Term_elabFun___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabFun___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabFun(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabFun_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabFun_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__1);
l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__2);
l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__1___closed__3);
l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__1);
l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___lambda__3___closed__2);
l_Lean_Elab_Term_elabLetDeclAux___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__1);
l_Lean_Elab_Term_elabLetDeclAux___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__2);
l_Lean_Elab_Term_elabLetDeclAux___closed__3 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__3);
l_Lean_Elab_Term_elabLetDeclAux___closed__4 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__4);
l_Lean_Elab_Term_elabLetDeclAux___closed__5 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__5);
l_Lean_Elab_Term_elabLetDeclAux___closed__6 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__6);
l_Lean_Elab_Term_elabLetDeclAux___closed__7 = _init_l_Lean_Elab_Term_elabLetDeclAux___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclAux___closed__7);
l_Lean_Elab_Term_expandLetEqnsDecl___closed__1 = _init_l_Lean_Elab_Term_expandLetEqnsDecl___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_expandLetEqnsDecl___closed__1);
l_Lean_Elab_Term_expandLetEqnsDecl___closed__2 = _init_l_Lean_Elab_Term_expandLetEqnsDecl___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_expandLetEqnsDecl___closed__2);
l_Lean_Elab_Term_expandLetEqnsDecl___closed__3 = _init_l_Lean_Elab_Term_expandLetEqnsDecl___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_expandLetEqnsDecl___closed__3);
l_Lean_Elab_Term_elabLetDeclCore___lambda__2___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclCore___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___lambda__2___closed__1);
l_Lean_Elab_Term_elabLetDeclCore___closed__1 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__1);
l_Lean_Elab_Term_elabLetDeclCore___closed__2 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__2);
l_Lean_Elab_Term_elabLetDeclCore___closed__3 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__3);
l_Lean_Elab_Term_elabLetDeclCore___closed__4 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__4);
l_Lean_Elab_Term_elabLetDeclCore___closed__5 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__5);
l_Lean_Elab_Term_elabLetDeclCore___closed__6 = _init_l_Lean_Elab_Term_elabLetDeclCore___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_elabLetDeclCore___closed__6);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl___closed__4);
res = l___regBuiltin_Lean_Elab_Term_elabLetDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabLetDecl_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__4);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl___closed__5);
res = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabLetFunDecl_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__4);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl___closed__5);
res = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabLetDelayedDecl_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__4);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl___closed__5);
res = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__1);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__2);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__3);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__4);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__5);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__6 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__6);
l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__7 = _init_l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__7();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange___closed__7);
res = l___regBuiltin_Lean_Elab_Term_elabLetTmpDecl_declRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410____closed__1 = _init_l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410____closed__1();
lean_mark_persistent(l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410____closed__1);
res = l_Lean_Elab_Term_initFn____x40_Lean_Elab_Binders___hyg_12410_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
