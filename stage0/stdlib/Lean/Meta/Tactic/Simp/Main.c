// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.Main
// Imports: Init Lean.Meta.Transform Lean.Meta.Tactic.Replace Lean.Meta.Tactic.Util Lean.Meta.Tactic.Clear Lean.Meta.Tactic.Simp.Types Lean.Meta.Tactic.Simp.Rewrite
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
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__1;
uint8_t l_Lean_Expr_bindingInfo_x21(lean_object*);
static lean_object* l_Lean_Meta_Simp_DefaultMethods_methods___closed__3;
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkImpCongrCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_simpTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans_match__1___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_cacheResult___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__14;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLambda___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__8;
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9___boxed(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__3;
lean_object* l_Lean_Meta_Simp_simp_congrDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas_match__1(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLambda___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
static lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__3;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_DefaultMethods_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__2;
lean_object* l_Lean_Meta_Simp_simp___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1;
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__5;
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__1;
extern lean_object* l_Lean_ExprStructEq_instHashableExprStructEq;
extern lean_object* l_Lean_maxRecDepthErrorMessage;
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__4;
lean_object* l_Lean_Meta_Simp_simp_simpLambda___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLoop___closed__1;
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_congrDefault___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CongrLemmas_get(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLoop___closed__2;
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_getCongrLemmas___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_congrHypothesisExceptionId;
static lean_object* l_Lean_Meta_Simp_DefaultMethods_methods___closed__4;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_addTrace_addTraceOptions(lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLambda___closed__1;
lean_object* l_Lean_Meta_simpTargetCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__1;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__13;
lean_object* l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Simp_simp___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__6;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___closed__1;
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr_match__1(lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_congr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__6;
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitForall___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6___boxed(lean_object**);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr_match__1(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_throwCongrHypothesisFailed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2;
static lean_object* l_Lean_Meta_Simp_DefaultMethods_methods___closed__1;
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
static lean_object* l_Lean_Meta_Simp_main___closed__1;
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_postDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__9;
extern lean_object* l_Lean_Meta_Simp_instInhabitedResult;
uint8_t l_USize_decLt(size_t, size_t);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__7;
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f_match__1(lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__4;
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
extern lean_object* l_Lean_ExprStructEq_instBEqExprStructEq;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__3;
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Simp_simp___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__5;
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__4;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__1;
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___rarg___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTarget___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__10;
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_getConfig___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTargetCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__3;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_simpTarget___closed__1;
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_DefaultMethods_methods___closed__2;
lean_object* l_Lean_Meta_Simp_simp_simpConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1;
static lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__3;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__10;
static lean_object* l_Lean_Meta_simpTargetCore___closed__3;
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_withNewLemmas___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__3;
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__2(lean_object*, lean_object*, size_t, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__2;
lean_object* l_Lean_Meta_Simp_simp_match__1(lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__3(lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__5;
static lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__7;
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLet_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_getSimpLemmas___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__7;
lean_object* l_Lean_Meta_Simp_DefaultMethods_methods;
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_congrDefault_match__1(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__4;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLambda___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11___boxed__const__1;
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_instHashableExpr;
lean_object* l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__12(lean_object*, lean_object*);
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitForall___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4_(lean_object*);
lean_object* l_Lean_Meta_Simp_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Meta_Simp_simp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_simpStep___closed__1;
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__11;
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_congrDefault_match__1___rarg(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__1;
static lean_object* l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg___closed__1;
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__1;
extern lean_object* l_Lean_Meta_instMonadMetaM;
static lean_object* l_Lean_Meta_Simp_simp_congr___closed__1;
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__4;
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedParamInfo;
lean_object* l_Lean_Meta_Simp_simp_cacheResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_projectionFnInfoExt;
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp_simpLoop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp_simpLoop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_DefaultMethods_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerInternalExceptionId(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__5;
lean_object* l_Lean_Meta_Simp_simp_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__3;
static lean_object* l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_simpTargetCore___closed__4;
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLambda___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_congr_match__1(lean_object*);
static lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__2;
lean_object* l_Lean_isProjectionFn___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_congr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__1;
lean_object* l_Lean_Meta_Simp_simp_congr_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4;
lean_object* l_Lean_Meta_Simp_simp_simpStep_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpStep_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTargetCore___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLet___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1;
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_Meta_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitLet___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceProj_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__10;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLet_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___closed__1;
lean_object* l_List_forIn_loop___at_Lean_Meta_Simp_simp_congr___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_simpTargetCore___closed__1;
lean_object* l_Lean_Meta_Simp_preDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__1;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__7;
static lean_object* l_Lean_Meta_simpTargetCore___closed__2;
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans_match__1(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__9;
lean_object* l_Lean_Meta_SimpLemmas_add(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj_match__1(lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__4;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2;
uint8_t l_Lean_Meta_SimpLemmas_isDeclToUnfold(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__7;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__6;
static lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__8;
lean_object* l_Lean_Meta_Simp_throwCongrHypothesisFailed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__2;
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__2(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6;
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__2;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1;
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__3(lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof_match__1(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__1;
lean_object* l_Lean_Meta_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_withNewLemmas___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__3___rarg(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLoop_match__1(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__4;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__1;
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_Simp_simp___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__2;
lean_object* l_Lean_Meta_Simp_simp___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isProjectionFn___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9;
lean_object* lean_mk_array(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__5;
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__8;
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__2;
extern lean_object* l_Lean_Expr_instBEqExpr;
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__1;
lean_object* l_Lean_throwError___at_Lean_Meta_withIncRecDepth___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__3;
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__2;
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___boxed(lean_object*, lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__5;
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__2(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_simpLoop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__2;
static lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__4;
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__5;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___boxed(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__1;
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___closed__2;
lean_object* l_Lean_Meta_Simp_simp_cacheResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__2;
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_simp_cacheResult___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFunExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_simpStep___closed__2;
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__3;
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__1;
static lean_object* l_Lean_Meta_Simp_simp_simpStep___closed__1;
static lean_object* l_Lean_Meta_Simp_simp_simpForall___closed__6;
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__2;
static lean_object* l_Lean_Meta_Simp_simp_simpStep___closed__2;
static lean_object* l_Lean_Meta_Simp_simp_simpLet___closed__6;
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__8;
lean_object* l_Lean_Meta_mkImpCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("congrHypothesisFailed");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__2;
x_3 = l_Lean_registerInternalExceptionId(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_congrHypothesisExceptionId;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_throwCongrHypothesisFailed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Meta_Simp_throwCongrHypothesisFailed___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_Simp_throwCongrHypothesisFailed(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Meta_Simp_Result_getProof_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_Result_getProof_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_Result_getProof_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_Meta_mkEqRefl(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_2, 1);
lean_dec(x_12);
lean_ctor_set(x_2, 1, x_8);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_8, 0);
lean_inc(x_17);
lean_dec(x_8);
x_18 = !lean_is_exclusive(x_2);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_2, 0);
x_20 = lean_ctor_get(x_2, 1);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = l_Lean_Meta_mkEqTrans(x_17, x_22, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_ctor_set(x_10, 0, x_25);
lean_ctor_set(x_23, 0, x_2);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_23, 0);
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_23);
lean_ctor_set(x_10, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_free_object(x_10);
lean_free_object(x_2);
lean_dec(x_19);
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
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_10, 0);
lean_inc(x_33);
lean_dec(x_10);
x_34 = l_Lean_Meta_mkEqTrans(x_17, x_33, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_37 = x_34;
} else {
 lean_dec_ref(x_34);
 x_37 = lean_box(0);
}
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_2, 1, x_38);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_2);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_2);
lean_dec(x_19);
x_40 = lean_ctor_get(x_34, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_42 = x_34;
} else {
 lean_dec_ref(x_34);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(1, 2, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_2, 0);
lean_inc(x_44);
lean_dec(x_2);
x_45 = lean_ctor_get(x_10, 0);
lean_inc(x_45);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_46 = x_10;
} else {
 lean_dec_ref(x_10);
 x_46 = lean_box(0);
}
x_47 = l_Lean_Meta_mkEqTrans(x_17, x_45, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_51 = lean_alloc_ctor(1, 1, 0);
} else {
 x_51 = x_46;
}
lean_ctor_set(x_51, 0, x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_44);
lean_ctor_set(x_52, 1, x_51);
if (lean_is_scalar(x_50)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_50;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_49);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_46);
lean_dec(x_44);
x_54 = lean_ctor_get(x_47, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_47, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_56 = x_47;
} else {
 lean_dec_ref(x_47);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongrFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_mkApp(x_9, x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_2);
x_16 = l_Lean_Meta_mkCongrFun(x_15, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_Lean_mkApp(x_19, x_2);
lean_ctor_set(x_8, 0, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_8);
lean_ctor_set(x_16, 0, x_21);
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = l_Lean_mkApp(x_24, x_2);
lean_ctor_set(x_8, 0, x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_8);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_free_object(x_8);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_8, 0);
lean_inc(x_32);
lean_dec(x_8);
lean_inc(x_2);
x_33 = l_Lean_Meta_mkCongrFun(x_32, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
lean_dec(x_1);
x_38 = l_Lean_mkApp(x_37, x_2);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_34);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
if (lean_is_scalar(x_36)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_36;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_35);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_2);
lean_dec(x_1);
x_42 = lean_ctor_get(x_33, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_33, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_44 = x_33;
} else {
 lean_dec_ref(x_33);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_6);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_1(x_5, x_9);
return x_10;
}
}
else
{
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_4, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_2(x_6, x_13, x_14);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_inc(x_9);
lean_inc(x_8);
x_10 = l_Lean_mkApp(x_8, x_9);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = l_Lean_Meta_mkCongrArg(x_8, x_17, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_12, 0, x_20);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_10);
lean_ctor_set(x_21, 1, x_12);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
lean_ctor_set(x_12, 0, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_10);
lean_ctor_set(x_24, 1, x_12);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_free_object(x_12);
lean_dec(x_10);
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
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_12, 0);
lean_inc(x_30);
lean_dec(x_12);
x_31 = l_Lean_Meta_mkCongrArg(x_8, x_30, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_34 = x_31;
} else {
 lean_dec_ref(x_31);
 x_34 = lean_box(0);
}
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_10);
lean_ctor_set(x_36, 1, x_35);
if (lean_is_scalar(x_34)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_34;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_10);
x_38 = lean_ctor_get(x_31, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_40 = x_31;
} else {
 lean_dec_ref(x_31);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
}
else
{
lean_object* x_42; 
lean_dec(x_8);
x_42 = lean_ctor_get(x_2, 1);
lean_inc(x_42);
lean_dec(x_2);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_11);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_11, 0);
x_45 = l_Lean_Meta_mkCongrFun(x_44, x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
lean_ctor_set(x_11, 0, x_47);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_10);
lean_ctor_set(x_48, 1, x_11);
lean_ctor_set(x_45, 0, x_48);
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
lean_ctor_set(x_11, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_10);
lean_ctor_set(x_51, 1, x_11);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_free_object(x_11);
lean_dec(x_10);
x_53 = !lean_is_exclusive(x_45);
if (x_53 == 0)
{
return x_45;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_45, 0);
x_55 = lean_ctor_get(x_45, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_45);
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
x_58 = l_Lean_Meta_mkCongrFun(x_57, x_9, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_59);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_10);
lean_ctor_set(x_63, 1, x_62);
if (lean_is_scalar(x_61)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_61;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_10);
x_65 = lean_ctor_get(x_58, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_58, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_67 = x_58;
} else {
 lean_dec_ref(x_58);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
else
{
lean_object* x_69; uint8_t x_70; 
lean_dec(x_9);
x_69 = lean_ctor_get(x_11, 0);
lean_inc(x_69);
lean_dec(x_11);
x_70 = !lean_is_exclusive(x_42);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_42, 0);
x_72 = l_Lean_Meta_mkCongr(x_69, x_71, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_72, 0);
lean_ctor_set(x_42, 0, x_74);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_10);
lean_ctor_set(x_75, 1, x_42);
lean_ctor_set(x_72, 0, x_75);
return x_72;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_72, 0);
x_77 = lean_ctor_get(x_72, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_72);
lean_ctor_set(x_42, 0, x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_10);
lean_ctor_set(x_78, 1, x_42);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
uint8_t x_80; 
lean_free_object(x_42);
lean_dec(x_10);
x_80 = !lean_is_exclusive(x_72);
if (x_80 == 0)
{
return x_72;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_72, 0);
x_82 = lean_ctor_get(x_72, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_72);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_42, 0);
lean_inc(x_84);
lean_dec(x_42);
x_85 = l_Lean_Meta_mkCongr(x_69, x_84, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_86);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_10);
lean_ctor_set(x_90, 1, x_89);
if (lean_is_scalar(x_88)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_88;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_87);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_10);
x_92 = lean_ctor_get(x_85, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_85, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_94 = x_85;
} else {
 lean_dec_ref(x_85);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_apply_2(x_4, x_1, x_2);
return x_7;
}
}
else
{
lean_object* x_8; 
lean_dec(x_3);
x_8 = lean_apply_2(x_4, x_1, x_2);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = l_Lean_Meta_mkArrow(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_12, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_10, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_10, 1);
lean_inc(x_25);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_26 = l_Lean_Meta_Simp_Result_getProof(x_1, x_3, x_4, x_5, x_6, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_29 = l_Lean_Meta_Simp_Result_getProof(x_2, x_3, x_4, x_5, x_6, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Meta_mkImpCongr(x_27, x_30, x_3, x_4, x_5, x_6, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
lean_ctor_set(x_12, 0, x_34);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_24);
lean_ctor_set(x_35, 1, x_12);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
lean_ctor_set(x_12, 0, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_24);
lean_ctor_set(x_38, 1, x_12);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_24);
lean_free_object(x_12);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_27);
lean_dec(x_24);
lean_free_object(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_29);
if (x_44 == 0)
{
return x_29;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_29, 0);
x_46 = lean_ctor_get(x_29, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_29);
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
lean_dec(x_24);
lean_free_object(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_26);
if (x_48 == 0)
{
return x_26;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_26, 0);
x_50 = lean_ctor_get(x_26, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_26);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_12);
x_52 = lean_ctor_get(x_10, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_10, 1);
lean_inc(x_53);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_54 = l_Lean_Meta_Simp_Result_getProof(x_1, x_3, x_4, x_5, x_6, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_57 = l_Lean_Meta_Simp_Result_getProof(x_2, x_3, x_4, x_5, x_6, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Meta_mkImpCongr(x_55, x_58, x_3, x_4, x_5, x_6, x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_63 = x_60;
} else {
 lean_dec_ref(x_60);
 x_63 = lean_box(0);
}
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_61);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_52);
lean_ctor_set(x_65, 1, x_64);
if (lean_is_scalar(x_63)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_63;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_52);
x_67 = lean_ctor_get(x_60, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_60, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_69 = x_60;
} else {
 lean_dec_ref(x_60);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_57, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_73 = x_57;
} else {
 lean_dec_ref(x_57);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_52);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_75 = lean_ctor_get(x_54, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_54, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_77 = x_54;
} else {
 lean_dec_ref(x_54);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
}
else
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_11);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_11, 0);
lean_dec(x_80);
x_81 = lean_ctor_get(x_10, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_10, 1);
lean_inc(x_82);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_83 = l_Lean_Meta_Simp_Result_getProof(x_1, x_3, x_4, x_5, x_6, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_86 = l_Lean_Meta_Simp_Result_getProof(x_2, x_3, x_4, x_5, x_6, x_85);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_Meta_mkImpCongr(x_84, x_87, x_3, x_4, x_5, x_6, x_88);
if (lean_obj_tag(x_89) == 0)
{
uint8_t x_90; 
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_89, 0);
lean_ctor_set(x_11, 0, x_91);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_81);
lean_ctor_set(x_92, 1, x_11);
lean_ctor_set(x_89, 0, x_92);
return x_89;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_89, 0);
x_94 = lean_ctor_get(x_89, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_89);
lean_ctor_set(x_11, 0, x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_81);
lean_ctor_set(x_95, 1, x_11);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
uint8_t x_97; 
lean_dec(x_81);
lean_free_object(x_11);
x_97 = !lean_is_exclusive(x_89);
if (x_97 == 0)
{
return x_89;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_89, 0);
x_99 = lean_ctor_get(x_89, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_89);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_84);
lean_dec(x_81);
lean_free_object(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_101 = !lean_is_exclusive(x_86);
if (x_101 == 0)
{
return x_86;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_86, 0);
x_103 = lean_ctor_get(x_86, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_86);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_81);
lean_free_object(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = !lean_is_exclusive(x_83);
if (x_105 == 0)
{
return x_83;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_83, 0);
x_107 = lean_ctor_get(x_83, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_83);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_11);
x_109 = lean_ctor_get(x_10, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_10, 1);
lean_inc(x_110);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_111 = l_Lean_Meta_Simp_Result_getProof(x_1, x_3, x_4, x_5, x_6, x_110);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_114 = l_Lean_Meta_Simp_Result_getProof(x_2, x_3, x_4, x_5, x_6, x_113);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = l_Lean_Meta_mkImpCongr(x_112, x_115, x_3, x_4, x_5, x_6, x_116);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
x_121 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_121, 0, x_118);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_109);
lean_ctor_set(x_122, 1, x_121);
if (lean_is_scalar(x_120)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_120;
}
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_119);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_109);
x_124 = lean_ctor_get(x_117, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_117, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_126 = x_117;
} else {
 lean_dec_ref(x_117);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_112);
lean_dec(x_109);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_128 = lean_ctor_get(x_114, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_114, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_130 = x_114;
} else {
 lean_dec_ref(x_114);
 x_130 = lean_box(0);
}
if (lean_is_scalar(x_130)) {
 x_131 = lean_alloc_ctor(1, 2, 0);
} else {
 x_131 = x_130;
}
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_109);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_132 = lean_ctor_get(x_111, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_111, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_134 = x_111;
} else {
 lean_dec_ref(x_111);
 x_134 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_133);
return x_135;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_Meta_reduceProj_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_1);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_7, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
lean_ctor_set(x_7, 0, x_15);
return x_7;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_ctor_get(x_8, 0);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_projectionFnInfoExt;
x_14 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_13, x_12, x_1);
lean_ctor_set(x_9, 0, x_14);
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_projectionFnInfoExt;
x_19 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_18, x_17, x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_mkSort(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_9) == 4)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_environment_find(x_15, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_box(0);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_free_object(x_11);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_ConstantInfo_name(x_18);
lean_dec(x_18);
lean_inc(x_19);
x_20 = l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___spec__1(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_ctor_get_uint8(x_28, sizeof(void*)*3);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_19);
lean_dec(x_2);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_4, x_5, x_6, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 0);
lean_dec(x_34);
x_35 = lean_box(0);
lean_ctor_set(x_31, 0, x_35);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
lean_dec(x_31);
x_40 = lean_ctor_get(x_32, 0);
lean_inc(x_40);
lean_dec(x_32);
x_41 = l_Lean_Expr_getAppFn(x_40);
x_42 = l_Lean_Meta_reduceProj_x3f(x_41, x_4, x_5, x_6, x_7, x_39);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
lean_dec(x_40);
x_44 = !lean_is_exclusive(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set(x_42, 0, x_46);
return x_42;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_dec(x_42);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_42);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_42, 0);
lean_dec(x_51);
x_52 = !lean_is_exclusive(x_43);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_ctor_get(x_43, 0);
x_54 = lean_unsigned_to_nat(0u);
x_55 = l_Lean_Expr_getAppNumArgsAux(x_40, x_54);
x_56 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_inc(x_55);
x_57 = lean_mk_array(x_55, x_56);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_nat_sub(x_55, x_58);
lean_dec(x_55);
x_60 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_40, x_57, x_59);
x_61 = l_Lean_mkAppN(x_53, x_60);
lean_ctor_set(x_43, 0, x_61);
return x_42;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_62 = lean_ctor_get(x_43, 0);
lean_inc(x_62);
lean_dec(x_43);
x_63 = lean_unsigned_to_nat(0u);
x_64 = l_Lean_Expr_getAppNumArgsAux(x_40, x_63);
x_65 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_inc(x_64);
x_66 = lean_mk_array(x_64, x_65);
x_67 = lean_unsigned_to_nat(1u);
x_68 = lean_nat_sub(x_64, x_67);
lean_dec(x_64);
x_69 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_40, x_66, x_68);
x_70 = l_Lean_mkAppN(x_62, x_69);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_42, 0, x_71);
return x_42;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_72 = lean_ctor_get(x_42, 1);
lean_inc(x_72);
lean_dec(x_42);
x_73 = lean_ctor_get(x_43, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 x_74 = x_43;
} else {
 lean_dec_ref(x_43);
 x_74 = lean_box(0);
}
x_75 = lean_unsigned_to_nat(0u);
x_76 = l_Lean_Expr_getAppNumArgsAux(x_40, x_75);
x_77 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_inc(x_76);
x_78 = lean_mk_array(x_76, x_77);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_nat_sub(x_76, x_79);
lean_dec(x_76);
x_81 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_40, x_78, x_80);
x_82 = l_Lean_mkAppN(x_73, x_81);
if (lean_is_scalar(x_74)) {
 x_83 = lean_alloc_ctor(1, 1, 0);
} else {
 x_83 = x_74;
}
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_72);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_40);
x_85 = !lean_is_exclusive(x_42);
if (x_85 == 0)
{
return x_42;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_42, 0);
x_87 = lean_ctor_get(x_42, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_42);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_89 = !lean_is_exclusive(x_31);
if (x_89 == 0)
{
return x_31;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_31, 0);
x_91 = lean_ctor_get(x_31, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_31);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
else
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_20);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; 
x_94 = lean_ctor_get(x_20, 1);
x_95 = lean_ctor_get(x_20, 0);
lean_dec(x_95);
x_96 = lean_ctor_get(x_2, 1);
lean_inc(x_96);
lean_dec(x_2);
x_97 = l_Lean_Meta_SimpLemmas_isDeclToUnfold(x_96, x_19);
if (x_97 == 0)
{
lean_object* x_98; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_98 = lean_box(0);
lean_ctor_set(x_20, 0, x_98);
return x_20;
}
else
{
uint8_t x_99; 
lean_free_object(x_20);
x_99 = !lean_is_exclusive(x_4);
if (x_99 == 0)
{
lean_object* x_100; uint8_t x_101; 
x_100 = lean_ctor_get(x_4, 0);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
uint8_t x_102; lean_object* x_103; 
x_102 = 3;
lean_ctor_set_uint8(x_100, 5, x_102);
x_103 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_4, x_5, x_6, x_7, x_94);
if (lean_obj_tag(x_103) == 0)
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
return x_103;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_103, 0);
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_103);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
else
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_103);
if (x_108 == 0)
{
return x_103;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_103, 0);
x_110 = lean_ctor_get(x_103, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_103);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; uint8_t x_116; uint8_t x_117; uint8_t x_118; uint8_t x_119; uint8_t x_120; uint8_t x_121; uint8_t x_122; lean_object* x_123; lean_object* x_124; 
x_112 = lean_ctor_get_uint8(x_100, 0);
x_113 = lean_ctor_get_uint8(x_100, 1);
x_114 = lean_ctor_get_uint8(x_100, 2);
x_115 = lean_ctor_get_uint8(x_100, 3);
x_116 = lean_ctor_get_uint8(x_100, 4);
x_117 = lean_ctor_get_uint8(x_100, 6);
x_118 = lean_ctor_get_uint8(x_100, 7);
x_119 = lean_ctor_get_uint8(x_100, 8);
x_120 = lean_ctor_get_uint8(x_100, 9);
x_121 = lean_ctor_get_uint8(x_100, 10);
lean_dec(x_100);
x_122 = 3;
x_123 = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(x_123, 0, x_112);
lean_ctor_set_uint8(x_123, 1, x_113);
lean_ctor_set_uint8(x_123, 2, x_114);
lean_ctor_set_uint8(x_123, 3, x_115);
lean_ctor_set_uint8(x_123, 4, x_116);
lean_ctor_set_uint8(x_123, 5, x_122);
lean_ctor_set_uint8(x_123, 6, x_117);
lean_ctor_set_uint8(x_123, 7, x_118);
lean_ctor_set_uint8(x_123, 8, x_119);
lean_ctor_set_uint8(x_123, 9, x_120);
lean_ctor_set_uint8(x_123, 10, x_121);
lean_ctor_set(x_4, 0, x_123);
x_124 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_4, x_5, x_6, x_7, x_94);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_127 = x_124;
} else {
 lean_dec_ref(x_124);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_129 = lean_ctor_get(x_124, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_124, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_131 = x_124;
} else {
 lean_dec_ref(x_124);
 x_131 = lean_box(0);
}
if (lean_is_scalar(x_131)) {
 x_132 = lean_alloc_ctor(1, 2, 0);
} else {
 x_132 = x_131;
}
lean_ctor_set(x_132, 0, x_129);
lean_ctor_set(x_132, 1, x_130);
return x_132;
}
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; uint8_t x_139; uint8_t x_140; uint8_t x_141; uint8_t x_142; uint8_t x_143; uint8_t x_144; uint8_t x_145; uint8_t x_146; uint8_t x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_133 = lean_ctor_get(x_4, 0);
x_134 = lean_ctor_get(x_4, 1);
x_135 = lean_ctor_get(x_4, 2);
x_136 = lean_ctor_get(x_4, 3);
x_137 = lean_ctor_get(x_4, 4);
lean_inc(x_137);
lean_inc(x_136);
lean_inc(x_135);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_4);
x_138 = lean_ctor_get_uint8(x_133, 0);
x_139 = lean_ctor_get_uint8(x_133, 1);
x_140 = lean_ctor_get_uint8(x_133, 2);
x_141 = lean_ctor_get_uint8(x_133, 3);
x_142 = lean_ctor_get_uint8(x_133, 4);
x_143 = lean_ctor_get_uint8(x_133, 6);
x_144 = lean_ctor_get_uint8(x_133, 7);
x_145 = lean_ctor_get_uint8(x_133, 8);
x_146 = lean_ctor_get_uint8(x_133, 9);
x_147 = lean_ctor_get_uint8(x_133, 10);
if (lean_is_exclusive(x_133)) {
 x_148 = x_133;
} else {
 lean_dec_ref(x_133);
 x_148 = lean_box(0);
}
x_149 = 3;
if (lean_is_scalar(x_148)) {
 x_150 = lean_alloc_ctor(0, 0, 11);
} else {
 x_150 = x_148;
}
lean_ctor_set_uint8(x_150, 0, x_138);
lean_ctor_set_uint8(x_150, 1, x_139);
lean_ctor_set_uint8(x_150, 2, x_140);
lean_ctor_set_uint8(x_150, 3, x_141);
lean_ctor_set_uint8(x_150, 4, x_142);
lean_ctor_set_uint8(x_150, 5, x_149);
lean_ctor_set_uint8(x_150, 6, x_143);
lean_ctor_set_uint8(x_150, 7, x_144);
lean_ctor_set_uint8(x_150, 8, x_145);
lean_ctor_set_uint8(x_150, 9, x_146);
lean_ctor_set_uint8(x_150, 10, x_147);
x_151 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_134);
lean_ctor_set(x_151, 2, x_135);
lean_ctor_set(x_151, 3, x_136);
lean_ctor_set(x_151, 4, x_137);
x_152 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_151, x_5, x_6, x_7, x_94);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_155 = x_152;
} else {
 lean_dec_ref(x_152);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(0, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_157 = lean_ctor_get(x_152, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_152, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 x_159 = x_152;
} else {
 lean_dec_ref(x_152);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
}
}
else
{
lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_161 = lean_ctor_get(x_20, 1);
lean_inc(x_161);
lean_dec(x_20);
x_162 = lean_ctor_get(x_2, 1);
lean_inc(x_162);
lean_dec(x_2);
x_163 = l_Lean_Meta_SimpLemmas_isDeclToUnfold(x_162, x_19);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_164 = lean_box(0);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_161);
return x_165;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; uint8_t x_173; uint8_t x_174; uint8_t x_175; uint8_t x_176; uint8_t x_177; uint8_t x_178; uint8_t x_179; uint8_t x_180; uint8_t x_181; lean_object* x_182; uint8_t x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_166 = lean_ctor_get(x_4, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_4, 1);
lean_inc(x_167);
x_168 = lean_ctor_get(x_4, 2);
lean_inc(x_168);
x_169 = lean_ctor_get(x_4, 3);
lean_inc(x_169);
x_170 = lean_ctor_get(x_4, 4);
lean_inc(x_170);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 lean_ctor_release(x_4, 4);
 x_171 = x_4;
} else {
 lean_dec_ref(x_4);
 x_171 = lean_box(0);
}
x_172 = lean_ctor_get_uint8(x_166, 0);
x_173 = lean_ctor_get_uint8(x_166, 1);
x_174 = lean_ctor_get_uint8(x_166, 2);
x_175 = lean_ctor_get_uint8(x_166, 3);
x_176 = lean_ctor_get_uint8(x_166, 4);
x_177 = lean_ctor_get_uint8(x_166, 6);
x_178 = lean_ctor_get_uint8(x_166, 7);
x_179 = lean_ctor_get_uint8(x_166, 8);
x_180 = lean_ctor_get_uint8(x_166, 9);
x_181 = lean_ctor_get_uint8(x_166, 10);
if (lean_is_exclusive(x_166)) {
 x_182 = x_166;
} else {
 lean_dec_ref(x_166);
 x_182 = lean_box(0);
}
x_183 = 3;
if (lean_is_scalar(x_182)) {
 x_184 = lean_alloc_ctor(0, 0, 11);
} else {
 x_184 = x_182;
}
lean_ctor_set_uint8(x_184, 0, x_172);
lean_ctor_set_uint8(x_184, 1, x_173);
lean_ctor_set_uint8(x_184, 2, x_174);
lean_ctor_set_uint8(x_184, 3, x_175);
lean_ctor_set_uint8(x_184, 4, x_176);
lean_ctor_set_uint8(x_184, 5, x_183);
lean_ctor_set_uint8(x_184, 6, x_177);
lean_ctor_set_uint8(x_184, 7, x_178);
lean_ctor_set_uint8(x_184, 8, x_179);
lean_ctor_set_uint8(x_184, 9, x_180);
lean_ctor_set_uint8(x_184, 10, x_181);
if (lean_is_scalar(x_171)) {
 x_185 = lean_alloc_ctor(0, 5, 0);
} else {
 x_185 = x_171;
}
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_167);
lean_ctor_set(x_185, 2, x_168);
lean_ctor_set(x_185, 3, x_169);
lean_ctor_set(x_185, 4, x_170);
x_186 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_185, x_5, x_6, x_7, x_161);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 x_189 = x_186;
} else {
 lean_dec_ref(x_186);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(0, 2, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_191 = lean_ctor_get(x_186, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_186, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 x_193 = x_186;
} else {
 lean_dec_ref(x_186);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(1, 2, 0);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_192);
return x_194;
}
}
}
}
}
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_195 = lean_ctor_get(x_11, 0);
x_196 = lean_ctor_get(x_11, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_11);
x_197 = lean_ctor_get(x_195, 0);
lean_inc(x_197);
lean_dec(x_195);
x_198 = lean_environment_find(x_197, x_10);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_199 = lean_box(0);
x_200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_196);
return x_200;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_201 = lean_ctor_get(x_198, 0);
lean_inc(x_201);
lean_dec(x_198);
x_202 = l_Lean_ConstantInfo_name(x_201);
lean_dec(x_201);
lean_inc(x_202);
x_203 = l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___spec__1(x_202, x_2, x_3, x_4, x_5, x_6, x_7, x_196);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
lean_dec(x_202);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_206 = x_203;
} else {
 lean_dec_ref(x_203);
 x_206 = lean_box(0);
}
x_207 = lean_box(0);
if (lean_is_scalar(x_206)) {
 x_208 = lean_alloc_ctor(0, 2, 0);
} else {
 x_208 = x_206;
}
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_205);
return x_208;
}
else
{
lean_object* x_209; uint8_t x_210; 
x_209 = lean_ctor_get(x_204, 0);
lean_inc(x_209);
lean_dec(x_204);
x_210 = lean_ctor_get_uint8(x_209, sizeof(void*)*3);
lean_dec(x_209);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; 
lean_dec(x_202);
lean_dec(x_2);
x_211 = lean_ctor_get(x_203, 1);
lean_inc(x_211);
lean_dec(x_203);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_212 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_4, x_5, x_6, x_7, x_211);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; 
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
if (lean_obj_tag(x_213) == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_214 = lean_ctor_get(x_212, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_212)) {
 lean_ctor_release(x_212, 0);
 lean_ctor_release(x_212, 1);
 x_215 = x_212;
} else {
 lean_dec_ref(x_212);
 x_215 = lean_box(0);
}
x_216 = lean_box(0);
if (lean_is_scalar(x_215)) {
 x_217 = lean_alloc_ctor(0, 2, 0);
} else {
 x_217 = x_215;
}
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_214);
return x_217;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_218 = lean_ctor_get(x_212, 1);
lean_inc(x_218);
lean_dec(x_212);
x_219 = lean_ctor_get(x_213, 0);
lean_inc(x_219);
lean_dec(x_213);
x_220 = l_Lean_Expr_getAppFn(x_219);
x_221 = l_Lean_Meta_reduceProj_x3f(x_220, x_4, x_5, x_6, x_7, x_218);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_dec(x_219);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_224 = x_221;
} else {
 lean_dec_ref(x_221);
 x_224 = lean_box(0);
}
x_225 = lean_box(0);
if (lean_is_scalar(x_224)) {
 x_226 = lean_alloc_ctor(0, 2, 0);
} else {
 x_226 = x_224;
}
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_223);
return x_226;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_227 = lean_ctor_get(x_221, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_228 = x_221;
} else {
 lean_dec_ref(x_221);
 x_228 = lean_box(0);
}
x_229 = lean_ctor_get(x_222, 0);
lean_inc(x_229);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 x_230 = x_222;
} else {
 lean_dec_ref(x_222);
 x_230 = lean_box(0);
}
x_231 = lean_unsigned_to_nat(0u);
x_232 = l_Lean_Expr_getAppNumArgsAux(x_219, x_231);
x_233 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_inc(x_232);
x_234 = lean_mk_array(x_232, x_233);
x_235 = lean_unsigned_to_nat(1u);
x_236 = lean_nat_sub(x_232, x_235);
lean_dec(x_232);
x_237 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_219, x_234, x_236);
x_238 = l_Lean_mkAppN(x_229, x_237);
if (lean_is_scalar(x_230)) {
 x_239 = lean_alloc_ctor(1, 1, 0);
} else {
 x_239 = x_230;
}
lean_ctor_set(x_239, 0, x_238);
if (lean_is_scalar(x_228)) {
 x_240 = lean_alloc_ctor(0, 2, 0);
} else {
 x_240 = x_228;
}
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_227);
return x_240;
}
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_219);
x_241 = lean_ctor_get(x_221, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_221, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_243 = x_221;
} else {
 lean_dec_ref(x_221);
 x_243 = lean_box(0);
}
if (lean_is_scalar(x_243)) {
 x_244 = lean_alloc_ctor(1, 2, 0);
} else {
 x_244 = x_243;
}
lean_ctor_set(x_244, 0, x_241);
lean_ctor_set(x_244, 1, x_242);
return x_244;
}
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_245 = lean_ctor_get(x_212, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_212, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_212)) {
 lean_ctor_release(x_212, 0);
 lean_ctor_release(x_212, 1);
 x_247 = x_212;
} else {
 lean_dec_ref(x_212);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; 
x_249 = lean_ctor_get(x_203, 1);
lean_inc(x_249);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_250 = x_203;
} else {
 lean_dec_ref(x_203);
 x_250 = lean_box(0);
}
x_251 = lean_ctor_get(x_2, 1);
lean_inc(x_251);
lean_dec(x_2);
x_252 = l_Lean_Meta_SimpLemmas_isDeclToUnfold(x_251, x_202);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_253 = lean_box(0);
if (lean_is_scalar(x_250)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_250;
}
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_249);
return x_254;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; uint8_t x_261; uint8_t x_262; uint8_t x_263; uint8_t x_264; uint8_t x_265; uint8_t x_266; uint8_t x_267; uint8_t x_268; uint8_t x_269; uint8_t x_270; lean_object* x_271; uint8_t x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec(x_250);
x_255 = lean_ctor_get(x_4, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_4, 1);
lean_inc(x_256);
x_257 = lean_ctor_get(x_4, 2);
lean_inc(x_257);
x_258 = lean_ctor_get(x_4, 3);
lean_inc(x_258);
x_259 = lean_ctor_get(x_4, 4);
lean_inc(x_259);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 lean_ctor_release(x_4, 4);
 x_260 = x_4;
} else {
 lean_dec_ref(x_4);
 x_260 = lean_box(0);
}
x_261 = lean_ctor_get_uint8(x_255, 0);
x_262 = lean_ctor_get_uint8(x_255, 1);
x_263 = lean_ctor_get_uint8(x_255, 2);
x_264 = lean_ctor_get_uint8(x_255, 3);
x_265 = lean_ctor_get_uint8(x_255, 4);
x_266 = lean_ctor_get_uint8(x_255, 6);
x_267 = lean_ctor_get_uint8(x_255, 7);
x_268 = lean_ctor_get_uint8(x_255, 8);
x_269 = lean_ctor_get_uint8(x_255, 9);
x_270 = lean_ctor_get_uint8(x_255, 10);
if (lean_is_exclusive(x_255)) {
 x_271 = x_255;
} else {
 lean_dec_ref(x_255);
 x_271 = lean_box(0);
}
x_272 = 3;
if (lean_is_scalar(x_271)) {
 x_273 = lean_alloc_ctor(0, 0, 11);
} else {
 x_273 = x_271;
}
lean_ctor_set_uint8(x_273, 0, x_261);
lean_ctor_set_uint8(x_273, 1, x_262);
lean_ctor_set_uint8(x_273, 2, x_263);
lean_ctor_set_uint8(x_273, 3, x_264);
lean_ctor_set_uint8(x_273, 4, x_265);
lean_ctor_set_uint8(x_273, 5, x_272);
lean_ctor_set_uint8(x_273, 6, x_266);
lean_ctor_set_uint8(x_273, 7, x_267);
lean_ctor_set_uint8(x_273, 8, x_268);
lean_ctor_set_uint8(x_273, 9, x_269);
lean_ctor_set_uint8(x_273, 10, x_270);
if (lean_is_scalar(x_260)) {
 x_274 = lean_alloc_ctor(0, 5, 0);
} else {
 x_274 = x_260;
}
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_256);
lean_ctor_set(x_274, 2, x_257);
lean_ctor_set(x_274, 3, x_258);
lean_ctor_set(x_274, 4, x_259);
x_275 = l_Lean_Meta_unfoldDefinition_x3f(x_1, x_274, x_5, x_6, x_7, x_249);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_275, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_278 = x_275;
} else {
 lean_dec_ref(x_275);
 x_278 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_278;
}
lean_ctor_set(x_279, 0, x_276);
lean_ctor_set(x_279, 1, x_277);
return x_279;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_280 = lean_ctor_get(x_275, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_275, 1);
lean_inc(x_281);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 lean_ctor_release(x_275, 1);
 x_282 = x_275;
} else {
 lean_dec_ref(x_275);
 x_282 = lean_box(0);
}
if (lean_is_scalar(x_282)) {
 x_283 = lean_alloc_ctor(1, 2, 0);
} else {
 x_283 = x_282;
}
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_281);
return x_283;
}
}
}
}
}
}
}
else
{
lean_object* x_284; lean_object* x_285; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_284 = lean_box(0);
x_285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_8);
return x_285;
}
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getProjectionFnInfo_x3f___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_Lean_Meta_getFVarLocalDecl(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_LocalDecl_value_x3f(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
else
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = l_Lean_LocalDecl_value_x3f(x_15);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_2);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceFVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_isProjectionFn___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_projectionFnInfoExt;
x_14 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_13, x_12, x_1);
x_15 = lean_box(x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_projectionFnInfoExt;
x_20 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_19, x_18, x_1);
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = l_Lean_Meta_SimpLemmas_isDeclToUnfold(x_11, x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_6, 0);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; 
x_18 = 1;
lean_ctor_set_uint8(x_16, 5, x_18);
x_19 = l_Lean_Meta_unfoldDefinition_x3f(x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_28 = lean_ctor_get_uint8(x_16, 0);
x_29 = lean_ctor_get_uint8(x_16, 1);
x_30 = lean_ctor_get_uint8(x_16, 2);
x_31 = lean_ctor_get_uint8(x_16, 3);
x_32 = lean_ctor_get_uint8(x_16, 4);
x_33 = lean_ctor_get_uint8(x_16, 6);
x_34 = lean_ctor_get_uint8(x_16, 7);
x_35 = lean_ctor_get_uint8(x_16, 8);
x_36 = lean_ctor_get_uint8(x_16, 9);
x_37 = lean_ctor_get_uint8(x_16, 10);
lean_dec(x_16);
x_38 = 1;
x_39 = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(x_39, 0, x_28);
lean_ctor_set_uint8(x_39, 1, x_29);
lean_ctor_set_uint8(x_39, 2, x_30);
lean_ctor_set_uint8(x_39, 3, x_31);
lean_ctor_set_uint8(x_39, 4, x_32);
lean_ctor_set_uint8(x_39, 5, x_38);
lean_ctor_set_uint8(x_39, 6, x_33);
lean_ctor_set_uint8(x_39, 7, x_34);
lean_ctor_set_uint8(x_39, 8, x_35);
lean_ctor_set_uint8(x_39, 9, x_36);
lean_ctor_set_uint8(x_39, 10, x_37);
lean_ctor_set(x_6, 0, x_39);
x_40 = l_Lean_Meta_unfoldDefinition_x3f(x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
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
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_49 = lean_ctor_get(x_6, 0);
x_50 = lean_ctor_get(x_6, 1);
x_51 = lean_ctor_get(x_6, 2);
x_52 = lean_ctor_get(x_6, 3);
x_53 = lean_ctor_get(x_6, 4);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_6);
x_54 = lean_ctor_get_uint8(x_49, 0);
x_55 = lean_ctor_get_uint8(x_49, 1);
x_56 = lean_ctor_get_uint8(x_49, 2);
x_57 = lean_ctor_get_uint8(x_49, 3);
x_58 = lean_ctor_get_uint8(x_49, 4);
x_59 = lean_ctor_get_uint8(x_49, 6);
x_60 = lean_ctor_get_uint8(x_49, 7);
x_61 = lean_ctor_get_uint8(x_49, 8);
x_62 = lean_ctor_get_uint8(x_49, 9);
x_63 = lean_ctor_get_uint8(x_49, 10);
if (lean_is_exclusive(x_49)) {
 x_64 = x_49;
} else {
 lean_dec_ref(x_49);
 x_64 = lean_box(0);
}
x_65 = 1;
if (lean_is_scalar(x_64)) {
 x_66 = lean_alloc_ctor(0, 0, 11);
} else {
 x_66 = x_64;
}
lean_ctor_set_uint8(x_66, 0, x_54);
lean_ctor_set_uint8(x_66, 1, x_55);
lean_ctor_set_uint8(x_66, 2, x_56);
lean_ctor_set_uint8(x_66, 3, x_57);
lean_ctor_set_uint8(x_66, 4, x_58);
lean_ctor_set_uint8(x_66, 5, x_65);
lean_ctor_set_uint8(x_66, 6, x_59);
lean_ctor_set_uint8(x_66, 7, x_60);
lean_ctor_set_uint8(x_66, 8, x_61);
lean_ctor_set_uint8(x_66, 9, x_62);
lean_ctor_set_uint8(x_66, 10, x_63);
x_67 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_50);
lean_ctor_set(x_67, 2, x_51);
lean_ctor_set(x_67, 3, x_52);
lean_ctor_set(x_67, 4, x_53);
x_68 = l_Lean_Meta_unfoldDefinition_x3f(x_2, x_67, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_71 = x_68;
} else {
 lean_dec_ref(x_68);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_68, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_68, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_75 = x_68;
} else {
 lean_dec_ref(x_68);
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
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_3);
x_11 = l_Lean_Expr_constName_x21(x_1);
lean_dec(x_1);
lean_inc(x_11);
x_12 = l_Lean_isProjectionFn___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___spec__1(x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_box(0);
x_17 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__1(x_11, x_2, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_12, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_12, 0, x_20);
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Expr_getAppFn(x_1);
x_10 = l_Lean_Expr_isConst(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__2(x_9, x_1, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_14;
}
}
}
lean_object* l_Lean_isProjectionFn___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_isProjectionFn___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set_tag(x_10, 1);
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
lean_inc(x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_unfold_x3f(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
x_18 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_10);
if (x_19 == 0)
{
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 6);
lean_dec(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__1(x_1, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
else
{
lean_object* x_14; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_14 = l_Lean_Meta_reduceRecMatcher_x3f(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__1(x_1, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec(x_15);
x_21 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
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
}
else
{
uint8_t x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_14);
if (x_30 == 0)
{
return x_14;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_14, 0);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_14);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__2(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
else
{
lean_object* x_14; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_1);
x_14 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__2(x_1, x_2, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec(x_15);
x_21 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_20, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
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
}
else
{
uint8_t x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_14);
if (x_30 == 0)
{
return x_14;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_14, 0);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_14);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_8, 1);
lean_dec(x_14);
lean_ctor_set(x_8, 1, x_12);
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_15, sizeof(void*)*2 + 4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__3(x_2, x_15, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_inc(x_2);
x_19 = l_Lean_Expr_headBeta(x_2);
x_20 = lean_expr_eqv(x_19, x_2);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_15);
lean_dec(x_2);
x_21 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
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
lean_object* x_30; lean_object* x_31; 
lean_dec(x_19);
x_30 = lean_box(0);
x_31 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__3(x_2, x_15, x_30, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_32 = lean_ctor_get(x_8, 0);
x_33 = lean_ctor_get(x_8, 2);
x_34 = lean_ctor_get(x_8, 3);
x_35 = lean_ctor_get(x_8, 4);
x_36 = lean_ctor_get(x_8, 5);
x_37 = lean_ctor_get(x_8, 6);
x_38 = lean_ctor_get(x_8, 7);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_8);
x_39 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set(x_39, 1, x_12);
lean_ctor_set(x_39, 2, x_33);
lean_ctor_set(x_39, 3, x_34);
lean_ctor_set(x_39, 4, x_35);
lean_ctor_set(x_39, 5, x_36);
lean_ctor_set(x_39, 6, x_37);
lean_ctor_set(x_39, 7, x_38);
x_40 = lean_ctor_get(x_4, 0);
lean_inc(x_40);
x_41 = lean_ctor_get_uint8(x_40, sizeof(void*)*2 + 4);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_box(0);
x_43 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__3(x_2, x_40, x_42, x_4, x_5, x_6, x_7, x_39, x_9, x_10);
return x_43;
}
else
{
lean_object* x_44; uint8_t x_45; 
lean_inc(x_2);
x_44 = l_Lean_Expr_headBeta(x_2);
x_45 = lean_expr_eqv(x_44, x_2);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_40);
lean_dec(x_2);
x_46 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_44, x_4, x_5, x_6, x_7, x_39, x_9, x_10);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_46, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_46, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_53 = x_46;
} else {
 lean_dec_ref(x_46);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_44);
