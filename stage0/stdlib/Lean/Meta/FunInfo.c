// Lean compiler output
// Module: Lean.Meta.FunInfo
// Imports: Init Lean.Meta.Basic Lean.Meta.InferType
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
extern lean_object* l_Lean_Meta_instBEqInfoCacheKey;
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___rarg___boxed(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1;
lean_object* l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2___boxed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey___boxed(lean_object*);
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__2(lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__1;
lean_object* l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
static lean_object* l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1;
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__3(lean_object*, lean_object*, size_t, size_t);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getTransparency(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1;
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache_match__1(lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey___boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_5, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Meta_getTransparency(x_4, x_5, x_6, x_7, x_13);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_2);
x_21 = lean_unbox(x_16);
lean_dec(x_16);
lean_ctor_set_uint8(x_20, sizeof(void*)*2, x_21);
x_22 = l_Lean_Meta_instBEqInfoCacheKey;
x_23 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1;
lean_inc(x_20);
x_24 = l_Std_PersistentHashMap_find_x3f___rarg(x_22, x_23, x_19, x_20);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
lean_free_object(x_14);
lean_inc(x_7);
lean_inc(x_5);
x_25 = lean_apply_5(x_3, x_4, x_5, x_6, x_7, x_17);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_st_ref_get(x_7, x_27);
lean_dec(x_7);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_st_ref_take(x_5, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_31, 1);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_32);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_26);
x_38 = l_Std_PersistentHashMap_insert___rarg(x_22, x_23, x_37, x_20, x_26);
lean_ctor_set(x_32, 1, x_38);
x_39 = lean_st_ref_set(x_5, x_31, x_33);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set(x_39, 0, x_26);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_26);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_44 = lean_ctor_get(x_32, 0);
x_45 = lean_ctor_get(x_32, 2);
x_46 = lean_ctor_get(x_32, 3);
x_47 = lean_ctor_get(x_32, 4);
x_48 = lean_ctor_get(x_32, 5);
x_49 = lean_ctor_get(x_32, 6);
x_50 = lean_ctor_get(x_32, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_50);
lean_inc(x_44);
lean_dec(x_32);
lean_inc(x_26);
x_51 = l_Std_PersistentHashMap_insert___rarg(x_22, x_23, x_50, x_20, x_26);
x_52 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_52, 0, x_44);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_52, 2, x_45);
lean_ctor_set(x_52, 3, x_46);
lean_ctor_set(x_52, 4, x_47);
lean_ctor_set(x_52, 5, x_48);
lean_ctor_set(x_52, 6, x_49);
lean_ctor_set(x_31, 1, x_52);
x_53 = lean_st_ref_set(x_5, x_31, x_33);
lean_dec(x_5);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_55 = x_53;
} else {
 lean_dec_ref(x_53);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_26);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_57 = lean_ctor_get(x_31, 0);
x_58 = lean_ctor_get(x_31, 2);
x_59 = lean_ctor_get(x_31, 3);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_31);
x_60 = lean_ctor_get(x_32, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_32, 2);
lean_inc(x_61);
x_62 = lean_ctor_get(x_32, 3);
lean_inc(x_62);
x_63 = lean_ctor_get(x_32, 4);
lean_inc(x_63);
x_64 = lean_ctor_get(x_32, 5);
lean_inc(x_64);
x_65 = lean_ctor_get(x_32, 6);
lean_inc(x_65);
x_66 = lean_ctor_get(x_32, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 lean_ctor_release(x_32, 2);
 lean_ctor_release(x_32, 3);
 lean_ctor_release(x_32, 4);
 lean_ctor_release(x_32, 5);
 lean_ctor_release(x_32, 6);
 x_67 = x_32;
} else {
 lean_dec_ref(x_32);
 x_67 = lean_box(0);
}
lean_inc(x_26);
x_68 = l_Std_PersistentHashMap_insert___rarg(x_22, x_23, x_66, x_20, x_26);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 7, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_68);
lean_ctor_set(x_69, 2, x_61);
lean_ctor_set(x_69, 3, x_62);
lean_ctor_set(x_69, 4, x_63);
lean_ctor_set(x_69, 5, x_64);
lean_ctor_set(x_69, 6, x_65);
x_70 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_70, 0, x_57);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_70, 2, x_58);
lean_ctor_set(x_70, 3, x_59);
x_71 = lean_st_ref_set(x_5, x_70, x_33);
lean_dec(x_5);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_26);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
else
{
uint8_t x_75; 
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_5);
x_75 = !lean_is_exclusive(x_25);
if (x_75 == 0)
{
return x_25;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_25, 0);
x_77 = lean_ctor_get(x_25, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_25);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; 
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_79 = lean_ctor_get(x_24, 0);
lean_inc(x_79);
lean_dec(x_24);
lean_ctor_set(x_14, 0, x_79);
return x_14;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_80 = lean_ctor_get(x_14, 0);
x_81 = lean_ctor_get(x_14, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_14);
x_82 = lean_ctor_get(x_12, 1);
lean_inc(x_82);
lean_dec(x_12);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_84, 0, x_1);
lean_ctor_set(x_84, 1, x_2);
x_85 = lean_unbox(x_80);
lean_dec(x_80);
lean_ctor_set_uint8(x_84, sizeof(void*)*2, x_85);
x_86 = l_Lean_Meta_instBEqInfoCacheKey;
x_87 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1;
lean_inc(x_84);
x_88 = l_Std_PersistentHashMap_find_x3f___rarg(x_86, x_87, x_83, x_84);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; 
lean_inc(x_7);
lean_inc(x_5);
x_89 = lean_apply_5(x_3, x_4, x_5, x_6, x_7, x_81);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
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
x_94 = lean_st_ref_take(x_5, x_93);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_ctor_get(x_95, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_95, 2);
lean_inc(x_99);
x_100 = lean_ctor_get(x_95, 3);
lean_inc(x_100);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 lean_ctor_release(x_95, 2);
 lean_ctor_release(x_95, 3);
 x_101 = x_95;
} else {
 lean_dec_ref(x_95);
 x_101 = lean_box(0);
}
x_102 = lean_ctor_get(x_96, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_96, 2);
lean_inc(x_103);
x_104 = lean_ctor_get(x_96, 3);
lean_inc(x_104);
x_105 = lean_ctor_get(x_96, 4);
lean_inc(x_105);
x_106 = lean_ctor_get(x_96, 5);
lean_inc(x_106);
x_107 = lean_ctor_get(x_96, 6);
lean_inc(x_107);
x_108 = lean_ctor_get(x_96, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 lean_ctor_release(x_96, 2);
 lean_ctor_release(x_96, 3);
 lean_ctor_release(x_96, 4);
 lean_ctor_release(x_96, 5);
 lean_ctor_release(x_96, 6);
 x_109 = x_96;
} else {
 lean_dec_ref(x_96);
 x_109 = lean_box(0);
}
lean_inc(x_90);
x_110 = l_Std_PersistentHashMap_insert___rarg(x_86, x_87, x_108, x_84, x_90);
if (lean_is_scalar(x_109)) {
 x_111 = lean_alloc_ctor(0, 7, 0);
} else {
 x_111 = x_109;
}
lean_ctor_set(x_111, 0, x_102);
lean_ctor_set(x_111, 1, x_110);
lean_ctor_set(x_111, 2, x_103);
lean_ctor_set(x_111, 3, x_104);
lean_ctor_set(x_111, 4, x_105);
lean_ctor_set(x_111, 5, x_106);
lean_ctor_set(x_111, 6, x_107);
if (lean_is_scalar(x_101)) {
 x_112 = lean_alloc_ctor(0, 4, 0);
} else {
 x_112 = x_101;
}
lean_ctor_set(x_112, 0, x_98);
lean_ctor_set(x_112, 1, x_111);
lean_ctor_set(x_112, 2, x_99);
lean_ctor_set(x_112, 3, x_100);
x_113 = lean_st_ref_set(x_5, x_112, x_97);
lean_dec(x_5);
x_114 = lean_ctor_get(x_113, 1);
lean_inc(x_114);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_115 = x_113;
} else {
 lean_dec_ref(x_113);
 x_115 = lean_box(0);
}
if (lean_is_scalar(x_115)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_115;
}
lean_ctor_set(x_116, 0, x_90);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_84);
lean_dec(x_7);
lean_dec(x_5);
x_117 = lean_ctor_get(x_89, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_89, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_119 = x_89;
} else {
 lean_dec_ref(x_89);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_84);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_121 = lean_ctor_get(x_88, 0);