x_55 = lean_box(0);
x_56 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__3(x_2, x_40, x_55, x_4, x_5, x_6, x_7, x_39, x_9, x_10);
return x_56;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_maxRecDepthErrorMessage;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___lambda__4(x_9, x_1, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_9);
lean_dec(x_1);
x_14 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2;
x_15 = l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___spec__1(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = lean_apply_9(x_2, x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
lean_ctor_set(x_15, 0, x_19);
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
lean_dec(x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_dec(x_15);
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
lean_dec(x_16);
x_25 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_15);
if (x_26 == 0)
{
return x_15;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_15, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_10(x_1, x_6, x_2, x_3, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___lambda__1), 11, 5);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_5);
lean_closure_set(x_14, 2, x_6);
lean_closure_set(x_14, 3, x_7);
lean_closure_set(x_14, 4, x_8);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_14, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___boxed), 13, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLambda___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_array_push(x_1, x_7);
x_18 = l_Lean_Meta_transform_visit_visitLambda___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__4(x_2, x_3, x_4, x_5, x_17, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_18;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLambda___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
if (lean_obj_tag(x_6) == 6)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 2);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_20 = lean_expr_instantiate_rev(x_17, x_5);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = (uint8_t)((x_19 << 24) >> 61);
x_25 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit_visitLambda___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__4___lambda__1), 16, 6);
lean_closure_set(x_25, 0, x_5);
lean_closure_set(x_25, 1, x_1);
lean_closure_set(x_25, 2, x_2);
lean_closure_set(x_25, 3, x_3);
lean_closure_set(x_25, 4, x_4);
lean_closure_set(x_25, 5, x_18);
x_26 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg(x_16, x_24, x_22, x_25, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_23);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_expr_instantiate_rev(x_6, x_5);
lean_dec(x_6);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_32 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_31, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; uint8_t x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = 0;
x_36 = 1;
lean_inc(x_11);
x_37 = l_Lean_Meta_mkLambdaFVars(x_5, x_33, x_35, x_36, x_11, x_12, x_13, x_14, x_34);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_38, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_39);
return x_40;
}
else
{
uint8_t x_41; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
return x_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_37, 0);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_37);
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
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_32);
if (x_45 == 0)
{
return x_32;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_32, 0);
x_47 = lean_ctor_get(x_32, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_32);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___lambda__1), 11, 5);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_5);
lean_closure_set(x_14, 2, x_6);
lean_closure_set(x_14, 3, x_7);
lean_closure_set(x_14, 4, x_8);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_14, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___rarg___boxed), 13, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_transform_visit_visitForall___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_array_push(x_1, x_7);
x_18 = l_Lean_Meta_transform_visit_visitForall___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__5(x_2, x_3, x_4, x_5, x_17, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_18;
}
}
lean_object* l_Lean_Meta_transform_visit_visitForall___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
if (lean_obj_tag(x_6) == 7)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 2);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_6, sizeof(void*)*3);
lean_dec(x_6);
x_20 = lean_expr_instantiate_rev(x_17, x_5);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = (uint8_t)((x_19 << 24) >> 61);
x_25 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit_visitForall___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__5___lambda__1), 16, 6);
lean_closure_set(x_25, 0, x_5);
lean_closure_set(x_25, 1, x_1);
lean_closure_set(x_25, 2, x_2);
lean_closure_set(x_25, 3, x_3);
lean_closure_set(x_25, 4, x_4);
lean_closure_set(x_25, 5, x_18);
x_26 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___rarg(x_16, x_24, x_22, x_25, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_23);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_expr_instantiate_rev(x_6, x_5);
lean_dec(x_6);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_32 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_31, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; uint8_t x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = 0;
x_36 = 1;
lean_inc(x_11);
x_37 = l_Lean_Meta_mkForallFVars(x_5, x_33, x_35, x_36, x_11, x_12, x_13, x_14, x_34);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_38, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_39);
return x_40;
}
else
{
uint8_t x_41; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
return x_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_37, 0);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_37);
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
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_32);
if (x_45 == 0)
{
return x_32;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_32, 0);
x_47 = lean_ctor_get(x_32, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_32);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___lambda__1), 11, 5);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_5);
lean_closure_set(x_14, 2, x_6);
lean_closure_set(x_14, 3, x_7);
lean_closure_set(x_14, 4, x_8);
x_15 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_1, x_2, x_3, x_14, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9___rarg), 13, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLet___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_array_push(x_1, x_7);
x_18 = l_Lean_Meta_transform_visit_visitLet___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__6(x_2, x_3, x_4, x_5, x_17, x_6, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_18;
}
}
lean_object* l_Lean_Meta_transform_visit_visitLet___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
if (lean_obj_tag(x_6) == 8)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_6, 3);
lean_inc(x_19);
lean_dec(x_6);
x_20 = lean_expr_instantiate_rev(x_17, x_5);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_expr_instantiate_rev(x_18, x_5);
lean_dec(x_18);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit_visitLet___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__6___lambda__1), 16, 6);
lean_closure_set(x_28, 0, x_5);
lean_closure_set(x_28, 1, x_1);
lean_closure_set(x_28, 2, x_2);
lean_closure_set(x_28, 3, x_3);
lean_closure_set(x_28, 4, x_4);
lean_closure_set(x_28, 5, x_19);
x_29 = l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9___rarg(x_16, x_22, x_26, x_28, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_27);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 0);
x_32 = lean_ctor_get(x_25, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_25);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_expr_instantiate_rev(x_6, x_5);
lean_dec(x_6);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_39 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_38, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = 0;
x_43 = 1;
lean_inc(x_11);
x_44 = l_Lean_Meta_mkLambdaFVars(x_5, x_40, x_42, x_43, x_11, x_12, x_13, x_14, x_41);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_45, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_46);
return x_47;
}
else
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_44);
if (x_48 == 0)
{
return x_44;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_44, 0);
x_50 = lean_ctor_get(x_44, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_44);
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
lean_dec(x_14);
lean_dec(x_13);
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
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_39);
if (x_52 == 0)
{
return x_39;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_39, 0);
x_54 = lean_ctor_get(x_39, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_39);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_6 < x_5;
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = x_7;
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_array_uget(x_7, x_6);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_array_uset(x_7, x_6, x_21);
x_23 = x_20;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_24 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_23, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = x_6 + x_27;
x_29 = x_25;
x_30 = lean_array_uset(x_22, x_6, x_29);
x_6 = x_28;
x_7 = x_30;
x_16 = x_26;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
lean_dec(x_5);
x_19 = lean_array_set(x_6, x_7, x_18);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_7, x_20);
lean_dec(x_7);
x_5 = x_17;
x_6 = x_19;
x_7 = x_21;
goto _start;
}
else
{
lean_object* x_23; 
lean_dec(x_7);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_23 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_array_get_size(x_6);
x_27 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_28 = x_6;
x_29 = lean_box_usize(x_27);
x_30 = l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11___boxed__const__1;
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__10___boxed), 16, 7);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_2);
lean_closure_set(x_31, 2, x_3);
lean_closure_set(x_31, 3, x_4);
lean_closure_set(x_31, 4, x_29);
lean_closure_set(x_31, 5, x_30);
lean_closure_set(x_31, 6, x_28);
x_32 = x_31;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_33 = lean_apply_9(x_32, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_25);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_mkAppN(x_24, x_34);
x_37 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_36, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_35);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_24);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_33);
if (x_38 == 0)
{
return x_33;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_33, 0);
x_40 = lean_ctor_get(x_33, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_33);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_23);
if (x_42 == 0)
{
return x_23;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_23, 0);
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_23);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
lean_object* l_ReaderT_bind___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
lean_inc(x_3);
x_12 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_apply_10(x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_ReaderT_bind___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__12___rarg), 11, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_1, x_13);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_10, 1);
lean_dec(x_16);
lean_ctor_set(x_10, 1, x_14);
x_17 = lean_apply_9(x_2, x_3, x_4, x_5, x_6, x_8, x_9, x_10, x_11, x_12);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 2);
x_20 = lean_ctor_get(x_10, 3);
x_21 = lean_ctor_get(x_10, 4);
x_22 = lean_ctor_get(x_10, 5);
x_23 = lean_ctor_get(x_10, 6);
x_24 = lean_ctor_get(x_10, 7);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_25 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_14);
lean_ctor_set(x_25, 2, x_19);
lean_ctor_set(x_25, 3, x_20);
lean_ctor_set(x_25, 4, x_21);
lean_ctor_set(x_25, 5, x_22);
lean_ctor_set(x_25, 6, x_23);
lean_ctor_set(x_25, 7, x_24);
x_26 = lean_apply_9(x_2, x_3, x_4, x_5, x_6, x_8, x_9, x_25, x_11, x_12);
return x_26;
}
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 2);
lean_inc(x_12);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg___lambda__1(x_11, x_1, x_2, x_3, x_4, x_5, x_14, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_11);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2;
x_25 = l_Lean_throwError___at_Lean_Meta_withIncRecDepth___spec__1(x_24, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg), 10, 0);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_5, 0);
lean_inc(x_17);
lean_dec(x_5);
switch (lean_obj_tag(x_17)) {
case 5:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Expr_getAppNumArgsAux(x_17, x_18);
x_20 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_inc(x_19);
x_21 = lean_mk_array(x_19, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_19, x_22);
lean_dec(x_19);
x_24 = l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11(x_1, x_2, x_3, x_4, x_17, x_21, x_23, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_24;
}
case 6:
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1;
x_26 = l_Lean_Meta_transform_visit_visitLambda___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__4(x_1, x_2, x_3, x_4, x_25, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_26;
}
case 7:
{
lean_object* x_27; lean_object* x_28; 
x_27 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1;
x_28 = l_Lean_Meta_transform_visit_visitForall___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__5(x_1, x_2, x_3, x_4, x_27, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_28;
}
case 8:
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1;
x_30 = l_Lean_Meta_transform_visit_visitLet___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__6(x_1, x_2, x_3, x_4, x_29, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_30;
}
case 10:
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_17);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_17, 0);
x_33 = lean_ctor_get(x_17, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_33);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_34 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_33, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_expr_update_mdata(x_17, x_35);
x_38 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_37, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_36);
return x_38;
}
else
{
uint8_t x_39; 
lean_free_object(x_17);
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_34);
if (x_39 == 0)
{
return x_34;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_34, 0);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_34);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; uint64_t x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_17, 0);
x_44 = lean_ctor_get(x_17, 1);
x_45 = lean_ctor_get_uint64(x_17, sizeof(void*)*2);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_17);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_44);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_46 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_44, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_44);
lean_ctor_set_uint64(x_49, sizeof(void*)*2, x_45);
x_50 = lean_expr_update_mdata(x_49, x_47);
x_51 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_50, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_48);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_ctor_get(x_46, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_46, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_54 = x_46;
} else {
 lean_dec_ref(x_46);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
case 11:
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_17);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_17, 0);
x_58 = lean_ctor_get(x_17, 1);
x_59 = lean_ctor_get(x_17, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_59);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_60 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_59, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_expr_update_proj(x_17, x_61);
x_64 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_63, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_62);
return x_64;
}
else
{
uint8_t x_65; 
lean_free_object(x_17);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_60);
if (x_65 == 0)
{
return x_60;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_60, 0);
x_67 = lean_ctor_get(x_60, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_60);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint64_t x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_17, 0);
x_70 = lean_ctor_get(x_17, 1);
x_71 = lean_ctor_get(x_17, 2);
x_72 = lean_ctor_get_uint64(x_17, sizeof(void*)*3);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_17);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_71);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_73 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_1, x_2, x_3, x_4, x_71, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_71);
lean_ctor_set_uint64(x_76, sizeof(void*)*3, x_72);
x_77 = lean_expr_update_proj(x_76, x_74);
x_78 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_77, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_75);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_79 = lean_ctor_get(x_73, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_81 = x_73;
} else {
 lean_dec_ref(x_73);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
default: 
{
lean_object* x_83; 
x_83 = l_Lean_Meta_transform_visit_visitPost___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__3(x_1, x_2, x_3, x_4, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_83;
}
}
}
}
}
lean_object* l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_Lean_ExprStructEq_instBEqExprStructEq;
x_5 = l_Lean_ExprStructEq_instHashableExprStructEq;
x_6 = l_Std_HashMap_insert___rarg(x_4, x_5, x_3, x_1, x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
lean_inc(x_6);
x_15 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_15, 0, lean_box(0));
lean_closure_set(x_15, 1, lean_box(0));
lean_closure_set(x_15, 2, x_6);
lean_inc(x_4);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = lean_apply_10(x_4, lean_box(0), x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_5);
x_20 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_18, x_5);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_16);
lean_inc(x_1);
lean_inc(x_5);
x_21 = lean_apply_1(x_1, x_5);
x_22 = lean_alloc_closure((void*)(l_StateRefT_x27_lift___rarg___boxed), 2, 1);
lean_closure_set(x_22, 0, x_21);
lean_inc(x_4);
x_23 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1), 14, 4);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_3);
lean_closure_set(x_23, 3, x_4);
x_24 = lean_alloc_closure((void*)(l_ReaderT_bind___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__12___rarg), 11, 2);
lean_closure_set(x_24, 0, x_22);
lean_closure_set(x_24, 1, x_23);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_25 = l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg(x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_19);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_26);
x_28 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__2), 3, 2);
lean_closure_set(x_28, 0, x_5);
lean_closure_set(x_28, 1, x_26);
x_29 = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___rarg___boxed), 3, 2);
lean_closure_set(x_29, 0, x_6);
lean_closure_set(x_29, 1, x_28);
x_30 = lean_apply_10(x_4, lean_box(0), x_29, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_27);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_26);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_26);
x_35 = !lean_is_exclusive(x_30);
if (x_35 == 0)
{
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
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
x_39 = !lean_is_exclusive(x_25);
if (x_39 == 0)
{
return x_25;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_25, 0);
x_41 = lean_ctor_get(x_25, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_25);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; 
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
x_43 = lean_ctor_get(x_20, 0);
lean_inc(x_43);
lean_dec(x_20);
lean_ctor_set(x_16, 0, x_43);
return x_16;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_16, 0);
x_45 = lean_ctor_get(x_16, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_16);
lean_inc(x_5);
x_46 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_44, x_5);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_inc(x_1);
lean_inc(x_5);
x_47 = lean_apply_1(x_1, x_5);
x_48 = lean_alloc_closure((void*)(l_StateRefT_x27_lift___rarg___boxed), 2, 1);
lean_closure_set(x_48, 0, x_47);
lean_inc(x_4);
x_49 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1), 14, 4);
lean_closure_set(x_49, 0, x_1);
lean_closure_set(x_49, 1, x_2);
lean_closure_set(x_49, 2, x_3);
lean_closure_set(x_49, 3, x_4);
x_50 = lean_alloc_closure((void*)(l_ReaderT_bind___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__12___rarg), 11, 2);
lean_closure_set(x_50, 0, x_48);
lean_closure_set(x_50, 1, x_49);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_51 = l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg(x_50, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_45);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_52);
x_54 = lean_alloc_closure((void*)(l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__2), 3, 2);
lean_closure_set(x_54, 0, x_5);
lean_closure_set(x_54, 1, x_52);
x_55 = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___rarg___boxed), 3, 2);
lean_closure_set(x_55, 0, x_6);
lean_closure_set(x_55, 1, x_54);
x_56 = lean_apply_10(x_4, lean_box(0), x_55, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_53);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_52);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_52);
x_60 = lean_ctor_get(x_56, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_56, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_62 = x_56;
} else {
 lean_dec_ref(x_56);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
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
x_64 = lean_ctor_get(x_51, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_51, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_66 = x_51;
} else {
 lean_dec_ref(x_51);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; 
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
x_68 = lean_ctor_get(x_46, 0);
lean_inc(x_68);
lean_dec(x_46);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_45);
return x_69;
}
}
}
else
{
uint8_t x_70; 
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
x_70 = !lean_is_exclusive(x_16);
if (x_70 == 0)
{
return x_16;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_16, 0);
x_72 = lean_ctor_get(x_16, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_16);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_1(x_2, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
static lean_object* _init_l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___lambda__1___boxed), 10, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_box(0);
x_13 = lean_st_ref_get(x_10, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1;
x_16 = lean_st_mk_ref(x_15, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__2;
lean_inc(x_10);
lean_inc(x_17);
x_20 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2(x_2, x_3, x_12, x_19, x_1, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_10, x_22);
lean_dec(x_10);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_st_ref_get(x_17, x_24);
lean_dec(x_17);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_21);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_21);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_17);
lean_dec(x_10);
x_30 = !lean_is_exclusive(x_20);
if (x_30 == 0)
{
return x_20;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
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
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
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
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__1___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__2___boxed), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1;
x_11 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2;
x_12 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1(x_1, x_10, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___rarg(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__7(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___rarg(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__8(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__9(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_18 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_19 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__10(x_1, x_2, x_3, x_4, x_17, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_19;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_withIncRecDepth___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__13(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLoop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLoop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpLoop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpStep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_16 = lean_box_uint64(x_15);
x_17 = lean_apply_2(x_9, x_14, x_16);
return x_17;
}
case 1:
{
lean_object* x_18; uint64_t x_19; lean_object* x_20; lean_object* x_21; 
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
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_20 = lean_box_uint64(x_19);
x_21 = lean_apply_2(x_13, x_18, x_20);
return x_21;
}
case 2:
{
lean_object* x_22; uint64_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_13);
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
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_24 = lean_box_uint64(x_23);
x_25 = lean_apply_2(x_12, x_22, x_24);
return x_25;
}
case 3:
{
lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_28 = lean_box_uint64(x_27);
x_29 = lean_apply_2(x_10, x_26, x_28);
return x_29;
}
case 4:
{
lean_object* x_30; lean_object* x_31; uint64_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_33 = lean_box_uint64(x_32);
x_34 = lean_apply_3(x_8, x_30, x_31, x_33);
return x_34;
}
case 5:
{
lean_object* x_35; lean_object* x_36; uint64_t x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_38 = lean_box_uint64(x_37);
x_39 = lean_apply_3(x_4, x_35, x_36, x_38);
return x_39;
}
case 6:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint64_t x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_44 = lean_box_uint64(x_43);
x_45 = lean_apply_4(x_5, x_40, x_41, x_42, x_44);
return x_45;
}
case 7:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint64_t x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_13);
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
x_46 = lean_ctor_get(x_1, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 2);
lean_inc(x_48);
x_49 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_50 = lean_box_uint64(x_49);
x_51 = lean_apply_4(x_6, x_46, x_47, x_48, x_50);
return x_51;
}
case 8:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint64_t x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 1);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 2);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 3);
lean_inc(x_55);
x_56 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_57 = lean_box_uint64(x_56);
x_58 = lean_apply_5(x_7, x_52, x_53, x_54, x_55, x_57);
return x_58;
}
case 9:
{
lean_object* x_59; uint64_t x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
x_60 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_61 = lean_box_uint64(x_60);
x_62 = lean_apply_2(x_11, x_59, x_61);
return x_62;
}
case 10:
{
lean_object* x_63; lean_object* x_64; uint64_t x_65; lean_object* x_66; lean_object* x_67; 
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
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
x_65 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_66 = lean_box_uint64(x_65);
x_67 = lean_apply_3(x_2, x_63, x_64, x_66);
return x_67;
}
default: 
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint64_t x_71; lean_object* x_72; lean_object* x_73; 
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
lean_dec(x_2);
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 2);
lean_inc(x_70);
x_71 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_72 = lean_box_uint64(x_71);
x_73 = lean_apply_4(x_3, x_68, x_69, x_70, x_72);
return x_73;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpStep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpStep_match__1___rarg), 13, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_congrDefault_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_Simp_simp_congrDefault_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_congrDefault_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_congr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_congr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_congr_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_withNewLemmas_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLet_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 8)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLet_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpLet_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpConst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpConst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Simp_simp_simpConst(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_instMonadMetaM;
x_2 = l_ReaderT_instMonadReaderT___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_simp_simpLet___closed__1;
x_2 = l_Lean_Meta_Simp_instInhabitedResult;
x_3 = l_instInhabited___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpLet___closed__2;
x_2 = lean_alloc_closure((void*)(l_instInhabitedReaderT___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpLet___closed__3;
x_2 = lean_alloc_closure((void*)(l_instInhabitedReaderT___rarg___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Meta.Tactic.Simp.Main");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Meta.Simp.simp.simpLet");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unreachable code has been reached");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLet___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Meta_Simp_simp_simpLet___closed__5;
x_2 = l_Lean_Meta_Simp_simp_simpLet___closed__6;
x_3 = lean_unsigned_to_nat(317u);
x_4 = lean_unsigned_to_nat(13u);
x_5 = l_Lean_Meta_Simp_simp_simpLet___closed__7;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_Meta_Simp_getConfig___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_11, sizeof(void*)*2 + 3);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1;
x_15 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2;
x_16 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1(x_1, x_14, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_16);
if (x_26 == 0)
{
return x_16;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
if (lean_obj_tag(x_1) == 8)
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_10, 0);
lean_dec(x_31);
x_32 = lean_ctor_get(x_1, 2);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 3);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_expr_instantiate1(x_33, x_32);
lean_dec(x_32);
lean_dec(x_33);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_10, 0, x_36);
return x_10;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_10, 1);
lean_inc(x_37);
lean_dec(x_10);
x_38 = lean_ctor_get(x_1, 2);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 3);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_expr_instantiate1(x_39, x_38);
lean_dec(x_38);
lean_dec(x_39);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_37);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_1);
x_44 = lean_ctor_get(x_10, 1);
lean_inc(x_44);
lean_dec(x_10);
x_45 = l_Lean_Meta_Simp_simp_simpLet___closed__4;
x_46 = l_Lean_Meta_Simp_simp_simpLet___closed__8;
x_47 = lean_panic_fn(x_45, x_46);
x_48 = lean_apply_8(x_47, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_44);
return x_48;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_cacheResult___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_Simp_simp_cacheResult(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 1);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_st_ref_get(x_10, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_take(x_6, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = l_Lean_Expr_instBEqExpr;
x_22 = l_Lean_Expr_instHashableExpr;
lean_inc(x_3);
x_23 = l_Std_HashMap_insert___rarg(x_21, x_22, x_20, x_1, x_3);
lean_ctor_set(x_17, 0, x_23);
x_24 = lean_st_ref_set(x_6, x_17, x_18);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_3);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_3);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = l_Lean_Expr_instBEqExpr;
x_32 = l_Lean_Expr_instHashableExpr;
lean_inc(x_3);
x_33 = l_Std_HashMap_insert___rarg(x_31, x_32, x_29, x_1, x_3);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
x_35 = lean_st_ref_set(x_6, x_34, x_18);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_3);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_cacheResult___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_simp_cacheResult___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Meta_Simp_simp_cacheResult___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_withNewLemmas___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 < x_2;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_uget(x_1, x_3);
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_15);
x_19 = l_Lean_Meta_isProof(x_15, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; 
lean_dec(x_15);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = 1;
x_24 = x_3 + x_23;
x_3 = x_24;
x_12 = x_22;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_18);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_box(0);
x_28 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1;
x_29 = 1;
x_30 = lean_unsigned_to_nat(1000u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_31 = l_Lean_Meta_SimpLemmas_add(x_17, x_28, x_15, x_29, x_30, x_27, x_8, x_9, x_10, x_11, x_26);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; size_t x_35; size_t x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_box(x_29);
lean_ctor_set(x_4, 1, x_34);
lean_ctor_set(x_4, 0, x_32);
x_35 = 1;
x_36 = x_3 + x_35;
x_3 = x_36;
x_12 = x_33;
goto _start;
}
else
{
uint8_t x_38; 
lean_free_object(x_4);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_38 = !lean_is_exclusive(x_31);
if (x_38 == 0)
{
return x_31;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_31, 0);
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_31);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_free_object(x_4);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_42 = !lean_is_exclusive(x_19);
if (x_42 == 0)
{
return x_19;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_19, 0);
x_44 = lean_ctor_get(x_19, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_19);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_4, 0);
x_47 = lean_ctor_get(x_4, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_15);
x_48 = l_Lean_Meta_isProof(x_15, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; size_t x_53; size_t x_54; 
lean_dec(x_15);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_46);
lean_ctor_set(x_52, 1, x_47);
x_53 = 1;
x_54 = x_3 + x_53;
x_3 = x_54;
x_4 = x_52;
x_12 = x_51;
goto _start;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_47);
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_dec(x_48);
x_57 = lean_box(0);
x_58 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1;
x_59 = 1;
x_60 = lean_unsigned_to_nat(1000u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_61 = l_Lean_Meta_SimpLemmas_add(x_46, x_58, x_15, x_59, x_60, x_57, x_8, x_9, x_10, x_11, x_56);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; size_t x_66; size_t x_67; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_box(x_59);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
x_66 = 1;
x_67 = x_3 + x_66;
x_3 = x_67;
x_4 = x_65;
x_12 = x_63;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_69 = lean_ctor_get(x_61, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_61, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_71 = x_61;
} else {
 lean_dec_ref(x_61);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_73 = lean_ctor_get(x_48, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_48, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_75 = x_48;
} else {
 lean_dec_ref(x_48);
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
}
}
}
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_Meta_Simp_getConfig___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*2);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = l_Lean_Meta_Simp_getSimpLemmas___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_array_get_size(x_1);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_26 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_withNewLemmas___spec__1(x_1, x_24, x_25, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_st_ref_get(x_9, x_32);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_get(x_5, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_st_ref_get(x_9, x_38);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_st_ref_take(x_5, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_46 = lean_ctor_get(x_43, 0);
lean_dec(x_46);
x_47 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1;
lean_ctor_set(x_43, 0, x_47);
x_48 = lean_st_ref_set(x_5, x_43, x_44);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = !lean_is_exclusive(x_4);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_4, 1);
lean_dec(x_51);
lean_ctor_set(x_4, 1, x_33);
lean_inc(x_9);
lean_inc(x_5);
x_52 = lean_apply_8(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_49);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_st_ref_get(x_9, x_54);
lean_dec(x_9);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_st_ref_take(x_5, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = !lean_is_exclusive(x_58);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_61 = lean_ctor_get(x_58, 0);
lean_dec(x_61);
lean_ctor_set(x_58, 0, x_39);
x_62 = lean_st_ref_set(x_5, x_58, x_59);
lean_dec(x_5);
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_62, 0);
lean_dec(x_64);
lean_ctor_set(x_62, 0, x_53);
return x_62;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_dec(x_62);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_53);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_58, 1);
lean_inc(x_67);
lean_dec(x_58);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_39);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_st_ref_set(x_5, x_68, x_59);
lean_dec(x_5);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_71 = x_69;
} else {
 lean_dec_ref(x_69);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_53);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_73 = lean_ctor_get(x_52, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_52, 1);
lean_inc(x_74);
lean_dec(x_52);
x_75 = lean_st_ref_get(x_9, x_74);
lean_dec(x_9);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_st_ref_take(x_5, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = !lean_is_exclusive(x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_81 = lean_ctor_get(x_78, 0);
lean_dec(x_81);
lean_ctor_set(x_78, 0, x_39);
x_82 = lean_st_ref_set(x_5, x_78, x_79);
lean_dec(x_5);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
lean_ctor_set_tag(x_82, 1);
lean_ctor_set(x_82, 0, x_73);
return x_82;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_82, 1);
lean_inc(x_85);
lean_dec(x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_73);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_78, 1);
lean_inc(x_87);
lean_dec(x_78);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_39);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_st_ref_set(x_5, x_88, x_79);
lean_dec(x_5);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_91 = x_89;
} else {
 lean_dec_ref(x_89);
 x_91 = lean_box(0);
}
if (lean_is_scalar(x_91)) {
 x_92 = lean_alloc_ctor(1, 2, 0);
} else {
 x_92 = x_91;
 lean_ctor_set_tag(x_92, 1);
}
lean_ctor_set(x_92, 0, x_73);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_93 = lean_ctor_get(x_4, 0);
x_94 = lean_ctor_get(x_4, 2);
x_95 = lean_ctor_get(x_4, 3);
x_96 = lean_ctor_get(x_4, 4);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_4);
x_97 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_97, 0, x_93);
lean_ctor_set(x_97, 1, x_33);
lean_ctor_set(x_97, 2, x_94);
lean_ctor_set(x_97, 3, x_95);
lean_ctor_set(x_97, 4, x_96);
lean_inc(x_9);
lean_inc(x_5);
x_98 = lean_apply_8(x_2, x_3, x_97, x_5, x_6, x_7, x_8, x_9, x_49);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_st_ref_get(x_9, x_100);
lean_dec(x_9);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_103 = lean_st_ref_take(x_5, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_107 = x_104;
} else {
 lean_dec_ref(x_104);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(0, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_39);
lean_ctor_set(x_108, 1, x_106);
x_109 = lean_st_ref_set(x_5, x_108, x_105);
lean_dec(x_5);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_111 = x_109;
} else {
 lean_dec_ref(x_109);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_99);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_113 = lean_ctor_get(x_98, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_98, 1);