lean_inc(x_121);
lean_dec(x_88);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_81);
return x_122;
}
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasFVar(x_1);
if (x_4 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
lean_object* x_5; 
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_4(x_9, x_1, x_11, x_13, x_2);
return x_14;
}
case 5:
{
lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_18 = lean_box_uint64(x_17);
x_19 = lean_apply_5(x_3, x_1, x_15, x_16, x_18, x_2);
return x_19;
}
case 6:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint64_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
x_23 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_24 = lean_box_uint64(x_23);
x_25 = lean_apply_6(x_5, x_1, x_20, x_21, x_22, x_24, x_2);
return x_25;
}
case 7:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint64_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
x_29 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_30 = lean_box_uint64(x_29);
x_31 = lean_apply_6(x_4, x_1, x_26, x_27, x_28, x_30, x_2);
return x_31;
}
case 8:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint64_t x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 3);
lean_inc(x_35);
x_36 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
x_37 = lean_box_uint64(x_36);
x_38 = lean_apply_7(x_6, x_1, x_32, x_33, x_34, x_35, x_37, x_2);
return x_38;
}
case 10:
{
lean_object* x_39; lean_object* x_40; uint64_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_40);
x_41 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_42 = lean_box_uint64(x_41);
x_43 = lean_apply_4(x_8, x_39, x_40, x_42, x_2);
return x_43;
}
case 11:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint64_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_1, 2);
lean_inc(x_46);
x_47 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_48 = lean_box_uint64(x_47);
x_49 = lean_apply_5(x_7, x_44, x_45, x_46, x_48, x_2);
return x_49;
}
default: 
{
lean_object* x_50; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_50 = lean_apply_2(x_10, x_1, x_2);
return x_50;
}
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_match__2___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_expr_eqv(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_nat_dec_eq(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = x_3 + x_8;
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
uint8_t l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = 0;
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__3(x_2, x_1, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_indexOfAux___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__1(x_1, x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
return x_3;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_array_push(x_3, x_6);
return x_8;
}
else
{
lean_dec(x_6);
return x_3;
}
}
}
case 5:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = l_Lean_Expr_hasFVar(x_2);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; 
x_12 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(x_1, x_9, x_3);
x_2 = x_10;
x_3 = x_12;
goto _start;
}
}
case 6:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
x_16 = l_Lean_Expr_hasFVar(x_2);
if (x_16 == 0)
{
return x_3;
}
else
{
lean_object* x_17; 
x_17 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(x_1, x_14, x_3);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
case 7:
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
x_21 = l_Lean_Expr_hasFVar(x_2);
if (x_21 == 0)
{
return x_3;
}
else
{
lean_object* x_22; 
x_22 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(x_1, x_19, x_3);
x_2 = x_20;
x_3 = x_22;
goto _start;
}
}
case 8:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_2, 1);
x_25 = lean_ctor_get(x_2, 2);
x_26 = lean_ctor_get(x_2, 3);
x_27 = l_Lean_Expr_hasFVar(x_2);
if (x_27 == 0)
{
return x_3;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(x_1, x_24, x_3);
x_29 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(x_1, x_25, x_28);
x_2 = x_26;
x_3 = x_29;
goto _start;
}
}
case 10:
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_2, 1);
x_2 = x_31;
goto _start;
}
case 11:
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_2, 2);
x_2 = x_33;
goto _start;
}
default: 
{
return x_3;
}
}
}
}
lean_object* l_Array_indexOfAux___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_indexOfAux___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__3(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_6, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_array_swap(x_4, x_5, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_instInhabitedNat;
x_11 = lean_array_get(x_10, x_4, x_6);
lean_inc(x_1);
lean_inc(x_3);
x_12 = lean_apply_2(x_1, x_11, x_3);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_array_swap(x_4, x_5, x_6);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = lean_nat_add(x_6, x_18);
lean_dec(x_6);
x_4 = x_17;
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
}
static lean_object* _init_l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_decLt___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_2, x_3);
if (x_13 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_14 = lean_nat_add(x_2, x_3);
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_div(x_14, x_15);
lean_dec(x_14);
x_41 = l_instInhabitedNat;
x_42 = lean_array_get(x_41, x_1, x_16);
x_43 = lean_array_get(x_41, x_1, x_2);
x_44 = lean_nat_dec_lt(x_42, x_43);
lean_dec(x_43);
lean_dec(x_42);
if (x_44 == 0)
{
x_17 = x_1;
goto block_40;
}
else
{
lean_object* x_45; 
x_45 = lean_array_swap(x_1, x_2, x_16);
x_17 = x_45;
goto block_40;
}
block_40:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = l_instInhabitedNat;
x_19 = lean_array_get(x_18, x_17, x_3);
x_20 = lean_array_get(x_18, x_17, x_2);
x_21 = lean_nat_dec_lt(x_19, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_array_get(x_18, x_17, x_16);
x_23 = lean_nat_dec_lt(x_22, x_19);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_16);
x_24 = l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_25 = l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2(x_24, x_3, x_19, x_17, x_2, x_2);
x_4 = x_25;
goto block_12;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_19);
x_26 = lean_array_swap(x_17, x_16, x_3);
lean_dec(x_16);
x_27 = lean_array_get(x_18, x_26, x_3);
x_28 = l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_29 = l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2(x_28, x_3, x_27, x_26, x_2, x_2);
x_4 = x_29;
goto block_12;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_19);
x_30 = lean_array_swap(x_17, x_2, x_3);
x_31 = lean_array_get(x_18, x_30, x_16);
x_32 = lean_array_get(x_18, x_30, x_3);
x_33 = lean_nat_dec_lt(x_31, x_32);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_16);
x_34 = l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_35 = l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2(x_34, x_3, x_32, x_30, x_2, x_2);
x_4 = x_35;
goto block_12;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_32);
x_36 = lean_array_swap(x_30, x_16, x_3);
lean_dec(x_16);
x_37 = lean_array_get(x_18, x_36, x_3);
x_38 = l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_39 = l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2(x_38, x_3, x_37, x_36, x_2, x_2);
x_4 = x_39;
goto block_12;
}
}
}
}
block_12:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_nat_dec_le(x_3, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1(x_6, x_2, x_5);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_1 = x_8;
x_2 = x_10;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__1;
x_4 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1(x_4, x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
lean_object* l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qpartition_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_4, x_10);
lean_dec(x_4);
x_12 = lean_array_fget(x_3, x_5);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*1);
x_14 = lean_ctor_get_uint8(x_12, sizeof(void*)*1 + 1);
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
x_16 = lean_nat_add(x_5, x_10);
if (x_14 == 0)
{
uint8_t x_17; 
x_17 = l_Array_contains___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___spec__2(x_2, x_5);
lean_dec(x_5);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_15);
x_18 = lean_array_push(x_7, x_12);
x_4 = x_11;
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
lean_dec(x_21);
x_22 = 1;
lean_ctor_set_uint8(x_12, sizeof(void*)*1 + 1, x_22);
x_23 = lean_array_push(x_7, x_12);
x_4 = x_11;
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_23;
goto _start;
}
else
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_12);
x_25 = 1;
x_26 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_26, 0, x_15);
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_13);
lean_ctor_set_uint8(x_26, sizeof(void*)*1 + 1, x_25);
x_27 = lean_array_push(x_7, x_26);
x_4 = x_11;
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_27;
goto _start;
}
}
}
else
{
lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_5);
x_29 = lean_array_push(x_7, x_12);
x_4 = x_11;
x_5 = x_16;
x_6 = lean_box(0);
x_7 = x_29;
goto _start;
}
}
else
{
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_mk_empty_array_with_capacity(x_6);
x_8 = l_Array_mapIdxM_map___at___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___spec__1(x_1, x_2, x_1, x_6, x_4, lean_box(0), x_7);
return x_8;
}
else
{
lean_inc(x_1);
return x_1;
}
}
}
lean_object* l_Array_mapIdxM_map___at___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapIdxM_map___at___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_nat_dec_le(x_11, x_4);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_3, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_3, x_15);
lean_dec(x_3);
x_17 = l_Lean_instInhabitedExpr;
x_18 = lean_array_get(x_17, x_1, x_4);
lean_inc(x_6);
x_19 = l_Lean_Meta_getFVarLocalDecl(x_18, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_LocalDecl_type(x_20);
lean_inc(x_1);
x_23 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(x_1, x_22);
x_24 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(x_5, x_23);
lean_dec(x_5);
x_25 = l_Lean_LocalDecl_binderInfo(x_20);
lean_dec(x_20);
x_26 = 0;
x_27 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*1 + 1, x_26);
x_28 = lean_array_push(x_24, x_27);
x_29 = lean_ctor_get(x_2, 2);
x_30 = lean_nat_add(x_4, x_29);
lean_dec(x_4);
x_3 = x_16;
x_4 = x_30;
x_5 = x_28;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_19);
if (x_32 == 0)
{
return x_19;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_19, 0);
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_19);
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
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_5);
lean_ctor_set(x_36, 1, x_10);
return x_36;
}
}
else
{
lean_object* x_37; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_5);
lean_ctor_set(x_37, 1, x_10);
return x_37;
}
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_unsigned_to_nat(1u);
lean_inc(x_8);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
x_12 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__1;
lean_inc(x_1);
x_13 = l_Std_Range_forIn_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__1(x_1, x_11, x_8, x_9, x_12, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(x_1, x_2);
x_17 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(x_15, x_16);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_13, 0, x_18);
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(x_1, x_2);
x_22 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(x_19, x_21);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_13);
if (x_25 == 0)
{
return x_13;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_13, 0);
x_27 = lean_ctor_get(x_13, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_13);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_4, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_getTransparency(x_3, x_4, x_5, x_6, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_2);
lean_inc(x_1);
x_19 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_2);
x_20 = lean_unbox(x_15);
lean_dec(x_15);
lean_ctor_set_uint8(x_19, sizeof(void*)*2, x_20);
x_21 = l_Lean_Meta_instBEqInfoCacheKey;
x_22 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1;
lean_inc(x_19);
x_23 = l_Std_PersistentHashMap_find_x3f___rarg(x_21, x_22, x_18, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
lean_free_object(x_13);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_24 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_16);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_3, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = !lean_is_exclusive(x_3);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_3, 0);
lean_dec(x_29);
x_30 = !lean_is_exclusive(x_25);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
x_31 = 1;
lean_ctor_set_uint8(x_25, 5, x_31);
x_32 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1;
lean_inc(x_6);
lean_inc(x_4);
x_33 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_26, x_2, x_32, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_st_ref_get(x_6, x_35);
lean_dec(x_6);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_st_ref_take(x_4, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = !lean_is_exclusive(x_39);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_39, 1);
lean_dec(x_43);
x_44 = !lean_is_exclusive(x_40);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_34);
x_46 = l_Std_PersistentHashMap_insert___rarg(x_21, x_22, x_45, x_19, x_34);
lean_ctor_set(x_40, 1, x_46);
x_47 = lean_st_ref_set(x_4, x_39, x_41);
lean_dec(x_4);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set(x_47, 0, x_34);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_34);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_52 = lean_ctor_get(x_40, 0);
x_53 = lean_ctor_get(x_40, 2);
x_54 = lean_ctor_get(x_40, 3);
x_55 = lean_ctor_get(x_40, 4);
x_56 = lean_ctor_get(x_40, 5);
x_57 = lean_ctor_get(x_40, 6);
x_58 = lean_ctor_get(x_40, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_58);
lean_inc(x_52);
lean_dec(x_40);
lean_inc(x_34);
x_59 = l_Std_PersistentHashMap_insert___rarg(x_21, x_22, x_58, x_19, x_34);
x_60 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_60, 0, x_52);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_60, 2, x_53);
lean_ctor_set(x_60, 3, x_54);
lean_ctor_set(x_60, 4, x_55);
lean_ctor_set(x_60, 5, x_56);
lean_ctor_set(x_60, 6, x_57);
lean_ctor_set(x_39, 1, x_60);
x_61 = lean_st_ref_set(x_4, x_39, x_41);
lean_dec(x_4);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_34);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_65 = lean_ctor_get(x_39, 0);
x_66 = lean_ctor_get(x_39, 2);
x_67 = lean_ctor_get(x_39, 3);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_39);
x_68 = lean_ctor_get(x_40, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_40, 2);
lean_inc(x_69);
x_70 = lean_ctor_get(x_40, 3);
lean_inc(x_70);
x_71 = lean_ctor_get(x_40, 4);
lean_inc(x_71);
x_72 = lean_ctor_get(x_40, 5);
lean_inc(x_72);
x_73 = lean_ctor_get(x_40, 6);
lean_inc(x_73);
x_74 = lean_ctor_get(x_40, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 lean_ctor_release(x_40, 3);
 lean_ctor_release(x_40, 4);
 lean_ctor_release(x_40, 5);
 lean_ctor_release(x_40, 6);
 x_75 = x_40;
} else {
 lean_dec_ref(x_40);
 x_75 = lean_box(0);
}
lean_inc(x_34);
x_76 = l_Std_PersistentHashMap_insert___rarg(x_21, x_22, x_74, x_19, x_34);
if (lean_is_scalar(x_75)) {
 x_77 = lean_alloc_ctor(0, 7, 0);
} else {
 x_77 = x_75;
}
lean_ctor_set(x_77, 0, x_68);
lean_ctor_set(x_77, 1, x_76);
lean_ctor_set(x_77, 2, x_69);
lean_ctor_set(x_77, 3, x_70);
lean_ctor_set(x_77, 4, x_71);
lean_ctor_set(x_77, 5, x_72);
lean_ctor_set(x_77, 6, x_73);
x_78 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_78, 0, x_65);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_78, 2, x_66);
lean_ctor_set(x_78, 3, x_67);
x_79 = lean_st_ref_set(x_4, x_78, x_41);
lean_dec(x_4);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_81 = x_79;
} else {
 lean_dec_ref(x_79);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_34);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