lean_inc(x_114);
lean_dec(x_98);
x_115 = lean_st_ref_get(x_9, x_114);
lean_dec(x_9);
x_116 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
lean_dec(x_115);
x_117 = lean_st_ref_take(x_5, x_116);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_121 = x_118;
} else {
 lean_dec_ref(x_118);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_39);
lean_ctor_set(x_122, 1, x_120);
x_123 = lean_st_ref_set(x_5, x_122, x_119);
lean_dec(x_5);
x_124 = lean_ctor_get(x_123, 1);
lean_inc(x_124);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_125 = x_123;
} else {
 lean_dec_ref(x_123);
 x_125 = lean_box(0);
}
if (lean_is_scalar(x_125)) {
 x_126 = lean_alloc_ctor(1, 2, 0);
} else {
 x_126 = x_125;
 lean_ctor_set_tag(x_126, 1);
}
lean_ctor_set(x_126, 0, x_113);
lean_ctor_set(x_126, 1, x_124);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_127 = lean_ctor_get(x_43, 1);
lean_inc(x_127);
lean_dec(x_43);
x_128 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1;
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = lean_st_ref_set(x_5, x_129, x_44);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
x_132 = lean_ctor_get(x_4, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_4, 2);
lean_inc(x_133);
x_134 = lean_ctor_get(x_4, 3);
lean_inc(x_134);
x_135 = lean_ctor_get(x_4, 4);
lean_inc(x_135);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 lean_ctor_release(x_4, 3);
 lean_ctor_release(x_4, 4);
 x_136 = x_4;
} else {
 lean_dec_ref(x_4);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(0, 5, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_132);
lean_ctor_set(x_137, 1, x_33);
lean_ctor_set(x_137, 2, x_133);
lean_ctor_set(x_137, 3, x_134);
lean_ctor_set(x_137, 4, x_135);
lean_inc(x_9);
lean_inc(x_5);
x_138 = lean_apply_8(x_2, x_3, x_137, x_5, x_6, x_7, x_8, x_9, x_131);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = lean_st_ref_get(x_9, x_140);
lean_dec(x_9);
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
lean_dec(x_141);
x_143 = lean_st_ref_take(x_5, x_142);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_147 = x_144;
} else {
 lean_dec_ref(x_144);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_39);
lean_ctor_set(x_148, 1, x_146);
x_149 = lean_st_ref_set(x_5, x_148, x_145);
lean_dec(x_5);
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_151 = x_149;
} else {
 lean_dec_ref(x_149);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_139);
lean_ctor_set(x_152, 1, x_150);
return x_152;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_153 = lean_ctor_get(x_138, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_138, 1);
lean_inc(x_154);
lean_dec(x_138);
x_155 = lean_st_ref_get(x_9, x_154);
lean_dec(x_9);
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
lean_dec(x_155);
x_157 = lean_st_ref_take(x_5, x_156);
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
lean_dec(x_157);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_161 = x_158;
} else {
 lean_dec_ref(x_158);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(0, 2, 0);
} else {
 x_162 = x_161;
}
lean_ctor_set(x_162, 0, x_39);
lean_ctor_set(x_162, 1, x_160);
x_163 = lean_st_ref_set(x_5, x_162, x_159);
lean_dec(x_5);
x_164 = lean_ctor_get(x_163, 1);
lean_inc(x_164);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_165 = x_163;
} else {
 lean_dec_ref(x_163);
 x_165 = lean_box(0);
}
if (lean_is_scalar(x_165)) {
 x_166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_166 = x_165;
 lean_ctor_set_tag(x_166, 1);
}
lean_ctor_set(x_166, 0, x_153);
lean_ctor_set(x_166, 1, x_164);
return x_166;
}
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_167 = !lean_is_exclusive(x_26);
if (x_167 == 0)
{
return x_26;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_26, 0);
x_169 = lean_ctor_get(x_26, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_26);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_withNewLemmas___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_withNewLemmas___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_withNewLemmas___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Meta_Simp_simp_withNewLemmas___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_simp_withNewLemmas___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp_simpLoop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 3);
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
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLoop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simp failed, maximum number of steps exceeded");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLoop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpLoop___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_11 = l_Lean_Meta_Simp_getConfig___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_9, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_5, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_nat_dec_lt(x_19, x_20);
lean_dec(x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
x_23 = lean_st_ref_get(x_9, x_18);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_st_ref_take(x_5, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_26, 1);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_29, x_30);
lean_dec(x_29);
lean_ctor_set(x_26, 1, x_31);
x_32 = lean_st_ref_set(x_5, x_26, x_27);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_22);
x_34 = l_Lean_Meta_Simp_pre(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_38 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_2, x_37, x_6, x_7, x_8, x_9, x_36);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_42 = l_Lean_Meta_Simp_simp_simpStep(x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_45 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_39, x_43, x_6, x_7, x_8, x_9, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_46, 0);
lean_inc(x_48);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_49 = l_Lean_Meta_Simp_post(x_48, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_47);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
lean_dec(x_50);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_53 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_46, x_52, x_6, x_7, x_8, x_9, x_51);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
x_54 = lean_ctor_get_uint8(x_12, sizeof(void*)*2 + 2);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = lean_ctor_get(x_55, 0);
lean_inc(x_57);
x_58 = lean_expr_eqv(x_22, x_57);
lean_dec(x_57);
lean_dec(x_22);
if (x_58 == 0)
{
lean_dec(x_12);
x_2 = x_55;
x_10 = x_56;
goto _start;
}
else
{
lean_object* x_60; 
x_60 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_55, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_56);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_22);
x_61 = lean_ctor_get(x_53, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_53, 1);
lean_inc(x_62);
lean_dec(x_53);
x_63 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_61, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_62);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_63;
}
}
else
{
uint8_t x_64; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_53);
if (x_64 == 0)
{
return x_53;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_53, 0);
x_66 = lean_ctor_get(x_53, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_22);
x_68 = lean_ctor_get(x_49, 1);
lean_inc(x_68);
lean_dec(x_49);
x_69 = lean_ctor_get(x_50, 0);
lean_inc(x_69);
lean_dec(x_50);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_70 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_46, x_69, x_6, x_7, x_8, x_9, x_68);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_71, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_72);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_73;
}
else
{
uint8_t x_74; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_70);
if (x_74 == 0)
{
return x_70;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_70, 0);
x_76 = lean_ctor_get(x_70, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_70);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_46);
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_49);
if (x_78 == 0)
{
return x_49;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_49, 0);
x_80 = lean_ctor_get(x_49, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_49);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_45);
if (x_82 == 0)
{
return x_45;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_45, 0);
x_84 = lean_ctor_get(x_45, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_45);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_39);
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_42);
if (x_86 == 0)
{
return x_42;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_42, 0);
x_88 = lean_ctor_get(x_42, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_42);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_90 = !lean_is_exclusive(x_38);
if (x_90 == 0)
{
return x_38;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_38, 0);
x_92 = lean_ctor_get(x_38, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_38);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_22);
lean_dec(x_2);
x_94 = lean_ctor_get(x_34, 1);
lean_inc(x_94);
lean_dec(x_34);
x_95 = lean_ctor_get(x_35, 0);
lean_inc(x_95);
lean_dec(x_35);
x_96 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_95, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_94);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_96;
}
}
else
{
uint8_t x_97; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_34);
if (x_97 == 0)
{
return x_34;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_34, 0);
x_99 = lean_ctor_get(x_34, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_34);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_101 = lean_ctor_get(x_26, 0);
x_102 = lean_ctor_get(x_26, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_26);
x_103 = lean_unsigned_to_nat(1u);
x_104 = lean_nat_add(x_102, x_103);
lean_dec(x_102);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_101);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_st_ref_set(x_5, x_105, x_27);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_22);
x_108 = l_Lean_Meta_Simp_pre(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_107);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_ctor_get(x_109, 0);
lean_inc(x_111);
lean_dec(x_109);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_112 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_2, x_111, x_6, x_7, x_8, x_9, x_110);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = lean_ctor_get(x_113, 0);
lean_inc(x_115);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_116 = l_Lean_Meta_Simp_simp_simpStep(x_115, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_114);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_119 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_113, x_117, x_6, x_7, x_8, x_9, x_118);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_122 = lean_ctor_get(x_120, 0);
lean_inc(x_122);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_123 = l_Lean_Meta_Simp_post(x_122, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_121);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; 
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_ctor_get(x_124, 0);
lean_inc(x_126);
lean_dec(x_124);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_127 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_120, x_126, x_6, x_7, x_8, x_9, x_125);
if (lean_obj_tag(x_127) == 0)
{
uint8_t x_128; 
x_128 = lean_ctor_get_uint8(x_12, sizeof(void*)*2 + 2);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
x_129 = lean_ctor_get(x_127, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_127, 1);
lean_inc(x_130);
lean_dec(x_127);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
x_132 = lean_expr_eqv(x_22, x_131);
lean_dec(x_131);
lean_dec(x_22);
if (x_132 == 0)
{
lean_dec(x_12);
x_2 = x_129;
x_10 = x_130;
goto _start;
}
else
{
lean_object* x_134; 
x_134 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_129, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_130);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_134;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_22);
x_135 = lean_ctor_get(x_127, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_127, 1);
lean_inc(x_136);
lean_dec(x_127);
x_137 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_135, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_136);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_137;
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_138 = lean_ctor_get(x_127, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_127, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_140 = x_127;
} else {
 lean_dec_ref(x_127);
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
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_22);
x_142 = lean_ctor_get(x_123, 1);
lean_inc(x_142);
lean_dec(x_123);
x_143 = lean_ctor_get(x_124, 0);
lean_inc(x_143);
lean_dec(x_124);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_144 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkEqTrans(x_120, x_143, x_6, x_7, x_8, x_9, x_142);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_145, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_146);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_148 = lean_ctor_get(x_144, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_144, 1);
lean_inc(x_149);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_150 = x_144;
} else {
 lean_dec_ref(x_144);
 x_150 = lean_box(0);
}
if (lean_is_scalar(x_150)) {
 x_151 = lean_alloc_ctor(1, 2, 0);
} else {
 x_151 = x_150;
}
lean_ctor_set(x_151, 0, x_148);
lean_ctor_set(x_151, 1, x_149);
return x_151;
}
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_120);
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_152 = lean_ctor_get(x_123, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_123, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_154 = x_123;
} else {
 lean_dec_ref(x_123);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_156 = lean_ctor_get(x_119, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_119, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_158 = x_119;
} else {
 lean_dec_ref(x_119);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_113);
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_160 = lean_ctor_get(x_116, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_116, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_162 = x_116;
} else {
 lean_dec_ref(x_116);
 x_162 = lean_box(0);
}
if (lean_is_scalar(x_162)) {
 x_163 = lean_alloc_ctor(1, 2, 0);
} else {
 x_163 = x_162;
}
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_161);
return x_163;
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_164 = lean_ctor_get(x_112, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_112, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_166 = x_112;
} else {
 lean_dec_ref(x_112);
 x_166 = lean_box(0);
}
if (lean_is_scalar(x_166)) {
 x_167 = lean_alloc_ctor(1, 2, 0);
} else {
 x_167 = x_166;
}
lean_ctor_set(x_167, 0, x_164);
lean_ctor_set(x_167, 1, x_165);
return x_167;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec(x_22);
lean_dec(x_2);
x_168 = lean_ctor_get(x_108, 1);
lean_inc(x_168);
lean_dec(x_108);
x_169 = lean_ctor_get(x_109, 0);
lean_inc(x_169);
lean_dec(x_109);
x_170 = l_Lean_Meta_Simp_simp_cacheResult(x_1, x_12, x_169, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_168);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_170;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_171 = lean_ctor_get(x_108, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_108, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_173 = x_108;
} else {
 lean_dec_ref(x_108);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(1, 2, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_171);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
}
else
{
lean_object* x_175; lean_object* x_176; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_175 = l_Lean_Meta_Simp_simp_simpLoop___closed__2;
x_176 = l_Lean_throwError___at_Lean_Meta_Simp_simp_simpLoop___spec__1(x_175, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_176;
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpStep___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Meta.Simp.simp.simpStep");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpStep___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Meta_Simp_simp_simpLet___closed__5;
x_2 = l_Lean_Meta_Simp_simp_simpStep___closed__1;
x_3 = lean_unsigned_to_nat(161u);
x_4 = lean_unsigned_to_nat(26u);
x_5 = l_Lean_Meta_Simp_simp_simpLet___closed__7;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_10 = l_Lean_Meta_Simp_simp_simpLet___closed__4;
x_11 = l_Lean_Meta_Simp_simp_simpStep___closed__2;
x_12 = lean_panic_fn(x_10, x_11);
x_13 = lean_apply_8(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
case 1:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_14 = l_Lean_Meta_Simp_getConfig___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceFVar(x_15, x_1, x_5, x_6, x_7, x_8, x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_17, 0, x_21);
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
return x_26;
}
}
else
{
uint8_t x_27; 
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
case 2:
{
lean_object* x_31; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = l_Lean_Meta_instantiateMVars(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_31, 0, x_35);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_31);
if (x_41 == 0)
{
return x_31;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_31, 0);
x_43 = lean_ctor_get(x_31, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_31);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
case 4:
{
lean_object* x_45; 
x_45 = l_Lean_Meta_Simp_simp_simpConst(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_45;
}
case 5:
{
lean_object* x_46; 
x_46 = l_Lean_Meta_Simp_simp_simpApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_46;
}
case 6:
{
lean_object* x_47; 
x_47 = l_Lean_Meta_Simp_simp_simpLambda(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_47;
}
case 7:
{
lean_object* x_48; 
x_48 = l_Lean_Meta_Simp_simp_simpForall(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_48;
}
case 8:
{
lean_object* x_49; 
x_49 = l_Lean_Meta_Simp_simp_simpLet(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_49;
}
case 10:
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_1, 1);
lean_inc(x_50);
lean_dec(x_1);
x_51 = l_Lean_Meta_Simp_simp(x_50, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_51;
}
case 11:
{
lean_object* x_52; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProj(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_52, 0, x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_52, 0);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_52);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_58);
return x_61;
}
}
else
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_52);
if (x_62 == 0)
{
return x_52;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_52, 0);
x_64 = lean_ctor_get(x_52, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_52);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
default: 
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_1);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_9);
return x_68;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_9(x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg), 10, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_9(x_1, x_5, x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg___lambda__1), 10, 4);
lean_closure_set(x_13, 0, x_4);
lean_closure_set(x_13, 1, x_5);
lean_closure_set(x_13, 2, x_6);
lean_closure_set(x_13, 3, x_7);
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_13, x_8, x_9, x_10, x_11, x_12);
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
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg___boxed), 12, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("] ");
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_6, x_7, x_8, x_9, x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_addTrace_addTraceOptions(x_13);
x_16 = lean_st_ref_take(x_9, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_17, 3);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_1);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_1);
x_25 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_15);
x_30 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_31);
lean_inc(x_11);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_11);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Std_PersistentArray_push___rarg(x_23, x_33);
lean_ctor_set(x_18, 0, x_34);
x_35 = lean_st_ref_set(x_9, x_17, x_19);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
lean_dec(x_37);
x_38 = lean_box(0);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_42 = lean_ctor_get_uint8(x_18, sizeof(void*)*1);
x_43 = lean_ctor_get(x_18, 0);
lean_inc(x_43);
lean_dec(x_18);
lean_inc(x_1);
x_44 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_44, 0, x_1);
x_45 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_15);
x_50 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_52, 0, x_1);
lean_ctor_set(x_52, 1, x_51);
lean_inc(x_11);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_11);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Std_PersistentArray_push___rarg(x_43, x_53);
x_55 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set_uint8(x_55, sizeof(void*)*1, x_42);
lean_ctor_set(x_17, 3, x_55);
x_56 = lean_st_ref_set(x_9, x_17, x_19);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
x_59 = lean_box(0);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_61 = lean_ctor_get(x_17, 0);
x_62 = lean_ctor_get(x_17, 1);
x_63 = lean_ctor_get(x_17, 2);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_17);
x_64 = lean_ctor_get_uint8(x_18, sizeof(void*)*1);
x_65 = lean_ctor_get(x_18, 0);
lean_inc(x_65);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 x_66 = x_18;
} else {
 lean_dec_ref(x_18);
 x_66 = lean_box(0);
}
lean_inc(x_1);
x_67 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_67, 0, x_1);
x_68 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4;
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_15);
x_73 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_75, 0, x_1);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_11);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_11);
lean_ctor_set(x_76, 1, x_75);
x_77 = l_Std_PersistentArray_push___rarg(x_65, x_76);
if (lean_is_scalar(x_66)) {
 x_78 = lean_alloc_ctor(0, 1, 1);
} else {
 x_78 = x_66;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set_uint8(x_78, sizeof(void*)*1, x_64);
x_79 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_79, 0, x_61);
lean_ctor_set(x_79, 1, x_62);
lean_ctor_set(x_79, 2, x_63);
lean_ctor_set(x_79, 3, x_78);
x_80 = lean_st_ref_set(x_9, x_79, x_19);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_82 = x_80;
} else {
 lean_dec_ref(x_80);
 x_82 = lean_box(0);
}
x_83 = lean_box(0);
if (lean_is_scalar(x_82)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_82;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_81);
return x_84;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_checkTraceOption(x_10, x_1);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = 0;
x_13 = 1;
lean_inc(x_6);
lean_inc(x_1);
x_14 = l_Lean_Meta_mkForallFVars(x_1, x_11, x_12, x_13, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_14, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_dec(x_14);
x_27 = !lean_is_exclusive(x_15);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_15, 0);
lean_inc(x_6);
x_29 = l_Lean_Meta_mkLambdaFVars(x_1, x_28, x_12, x_13, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Meta_mkForallCongr(x_30, x_6, x_7, x_8, x_9, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
lean_ctor_set(x_15, 0, x_34);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_15);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
lean_ctor_set(x_15, 0, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_25);
lean_ctor_set(x_38, 1, x_15);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_free_object(x_15);
lean_dec(x_25);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_free_object(x_15);
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_44 = !lean_is_exclusive(x_29);
if (x_44 == 0)
{
return x_29;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_29, 0);
x_46 = lean_ctor_get(x_29, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_29);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_15, 0);
lean_inc(x_48);
lean_dec(x_15);
lean_inc(x_6);
x_49 = l_Lean_Meta_mkLambdaFVars(x_1, x_48, x_12, x_13, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_Meta_mkForallCongr(x_50, x_6, x_7, x_8, x_9, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_55 = x_52;
} else {
 lean_dec_ref(x_52);
 x_55 = lean_box(0);
}
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_53);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_25);
lean_ctor_set(x_57, 1, x_56);
if (lean_is_scalar(x_55)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_55;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_54);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_25);
x_59 = lean_ctor_get(x_52, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_52, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_61 = x_52;
} else {
 lean_dec_ref(x_52);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_63 = lean_ctor_get(x_49, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_49, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_65 = x_49;
} else {
 lean_dec_ref(x_49);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_14);
if (x_67 == 0)
{
return x_14;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_14, 0);
x_69 = lean_ctor_get(x_14, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_14);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1;
lean_inc(x_2);
x_12 = lean_array_push(x_11, x_2);
x_13 = l_Lean_Expr_bindingBody_x21(x_1);
x_14 = lean_expr_instantiate1(x_13, x_2);
lean_dec(x_2);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp), 9, 1);
lean_closure_set(x_15, 0, x_14);
lean_inc(x_12);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpForall___lambda__1___boxed), 10, 1);
lean_closure_set(x_16, 0, x_12);
x_17 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg), 10, 2);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_16);
x_18 = l_Lean_Meta_Simp_simp_withNewLemmas___rarg(x_12, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_12);
return x_18;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
lean_dec(x_2);
x_11 = l_Lean_Expr_isArrow(x_1);
if (x_11 == 0)
{
lean_object* x_12; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_12 = l_Lean_Meta_isProp(x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1;
x_17 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2;
x_18 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1(x_1, x_16, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_18);
if (x_28 == 0)
{
return x_18;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_18, 0);
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_18);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_dec(x_12);
x_33 = l_Lean_Expr_bindingName_x21(x_1);
x_34 = l_Lean_Expr_bindingInfo_x21(x_1);
x_35 = l_Lean_Expr_bindingDomain_x21(x_1);
x_36 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpForall___lambda__2___boxed), 10, 1);
lean_closure_set(x_36, 0, x_1);
x_37 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg(x_33, x_34, x_35, x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_12);
if (x_38 == 0)
{
return x_12;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_12, 0);
x_40 = lean_ctor_get(x_12, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_12);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; 
x_42 = l_Lean_Meta_Simp_simp_simpArrow(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_42;
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Debug");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Meta");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_simp_simpForall___closed__2;
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_simp_simpForall___closed__4;
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simp");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_simp_simpForall___closed__6;
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("forall ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpForall___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpForall___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Meta_Simp_simp_simpForall___closed__8;
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_12 = lean_ctor_get(x_3, 3);
lean_dec(x_12);
lean_inc(x_1);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_3, 3, x_13);
x_28 = lean_st_ref_get(x_8, x_9);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get_uint8(x_30, sizeof(void*)*1);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = 0;
x_14 = x_33;
x_15 = x_32;
goto block_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_unbox(x_36);
lean_dec(x_36);
x_14 = x_38;
x_15 = x_37;
goto block_27;
}
block_27:
{
if (x_14 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_box(0);
x_17 = l_Lean_Meta_Simp_simp_simpForall___lambda__3(x_1, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_inc(x_1);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_1);
x_19 = l_Lean_Meta_Simp_simp_simpForall___closed__10;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_10, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Meta_Simp_simp_simpForall___lambda__3(x_1, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
return x_26;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
x_41 = lean_ctor_get(x_3, 2);
x_42 = lean_ctor_get(x_3, 4);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_3);
lean_inc(x_1);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_1);
x_44 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_40);
lean_ctor_set(x_44, 2, x_41);
lean_ctor_set(x_44, 3, x_43);
lean_ctor_set(x_44, 4, x_42);
x_59 = lean_st_ref_get(x_8, x_9);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_60, 3);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_ctor_get_uint8(x_61, sizeof(void*)*1);
lean_dec(x_61);
if (x_62 == 0)
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_dec(x_59);
x_64 = 0;
x_45 = x_64;
x_46 = x_63;
goto block_58;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
lean_dec(x_59);
x_66 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_10, x_2, x_44, x_4, x_5, x_6, x_7, x_8, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_unbox(x_67);
lean_dec(x_67);
x_45 = x_69;
x_46 = x_68;
goto block_58;
}
block_58:
{
if (x_45 == 0)
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_box(0);
x_48 = l_Lean_Meta_Simp_simp_simpForall___lambda__3(x_1, x_47, x_2, x_44, x_4, x_5, x_6, x_7, x_8, x_46);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_inc(x_1);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_1);
x_50 = l_Lean_Meta_Simp_simp_simpForall___closed__10;
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_10, x_53, x_2, x_44, x_4, x_5, x_6, x_7, x_8, x_46);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Meta_Simp_simp_simpForall___lambda__3(x_1, x_55, x_2, x_44, x_4, x_5, x_6, x_7, x_8, x_56);
return x_57;
}
}
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Simp_simp___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_expr_eqv(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_Simp_simp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Expr_hash(x_2);
x_6 = (size_t)x_5;
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
lean_dec(x_3);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Meta_Simp_simp___spec__2(x_2, x_8);
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 3);
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
lean_object* l_Lean_Meta_Simp_simp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_11 = lean_box(0);
lean_inc(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Meta_Simp_simp_simpLoop(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Lean_Meta_Simp_simp___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
lean_dec(x_3);
x_12 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 1);
lean_dec(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Meta_Simp_simp___lambda__1(x_1, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_st_ref_get(x_10, x_11);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_6, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_1);
x_22 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Simp_simp___spec__1(x_21, x_1);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_free_object(x_17);
x_23 = lean_box(0);
x_24 = l_Lean_Meta_Simp_simp___lambda__1(x_1, x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
return x_24;
}
else
{
lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
lean_ctor_set(x_17, 0, x_25);
return x_17;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_1);
x_29 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Simp_simp___spec__1(x_28, x_1);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_box(0);
x_31 = l_Lean_Meta_Simp_simp___lambda__1(x_1, x_30, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_3);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_9, 1);
lean_dec(x_15);
lean_ctor_set(x_9, 1, x_13);
x_16 = l_Lean_Meta_Simp_getConfig___rarg(x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_19 = l_Lean_Meta_isProof(x_2, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_box(0);
x_24 = l_Lean_Meta_Simp_simp___lambda__2(x_2, x_17, x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
lean_dec(x_26);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_19, 0, x_28);
return x_19;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_dec(x_19);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_19);
if (x_33 == 0)
{
return x_19;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_19, 0);
x_35 = lean_ctor_get(x_19, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_19);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_37 = lean_ctor_get(x_9, 0);
x_38 = lean_ctor_get(x_9, 2);
x_39 = lean_ctor_get(x_9, 3);
x_40 = lean_ctor_get(x_9, 4);
x_41 = lean_ctor_get(x_9, 5);
x_42 = lean_ctor_get(x_9, 6);
x_43 = lean_ctor_get(x_9, 7);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_9);
x_44 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_44, 0, x_37);
lean_ctor_set(x_44, 1, x_13);
lean_ctor_set(x_44, 2, x_38);
lean_ctor_set(x_44, 3, x_39);
lean_ctor_set(x_44, 4, x_40);
lean_ctor_set(x_44, 5, x_41);
lean_ctor_set(x_44, 6, x_42);
lean_ctor_set(x_44, 7, x_43);
x_45 = l_Lean_Meta_Simp_getConfig___rarg(x_5, x_6, x_7, x_8, x_44, x_10, x_11);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
lean_inc(x_10);
lean_inc(x_44);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_48 = l_Lean_Meta_isProof(x_2, x_7, x_8, x_44, x_10, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_unbox(x_49);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_box(0);
x_53 = l_Lean_Meta_Simp_simp___lambda__2(x_2, x_46, x_52, x_4, x_5, x_6, x_7, x_8, x_44, x_10, x_51);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_55 = x_48;
} else {
 lean_dec_ref(x_48);
 x_55 = lean_box(0);
}
x_56 = lean_box(0);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_2);
lean_ctor_set(x_57, 1, x_56);
if (lean_is_scalar(x_55)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_55;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_54);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_46);
lean_dec(x_44);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_59 = lean_ctor_get(x_48, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_48, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_61 = x_48;
} else {
 lean_dec_ref(x_48);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 2);