uint8_t x_83; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_4);
x_83 = !lean_is_exclusive(x_33);
if (x_83 == 0)
{
return x_33;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_33, 0);
x_85 = lean_ctor_get(x_33, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_33);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; uint8_t x_88; uint8_t x_89; uint8_t x_90; uint8_t x_91; uint8_t x_92; uint8_t x_93; uint8_t x_94; uint8_t x_95; uint8_t x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_87 = lean_ctor_get_uint8(x_25, 0);
x_88 = lean_ctor_get_uint8(x_25, 1);
x_89 = lean_ctor_get_uint8(x_25, 2);
x_90 = lean_ctor_get_uint8(x_25, 3);
x_91 = lean_ctor_get_uint8(x_25, 4);
x_92 = lean_ctor_get_uint8(x_25, 6);
x_93 = lean_ctor_get_uint8(x_25, 7);
x_94 = lean_ctor_get_uint8(x_25, 8);
x_95 = lean_ctor_get_uint8(x_25, 9);
x_96 = lean_ctor_get_uint8(x_25, 10);
lean_dec(x_25);
x_97 = 1;
x_98 = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(x_98, 0, x_87);
lean_ctor_set_uint8(x_98, 1, x_88);
lean_ctor_set_uint8(x_98, 2, x_89);
lean_ctor_set_uint8(x_98, 3, x_90);
lean_ctor_set_uint8(x_98, 4, x_91);
lean_ctor_set_uint8(x_98, 5, x_97);
lean_ctor_set_uint8(x_98, 6, x_92);
lean_ctor_set_uint8(x_98, 7, x_93);
lean_ctor_set_uint8(x_98, 8, x_94);
lean_ctor_set_uint8(x_98, 9, x_95);
lean_ctor_set_uint8(x_98, 10, x_96);
lean_ctor_set(x_3, 0, x_98);
x_99 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1;
lean_inc(x_6);
lean_inc(x_4);
x_100 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_26, x_2, x_99, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_st_ref_get(x_6, x_102);
lean_dec(x_6);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_105 = lean_st_ref_take(x_4, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
x_108 = lean_ctor_get(x_105, 1);
lean_inc(x_108);
lean_dec(x_105);
x_109 = lean_ctor_get(x_106, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_106, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_106, 3);
lean_inc(x_111);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 lean_ctor_release(x_106, 2);
 lean_ctor_release(x_106, 3);
 x_112 = x_106;
} else {
 lean_dec_ref(x_106);
 x_112 = lean_box(0);
}
x_113 = lean_ctor_get(x_107, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_107, 2);
lean_inc(x_114);
x_115 = lean_ctor_get(x_107, 3);
lean_inc(x_115);
x_116 = lean_ctor_get(x_107, 4);
lean_inc(x_116);
x_117 = lean_ctor_get(x_107, 5);
lean_inc(x_117);
x_118 = lean_ctor_get(x_107, 6);
lean_inc(x_118);
x_119 = lean_ctor_get(x_107, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 lean_ctor_release(x_107, 2);
 lean_ctor_release(x_107, 3);
 lean_ctor_release(x_107, 4);
 lean_ctor_release(x_107, 5);
 lean_ctor_release(x_107, 6);
 x_120 = x_107;
} else {
 lean_dec_ref(x_107);
 x_120 = lean_box(0);
}
lean_inc(x_101);
x_121 = l_Std_PersistentHashMap_insert___rarg(x_21, x_22, x_119, x_19, x_101);
if (lean_is_scalar(x_120)) {
 x_122 = lean_alloc_ctor(0, 7, 0);
} else {
 x_122 = x_120;
}
lean_ctor_set(x_122, 0, x_113);
lean_ctor_set(x_122, 1, x_121);
lean_ctor_set(x_122, 2, x_114);
lean_ctor_set(x_122, 3, x_115);
lean_ctor_set(x_122, 4, x_116);
lean_ctor_set(x_122, 5, x_117);
lean_ctor_set(x_122, 6, x_118);
if (lean_is_scalar(x_112)) {
 x_123 = lean_alloc_ctor(0, 4, 0);
} else {
 x_123 = x_112;
}
lean_ctor_set(x_123, 0, x_109);
lean_ctor_set(x_123, 1, x_122);
lean_ctor_set(x_123, 2, x_110);
lean_ctor_set(x_123, 3, x_111);
x_124 = lean_st_ref_set(x_4, x_123, x_108);
lean_dec(x_4);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_126 = x_124;
} else {
 lean_dec_ref(x_124);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(0, 2, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_101);
lean_ctor_set(x_127, 1, x_125);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_4);
x_128 = lean_ctor_get(x_100, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_100, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_130 = x_100;
} else {
 lean_dec_ref(x_100);
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
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; uint8_t x_137; uint8_t x_138; uint8_t x_139; uint8_t x_140; uint8_t x_141; uint8_t x_142; uint8_t x_143; uint8_t x_144; uint8_t x_145; lean_object* x_146; uint8_t x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_132 = lean_ctor_get(x_3, 1);
x_133 = lean_ctor_get(x_3, 2);
x_134 = lean_ctor_get(x_3, 3);
x_135 = lean_ctor_get(x_3, 4);
lean_inc(x_135);
lean_inc(x_134);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_3);
x_136 = lean_ctor_get_uint8(x_25, 0);
x_137 = lean_ctor_get_uint8(x_25, 1);
x_138 = lean_ctor_get_uint8(x_25, 2);
x_139 = lean_ctor_get_uint8(x_25, 3);
x_140 = lean_ctor_get_uint8(x_25, 4);
x_141 = lean_ctor_get_uint8(x_25, 6);
x_142 = lean_ctor_get_uint8(x_25, 7);
x_143 = lean_ctor_get_uint8(x_25, 8);
x_144 = lean_ctor_get_uint8(x_25, 9);
x_145 = lean_ctor_get_uint8(x_25, 10);
if (lean_is_exclusive(x_25)) {
 x_146 = x_25;
} else {
 lean_dec_ref(x_25);
 x_146 = lean_box(0);
}
x_147 = 1;
if (lean_is_scalar(x_146)) {
 x_148 = lean_alloc_ctor(0, 0, 11);
} else {
 x_148 = x_146;
}
lean_ctor_set_uint8(x_148, 0, x_136);
lean_ctor_set_uint8(x_148, 1, x_137);
lean_ctor_set_uint8(x_148, 2, x_138);
lean_ctor_set_uint8(x_148, 3, x_139);
lean_ctor_set_uint8(x_148, 4, x_140);
lean_ctor_set_uint8(x_148, 5, x_147);
lean_ctor_set_uint8(x_148, 6, x_141);
lean_ctor_set_uint8(x_148, 7, x_142);
lean_ctor_set_uint8(x_148, 8, x_143);
lean_ctor_set_uint8(x_148, 9, x_144);
lean_ctor_set_uint8(x_148, 10, x_145);
x_149 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_132);
lean_ctor_set(x_149, 2, x_133);
lean_ctor_set(x_149, 3, x_134);
lean_ctor_set(x_149, 4, x_135);
x_150 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1;
lean_inc(x_6);
lean_inc(x_4);
x_151 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_26, x_2, x_150, x_149, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_154 = lean_st_ref_get(x_6, x_153);
lean_dec(x_6);
x_155 = lean_ctor_get(x_154, 1);
lean_inc(x_155);
lean_dec(x_154);
x_156 = lean_st_ref_take(x_4, x_155);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
x_159 = lean_ctor_get(x_156, 1);
lean_inc(x_159);
lean_dec(x_156);
x_160 = lean_ctor_get(x_157, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_157, 2);
lean_inc(x_161);
x_162 = lean_ctor_get(x_157, 3);
lean_inc(x_162);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 lean_ctor_release(x_157, 2);
 lean_ctor_release(x_157, 3);
 x_163 = x_157;
} else {
 lean_dec_ref(x_157);
 x_163 = lean_box(0);
}
x_164 = lean_ctor_get(x_158, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_158, 2);
lean_inc(x_165);
x_166 = lean_ctor_get(x_158, 3);
lean_inc(x_166);
x_167 = lean_ctor_get(x_158, 4);
lean_inc(x_167);
x_168 = lean_ctor_get(x_158, 5);
lean_inc(x_168);
x_169 = lean_ctor_get(x_158, 6);
lean_inc(x_169);
x_170 = lean_ctor_get(x_158, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 lean_ctor_release(x_158, 2);
 lean_ctor_release(x_158, 3);
 lean_ctor_release(x_158, 4);
 lean_ctor_release(x_158, 5);
 lean_ctor_release(x_158, 6);
 x_171 = x_158;
} else {
 lean_dec_ref(x_158);
 x_171 = lean_box(0);
}
lean_inc(x_152);
x_172 = l_Std_PersistentHashMap_insert___rarg(x_21, x_22, x_170, x_19, x_152);
if (lean_is_scalar(x_171)) {
 x_173 = lean_alloc_ctor(0, 7, 0);
} else {
 x_173 = x_171;
}
lean_ctor_set(x_173, 0, x_164);
lean_ctor_set(x_173, 1, x_172);
lean_ctor_set(x_173, 2, x_165);
lean_ctor_set(x_173, 3, x_166);
lean_ctor_set(x_173, 4, x_167);
lean_ctor_set(x_173, 5, x_168);
lean_ctor_set(x_173, 6, x_169);
if (lean_is_scalar(x_163)) {
 x_174 = lean_alloc_ctor(0, 4, 0);
} else {
 x_174 = x_163;
}
lean_ctor_set(x_174, 0, x_160);
lean_ctor_set(x_174, 1, x_173);
lean_ctor_set(x_174, 2, x_161);
lean_ctor_set(x_174, 3, x_162);
x_175 = lean_st_ref_set(x_4, x_174, x_159);
lean_dec(x_4);
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_177 = x_175;
} else {
 lean_dec_ref(x_175);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(0, 2, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_152);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_4);