lean_inc(x_11);
x_12 = lean_nat_dec_eq(x_10, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Meta_Simp_simp___lambda__3(x_10, x_1, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_10);
lean_dec(x_1);
x_15 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2;
x_16 = l_Lean_throwError___at_Lean_Meta_Simp_simp___spec__3(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_13 = l_Lean_Meta_Simp_getSimpLemmas___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1;
x_18 = 1;
x_19 = lean_unsigned_to_nat(1000u);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
x_20 = l_Lean_Meta_SimpLemmas_add(x_14, x_17, x_4, x_18, x_19, x_16, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_50; lean_object* x_51; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_11, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_st_ref_get(x_7, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_71 = lean_st_ref_get(x_11, x_27);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_st_ref_take(x_7, x_72);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = !lean_is_exclusive(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_77 = lean_ctor_get(x_74, 0);
lean_dec(x_77);
x_78 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1;
lean_ctor_set(x_74, 0, x_78);
x_79 = lean_st_ref_set(x_7, x_74, x_75);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = !lean_is_exclusive(x_6);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_6, 1);
lean_dec(x_82);
lean_ctor_set(x_6, 1, x_21);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_83 = l_Lean_Meta_Simp_simp(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_80);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_4);
lean_dec(x_3);
x_86 = lean_ctor_get(x_83, 1);
lean_inc(x_86);
lean_dec(x_83);
lean_inc(x_11);
x_87 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr(x_2, x_84, x_8, x_9, x_10, x_11, x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_29 = x_88;
x_30 = x_89;
goto block_49;
}
else
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_87, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
lean_dec(x_87);
x_50 = x_90;
x_51 = x_91;
goto block_70;
}
}
else
{
lean_object* x_92; uint8_t x_93; 
x_92 = lean_ctor_get(x_83, 1);
lean_inc(x_92);
lean_dec(x_83);
x_93 = !lean_is_exclusive(x_85);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; 
x_94 = lean_ctor_get(x_85, 0);
x_95 = l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1;
x_96 = lean_array_push(x_95, x_4);
x_97 = 0;
lean_inc(x_8);
x_98 = l_Lean_Meta_mkLambdaFVars(x_96, x_94, x_97, x_18, x_8, x_9, x_10, x_11, x_92);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = lean_ctor_get(x_84, 0);
lean_inc(x_101);
lean_dec(x_84);
x_102 = l_Lean_Meta_mkArrow(x_3, x_101, x_8, x_9, x_10, x_11, x_100);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_105 = l_Lean_Meta_Simp_Result_getProof(x_2, x_8, x_9, x_10, x_11, x_104);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
lean_inc(x_11);
x_108 = l_Lean_Meta_mkImpCongrCtx(x_106, x_99, x_8, x_9, x_10, x_11, x_107);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
lean_ctor_set(x_85, 0, x_109);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_103);
lean_ctor_set(x_111, 1, x_85);
x_29 = x_111;
x_30 = x_110;
goto block_49;
}
else
{
lean_object* x_112; lean_object* x_113; 
lean_dec(x_103);
lean_free_object(x_85);
x_112 = lean_ctor_get(x_108, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_108, 1);
lean_inc(x_113);
lean_dec(x_108);
x_50 = x_112;
x_51 = x_113;
goto block_70;
}
}
else
{
lean_object* x_114; lean_object* x_115; 
lean_dec(x_103);
lean_dec(x_99);
lean_free_object(x_85);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_114 = lean_ctor_get(x_105, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_105, 1);
lean_inc(x_115);
lean_dec(x_105);
x_50 = x_114;
x_51 = x_115;
goto block_70;
}
}
else
{
lean_object* x_116; lean_object* x_117; 
lean_free_object(x_85);
lean_dec(x_84);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_116 = lean_ctor_get(x_98, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_98, 1);
lean_inc(x_117);
lean_dec(x_98);
x_50 = x_116;
x_51 = x_117;
goto block_70;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; 
x_118 = lean_ctor_get(x_85, 0);
lean_inc(x_118);
lean_dec(x_85);
x_119 = l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1;
x_120 = lean_array_push(x_119, x_4);
x_121 = 0;
lean_inc(x_8);
x_122 = l_Lean_Meta_mkLambdaFVars(x_120, x_118, x_121, x_18, x_8, x_9, x_10, x_11, x_92);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = lean_ctor_get(x_84, 0);
lean_inc(x_125);
lean_dec(x_84);
x_126 = l_Lean_Meta_mkArrow(x_3, x_125, x_8, x_9, x_10, x_11, x_124);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_129 = l_Lean_Meta_Simp_Result_getProof(x_2, x_8, x_9, x_10, x_11, x_128);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
lean_inc(x_11);
x_132 = l_Lean_Meta_mkImpCongrCtx(x_130, x_123, x_8, x_9, x_10, x_11, x_131);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_135 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_135, 0, x_133);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_127);
lean_ctor_set(x_136, 1, x_135);
x_29 = x_136;
x_30 = x_134;
goto block_49;
}
else
{
lean_object* x_137; lean_object* x_138; 
lean_dec(x_127);
x_137 = lean_ctor_get(x_132, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_132, 1);
lean_inc(x_138);
lean_dec(x_132);
x_50 = x_137;
x_51 = x_138;
goto block_70;
}
}
else
{
lean_object* x_139; lean_object* x_140; 
lean_dec(x_127);
lean_dec(x_123);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_139 = lean_ctor_get(x_129, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_129, 1);
lean_inc(x_140);
lean_dec(x_129);
x_50 = x_139;
x_51 = x_140;
goto block_70;
}
}
else
{
lean_object* x_141; lean_object* x_142; 
lean_dec(x_84);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_141 = lean_ctor_get(x_122, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_122, 1);
lean_inc(x_142);
lean_dec(x_122);
x_50 = x_141;
x_51 = x_142;
goto block_70;
}
}
}
}
else
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_143 = lean_ctor_get(x_83, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_83, 1);
lean_inc(x_144);
lean_dec(x_83);
x_50 = x_143;
x_51 = x_144;
goto block_70;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_145 = lean_ctor_get(x_6, 0);
x_146 = lean_ctor_get(x_6, 2);
x_147 = lean_ctor_get(x_6, 3);
x_148 = lean_ctor_get(x_6, 4);
lean_inc(x_148);
lean_inc(x_147);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_6);
x_149 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_149, 0, x_145);
lean_ctor_set(x_149, 1, x_21);
lean_ctor_set(x_149, 2, x_146);
lean_ctor_set(x_149, 3, x_147);
lean_ctor_set(x_149, 4, x_148);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_150 = l_Lean_Meta_Simp_simp(x_1, x_5, x_149, x_7, x_8, x_9, x_10, x_11, x_80);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
if (lean_obj_tag(x_152) == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_4);
lean_dec(x_3);
x_153 = lean_ctor_get(x_150, 1);
lean_inc(x_153);
lean_dec(x_150);
lean_inc(x_11);
x_154 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr(x_2, x_151, x_8, x_9, x_10, x_11, x_153);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_29 = x_155;
x_30 = x_156;
goto block_49;
}
else
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_154, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_154, 1);
lean_inc(x_158);
lean_dec(x_154);
x_50 = x_157;
x_51 = x_158;
goto block_70;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; 
x_159 = lean_ctor_get(x_150, 1);
lean_inc(x_159);
lean_dec(x_150);
x_160 = lean_ctor_get(x_152, 0);
lean_inc(x_160);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 x_161 = x_152;
} else {
 lean_dec_ref(x_152);
 x_161 = lean_box(0);
}
x_162 = l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1;
x_163 = lean_array_push(x_162, x_4);
x_164 = 0;
lean_inc(x_8);
x_165 = l_Lean_Meta_mkLambdaFVars(x_163, x_160, x_164, x_18, x_8, x_9, x_10, x_11, x_159);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
x_168 = lean_ctor_get(x_151, 0);
lean_inc(x_168);
lean_dec(x_151);
x_169 = l_Lean_Meta_mkArrow(x_3, x_168, x_8, x_9, x_10, x_11, x_167);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_172 = l_Lean_Meta_Simp_Result_getProof(x_2, x_8, x_9, x_10, x_11, x_171);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
lean_inc(x_11);
x_175 = l_Lean_Meta_mkImpCongrCtx(x_173, x_166, x_8, x_9, x_10, x_11, x_174);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
if (lean_is_scalar(x_161)) {
 x_178 = lean_alloc_ctor(1, 1, 0);
} else {
 x_178 = x_161;
}
lean_ctor_set(x_178, 0, x_176);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_170);
lean_ctor_set(x_179, 1, x_178);
x_29 = x_179;
x_30 = x_177;
goto block_49;
}
else
{
lean_object* x_180; lean_object* x_181; 
lean_dec(x_170);
lean_dec(x_161);
x_180 = lean_ctor_get(x_175, 0);
lean_inc(x_180);
x_181 = lean_ctor_get(x_175, 1);
lean_inc(x_181);
lean_dec(x_175);
x_50 = x_180;
x_51 = x_181;
goto block_70;
}
}
else
{
lean_object* x_182; lean_object* x_183; 
lean_dec(x_170);
lean_dec(x_166);
lean_dec(x_161);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_182 = lean_ctor_get(x_172, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_172, 1);
lean_inc(x_183);
lean_dec(x_172);
x_50 = x_182;
x_51 = x_183;
goto block_70;
}
}
else
{
lean_object* x_184; lean_object* x_185; 
lean_dec(x_161);
lean_dec(x_151);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_184 = lean_ctor_get(x_165, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_165, 1);
lean_inc(x_185);
lean_dec(x_165);
x_50 = x_184;
x_51 = x_185;
goto block_70;
}
}
}
else
{
lean_object* x_186; lean_object* x_187; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_186 = lean_ctor_get(x_150, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_150, 1);
lean_inc(x_187);
lean_dec(x_150);
x_50 = x_186;
x_51 = x_187;
goto block_70;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_188 = lean_ctor_get(x_74, 1);
lean_inc(x_188);
lean_dec(x_74);
x_189 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1;
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_188);
x_191 = lean_st_ref_set(x_7, x_190, x_75);
x_192 = lean_ctor_get(x_191, 1);
lean_inc(x_192);
lean_dec(x_191);
x_193 = lean_ctor_get(x_6, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_6, 2);
lean_inc(x_194);
x_195 = lean_ctor_get(x_6, 3);
lean_inc(x_195);
x_196 = lean_ctor_get(x_6, 4);
lean_inc(x_196);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_197 = x_6;
} else {
 lean_dec_ref(x_6);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(0, 5, 0);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_21);