x_179 = lean_ctor_get(x_151, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_151, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_181 = x_151;
} else {
 lean_dec_ref(x_151);
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
}
else
{
uint8_t x_183; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_183 = !lean_is_exclusive(x_24);
if (x_183 == 0)
{
return x_24;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_24, 0);
x_185 = lean_ctor_get(x_24, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_24);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
else
{
lean_object* x_187; 
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_187 = lean_ctor_get(x_23, 0);
lean_inc(x_187);
lean_dec(x_23);
lean_ctor_set(x_13, 0, x_187);
return x_13;
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_188 = lean_ctor_get(x_13, 0);
x_189 = lean_ctor_get(x_13, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_13);
x_190 = lean_ctor_get(x_11, 1);
lean_inc(x_190);
lean_dec(x_11);
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
lean_dec(x_190);
lean_inc(x_2);
lean_inc(x_1);
x_192 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_192, 0, x_1);
lean_ctor_set(x_192, 1, x_2);
x_193 = lean_unbox(x_188);
lean_dec(x_188);
lean_ctor_set_uint8(x_192, sizeof(void*)*2, x_193);
x_194 = l_Lean_Meta_instBEqInfoCacheKey;
x_195 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1;
lean_inc(x_192);
x_196 = l_Std_PersistentHashMap_find_x3f___rarg(x_194, x_195, x_191, x_192);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_197 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_189);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; uint8_t x_207; uint8_t x_208; uint8_t x_209; uint8_t x_210; uint8_t x_211; uint8_t x_212; uint8_t x_213; uint8_t x_214; uint8_t x_215; lean_object* x_216; uint8_t x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_198 = lean_ctor_get(x_3, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_197, 1);
lean_inc(x_200);
lean_dec(x_197);
x_201 = lean_ctor_get(x_3, 1);
lean_inc(x_201);
x_202 = lean_ctor_get(x_3, 2);
lean_inc(x_202);
x_203 = lean_ctor_get(x_3, 3);
lean_inc(x_203);
x_204 = lean_ctor_get(x_3, 4);
lean_inc(x_204);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 x_205 = x_3;
} else {
 lean_dec_ref(x_3);
 x_205 = lean_box(0);
}
x_206 = lean_ctor_get_uint8(x_198, 0);
x_207 = lean_ctor_get_uint8(x_198, 1);
x_208 = lean_ctor_get_uint8(x_198, 2);
x_209 = lean_ctor_get_uint8(x_198, 3);
x_210 = lean_ctor_get_uint8(x_198, 4);
x_211 = lean_ctor_get_uint8(x_198, 6);
x_212 = lean_ctor_get_uint8(x_198, 7);
x_213 = lean_ctor_get_uint8(x_198, 8);
x_214 = lean_ctor_get_uint8(x_198, 9);
x_215 = lean_ctor_get_uint8(x_198, 10);
if (lean_is_exclusive(x_198)) {
 x_216 = x_198;
} else {
 lean_dec_ref(x_198);
 x_216 = lean_box(0);
}
x_217 = 1;
if (lean_is_scalar(x_216)) {
 x_218 = lean_alloc_ctor(0, 0, 11);
} else {
 x_218 = x_216;
}
lean_ctor_set_uint8(x_218, 0, x_206);
lean_ctor_set_uint8(x_218, 1, x_207);
lean_ctor_set_uint8(x_218, 2, x_208);
lean_ctor_set_uint8(x_218, 3, x_209);
lean_ctor_set_uint8(x_218, 4, x_210);
lean_ctor_set_uint8(x_218, 5, x_217);
lean_ctor_set_uint8(x_218, 6, x_211);
lean_ctor_set_uint8(x_218, 7, x_212);
lean_ctor_set_uint8(x_218, 8, x_213);
lean_ctor_set_uint8(x_218, 9, x_214);
lean_ctor_set_uint8(x_218, 10, x_215);
if (lean_is_scalar(x_205)) {
 x_219 = lean_alloc_ctor(0, 5, 0);
} else {
 x_219 = x_205;
}
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_201);
lean_ctor_set(x_219, 2, x_202);
lean_ctor_set(x_219, 3, x_203);
lean_ctor_set(x_219, 4, x_204);
x_220 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1;
lean_inc(x_6);
lean_inc(x_4);
x_221 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__2___rarg(x_199, x_2, x_220, x_219, x_4, x_5, x_6, x_200);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = lean_st_ref_get(x_6, x_223);
lean_dec(x_6);
x_225 = lean_ctor_get(x_224, 1);
lean_inc(x_225);
lean_dec(x_224);
x_226 = lean_st_ref_take(x_4, x_225);
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_227, 1);
lean_inc(x_228);
x_229 = lean_ctor_get(x_226, 1);
lean_inc(x_229);
lean_dec(x_226);
x_230 = lean_ctor_get(x_227, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_227, 2);
lean_inc(x_231);
x_232 = lean_ctor_get(x_227, 3);
lean_inc(x_232);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 lean_ctor_release(x_227, 2);
 lean_ctor_release(x_227, 3);
 x_233 = x_227;
} else {
 lean_dec_ref(x_227);
 x_233 = lean_box(0);
}
x_234 = lean_ctor_get(x_228, 0);
lean_inc(x_234);
x_235 = lean_ctor_get(x_228, 2);
lean_inc(x_235);
x_236 = lean_ctor_get(x_228, 3);
lean_inc(x_236);
x_237 = lean_ctor_get(x_228, 4);
lean_inc(x_237);
x_238 = lean_ctor_get(x_228, 5);
lean_inc(x_238);
x_239 = lean_ctor_get(x_228, 6);
lean_inc(x_239);
x_240 = lean_ctor_get(x_228, 1);
lean_inc(x_240);
if (lean_is_exclusive(x_228)) {
 lean_ctor_release(x_228, 0);
 lean_ctor_release(x_228, 1);
 lean_ctor_release(x_228, 2);
 lean_ctor_release(x_228, 3);
 lean_ctor_release(x_228, 4);
 lean_ctor_release(x_228, 5);
 lean_ctor_release(x_228, 6);
 x_241 = x_228;
} else {
 lean_dec_ref(x_228);
 x_241 = lean_box(0);
}
lean_inc(x_222);
x_242 = l_Std_PersistentHashMap_insert___rarg(x_194, x_195, x_240, x_192, x_222);
if (lean_is_scalar(x_241)) {
 x_243 = lean_alloc_ctor(0, 7, 0);
} else {
 x_243 = x_241;
}
lean_ctor_set(x_243, 0, x_234);
lean_ctor_set(x_243, 1, x_242);
lean_ctor_set(x_243, 2, x_235);
lean_ctor_set(x_243, 3, x_236);
lean_ctor_set(x_243, 4, x_237);
lean_ctor_set(x_243, 5, x_238);
lean_ctor_set(x_243, 6, x_239);
if (lean_is_scalar(x_233)) {
 x_244 = lean_alloc_ctor(0, 4, 0);
} else {
 x_244 = x_233;
}
lean_ctor_set(x_244, 0, x_230);
lean_ctor_set(x_244, 1, x_243);
lean_ctor_set(x_244, 2, x_231);
lean_ctor_set(x_244, 3, x_232);
x_245 = lean_st_ref_set(x_4, x_244, x_229);
lean_dec(x_4);
x_246 = lean_ctor_get(x_245, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_247 = x_245;
} else {
 lean_dec_ref(x_245);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_222);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_192);
lean_dec(x_6);
lean_dec(x_4);
x_249 = lean_ctor_get(x_221, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_221, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_251 = x_221;
} else {
 lean_dec_ref(x_221);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_249);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_192);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_253 = lean_ctor_get(x_197, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_197, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_255 = x_197;
} else {
 lean_dec_ref(x_197);
 x_255 = lean_box(0);
}
if (lean_is_scalar(x_255)) {
 x_256 = lean_alloc_ctor(1, 2, 0);
} else {
 x_256 = x_255;
}
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
else
{
lean_object* x_257; lean_object* x_258; 
lean_dec(x_192);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_257 = lean_ctor_get(x_196, 0);
lean_inc(x_257);
lean_dec(x_196);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_189);
return x_258;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Std_Range_forIn_loop___at___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Meta_getFunInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_2);
x_9 = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_InferType(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_FunInfo(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1 = _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1();
lean_mark_persistent(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1);
l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1 = _init_l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___spec__1___closed__1);
l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__1 = _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__1();
lean_mark_persistent(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__1);
l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1 = _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1();
lean_mark_persistent(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