lean_ctor_set(x_198, 2, x_194);
lean_ctor_set(x_198, 3, x_195);
lean_ctor_set(x_198, 4, x_196);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_199 = l_Lean_Meta_Simp_simp(x_1, x_5, x_198, x_7, x_8, x_9, x_10, x_11, x_192);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_202; lean_object* x_203; 
lean_dec(x_4);
lean_dec(x_3);
x_202 = lean_ctor_get(x_199, 1);
lean_inc(x_202);
lean_dec(x_199);
lean_inc(x_11);
x_203 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr(x_2, x_200, x_8, x_9, x_10, x_11, x_202);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; lean_object* x_205; 
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_29 = x_204;
x_30 = x_205;
goto block_49;
}
else
{
lean_object* x_206; lean_object* x_207; 
x_206 = lean_ctor_get(x_203, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_203, 1);
lean_inc(x_207);
lean_dec(x_203);
x_50 = x_206;
x_51 = x_207;
goto block_70;
}
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; uint8_t x_213; lean_object* x_214; 
x_208 = lean_ctor_get(x_199, 1);
lean_inc(x_208);
lean_dec(x_199);
x_209 = lean_ctor_get(x_201, 0);
lean_inc(x_209);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 x_210 = x_201;
} else {
 lean_dec_ref(x_201);
 x_210 = lean_box(0);
}
x_211 = l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1;
x_212 = lean_array_push(x_211, x_4);
x_213 = 0;
lean_inc(x_8);
x_214 = l_Lean_Meta_mkLambdaFVars(x_212, x_209, x_213, x_18, x_8, x_9, x_10, x_11, x_208);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_ctor_get(x_200, 0);
lean_inc(x_217);
lean_dec(x_200);
x_218 = l_Lean_Meta_mkArrow(x_3, x_217, x_8, x_9, x_10, x_11, x_216);
x_219 = lean_ctor_get(x_218, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_218, 1);
lean_inc(x_220);
lean_dec(x_218);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_221 = l_Lean_Meta_Simp_Result_getProof(x_2, x_8, x_9, x_10, x_11, x_220);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
lean_inc(x_11);
x_224 = l_Lean_Meta_mkImpCongrCtx(x_222, x_215, x_8, x_9, x_10, x_11, x_223);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
if (lean_is_scalar(x_210)) {
 x_227 = lean_alloc_ctor(1, 1, 0);
} else {
 x_227 = x_210;
}
lean_ctor_set(x_227, 0, x_225);
x_228 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_228, 0, x_219);
lean_ctor_set(x_228, 1, x_227);
x_29 = x_228;
x_30 = x_226;
goto block_49;
}
else
{
lean_object* x_229; lean_object* x_230; 
lean_dec(x_219);
lean_dec(x_210);
x_229 = lean_ctor_get(x_224, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_224, 1);
lean_inc(x_230);
lean_dec(x_224);
x_50 = x_229;
x_51 = x_230;
goto block_70;
}
}
else
{
lean_object* x_231; lean_object* x_232; 
lean_dec(x_219);
lean_dec(x_215);
lean_dec(x_210);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_231 = lean_ctor_get(x_221, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_221, 1);
lean_inc(x_232);
lean_dec(x_221);
x_50 = x_231;
x_51 = x_232;
goto block_70;
}
}
else
{
lean_object* x_233; lean_object* x_234; 
lean_dec(x_210);
lean_dec(x_200);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_233 = lean_ctor_get(x_214, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_214, 1);
lean_inc(x_234);
lean_dec(x_214);
x_50 = x_233;
x_51 = x_234;
goto block_70;
}
}
}
else
{
lean_object* x_235; lean_object* x_236; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_235 = lean_ctor_get(x_199, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_199, 1);
lean_inc(x_236);
lean_dec(x_199);
x_50 = x_235;
x_51 = x_236;
goto block_70;
}
}
block_49:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_31 = lean_st_ref_get(x_11, x_30);
lean_dec(x_11);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_st_ref_take(x_7, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = !lean_is_exclusive(x_34);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_ctor_get(x_34, 0);
lean_dec(x_37);
lean_ctor_set(x_34, 0, x_28);
x_38 = lean_st_ref_set(x_7, x_34, x_35);
lean_dec(x_7);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
lean_ctor_set(x_38, 0, x_29);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_29);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_43 = lean_ctor_get(x_34, 1);
lean_inc(x_43);
lean_dec(x_34);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_28);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_st_ref_set(x_7, x_44, x_35);
lean_dec(x_7);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_29);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
block_70:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_52 = lean_st_ref_get(x_11, x_51);
lean_dec(x_11);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_st_ref_take(x_7, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = !lean_is_exclusive(x_55);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_58 = lean_ctor_get(x_55, 0);
lean_dec(x_58);
lean_ctor_set(x_55, 0, x_28);
x_59 = lean_st_ref_set(x_7, x_55, x_56);
lean_dec(x_7);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_59, 0);
lean_dec(x_61);
lean_ctor_set_tag(x_59, 1);
lean_ctor_set(x_59, 0, x_50);
return x_59;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_50);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_64 = lean_ctor_get(x_55, 1);
lean_inc(x_64);
lean_dec(x_55);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_28);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_st_ref_set(x_7, x_65, x_56);
lean_dec(x_7);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_68 = x_66;
} else {
 lean_dec_ref(x_66);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
 lean_ctor_set_tag(x_69, 1);
}
lean_ctor_set(x_69, 0, x_50);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
}
else
{
uint8_t x_237; 
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
x_237 = !lean_is_exclusive(x_20);
if (x_237 == 0)
{
return x_20;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_238 = lean_ctor_get(x_20, 0);
x_239 = lean_ctor_get(x_20, 1);
lean_inc(x_239);
lean_inc(x_238);
lean_dec(x_20);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_238);
lean_ctor_set(x_240, 1, x_239);
return x_240;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
lean_dec(x_4);
x_13 = l_Lean_Expr_bindingName_x21(x_1);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_inc(x_14);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpArrow___lambda__1), 12, 3);
lean_closure_set(x_15, 0, x_3);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_14);
x_16 = 0;
x_17 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg(x_13, x_16, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_17;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ctx arrow ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" -> ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
lean_dec(x_6);
x_15 = l_Lean_Meta_Simp_getConfig___rarg(x_8, x_9, x_10, x_11, x_12, x_13, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get_uint8(x_16, sizeof(void*)*2);
lean_dec(x_16);
if (x_18 == 0)
{
lean_dec(x_5);
x_19 = x_18;
x_20 = x_17;
goto block_59;
}
else
{
lean_object* x_60; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_60 = l_Lean_Meta_isProp(x_5, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_unbox(x_61);
if (x_62 == 0)
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = lean_unbox(x_61);
lean_dec(x_61);
x_19 = x_64;
x_20 = x_63;
goto block_59;
}
else
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_61);
x_65 = lean_ctor_get(x_60, 1);
lean_inc(x_65);
lean_dec(x_60);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_66 = l_Lean_Meta_isProp(x_1, x_10, x_11, x_12, x_13, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_unbox(x_67);
lean_dec(x_67);
x_19 = x_69;
x_20 = x_68;
goto block_59;
}
else
{
uint8_t x_70; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_66);
if (x_70 == 0)
{
return x_66;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_66, 0);
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_66);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_60);
if (x_74 == 0)
{
return x_60;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_60, 0);
x_76 = lean_ctor_get(x_60, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_60);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
block_59:
{
if (x_19 == 0)
{
lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_21 = l_Lean_Meta_Simp_simp(x_1, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkImpCongr(x_2, x_22, x_10, x_11, x_12, x_13, x_23);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_st_ref_get(x_13, x_20);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_49, 3);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_ctor_get_uint8(x_50, sizeof(void*)*1);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = 0;
x_29 = x_53;
x_30 = x_52;
goto block_47;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_48, 1);
lean_inc(x_54);
lean_dec(x_48);
lean_inc(x_4);
x_55 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_unbox(x_56);
lean_dec(x_56);
x_29 = x_58;
x_30 = x_57;
goto block_47;
}
block_47:
{
if (x_29 == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_4);
x_31 = lean_box(0);
x_32 = l_Lean_Meta_Simp_simp_simpArrow___lambda__2(x_3, x_2, x_1, x_31, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_30);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__2;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__4;
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
lean_inc(x_1);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_1);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_4, x_42, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_30);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Meta_Simp_simp_simpArrow___lambda__2(x_3, x_2, x_1, x_44, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_45);
return x_46;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arrow [");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" [");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("] -> ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("false");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__10;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("true");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__13;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpArrow___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_12 = l_Lean_Expr_bindingDomain_x21(x_1);
x_13 = l_Lean_Expr_bindingBody_x21(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_12);
x_14 = l_Lean_Meta_Simp_simp(x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_84 = lean_st_ref_get(x_10, x_16);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_85, 3);
lean_inc(x_86);
lean_dec(x_85);
x_87 = lean_ctor_get_uint8(x_86, sizeof(void*)*1);
lean_dec(x_86);
if (x_87 == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_84, 1);
lean_inc(x_88);
lean_dec(x_84);
x_89 = 0;
x_17 = x_89;
x_18 = x_88;
goto block_83;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_90 = lean_ctor_get(x_84, 1);
lean_inc(x_90);
lean_dec(x_84);
lean_inc(x_2);
x_91 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_unbox(x_92);
lean_dec(x_92);
x_17 = x_94;
x_18 = x_93;
goto block_83;
}
block_83:
{
if (x_17 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l_Lean_Meta_Simp_simp_simpArrow___lambda__3(x_13, x_15, x_1, x_2, x_12, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = l_Lean_Meta_Simp_getConfig___rarg(x_5, x_6, x_7, x_8, x_9, x_10, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_12);
x_24 = l_Lean_Meta_isProp(x_12, x_7, x_8, x_9, x_10, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_13);
x_27 = l_Lean_Meta_isProp(x_13, x_7, x_8, x_9, x_10, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get_uint8(x_22, sizeof(void*)*2);
lean_dec(x_22);
lean_inc(x_12);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_12);
lean_inc(x_13);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_13);
if (x_30 == 0)
{
lean_object* x_73; 
x_73 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9;
x_33 = x_73;
goto block_72;
}
else
{
lean_object* x_74; 
x_74 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12;
x_33 = x_74;
goto block_72;
}
block_72:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_69; 
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__2;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_31);
x_41 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__4;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_69 = lean_unbox(x_25);
lean_dec(x_25);
if (x_69 == 0)
{
lean_object* x_70; 
x_70 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9;
x_43 = x_70;
goto block_68;
}
else
{
lean_object* x_71; 
x_71 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12;
x_43 = x_71;
goto block_68;
}
block_68:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_42);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__6;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_32);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_41);
x_51 = lean_unbox(x_28);
lean_dec(x_28);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_52 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__11;
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__8;
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
lean_inc(x_2);
x_56 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_2, x_55, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_29);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_Meta_Simp_simp_simpArrow___lambda__3(x_13, x_15, x_1, x_2, x_12, x_57, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_58);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__14;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__8;
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
lean_inc(x_2);
x_64 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_2, x_63, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_29);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Lean_Meta_Simp_simp_simpArrow___lambda__3(x_13, x_15, x_1, x_2, x_12, x_65, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_66);
return x_67;
}
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_27);
if (x_75 == 0)
{
return x_27;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_27, 0);
x_77 = lean_ctor_get(x_27, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_27);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_24);
if (x_79 == 0)
{
return x_24;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_24, 0);
x_81 = lean_ctor_get(x_24, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_24);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_95 = !lean_is_exclusive(x_14);
if (x_95 == 0)
{
return x_14;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_14, 0);
x_97 = lean_ctor_get(x_14, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_14);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("arrow ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpArrow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_simpArrow___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_10 = l_Lean_Meta_Simp_simp_simpForall___closed__8;
x_25 = lean_st_ref_get(x_8, x_9);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 3);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_ctor_get_uint8(x_27, sizeof(void*)*1);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = 0;
x_11 = x_30;
x_12 = x_29;
goto block_24;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_unbox(x_33);
lean_dec(x_33);
x_11 = x_35;
x_12 = x_34;
goto block_24;
}
block_24:
{
if (x_11 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4(x_1, x_10, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_inc(x_1);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_1);
x_16 = l_Lean_Meta_Simp_simp_simpArrow___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_10, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4(x_1, x_10, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
return x_23;
}
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_2 == x_3;
if (x_13 == 0)
{
size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_14 = 1;
x_15 = x_2 - x_14;
x_16 = lean_array_uget(x_1, x_15);
x_17 = l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1;
x_18 = lean_array_push(x_17, x_16);
x_19 = 0;
x_20 = 1;
lean_inc(x_8);
x_21 = l_Lean_Meta_mkLambdaFVars(x_18, x_4, x_19, x_20, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_24 = l_Lean_Meta_mkFunExt(x_22, x_8, x_9, x_10, x_11, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_2 = x_15;
x_4 = x_25;
x_12 = x_26;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_24);
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
x_32 = !lean_is_exclusive(x_21);
if (x_32 == 0)
{
return x_21;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_21, 0);
x_34 = lean_ctor_get(x_21, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_21);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_12);
return x_36;
}
}
}
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_10(x_1, x_5, x_6, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg___lambda__1), 11, 4);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
x_12 = 0;
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp___rarg(x_1, x_12, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLambda___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = 0;
x_13 = 1;
lean_inc(x_6);
lean_inc(x_1);
x_14 = l_Lean_Meta_mkLambdaFVars(x_1, x_11, x_12, x_13, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_14);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_15);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_array_get_size(x_1);
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_dec_lt(x_31, x_30);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_30);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_15);
lean_ctor_set(x_14, 0, x_33);
return x_14;
}
else
{
size_t x_34; size_t x_35; lean_object* x_36; 
lean_free_object(x_14);
x_34 = lean_usize_of_nat(x_30);
lean_dec(x_30);
x_35 = 0;
x_36 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1(x_1, x_34, x_35, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_28);
lean_dec(x_1);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_27);
lean_ctor_set(x_39, 1, x_15);
lean_ctor_set(x_36, 0, x_39);
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_36, 0);
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_36);
lean_ctor_set(x_15, 0, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_27);
lean_ctor_set(x_42, 1, x_15);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_free_object(x_15);
lean_dec(x_27);
x_44 = !lean_is_exclusive(x_36);
if (x_44 == 0)
{
return x_36;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_36, 0);
x_46 = lean_ctor_get(x_36, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_36);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_48 = lean_ctor_get(x_14, 0);
x_49 = lean_ctor_get(x_14, 1);
x_50 = lean_ctor_get(x_15, 0);
lean_inc(x_50);
lean_dec(x_15);
x_51 = lean_array_get_size(x_1);
x_52 = lean_unsigned_to_nat(0u);
x_53 = lean_nat_dec_lt(x_52, x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_51);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_50);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_48);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_14, 0, x_55);
return x_14;
}
else
{
size_t x_56; size_t x_57; lean_object* x_58; 
lean_free_object(x_14);
x_56 = lean_usize_of_nat(x_51);
lean_dec(x_51);
x_57 = 0;
x_58 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1(x_1, x_56, x_57, x_50, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_49);
lean_dec(x_1);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_59);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_48);
lean_ctor_set(x_63, 1, x_62);
if (lean_is_scalar(x_61)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_61;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_48);
x_65 = lean_ctor_get(x_58, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_58, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_67 = x_58;
} else {
 lean_dec_ref(x_58);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_69 = lean_ctor_get(x_14, 0);
x_70 = lean_ctor_get(x_14, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_14);
x_71 = lean_ctor_get(x_15, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 x_72 = x_15;
} else {
 lean_dec_ref(x_15);
 x_72 = lean_box(0);
}
x_73 = lean_array_get_size(x_1);
x_74 = lean_unsigned_to_nat(0u);
x_75 = lean_nat_dec_lt(x_74, x_73);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_73);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_71);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_69);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_70);
return x_78;
}
else
{
size_t x_79; size_t x_80; lean_object* x_81; 
x_79 = lean_usize_of_nat(x_73);
lean_dec(x_73);
x_80 = 0;
x_81 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1(x_1, x_79, x_80, x_71, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_70);
lean_dec(x_1);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_85 = lean_alloc_ctor(1, 1, 0);
} else {
 x_85 = x_72;
}
lean_ctor_set(x_85, 0, x_82);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_69);
lean_ctor_set(x_86, 1, x_85);
if (lean_is_scalar(x_84)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_84;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_83);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_72);
lean_dec(x_69);
x_88 = lean_ctor_get(x_81, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_81, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_90 = x_81;
} else {
 lean_dec_ref(x_81);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_14);
if (x_92 == 0)
{
return x_14;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_14, 0);
x_94 = lean_ctor_get(x_14, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_14);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLambda___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp), 9, 1);
lean_closure_set(x_11, 0, x_2);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpLambda___lambda__1___boxed), 10, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg), 10, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_Simp_simp_withNewLemmas___rarg(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_14;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_simpLambda___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_simpLambda___lambda__2), 10, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLambda(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_3, 3);
lean_dec(x_11);
lean_inc(x_1);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_3, 3, x_12);
x_13 = l_Lean_Meta_Simp_simp_simpLambda___closed__1;
x_14 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg(x_1, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
x_17 = lean_ctor_get(x_3, 2);
x_18 = lean_ctor_get(x_3, 4);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
lean_inc(x_1);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_1);
x_20 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_17);
lean_ctor_set(x_20, 3, x_19);
lean_ctor_set(x_20, 4, x_18);
x_21 = l_Lean_Meta_Simp_simp_simpLambda___closed__1;
x_22 = l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg(x_1, x_21, x_2, x_20, x_4, x_5, x_6, x_7, x_8, x_9);
return x_22;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_simpApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_isApp(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = l_Lean_Meta_Simp_simp(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = l_Lean_Meta_Simp_simp_congr(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Meta_Simp_simp_congr___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_16 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f(x_14, x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_2);
{
lean_object* _tmp_2 = x_15;
lean_object* _tmp_3 = x_2;
lean_object* _tmp_11 = x_18;
x_3 = _tmp_2;
x_4 = _tmp_3;
x_12 = _tmp_11;
}
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_16, 0);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_16, 0, x_24);
return x_16;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
lean_dec(x_17);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_16, 0, x_28);
return x_16;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_16, 1);
lean_inc(x_29);
lean_dec(x_16);
x_30 = lean_ctor_get(x_17, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_31 = x_17;
} else {
 lean_dec_ref(x_17);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(1, 1, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_30);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_29);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_16);
if (x_36 == 0)
{
return x_16;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_16, 0);
x_38 = lean_ctor_get(x_16, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_16);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_congr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = l_Lean_Meta_Simp_simp_congrDefault(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_congr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_simp_congr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Expr_getAppFn(x_1);
x_11 = l_Lean_Expr_isConst(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_10);
x_12 = l_Lean_Meta_Simp_simp_congrDefault(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = l_Lean_Meta_Simp_getCongrLemmas___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Expr_constName_x21(x_10);
lean_dec(x_10);
x_17 = l_Lean_Meta_CongrLemmas_get(x_14, x_16);
x_18 = l_Lean_Meta_Simp_simp_congr___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_List_forIn_loop___at_Lean_Meta_Simp_simp_congr___spec__1(x_1, x_18, x_17, x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l_Lean_Meta_Simp_simp_congrDefault(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_19, 0);
lean_dec(x_25);
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_26);
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_dec(x_19);
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_2, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__1___boxed), 11, 0);
return x_1;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_67; uint8_t x_68; 
x_14 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___closed__1;
x_67 = lean_array_get_size(x_2);
x_68 = lean_nat_dec_lt(x_4, x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; 
x_69 = lean_box(0);
x_15 = x_69;
goto block_66;
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_70 = l_Lean_Meta_instInhabitedParamInfo;
x_71 = lean_array_get(x_70, x_2, x_4);
x_72 = lean_ctor_get_uint8(x_71, sizeof(void*)*1 + 1);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_73 = l_Lean_Meta_Simp_simp(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_76 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr(x_3, x_74, x_9, x_10, x_11, x_12, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_box(0);
x_80 = lean_apply_11(x_14, x_77, x_4, x_79, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_78);
return x_80;
}
else
{
uint8_t x_81; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_81 = !lean_is_exclusive(x_76);
if (x_81 == 0)
{
return x_76;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_76, 0);
x_83 = lean_ctor_get(x_76, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_76);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_85 = !lean_is_exclusive(x_73);
if (x_85 == 0)
{
return x_73;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_73, 0);
x_87 = lean_ctor_get(x_73, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_73);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
lean_object* x_89; 
x_89 = lean_box(0);
x_15 = x_89;
goto block_66;
}
}
block_66:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_15);
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_17 = lean_infer_type(x_16, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_20 = l_Lean_Meta_whnfD(x_18, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Expr_isArrow(x_21);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1;
x_25 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_26 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1(x_1, x_24, x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_29 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongrFun(x_3, x_27, x_9, x_10, x_11, x_12, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_box(0);
x_33 = lean_apply_11(x_14, x_30, x_4, x_32, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_31);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
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
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_26);
if (x_38 == 0)
{
return x_26;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_26, 0);
x_40 = lean_ctor_get(x_26, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_26);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_42 = l_Lean_Meta_Simp_simp(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_22);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_45 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_mkCongr(x_3, x_43, x_9, x_10, x_11, x_12, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_box(0);
x_49 = lean_apply_11(x_14, x_46, x_4, x_48, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_47);
return x_49;
}
else
{
uint8_t x_50; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_50 = !lean_is_exclusive(x_45);
if (x_50 == 0)
{
return x_45;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_45, 0);
x_52 = lean_ctor_get(x_45, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_45);
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
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_42);
if (x_54 == 0)
{
return x_42;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_42, 0);
x_56 = lean_ctor_get(x_42, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_42);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_20);
if (x_58 == 0)
{
return x_20;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_20, 0);
x_60 = lean_ctor_get(x_20, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_20);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_17);
if (x_62 == 0)
{
return x_17;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_17, 0);
x_64 = lean_ctor_get(x_17, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_17);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("app [");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" hasFwdDeps: ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_4 < x_3;
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_16 = lean_array_uget(x_2, x_4);
x_26 = lean_ctor_get(x_5, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_5, 1);
lean_inc(x_27);
lean_dec(x_5);
x_28 = l_Lean_Meta_Simp_simp_simpForall___closed__8;
x_89 = lean_st_ref_get(x_12, x_13);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_90, 3);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_ctor_get_uint8(x_91, sizeof(void*)*1);
lean_dec(x_91);
if (x_92 == 0)
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_89, 1);
lean_inc(x_93);
lean_dec(x_89);
x_94 = 0;
x_29 = x_94;
x_30 = x_93;
goto block_88;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_95 = lean_ctor_get(x_89, 1);
lean_inc(x_95);
lean_dec(x_89);
x_96 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_95);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = lean_unbox(x_97);
lean_dec(x_97);
x_29 = x_99;
x_30 = x_98;
goto block_88;
}
block_25:
{
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
else
{
lean_object* x_21; size_t x_22; size_t x_23; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = 1;
x_23 = x_4 + x_22;
x_4 = x_23;
x_5 = x_21;
x_13 = x_18;
goto _start;
}
}
block_88:
{
if (x_29 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_32 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2(x_16, x_1, x_26, x_27, x_31, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_30);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_17 = x_33;
x_18 = x_34;
goto block_25;
}
else
{
uint8_t x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_35 = !lean_is_exclusive(x_32);
if (x_35 == 0)
{
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_32, 0);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_32);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
lean_inc(x_27);
x_39 = l_Nat_repr(x_27);
x_40 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__2;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4;
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_array_get_size(x_1);
x_47 = l_Nat_repr(x_46);
x_48 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__4;
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
lean_inc(x_16);
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_16);
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__6;
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Lean_Meta_instInhabitedParamInfo;
x_58 = lean_array_get(x_57, x_1, x_27);
x_59 = lean_ctor_get_uint8(x_58, sizeof(void*)*1 + 1);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__11;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_28, x_63, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_30);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_67 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2(x_16, x_1, x_26, x_27, x_65, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_66);
lean_dec(x_65);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_17 = x_68;
x_18 = x_69;
goto block_25;
}
else
{
uint8_t x_70; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_70 = !lean_is_exclusive(x_67);
if (x_70 == 0)
{
return x_67;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_67, 0);
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_67);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_74 = l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__14;
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_56);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_28, x_77, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_30);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_81 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2(x_16, x_1, x_26, x_27, x_79, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_80);
lean_dec(x_79);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_17 = x_82;
x_18 = x_83;
goto block_25;
}
else
{
uint8_t x_84; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_84 = !lean_is_exclusive(x_81);
if (x_84 == 0)
{
return x_81;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_81, 0);
x_86 = lean_ctor_get(x_81, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_81);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_congrDefault___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_array_set(x_2, x_3, x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_3, x_15);
lean_dec(x_3);
x_1 = x_12;
x_2 = x_14;
x_3 = x_16;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_18 = lean_array_get_size(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_18);
lean_inc(x_1);
x_19 = l_Lean_Meta_getFunInfoNArgs(x_1, x_18, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Meta_Simp_simp(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_29 = 0;
x_30 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1(x_22, x_2, x_28, x_29, x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_2);
lean_dec(x_22);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 0);
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_30);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_30);
if (x_38 == 0)
{
return x_30;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_30, 0);
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_30);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_22);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_23);
if (x_42 == 0)
{
return x_23;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_23, 0);
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_23);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_19);
if (x_46 == 0)
{
return x_19;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_19, 0);
x_48 = lean_ctor_get(x_19, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_19);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_congrDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Expr_getAppNumArgsAux(x_1, x_10);
x_12 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_inc(x_11);
x_13 = lean_mk_array(x_11, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_11, x_14);
lean_dec(x_11);
x_16 = !lean_is_exclusive(x_3);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_3, 3);
lean_dec(x_17);
lean_inc(x_1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_3, 3, x_18);
x_19 = l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_congrDefault___spec__2(x_1, x_13, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_3, 0);
x_21 = lean_ctor_get(x_3, 1);
x_22 = lean_ctor_get(x_3, 2);
x_23 = lean_ctor_get(x_3, 4);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_3);
lean_inc(x_1);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_1);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_21);
lean_ctor_set(x_25, 2, x_22);
lean_ctor_set(x_25, 3, x_24);
lean_ctor_set(x_25, 4, x_23);
x_26 = l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_congrDefault___spec__2(x_1, x_13, x_15, x_2, x_25, x_4, x_5, x_6, x_7, x_8, x_9);
return x_26;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_box(0);
x_12 = lean_box(x_1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__2;
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__3;
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("congr");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__4;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("processCongrHypothesis ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" failed ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; 
x_16 = x_6 < x_5;
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_28; lean_object* x_29; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_18 = lean_array_uget(x_4, x_6);
x_39 = lean_ctor_get(x_7, 1);
lean_inc(x_39);
lean_dec(x_7);
x_40 = l_Lean_instInhabitedExpr;
x_41 = lean_array_get(x_40, x_2, x_18);
lean_dec(x_18);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_41);
x_42 = l_Lean_Meta_Simp_simp_processCongrHypothesis(x_41, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; uint8_t x_44; 
lean_dec(x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_unbox(x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_39);
x_28 = x_47;
x_29 = x_45;
goto block_38;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_39);
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_dec(x_42);
x_49 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__1;
x_28 = x_49;
x_29 = x_48;
goto block_38;
}
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
lean_dec(x_42);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6;
x_83 = lean_st_ref_get(x_14, x_50);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_84, 3);
lean_inc(x_85);
lean_dec(x_84);
x_86 = lean_ctor_get_uint8(x_85, sizeof(void*)*1);
lean_dec(x_85);
if (x_86 == 0)
{
lean_object* x_87; uint8_t x_88; 
x_87 = lean_ctor_get(x_83, 1);
lean_inc(x_87);
lean_dec(x_83);
x_88 = 0;
x_52 = x_88;
x_53 = x_87;
goto block_82;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_83, 1);
lean_inc(x_89);
lean_dec(x_83);
x_90 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_51, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_unbox(x_91);
lean_dec(x_91);
x_52 = x_93;
x_53 = x_92;
goto block_82;
}
block_82:
{
if (x_52 == 0)
{
lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_41);
x_54 = lean_box(0);
x_55 = lean_unbox(x_39);
lean_dec(x_39);
x_56 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___lambda__1(x_55, x_54, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_53);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_28 = x_57;
x_29 = x_58;
goto block_38;
}
else
{
lean_object* x_59; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_59 = lean_infer_type(x_41, x_11, x_12, x_13, x_14, x_53);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
lean_inc(x_1);
x_62 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_62, 0, x_1);
x_63 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__8;
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__10;
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_60);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_51, x_70, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_61);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = lean_unbox(x_39);
lean_dec(x_39);
x_75 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___lambda__1(x_74, x_72, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_73);
lean_dec(x_72);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_28 = x_76;
x_29 = x_77;
goto block_38;
}
else
{
uint8_t x_78; 
lean_dec(x_39);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_59);
if (x_78 == 0)
{
return x_59;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_59, 0);
x_80 = lean_ctor_get(x_59, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_59);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
}
block_27:
{
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
else
{
lean_object* x_23; size_t x_24; size_t x_25; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = 1;
x_25 = x_6 + x_24;
x_6 = x_25;
x_7 = x_23;
x_15 = x_20;
goto _start;
}
}
block_38:
{
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_3);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_3);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_19 = x_32;
x_20 = x_29;
goto block_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_ctor_get(x_28, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_19 = x_37;
x_20 = x_29;
goto block_27;
}
}
}
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_le(x_7, x_6);
lean_dec(x_6);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_3(x_1, x_2, x_3, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__3___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 3);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_ctor_get(x_13, 3);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
lean_dec(x_2);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_13 = l_Lean_Meta_instantiateMVars(x_1, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_mkAppN(x_2, x_3);
x_17 = l_Lean_Meta_instantiateMVars(x_16, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_17, 0, x_22);
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_24);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_14);
x_29 = !lean_is_exclusive(x_17);
if (x_29 == 0)
{
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_17, 0);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_17);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_13);
if (x_33 == 0)
{
return x_13;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_13, 0);
x_35 = lean_ctor_get(x_13, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_13);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" synthesizeArgs failed");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
x_16 = lean_ctor_get(x_8, 2);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_1);
x_17 = l_Lean_Meta_Simp_synthesizeArgs(x_1, x_2, x_3, x_16, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_21 = x_17;
} else {
 lean_dec_ref(x_17);
 x_21 = lean_box(0);
}
x_22 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6;
x_37 = lean_st_ref_get(x_14, x_20);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 3);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_ctor_get_uint8(x_39, sizeof(void*)*1);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = 0;
x_23 = x_42;
x_24 = x_41;
goto block_36;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_dec(x_37);
x_44 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_22, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_unbox(x_45);
lean_dec(x_45);
x_23 = x_47;
x_24 = x_46;
goto block_36;
}
block_36:
{
if (x_23 == 0)
{
lean_object* x_25; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
if (lean_is_scalar(x_21)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_21;
}
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_21);
x_26 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_26, 0, x_1);
x_27 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_22, x_30, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_24);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_4);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_4);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_4);
lean_dec(x_1);
x_48 = lean_ctor_get(x_17, 1);
lean_inc(x_48);
lean_dec(x_17);
x_49 = lean_box(0);
x_50 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__3(x_5, x_6, x_2, x_49, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_48);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_17);
if (x_51 == 0)
{
return x_17;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_17, 0);
x_53 = lean_ctor_get(x_17, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_17);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" not modified");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_dec(x_8);
if (x_1 == 0)
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6;
x_32 = lean_st_ref_get(x_15, x_16);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 3);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get_uint8(x_34, sizeof(void*)*1);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = 0;
x_18 = x_37;
x_19 = x_36;
goto block_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unbox(x_40);
lean_dec(x_40);
x_18 = x_42;
x_19 = x_41;
goto block_31;
}
block_31:
{
if (x_18 == 0)
{
lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_2);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_21 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_21, 0, x_3);
x_22 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__2;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_17, x_25, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_2);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_2);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_box(0);
x_44 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4(x_3, x_4, x_5, x_2, x_6, x_7, x_43, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_44;
}
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_9);
x_18 = l_Lean_Expr_appFn_x21(x_1);
x_19 = l_Lean_Expr_appArg_x21(x_18);
lean_dec(x_18);
x_20 = l_Lean_Expr_appArg_x21(x_1);
lean_dec(x_1);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_21 = l_Lean_Meta_isExprDefEq(x_19, x_2, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_21);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_21, 0);
lean_dec(x_25);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_3);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; size_t x_33; size_t x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_dec(x_21);
x_29 = 0;
x_30 = lean_box(x_29);
lean_inc(x_3);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_3);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_array_get_size(x_4);
x_33 = lean_usize_of_nat(x_32);
lean_dec(x_32);
x_34 = 0;
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_3);
lean_inc(x_5);
x_35 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1(x_5, x_6, x_3, x_4, x_33, x_34, x_31, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_28);
lean_dec(x_4);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_dec(x_35);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_box(0);
x_41 = lean_unbox(x_39);
lean_dec(x_39);
x_42 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5(x_41, x_3, x_5, x_6, x_7, x_20, x_8, x_40, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_38);
return x_42;
}
else
{
uint8_t x_43; 
lean_dec(x_36);
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_35);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_35, 0);
lean_dec(x_44);
x_45 = lean_ctor_get(x_37, 0);
lean_inc(x_45);
lean_dec(x_37);
lean_ctor_set(x_35, 0, x_45);
return x_35;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_35, 1);
lean_inc(x_46);
lean_dec(x_35);
x_47 = lean_ctor_get(x_37, 0);
lean_inc(x_47);
lean_dec(x_37);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_35);
if (x_49 == 0)
{
return x_35;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_35, 0);
x_51 = lean_ctor_get(x_35, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_35);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_53 = !lean_is_exclusive(x_21);
if (x_53 == 0)
{
return x_21;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_21, 0);
x_55 = lean_ctor_get(x_21, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_21);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_12);
x_14 = l_Lean_Meta_mkConstWithFreshMVarLevels(x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_15);
x_17 = lean_infer_type(x_15, x_7, x_8, x_9, x_10, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_box(0);
x_21 = 1;
x_22 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_23 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_18, x_21, x_20, x_22, x_7, x_8, x_9, x_10, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_27 = lean_ctor_get(x_23, 1);
x_28 = lean_ctor_get(x_23, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_24, 0);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_ctor_get(x_25, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_array_get_size(x_13);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_lt(x_33, x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_32);
lean_free_object(x_23);
x_35 = lean_box(0);
x_36 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(x_31, x_2, x_20, x_13, x_12, x_29, x_30, x_15, x_35, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_le(x_32, x_32);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_32);
lean_free_object(x_23);
x_38 = lean_box(0);
x_39 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(x_31, x_2, x_20, x_13, x_12, x_29, x_30, x_15, x_38, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
return x_39;
}
else
{
size_t x_40; size_t x_41; uint8_t x_42; 
x_40 = 0;
x_41 = lean_usize_of_nat(x_32);
lean_dec(x_32);
x_42 = l_Array_anyMUnsafe_any___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__2(x_29, x_13, x_40, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_free_object(x_23);
x_43 = lean_box(0);
x_44 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(x_31, x_2, x_20, x_13, x_12, x_29, x_30, x_15, x_43, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
return x_44;
}
else
{
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_23, 0, x_20);
return x_23;
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_45 = lean_ctor_get(x_23, 1);
lean_inc(x_45);
lean_dec(x_23);
x_46 = lean_ctor_get(x_24, 0);
lean_inc(x_46);
lean_dec(x_24);
x_47 = lean_ctor_get(x_25, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_25, 1);
lean_inc(x_48);
lean_dec(x_25);
x_49 = lean_array_get_size(x_13);
x_50 = lean_unsigned_to_nat(0u);
x_51 = lean_nat_dec_lt(x_50, x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_49);
x_52 = lean_box(0);
x_53 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(x_48, x_2, x_20, x_13, x_12, x_46, x_47, x_15, x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
return x_53;
}
else
{
uint8_t x_54; 
x_54 = lean_nat_dec_le(x_49, x_49);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_49);
x_55 = lean_box(0);
x_56 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(x_48, x_2, x_20, x_13, x_12, x_46, x_47, x_15, x_55, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
return x_56;
}
else
{
size_t x_57; size_t x_58; uint8_t x_59; 
x_57 = 0;
x_58 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_59 = l_Array_anyMUnsafe_any___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__2(x_46, x_13, x_57, x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_box(0);
x_61 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(x_48, x_2, x_20, x_13, x_12, x_46, x_47, x_15, x_60, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
return x_61;
}
else
{
lean_object* x_62; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_20);
lean_ctor_set(x_62, 1, x_45);
return x_62;
}
}
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_23);
if (x_63 == 0)
{
return x_23;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_23, 0);
x_65 = lean_ctor_get(x_23, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_23);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_67 = !lean_is_exclusive(x_17);
if (x_67 == 0)
{
return x_17;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_17, 0);
x_69 = lean_ctor_get(x_17, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_17);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_71 = !lean_is_exclusive(x_14);
if (x_71 == 0)
{
return x_14;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_14, 0);
x_73 = lean_ctor_get(x_14, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_14);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", ");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (x_4 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__7(x_1, x_2, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_inc(x_2);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_2);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_17);
x_24 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_3, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__7(x_1, x_2, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_26);
return x_27;
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_simp_simpForall___closed__8;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__2), 10, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__3;
x_2 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__2;
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg), 10, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__1;
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___boxed), 12, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_11);
x_13 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__4;
x_14 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg), 10, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_12);
x_15 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__3___rarg(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_15 = 1;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_dec(x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_13 = l_Lean_Meta_Simp_Result_getProof(x_1, x_8, x_9, x_10, x_11, x_12);
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
lean_inc(x_8);
x_18 = l_Lean_Meta_mkLambdaFVars(x_2, x_14, x_16, x_17, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_21 = l_Lean_Meta_isExprDefEq(x_3, x_19, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg(x_24);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_dec(x_21);
x_31 = lean_box(0);
x_32 = l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__1(x_1, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_30);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_21);
if (x_33 == 0)
{
return x_21;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_21, 0);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_21);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_18);
if (x_37 == 0)
{
return x_18;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_18, 0);
x_39 = lean_ctor_get(x_18, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_18);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_13);
if (x_41 == 0)
{
return x_13;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_13, 0);
x_43 = lean_ctor_get(x_13, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_13);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_4) == 5)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_dec(x_4);
x_17 = lean_array_set(x_5, x_6, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_6, x_18);
lean_dec(x_6);
x_4 = x_15;
x_5 = x_17;
x_6 = x_19;
goto _start;
}
else
{
lean_object* x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; 
lean_dec(x_6);
x_21 = lean_ctor_get(x_3, 0);
lean_inc(x_21);
x_22 = 0;
x_23 = 1;
lean_inc(x_10);
x_24 = l_Lean_Meta_mkLambdaFVars(x_5, x_21, x_22, x_23, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_27 = l_Lean_Meta_isExprDefEq(x_4, x_25, x_10, x_11, x_12, x_13, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg(x_30);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_27, 1);
lean_inc(x_36);
lean_dec(x_27);
x_37 = lean_box(0);
x_38 = l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__2(x_3, x_2, x_1, x_37, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_27);
if (x_39 == 0)
{
return x_27;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_27, 0);
x_41 = lean_ctor_get(x_27, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_27);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_24);
if (x_43 == 0)
{
return x_24;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_24, 0);
x_45 = lean_ctor_get(x_24, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_24);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at_Lean_Meta_Simp_simp_simpLambda___spec__2___rarg___lambda__1), 11, 4);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_1, x_11, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__2___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_instantiateMVars(x_1, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
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
x_13 = l_Lean_Meta_Simp_simp(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Expr_appArg_x21(x_1);
lean_dec(x_1);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Expr_getAppNumArgsAux(x_16, x_17);
x_19 = l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1;
lean_inc(x_18);
x_20 = lean_mk_array(x_18, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_18, x_21);
lean_dec(x_18);
x_23 = l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1(x_2, x_3, x_14, x_16, x_20, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = l_Lean_Expr_appFn_x21(x_3);
x_13 = l_Lean_Expr_appArg_x21(x_12);
lean_dec(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__1___boxed), 9, 1);
lean_closure_set(x_14, 0, x_13);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__2), 12, 3);
lean_closure_set(x_15, 0, x_3);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
x_16 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_simp_simpForall___spec__1___rarg), 10, 2);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_15);
x_17 = l_Lean_Meta_Simp_simp_withNewLemmas___rarg(x_2, x_16, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_17;
}
}
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = lean_infer_type(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__3), 11, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__2___rarg(x_11, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp_simpLoop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at_Lean_Meta_Simp_simp_simpLoop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_Lean_Meta_withLocalDecl___at_Lean_Meta_Simp_simp_simpForall___spec__2___rarg(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_simp_simpForall___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_simp_simpForall___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpForall___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_simp_simpForall___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Simp_simp___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Meta_Simp_simp___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_Simp_simp___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at_Lean_Meta_Simp_simp___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = l_Array_foldrMUnsafe_fold___at_Lean_Meta_Simp_simp_simpLambda___spec__1(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Meta_Simp_simp_simpLambda___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_simp_simpLambda___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_5);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_15 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_16 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1(x_1, x_2, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___lambda__1(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_17 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_18 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1(x_1, x_2, x_3, x_4, x_16, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_4);
lean_dec(x_2);
return x_18;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__2(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_1);
lean_dec(x_1);
x_18 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
return x_18;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6___boxed(lean_object** _args) {
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
_start:
{
lean_object* x_18; 
x_18 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_18;
}
}
lean_object* l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Expr_withAppAux___at_Lean_Meta_Simp_simp_processCongrHypothesis___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Simp_simp_processCongrHypothesis___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_Simp_main___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_Simp_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = 2;
lean_ctor_set_uint8(x_10, 5, x_12);
x_13 = lean_st_ref_get(x_7, x_8);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Meta_Simp_main___closed__1;
x_16 = lean_st_mk_ref(x_15, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_7);
lean_inc(x_17);
x_19 = l_Lean_Meta_Simp_simp(x_1, x_3, x_2, x_17, x_4, x_5, x_6, x_7, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_st_ref_get(x_7, x_21);
lean_dec(x_7);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_st_ref_get(x_17, x_23);
lean_dec(x_17);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_20);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_20);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_17);
lean_dec(x_7);
x_29 = !lean_is_exclusive(x_19);
if (x_29 == 0)
{
return x_19;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_19, 0);
x_31 = lean_ctor_get(x_19, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_19);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
uint8_t x_33; uint8_t x_34; uint8_t x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_33 = lean_ctor_get_uint8(x_10, 0);
x_34 = lean_ctor_get_uint8(x_10, 1);
x_35 = lean_ctor_get_uint8(x_10, 2);
x_36 = lean_ctor_get_uint8(x_10, 3);
x_37 = lean_ctor_get_uint8(x_10, 4);
x_38 = lean_ctor_get_uint8(x_10, 6);
x_39 = lean_ctor_get_uint8(x_10, 7);
x_40 = lean_ctor_get_uint8(x_10, 8);
x_41 = lean_ctor_get_uint8(x_10, 9);
x_42 = lean_ctor_get_uint8(x_10, 10);
lean_dec(x_10);
x_43 = 2;
x_44 = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(x_44, 0, x_33);
lean_ctor_set_uint8(x_44, 1, x_34);
lean_ctor_set_uint8(x_44, 2, x_35);
lean_ctor_set_uint8(x_44, 3, x_36);
lean_ctor_set_uint8(x_44, 4, x_37);
lean_ctor_set_uint8(x_44, 5, x_43);
lean_ctor_set_uint8(x_44, 6, x_38);
lean_ctor_set_uint8(x_44, 7, x_39);
lean_ctor_set_uint8(x_44, 8, x_40);
lean_ctor_set_uint8(x_44, 9, x_41);
lean_ctor_set_uint8(x_44, 10, x_42);
lean_ctor_set(x_4, 0, x_44);
x_45 = lean_st_ref_get(x_7, x_8);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Meta_Simp_main___closed__1;
x_48 = lean_st_mk_ref(x_47, x_46);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_7);
lean_inc(x_49);
x_51 = l_Lean_Meta_Simp_simp(x_1, x_3, x_2, x_49, x_4, x_5, x_6, x_7, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_st_ref_get(x_7, x_53);
lean_dec(x_7);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_st_ref_get(x_49, x_55);
lean_dec(x_49);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_52);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_49);
lean_dec(x_7);
x_60 = lean_ctor_get(x_51, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_51, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_62 = x_51;
} else {
 lean_dec_ref(x_51);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; uint8_t x_73; uint8_t x_74; uint8_t x_75; uint8_t x_76; uint8_t x_77; uint8_t x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_64 = lean_ctor_get(x_4, 0);
x_65 = lean_ctor_get(x_4, 1);
x_66 = lean_ctor_get(x_4, 2);
x_67 = lean_ctor_get(x_4, 3);
x_68 = lean_ctor_get(x_4, 4);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_4);
x_69 = lean_ctor_get_uint8(x_64, 0);
x_70 = lean_ctor_get_uint8(x_64, 1);
x_71 = lean_ctor_get_uint8(x_64, 2);
x_72 = lean_ctor_get_uint8(x_64, 3);
x_73 = lean_ctor_get_uint8(x_64, 4);
x_74 = lean_ctor_get_uint8(x_64, 6);
x_75 = lean_ctor_get_uint8(x_64, 7);
x_76 = lean_ctor_get_uint8(x_64, 8);
x_77 = lean_ctor_get_uint8(x_64, 9);
x_78 = lean_ctor_get_uint8(x_64, 10);
if (lean_is_exclusive(x_64)) {
 x_79 = x_64;
} else {
 lean_dec_ref(x_64);
 x_79 = lean_box(0);
}
x_80 = 2;
if (lean_is_scalar(x_79)) {
 x_81 = lean_alloc_ctor(0, 0, 11);
} else {
 x_81 = x_79;
}
lean_ctor_set_uint8(x_81, 0, x_69);
lean_ctor_set_uint8(x_81, 1, x_70);
lean_ctor_set_uint8(x_81, 2, x_71);
lean_ctor_set_uint8(x_81, 3, x_72);
lean_ctor_set_uint8(x_81, 4, x_73);
lean_ctor_set_uint8(x_81, 5, x_80);
lean_ctor_set_uint8(x_81, 6, x_74);
lean_ctor_set_uint8(x_81, 7, x_75);
lean_ctor_set_uint8(x_81, 8, x_76);
lean_ctor_set_uint8(x_81, 9, x_77);
lean_ctor_set_uint8(x_81, 10, x_78);
x_82 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_65);
lean_ctor_set(x_82, 2, x_66);
lean_ctor_set(x_82, 3, x_67);
lean_ctor_set(x_82, 4, x_68);
x_83 = lean_st_ref_get(x_7, x_8);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_Lean_Meta_Simp_main___closed__1;
x_86 = lean_st_mk_ref(x_85, x_84);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
lean_inc(x_7);
lean_inc(x_87);
x_89 = l_Lean_Meta_Simp_simp(x_1, x_3, x_2, x_87, x_82, x_5, x_6, x_7, x_88);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_st_ref_get(x_7, x_91);
lean_dec(x_7);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_94 = lean_st_ref_get(x_87, x_93);
lean_dec(x_87);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_96 = x_94;
} else {
 lean_dec_ref(x_94);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_90);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_87);
lean_dec(x_7);
x_98 = lean_ctor_get(x_89, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_89, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_100 = x_89;
} else {
 lean_dec_ref(x_89);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
}
lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("True");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("discharge");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__4;
x_2 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("maximum discharge depth has been reached");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 4);
lean_inc(x_13);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
x_15 = lean_nat_dec_le(x_14, x_13);
lean_dec(x_14);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_2);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_2, 4);
lean_dec(x_17);
x_18 = lean_ctor_get(x_2, 3);
lean_dec(x_18);
x_19 = lean_ctor_get(x_2, 2);
lean_dec(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_dec(x_20);
x_21 = lean_ctor_get(x_2, 0);
lean_dec(x_21);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_13, x_22);
lean_dec(x_13);
lean_ctor_set(x_2, 4, x_23);
x_24 = l_Lean_Meta_Simp_DefaultMethods_methods;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l_Lean_Meta_Simp_simp(x_1, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2;
x_31 = l_Lean_Expr_isConstOf(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_27);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = lean_box(0);
lean_ctor_set(x_25, 0, x_32);
return x_25;
}
else
{
lean_object* x_33; 
lean_free_object(x_25);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_33 = l_Lean_Meta_Simp_Result_getProof(x_27, x_4, x_5, x_6, x_7, x_28);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Meta_mkOfEqTrue(x_34, x_4, x_5, x_6, x_7, x_35);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_36, 0, x_39);
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_36, 0);
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_36);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_40);
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
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_36, 0);
lean_dec(x_45);
x_46 = lean_box(0);
lean_ctor_set_tag(x_36, 0);
lean_ctor_set(x_36, 0, x_46);
return x_36;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_36, 1);
lean_inc(x_47);
lean_dec(x_36);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_50 = !lean_is_exclusive(x_33);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_33, 0);
lean_dec(x_51);
x_52 = lean_box(0);
lean_ctor_set_tag(x_33, 0);
lean_ctor_set(x_33, 0, x_52);
return x_33;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_33, 1);
lean_inc(x_53);
lean_dec(x_33);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_25, 0);
x_57 = lean_ctor_get(x_25, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_25);
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
x_59 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2;
x_60 = l_Lean_Expr_isConstOf(x_58, x_59);
lean_dec(x_58);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_56);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_57);
return x_62;
}
else
{
lean_object* x_63; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_63 = l_Lean_Meta_Simp_Result_getProof(x_56, x_4, x_5, x_6, x_7, x_57);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = l_Lean_Meta_mkOfEqTrue(x_64, x_4, x_5, x_6, x_7, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_69 = x_66;
} else {
 lean_dec_ref(x_66);
 x_69 = lean_box(0);
}
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_67);
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_73 = x_66;
} else {
 lean_dec_ref(x_66);
 x_73 = lean_box(0);
}
x_74 = lean_box(0);
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_73;
 lean_ctor_set_tag(x_75, 0);
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_76 = lean_ctor_get(x_63, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_77 = x_63;
} else {
 lean_dec_ref(x_63);
 x_77 = lean_box(0);
}
x_78 = lean_box(0);
if (lean_is_scalar(x_77)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_77;
 lean_ctor_set_tag(x_79, 0);
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_80 = !lean_is_exclusive(x_25);
if (x_80 == 0)
{
return x_25;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_25, 0);
x_82 = lean_ctor_get(x_25, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_25);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_2);
x_84 = lean_unsigned_to_nat(1u);
x_85 = lean_nat_add(x_13, x_84);
lean_dec(x_13);
x_86 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_86, 0, x_9);
lean_ctor_set(x_86, 1, x_10);
lean_ctor_set(x_86, 2, x_11);
lean_ctor_set(x_86, 3, x_12);
lean_ctor_set(x_86, 4, x_85);
x_87 = l_Lean_Meta_Simp_DefaultMethods_methods;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_88 = l_Lean_Meta_Simp_simp(x_1, x_87, x_86, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = lean_ctor_get(x_89, 0);
lean_inc(x_92);
x_93 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2;
x_94 = l_Lean_Expr_isConstOf(x_92, x_93);
lean_dec(x_92);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_89);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_95 = lean_box(0);
if (lean_is_scalar(x_91)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_91;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_90);
return x_96;
}
else
{
lean_object* x_97; 
lean_dec(x_91);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_97 = l_Lean_Meta_Simp_Result_getProof(x_89, x_4, x_5, x_6, x_7, x_90);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
x_100 = l_Lean_Meta_mkOfEqTrue(x_98, x_4, x_5, x_6, x_7, x_99);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_103 = x_100;
} else {
 lean_dec_ref(x_100);
 x_103 = lean_box(0);
}
x_104 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_104, 0, x_101);
if (lean_is_scalar(x_103)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_103;
}
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_102);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_100, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_107 = x_100;
} else {
 lean_dec_ref(x_100);
 x_107 = lean_box(0);
}
x_108 = lean_box(0);
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_107;
 lean_ctor_set_tag(x_109, 0);
}
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_106);
return x_109;
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_110 = lean_ctor_get(x_97, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_111 = x_97;
} else {
 lean_dec_ref(x_97);
 x_111 = lean_box(0);
}
x_112 = lean_box(0);
if (lean_is_scalar(x_111)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_111;
 lean_ctor_set_tag(x_113, 0);
}
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_110);
return x_113;
}
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_114 = lean_ctor_get(x_88, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_88, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_116 = x_88;
} else {
 lean_dec_ref(x_88);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
}
else
{
lean_object* x_118; uint8_t x_119; lean_object* x_120; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_118 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__4;
x_130 = lean_st_ref_get(x_7, x_8);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_131, 3);
lean_inc(x_132);
lean_dec(x_131);
x_133 = lean_ctor_get_uint8(x_132, sizeof(void*)*1);
lean_dec(x_132);
if (x_133 == 0)
{
lean_object* x_134; uint8_t x_135; 
x_134 = lean_ctor_get(x_130, 1);
lean_inc(x_134);
lean_dec(x_130);
x_135 = 0;
x_119 = x_135;
x_120 = x_134;
goto block_129;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; 
x_136 = lean_ctor_get(x_130, 1);
lean_inc(x_136);
lean_dec(x_130);
x_137 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_118, x_2, x_3, x_4, x_5, x_6, x_7, x_136);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec(x_137);
x_140 = lean_unbox(x_138);
lean_dec(x_138);
x_119 = x_140;
x_120 = x_139;
goto block_129;
}
block_129:
{
lean_object* x_121; 
x_121 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__5;
if (x_119 == 0)
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_box(0);
x_123 = lean_apply_8(x_121, x_122, x_2, x_3, x_4, x_5, x_6, x_7, x_120);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_124 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__7;
x_125 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_118, x_124, x_2, x_3, x_4, x_5, x_6, x_7, x_120);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_apply_8(x_121, x_126, x_2, x_3, x_4, x_5, x_6, x_7, x_127);
return x_128;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_DefaultMethods_pre), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_DefaultMethods_post), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_Simp_DefaultMethods_methods___closed__1;
x_2 = l_Lean_Meta_Simp_DefaultMethods_methods___closed__2;
x_3 = l_Lean_Meta_Simp_DefaultMethods_methods___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Simp_DefaultMethods_methods() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Simp_DefaultMethods_methods___closed__4;
return x_1;
}
}
lean_object* l_Lean_Meta_Simp_DefaultMethods_post(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Meta_Simp_DefaultMethods_methods___closed__3;
x_10 = l_Lean_Meta_Simp_postDefault(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_Simp_DefaultMethods_pre(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Meta_Simp_DefaultMethods_methods___closed__3;
x_10 = l_Lean_Meta_Simp_preDefault(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_simp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = l_Lean_Meta_Simp_DefaultMethods_methods;
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_main), 8, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_9);
x_11 = l_Lean_Meta_Simp_simp_simpForall___closed__7;
x_12 = l_Lean_profileitM___at_Lean_Meta_synthInstance_x3f___spec__1___rarg(x_11, x_8, x_10, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_8);
return x_12;
}
}
lean_object* l_Lean_Meta_simpTargetCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Meta_simpTargetCore___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_simpTargetCore___lambda__1___boxed), 6, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_simpTargetCore___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("intro");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_simpTargetCore___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2;
x_2 = l_Lean_Meta_simpTargetCore___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_simpTargetCore___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_simpTargetCore___closed__3;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_simpTargetCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_Meta_getMVarType(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = l_Lean_Meta_instantiateMVars(x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_12);
x_14 = l_Lean_Meta_simp(x_12, x_2, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2;
x_20 = l_Lean_Expr_isConstOf(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = lean_expr_eqv(x_12, x_18);
lean_dec(x_12);
if (x_22 == 0)
{
lean_object* x_23; 
lean_free_object(x_14);
x_23 = l_Lean_Meta_replaceTargetDefEq(x_1, x_18, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_23);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_23);
if (x_31 == 0)
{
return x_23;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_23, 0);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_23);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_14, 0, x_35);
return x_14;
}
}
else
{
uint8_t x_36; 
lean_free_object(x_14);
lean_dec(x_12);
x_36 = !lean_is_exclusive(x_21);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_21, 0);
x_38 = l_Lean_Meta_replaceTargetEq(x_1, x_18, x_37, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 0);
lean_ctor_set(x_21, 0, x_40);
lean_ctor_set(x_38, 0, x_21);
return x_38;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_38, 0);
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_38);
lean_ctor_set(x_21, 0, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_21);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_free_object(x_21);
x_44 = !lean_is_exclusive(x_38);
if (x_44 == 0)
{
return x_38;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_38, 0);
x_46 = lean_ctor_get(x_38, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_38);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_21, 0);
lean_inc(x_48);
lean_dec(x_21);
x_49 = l_Lean_Meta_replaceTargetEq(x_1, x_18, x_48, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_52 = x_49;
} else {
 lean_dec_ref(x_49);
 x_52 = lean_box(0);
}
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_50);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_57 = x_49;
} else {
 lean_dec_ref(x_49);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_18);
lean_free_object(x_14);
lean_dec(x_12);
x_59 = l_Lean_Meta_simpTargetCore___closed__1;
x_60 = lean_ctor_get(x_16, 1);
lean_inc(x_60);
lean_dec(x_16);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = l_Lean_Meta_simpTargetCore___closed__4;
x_62 = l_Lean_Meta_assignExprMVar(x_1, x_61, x_3, x_4, x_5, x_6, x_17);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_apply_6(x_59, x_63, x_3, x_4, x_5, x_6, x_64);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_60, 0);
lean_inc(x_66);
lean_dec(x_60);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_67 = l_Lean_Meta_mkOfEqTrue(x_66, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_Meta_assignExprMVar(x_1, x_68, x_3, x_4, x_5, x_6, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_apply_6(x_59, x_71, x_3, x_4, x_5, x_6, x_72);
return x_73;
}
else
{
uint8_t x_74; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_67);
if (x_74 == 0)
{
return x_67;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_67, 0);
x_76 = lean_ctor_get(x_67, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_67);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_78 = lean_ctor_get(x_14, 0);
x_79 = lean_ctor_get(x_14, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_14);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
x_81 = l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2;
x_82 = l_Lean_Expr_isConstOf(x_80, x_81);
if (x_82 == 0)
{
lean_object* x_83; 
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
lean_dec(x_78);
if (lean_obj_tag(x_83) == 0)
{
uint8_t x_84; 
x_84 = lean_expr_eqv(x_12, x_80);
lean_dec(x_12);
if (x_84 == 0)
{
lean_object* x_85; 
x_85 = l_Lean_Meta_replaceTargetDefEq(x_1, x_80, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_86);
if (lean_is_scalar(x_88)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_88;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_85, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_85, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_93 = x_85;
} else {
 lean_dec_ref(x_85);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; 
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_1);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_79);
return x_96;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_12);
x_97 = lean_ctor_get(x_83, 0);
lean_inc(x_97);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 x_98 = x_83;
} else {
 lean_dec_ref(x_83);
 x_98 = lean_box(0);
}
x_99 = l_Lean_Meta_replaceTargetEq(x_1, x_80, x_97, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_102 = x_99;
} else {
 lean_dec_ref(x_99);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_103 = lean_alloc_ctor(1, 1, 0);
} else {
 x_103 = x_98;
}
lean_ctor_set(x_103, 0, x_100);
if (lean_is_scalar(x_102)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_102;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_101);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_98);
x_105 = lean_ctor_get(x_99, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_99, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_107 = x_99;
} else {
 lean_dec_ref(x_99);
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
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_80);
lean_dec(x_12);
x_109 = l_Lean_Meta_simpTargetCore___closed__1;
x_110 = lean_ctor_get(x_78, 1);
lean_inc(x_110);
lean_dec(x_78);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_111 = l_Lean_Meta_simpTargetCore___closed__4;
x_112 = l_Lean_Meta_assignExprMVar(x_1, x_111, x_3, x_4, x_5, x_6, x_79);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = lean_apply_6(x_109, x_113, x_3, x_4, x_5, x_6, x_114);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_110, 0);
lean_inc(x_116);
lean_dec(x_110);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_117 = l_Lean_Meta_mkOfEqTrue(x_116, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = l_Lean_Meta_assignExprMVar(x_1, x_118, x_3, x_4, x_5, x_6, x_119);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_apply_6(x_109, x_121, x_3, x_4, x_5, x_6, x_122);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_124 = lean_ctor_get(x_117, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_117, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_126 = x_117;
} else {
 lean_dec_ref(x_117);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
}
}
}
}
else
{
uint8_t x_128; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_128 = !lean_is_exclusive(x_14);
if (x_128 == 0)
{
return x_14;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_14, 0);
x_130 = lean_ctor_get(x_14, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_14);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = !lean_is_exclusive(x_11);
if (x_132 == 0)
{
return x_11;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_11, 0);
x_134 = lean_ctor_get(x_11, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_11);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
else
{
uint8_t x_136; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_136 = !lean_is_exclusive(x_8);
if (x_136 == 0)
{
return x_8;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_8, 0);
x_138 = lean_ctor_get(x_8, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_8);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
}
lean_object* l_Lean_Meta_simpTargetCore___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_simpTargetCore___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_simpTarget___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_5);
lean_inc(x_1);
x_9 = l_Lean_Meta_checkNotAssigned(x_1, x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Meta_simpTargetCore(x_1, x_3, x_4, x_5, x_6, x_7, x_10);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
static lean_object* _init_l_Lean_Meta_simpTarget___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_Simp_simp_simpForall___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_simpTarget(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Meta_simpTarget___closed__1;
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_simpTarget___lambda__1), 8, 3);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
lean_closure_set(x_9, 2, x_2);
x_10 = l_Lean_Meta_withMVarContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__1___rarg(x_1, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
static lean_object* _init_l_Lean_Meta_simpStep___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("False");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_simpStep___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_simpStep___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_simpStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_10 = l_Lean_Meta_simp(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = l_Lean_Meta_simpStep___closed__2;
x_16 = l_Lean_Expr_isConstOf(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = lean_expr_eqv(x_14, x_3);
lean_dec(x_3);
if (x_18 == 0)
{
lean_object* x_19; 
lean_free_object(x_10);
lean_inc(x_14);
x_19 = l_Lean_Meta_mkExpectedTypeHint(x_2, x_14, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_14);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_14);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_14);
x_29 = !lean_is_exclusive(x_19);
if (x_29 == 0)
{
return x_19;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_19, 0);
x_31 = lean_ctor_get(x_19, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_19);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_2);
lean_ctor_set(x_33, 1, x_14);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_10, 0, x_34);
return x_10;
}
}
else
{
uint8_t x_35; 
lean_free_object(x_10);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_17);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_17, 0);
x_37 = l_Lean_Meta_mkEqMP(x_36, x_2, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_14);
lean_ctor_set(x_17, 0, x_40);
lean_ctor_set(x_37, 0, x_17);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_14);
lean_ctor_set(x_17, 0, x_43);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_17);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_free_object(x_17);
lean_dec(x_14);
x_45 = !lean_is_exclusive(x_37);
if (x_45 == 0)
{
return x_37;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_17, 0);
lean_inc(x_49);
lean_dec(x_17);
x_50 = l_Lean_Meta_mkEqMP(x_49, x_2, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_14);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
if (lean_is_scalar(x_53)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_53;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_52);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_14);
x_57 = lean_ctor_get(x_50, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_50, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_59 = x_50;
} else {
 lean_dec_ref(x_50);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_14);
lean_free_object(x_10);
lean_dec(x_3);
x_61 = l_Lean_Meta_simpTargetCore___closed__1;
x_62 = lean_ctor_get(x_12, 1);
lean_inc(x_62);
lean_dec(x_12);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; 
lean_inc(x_1);
x_63 = l_Lean_Meta_getMVarType(x_1, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_66 = l_Lean_Meta_mkFalseElim(x_64, x_2, x_5, x_6, x_7, x_8, x_65);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = l_Lean_Meta_assignExprMVar(x_1, x_67, x_5, x_6, x_7, x_8, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_apply_6(x_61, x_70, x_5, x_6, x_7, x_8, x_71);
return x_72;
}
else
{
uint8_t x_73; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_66);
if (x_73 == 0)
{
return x_66;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_66, 0);
x_75 = lean_ctor_get(x_66, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_66);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_63);
if (x_77 == 0)
{
return x_63;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_63, 0);
x_79 = lean_ctor_get(x_63, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_63);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_62, 0);
lean_inc(x_81);
lean_dec(x_62);
lean_inc(x_1);
x_82 = l_Lean_Meta_getMVarType(x_1, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_85 = l_Lean_Meta_mkEqMP(x_81, x_2, x_5, x_6, x_7, x_8, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_88 = l_Lean_Meta_mkFalseElim(x_83, x_86, x_5, x_6, x_7, x_8, x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = l_Lean_Meta_assignExprMVar(x_1, x_89, x_5, x_6, x_7, x_8, x_90);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_apply_6(x_61, x_92, x_5, x_6, x_7, x_8, x_93);
return x_94;
}
else
{
uint8_t x_95; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_95 = !lean_is_exclusive(x_88);
if (x_95 == 0)
{
return x_88;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_88, 0);
x_97 = lean_ctor_get(x_88, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_88);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_83);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_99 = !lean_is_exclusive(x_85);
if (x_99 == 0)
{
return x_85;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_85, 0);
x_101 = lean_ctor_get(x_85, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_85);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_81);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_103 = !lean_is_exclusive(x_82);
if (x_103 == 0)
{
return x_82;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_82, 0);
x_105 = lean_ctor_get(x_82, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_82);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_107 = lean_ctor_get(x_10, 0);
x_108 = lean_ctor_get(x_10, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_10);
x_109 = lean_ctor_get(x_107, 0);
lean_inc(x_109);
x_110 = l_Lean_Meta_simpStep___closed__2;
x_111 = l_Lean_Expr_isConstOf(x_109, x_110);
if (x_111 == 0)
{
lean_object* x_112; 
lean_dec(x_1);
x_112 = lean_ctor_get(x_107, 1);
lean_inc(x_112);
lean_dec(x_107);
if (lean_obj_tag(x_112) == 0)
{
uint8_t x_113; 
x_113 = lean_expr_eqv(x_109, x_3);
lean_dec(x_3);
if (x_113 == 0)
{
lean_object* x_114; 
lean_inc(x_109);
x_114 = l_Lean_Meta_mkExpectedTypeHint(x_2, x_109, x_5, x_6, x_7, x_8, x_108);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_117 = x_114;
} else {
 lean_dec_ref(x_114);
 x_117 = lean_box(0);
}
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_109);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_118);
if (lean_is_scalar(x_117)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_117;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_116);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_109);
x_121 = lean_ctor_get(x_114, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_114, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_123 = x_114;
} else {
 lean_dec_ref(x_114);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_2);
lean_ctor_set(x_125, 1, x_109);
x_126 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_126, 0, x_125);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_108);
return x_127;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_3);
x_128 = lean_ctor_get(x_112, 0);
lean_inc(x_128);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 x_129 = x_112;
} else {
 lean_dec_ref(x_112);
 x_129 = lean_box(0);
}
x_130 = l_Lean_Meta_mkEqMP(x_128, x_2, x_5, x_6, x_7, x_8, x_108);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_133 = x_130;
} else {
 lean_dec_ref(x_130);
 x_133 = lean_box(0);
}
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_109);
if (lean_is_scalar(x_129)) {
 x_135 = lean_alloc_ctor(1, 1, 0);
} else {
 x_135 = x_129;
}
lean_ctor_set(x_135, 0, x_134);
if (lean_is_scalar(x_133)) {
 x_136 = lean_alloc_ctor(0, 2, 0);
} else {
 x_136 = x_133;
}
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_132);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_129);
lean_dec(x_109);
x_137 = lean_ctor_get(x_130, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_130, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_139 = x_130;
} else {
 lean_dec_ref(x_130);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; 
lean_dec(x_109);
lean_dec(x_3);
x_141 = l_Lean_Meta_simpTargetCore___closed__1;
x_142 = lean_ctor_get(x_107, 1);
lean_inc(x_142);
lean_dec(x_107);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; 
lean_inc(x_1);
x_143 = l_Lean_Meta_getMVarType(x_1, x_5, x_6, x_7, x_8, x_108);
if (lean_obj_tag(x_143) == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_146 = l_Lean_Meta_mkFalseElim(x_144, x_2, x_5, x_6, x_7, x_8, x_145);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = l_Lean_Meta_assignExprMVar(x_1, x_147, x_5, x_6, x_7, x_8, x_148);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = lean_apply_6(x_141, x_150, x_5, x_6, x_7, x_8, x_151);
return x_152;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_153 = lean_ctor_get(x_146, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_146, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_155 = x_146;
} else {
 lean_dec_ref(x_146);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_157 = lean_ctor_get(x_143, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_143, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_143)) {
 lean_ctor_release(x_143, 0);
 lean_ctor_release(x_143, 1);
 x_159 = x_143;
} else {
 lean_dec_ref(x_143);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; 
x_161 = lean_ctor_get(x_142, 0);
lean_inc(x_161);
lean_dec(x_142);
lean_inc(x_1);
x_162 = l_Lean_Meta_getMVarType(x_1, x_5, x_6, x_7, x_8, x_108);
if (lean_obj_tag(x_162) == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_165 = l_Lean_Meta_mkEqMP(x_161, x_2, x_5, x_6, x_7, x_8, x_164);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_168 = l_Lean_Meta_mkFalseElim(x_163, x_166, x_5, x_6, x_7, x_8, x_167);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = l_Lean_Meta_assignExprMVar(x_1, x_169, x_5, x_6, x_7, x_8, x_170);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_174 = lean_apply_6(x_141, x_172, x_5, x_6, x_7, x_8, x_173);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_175 = lean_ctor_get(x_168, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_168, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_177 = x_168;
} else {
 lean_dec_ref(x_168);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(1, 2, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_163);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_179 = lean_ctor_get(x_165, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_165, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 x_181 = x_165;
} else {
 lean_dec_ref(x_165);
 x_181 = lean_box(0);
}
if (lean_is_scalar(x_181)) {
 x_182 = lean_alloc_ctor(1, 2, 0);
} else {
 x_182 = x_181;
}
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_180);
return x_182;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_161);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_183 = lean_ctor_get(x_162, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_162, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_162)) {
 lean_ctor_release(x_162, 0);
 lean_ctor_release(x_162, 1);
 x_185 = x_162;
} else {
 lean_dec_ref(x_162);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
}
}
}
else
{
uint8_t x_187; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_187 = !lean_is_exclusive(x_10);
if (x_187 == 0)
{
return x_10;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_10, 0);
x_189 = lean_ctor_get(x_10, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_10);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Transform(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Replace(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Clear(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Clear(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__1 = _init_l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__1);
l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__2 = _init_l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4____closed__2);
res = l_Lean_Meta_Simp_initFn____x40_Lean_Meta_Tactic_Simp_Main___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_congrHypothesisExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_congrHypothesisExceptionId);
lean_dec_ref(res);
l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg___closed__1 = _init_l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_throwCongrHypothesisFailed___rarg___closed__1);
l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1 = _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduceProjFn_x3f___closed__1);
l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__1 = _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__1);
l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2 = _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_reduce___closed__2);
l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11___boxed__const__1 = _init_l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11___boxed__const__1();
lean_mark_persistent(l_Lean_Expr_withAppAux___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__11___boxed__const__1);
l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1 = _init_l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Meta_transform_visit___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__2___lambda__1___closed__1);
l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1 = _init_l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1();
lean_mark_persistent(l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__1);
l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__2 = _init_l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__2();
lean_mark_persistent(l_Lean_Meta_transform___at___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___spec__1___closed__2);
l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1 = _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__1);
l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2 = _init_l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Simp_Main_0__Lean_Meta_Simp_dsimp___closed__2);
l_Lean_Meta_Simp_simp_simpLet___closed__1 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__1);
l_Lean_Meta_Simp_simp_simpLet___closed__2 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__2);
l_Lean_Meta_Simp_simp_simpLet___closed__3 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__3);
l_Lean_Meta_Simp_simp_simpLet___closed__4 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__4);
l_Lean_Meta_Simp_simp_simpLet___closed__5 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__5);
l_Lean_Meta_Simp_simp_simpLet___closed__6 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__6);
l_Lean_Meta_Simp_simp_simpLet___closed__7 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__7();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__7);
l_Lean_Meta_Simp_simp_simpLet___closed__8 = _init_l_Lean_Meta_Simp_simp_simpLet___closed__8();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLet___closed__8);
l_Lean_Meta_Simp_simp_simpLoop___closed__1 = _init_l_Lean_Meta_Simp_simp_simpLoop___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLoop___closed__1);
l_Lean_Meta_Simp_simp_simpLoop___closed__2 = _init_l_Lean_Meta_Simp_simp_simpLoop___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLoop___closed__2);
l_Lean_Meta_Simp_simp_simpStep___closed__1 = _init_l_Lean_Meta_Simp_simp_simpStep___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpStep___closed__1);
l_Lean_Meta_Simp_simp_simpStep___closed__2 = _init_l_Lean_Meta_Simp_simp_simpStep___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpStep___closed__2);
l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__1 = _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__1();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__1);
l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2 = _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__2);
l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__3 = _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__3();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__3);
l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4 = _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__4);
l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__5 = _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__5();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__5);
l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6 = _init_l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Meta_Simp_simp_simpForall___spec__3___closed__6);
l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1 = _init_l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___lambda__2___closed__1);
l_Lean_Meta_Simp_simp_simpForall___closed__1 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__1);
l_Lean_Meta_Simp_simp_simpForall___closed__2 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__2);
l_Lean_Meta_Simp_simp_simpForall___closed__3 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__3);
l_Lean_Meta_Simp_simp_simpForall___closed__4 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__4);
l_Lean_Meta_Simp_simp_simpForall___closed__5 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__5);
l_Lean_Meta_Simp_simp_simpForall___closed__6 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__6);
l_Lean_Meta_Simp_simp_simpForall___closed__7 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__7();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__7);
l_Lean_Meta_Simp_simp_simpForall___closed__8 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__8();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__8);
l_Lean_Meta_Simp_simp_simpForall___closed__9 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__9();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__9);
l_Lean_Meta_Simp_simp_simpForall___closed__10 = _init_l_Lean_Meta_Simp_simp_simpForall___closed__10();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpForall___closed__10);
l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__1 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__1);
l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__2 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__2);
l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__3 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__3);
l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__4 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__3___closed__4);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__1 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__1);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__2 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__2);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__3 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__3);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__4 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__4);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__5 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__5);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__6 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__6);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__7 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__7();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__7);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__8 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__8();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__8);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__9);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__10 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__10();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__10);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__11 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__11();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__11);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__12);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__13 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__13();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__13);
l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__14 = _init_l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__14();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___lambda__4___closed__14);
l_Lean_Meta_Simp_simp_simpArrow___closed__1 = _init_l_Lean_Meta_Simp_simp_simpArrow___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___closed__1);
l_Lean_Meta_Simp_simp_simpArrow___closed__2 = _init_l_Lean_Meta_Simp_simp_simpArrow___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpArrow___closed__2);
l_Lean_Meta_Simp_simp_simpLambda___closed__1 = _init_l_Lean_Meta_Simp_simp_simpLambda___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_simpLambda___closed__1);
l_Lean_Meta_Simp_simp_congr___closed__1 = _init_l_Lean_Meta_Simp_simp_congr___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_congr___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___lambda__2___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_congrDefault___spec__1___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__7 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__7();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__7);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__8 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__8();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__8);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__9 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__9();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__9);
l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__10 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__10();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_simp_tryCongrLemma_x3f___spec__1___closed__10);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__1 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__1);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__2 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__4___closed__2);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__1 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__1);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__2 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__5___closed__2);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__1 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__1);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__2 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___lambda__8___closed__2);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__1 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__1);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__2 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__2);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__3 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__3);
l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__4 = _init_l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_simp_tryCongrLemma_x3f___closed__4);
l_Lean_Meta_Simp_main___closed__1 = _init_l_Lean_Meta_Simp_main___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_main___closed__1);
l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__1 = _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__1);
l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2 = _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__2);
l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__3 = _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__3);
l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__4 = _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__4);
l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__5 = _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__5();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__5);
l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__6 = _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__6();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__6);
l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__7 = _init_l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__7();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_discharge_x3f___closed__7);
l_Lean_Meta_Simp_DefaultMethods_methods___closed__1 = _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__1();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_methods___closed__1);
l_Lean_Meta_Simp_DefaultMethods_methods___closed__2 = _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__2();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_methods___closed__2);
l_Lean_Meta_Simp_DefaultMethods_methods___closed__3 = _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__3();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_methods___closed__3);
l_Lean_Meta_Simp_DefaultMethods_methods___closed__4 = _init_l_Lean_Meta_Simp_DefaultMethods_methods___closed__4();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_methods___closed__4);
l_Lean_Meta_Simp_DefaultMethods_methods = _init_l_Lean_Meta_Simp_DefaultMethods_methods();
lean_mark_persistent(l_Lean_Meta_Simp_DefaultMethods_methods);
l_Lean_Meta_simpTargetCore___closed__1 = _init_l_Lean_Meta_simpTargetCore___closed__1();
lean_mark_persistent(l_Lean_Meta_simpTargetCore___closed__1);
l_Lean_Meta_simpTargetCore___closed__2 = _init_l_Lean_Meta_simpTargetCore___closed__2();
lean_mark_persistent(l_Lean_Meta_simpTargetCore___closed__2);
l_Lean_Meta_simpTargetCore___closed__3 = _init_l_Lean_Meta_simpTargetCore___closed__3();
lean_mark_persistent(l_Lean_Meta_simpTargetCore___closed__3);
l_Lean_Meta_simpTargetCore___closed__4 = _init_l_Lean_Meta_simpTargetCore___closed__4();
lean_mark_persistent(l_Lean_Meta_simpTargetCore___closed__4);
l_Lean_Meta_simpTarget___closed__1 = _init_l_Lean_Meta_simpTarget___closed__1();
lean_mark_persistent(l_Lean_Meta_simpTarget___closed__1);
l_Lean_Meta_simpStep___closed__1 = _init_l_Lean_Meta_simpStep___closed__1();
lean_mark_persistent(l_Lean_Meta_simpStep___closed__1);
l_Lean_Meta_simpStep___closed__2 = _init_l_Lean_Meta_simpStep___closed__2();
lean_mark_persistent(l_Lean_Meta_simpStep___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
