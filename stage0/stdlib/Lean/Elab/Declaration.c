// Lean compiler output
// Module: Lean.Elab.Declaration
// Imports: Init Lean.Util.CollectLevelParams Lean.Elab.DeclUtil Lean.Elab.DefView Lean.Elab.Inductive Lean.Elab.Structure Lean.Elab.MutualDef Lean.Elab.DeclarationRange
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
lean_object* l_Lean_Elab_Command_elabDeclaration(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitialize(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__10;
static lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2;
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__32;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__4;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__20;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__9;
size_t l_USize_add(size_t, size_t);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__5;
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandOptDeclSig(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3;
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1;
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___closed__1;
extern lean_object* l_Lean_nullKind;
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__8;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__7;
lean_object* l_Lean_Elab_Command_elabMutualDef(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f(lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1(lean_object*);
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__4;
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__1;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAttr___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__2;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2;
lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_resolveGlobalConstCore___spec__2(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2;
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__2;
lean_object* l_Lean_Elab_Command_elabAttr_match__1___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__1;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__16;
lean_object* l_Lean_Elab_Command_elabAxiom_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__6;
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom_match__3(lean_object*);
lean_object* l_Lean_Attribute_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__1;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__12;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20;
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1;
lean_object* l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__10;
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__14;
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Command_elabAttr___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__8;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3(lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__7;
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__4;
lean_object* l_Std_mkHashSetImp___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1(lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__3;
lean_object* l_Lean_Elab_Command_getLevelNames___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual(lean_object*);
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__9;
lean_object* lean_string_utf8_byte_size(lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__7;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__7;
uint8_t l_USize_decLt(size_t, size_t);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_object* l_Lean_Elab_Command_elabAxiom_match__4___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__11;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_classInductiveSyntaxToView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1(lean_object*);
static lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__2;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__19;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_expandDeclId___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_runTermElabM___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_object* l_List_map___at_Lean_resolveGlobalConstNoOverload___spec__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Command_elabAttr___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__10;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__19;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__5;
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__5;
static lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___closed__3;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__4;
lean_object* l_Lean_Elab_Command_elabAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandMutualNamespace___closed__1;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_object* l_Lean_Elab_Command_elabAttr_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(lean_object*, size_t, size_t);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__12;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__27;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__45;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabInductiveViews(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3;
lean_object* l_Lean_Elab_Command_elabAxiom_match__3___rarg(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__4;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__6;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__8;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__5;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__10;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__19;
lean_object* l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__1;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1(lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Command_elabClassInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__26;
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__35;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_object* l_Lean_Macro_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__4;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__5;
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__2;
static lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__1;
static lean_object* l_Lean_Elab_Command_expandMutualElement___closed__1;
static lean_object* l_Lean_Elab_Command_expandMutualPreamble___closed__1;
lean_object* l_Lean_Elab_Command_elabMutual___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__21;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__38;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1;
lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_isDefLike(lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__13;
static lean_object* l_Lean_Elab_Command_expandMutualPreamble___closed__3;
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__41;
static lean_object* l_Lean_Elab_Command_elabClassInductive___closed__3;
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___boxed(lean_object*);
static lean_object* l_Lean_Elab_Command_elabMutual___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom_match__2___rarg(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__4;
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__3;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
static lean_object* l_Lean_Elab_Command_elabAttr___closed__1;
size_t lean_usize_of_nat(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__2(lean_object*);
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Lean_Elab_Command_elabAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__21;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__44;
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__13;
lean_object* l_Lean_Elab_Command_expandMutualPreamble(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabClassInductive___closed__2;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__23;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAttr___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabClassInductive___closed__1;
lean_object* l_Lean_Macro_expandMacro_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__47;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandMutualPreamble___closed__2;
lean_object* l_List_filterAux___at_Lean_resolveGlobalConstCore___spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
lean_object* l_Lean_Elab_Command_expandInitCmd(uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1;
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__10;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3;
lean_object* l_Lean_Macro_throwError___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__1;
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_isAttribute(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__4;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__11;
extern lean_object* l_Lean_Elab_macroAttribute;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__2;
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withMacroExpansion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabMutual(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__17;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__29;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabInductive___closed__1;
lean_object* l_Lean_Syntax_getKind(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23;
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_object* l_Lean_Elab_Term_applyAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__17;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10(size_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__13;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__9;
static lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__3;
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__3;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__24;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__5;
lean_object* l_Lean_Elab_expandDeclSig(lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Term_resolveName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__1;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__2;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__14;
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__2;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__15;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__1;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__18;
uint8_t l_Lean_Syntax_isNone(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__5;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__18;
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__2;
static lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__2;
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__1;
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__6;
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__4(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
lean_object* l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__18;
lean_object* l_Lean_Elab_Term_elabBinders___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1;
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__1;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__3;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__9;
lean_object* l_Lean_Elab_Term_addAutoBoundImplicits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__8;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__2;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__4;
lean_object* l_Lean_addDocString_x27___at_Lean_Elab_Command_expandDeclId___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__5;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__14;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
lean_object* l_Lean_FileMap_leanPosToLspPos(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__2;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__5;
lean_object* l_Lean_Elab_Command_elabInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___rarg(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_mkConstWithLevelParams___spec__1(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_resolveGlobalConstNoOverloadCore___spec__2(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(lean_object*, size_t, size_t);
lean_object* l_Lean_Elab_Command_elabAttr(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__1;
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1;
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__24;
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__22;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_object* l_Lean_Elab_getDeclarationSelectionRef(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2___rarg(lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__16;
lean_object* l_Lean_Elab_Term_withAutoBoundImplicit___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_elabDeclaration___closed__6;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__3;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__15;
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1;
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__1;
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__42;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__1(lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__1;
lean_object* l_Lean_Syntax_formatStxAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
static lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__2;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__25;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_expandInitCmd___closed__5;
static lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__1;
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__6;
static lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2;
static lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2;
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
static lean_object* l_Lean_Elab_Command_elabMutual___closed__1;
static lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1;
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_2(x_2, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_5, x_10, x_12);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_expandDeclIdCore(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_dec(x_5);
x_6 = l_Lean_extractMacroScopes(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_name_mk_string(x_13, x_12);
lean_ctor_set(x_6, 0, x_14);
x_15 = l_Lean_MacroScopesView_review(x_6);
x_16 = l_Lean_Syntax_isIdent(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_1);
x_17 = l_Lean_mkIdentFrom(x_1, x_15);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_setArg(x_1, x_18, x_17);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_8);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_2);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_Lean_mkIdentFrom(x_1, x_15);
lean_ctor_set(x_2, 1, x_21);
lean_ctor_set(x_2, 0, x_8);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_2);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_ctor_get(x_6, 1);
x_24 = lean_ctor_get(x_6, 2);
x_25 = lean_ctor_get(x_6, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_6);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = lean_name_mk_string(x_27, x_26);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
x_30 = l_Lean_MacroScopesView_review(x_29);
x_31 = l_Lean_Syntax_isIdent(x_1);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_inc(x_1);
x_32 = l_Lean_mkIdentFrom(x_1, x_30);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Lean_Syntax_setArg(x_1, x_33, x_32);
lean_ctor_set(x_2, 1, x_34);
lean_ctor_set(x_2, 0, x_8);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Lean_mkIdentFrom(x_1, x_30);
lean_ctor_set(x_2, 1, x_36);
lean_ctor_set(x_2, 0, x_8);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_2);
return x_37;
}
}
}
}
else
{
lean_object* x_38; 
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_2);
lean_dec(x_1);
x_38 = lean_box(0);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = l_Lean_extractMacroScopes(x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 1)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_1);
x_43 = lean_box(0);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_40, 2);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 3);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 lean_ctor_release(x_40, 3);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_box(0);
x_50 = lean_name_mk_string(x_49, x_48);
if (lean_is_scalar(x_47)) {
 x_51 = lean_alloc_ctor(0, 4, 0);
} else {
 x_51 = x_47;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
lean_ctor_set(x_51, 2, x_45);
lean_ctor_set(x_51, 3, x_46);
x_52 = l_Lean_MacroScopesView_review(x_51);
x_53 = l_Lean_Syntax_isIdent(x_1);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_inc(x_1);
x_54 = l_Lean_mkIdentFrom(x_1, x_52);
x_55 = lean_unsigned_to_nat(0u);
x_56 = l_Lean_Syntax_setArg(x_1, x_55, x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_42);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = l_Lean_mkIdentFrom(x_1, x_52);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_42);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_1);
x_62 = lean_box(0);
return x_62;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__2;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Command");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("abbrev");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("def");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("theorem");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("constant");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("axiom");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inductive");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__19;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("classInductive");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__21;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("structure");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__23;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("instance");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__25;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
lean_inc(x_6);
x_7 = l_Lean_Syntax_getKind(x_6);
x_8 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__10;
x_9 = lean_name_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_11 = lean_name_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__14;
x_13 = lean_name_eq(x_7, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
x_15 = lean_name_eq(x_7, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__18;
x_17 = lean_name_eq(x_7, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20;
x_19 = lean_name_eq(x_7, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__22;
x_21 = lean_name_eq(x_7, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__24;
x_23 = lean_name_eq(x_7, x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__26;
x_25 = lean_name_eq(x_7, x_24);
lean_dec(x_7);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_6);
lean_dec(x_1);
x_26 = lean_box(0);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_unsigned_to_nat(3u);
x_28 = l_Lean_Syntax_getArg(x_6, x_27);
x_29 = l_Lean_Syntax_isNone(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Syntax_getArg(x_28, x_30);
x_32 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
lean_dec(x_28);
lean_dec(x_6);
lean_dec(x_1);
x_33 = lean_box(0);
return x_33;
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_35, 1);
x_38 = l_Lean_Syntax_setArg(x_28, x_30, x_37);
x_39 = l_Lean_Syntax_setArg(x_6, x_27, x_38);
x_40 = l_Lean_Syntax_setArg(x_1, x_5, x_39);
lean_ctor_set(x_35, 1, x_40);
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_35, 0);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_35);
x_43 = l_Lean_Syntax_setArg(x_28, x_30, x_42);
x_44 = l_Lean_Syntax_setArg(x_6, x_27, x_43);
x_45 = l_Lean_Syntax_setArg(x_1, x_5, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_32, 0, x_46);
return x_32;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_32, 0);
lean_inc(x_47);
lean_dec(x_32);
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
x_51 = l_Lean_Syntax_setArg(x_28, x_30, x_49);
x_52 = l_Lean_Syntax_setArg(x_6, x_27, x_51);
x_53 = l_Lean_Syntax_setArg(x_1, x_5, x_52);
if (lean_is_scalar(x_50)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_50;
}
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_28);
lean_dec(x_6);
lean_dec(x_1);
x_56 = lean_box(0);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_7);
x_57 = l_Lean_Syntax_getArg(x_6, x_5);
x_58 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; 
lean_dec(x_6);
lean_dec(x_1);
x_59 = lean_box(0);
return x_59;
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_58);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_58, 0);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_61, 1);
x_64 = l_Lean_Syntax_setArg(x_6, x_5, x_63);
x_65 = l_Lean_Syntax_setArg(x_1, x_5, x_64);
lean_ctor_set(x_61, 1, x_65);
return x_58;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_66 = lean_ctor_get(x_61, 0);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_61);
x_68 = l_Lean_Syntax_setArg(x_6, x_5, x_67);
x_69 = l_Lean_Syntax_setArg(x_1, x_5, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_58, 0, x_70);
return x_58;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_58, 0);
lean_inc(x_71);
lean_dec(x_58);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_74 = x_71;
} else {
 lean_dec_ref(x_71);
 x_74 = lean_box(0);
}
x_75 = l_Lean_Syntax_setArg(x_6, x_5, x_73);
x_76 = l_Lean_Syntax_setArg(x_1, x_5, x_75);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_72);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_7);
x_79 = l_Lean_Syntax_getArg(x_6, x_5);
x_80 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; 
lean_dec(x_6);
lean_dec(x_1);
x_81 = lean_box(0);
return x_81;
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_80);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; 
x_83 = lean_ctor_get(x_80, 0);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_83, 1);
x_86 = l_Lean_Syntax_setArg(x_6, x_5, x_85);
x_87 = l_Lean_Syntax_setArg(x_1, x_5, x_86);
lean_ctor_set(x_83, 1, x_87);
return x_80;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_83, 0);
x_89 = lean_ctor_get(x_83, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_83);
x_90 = l_Lean_Syntax_setArg(x_6, x_5, x_89);
x_91 = l_Lean_Syntax_setArg(x_1, x_5, x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_88);
lean_ctor_set(x_92, 1, x_91);
lean_ctor_set(x_80, 0, x_92);
return x_80;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_93 = lean_ctor_get(x_80, 0);
lean_inc(x_93);
lean_dec(x_80);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = l_Lean_Syntax_setArg(x_6, x_5, x_95);
x_98 = l_Lean_Syntax_setArg(x_1, x_5, x_97);
if (lean_is_scalar(x_96)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_96;
}
lean_ctor_set(x_99, 0, x_94);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
return x_100;
}
}
}
}
else
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_7);
x_101 = l_Lean_Syntax_getArg(x_6, x_5);
x_102 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
lean_dec(x_6);
lean_dec(x_1);
x_103 = lean_box(0);
return x_103;
}
else
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_102);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; 
x_105 = lean_ctor_get(x_102, 0);
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_105, 1);
x_108 = l_Lean_Syntax_setArg(x_6, x_5, x_107);
x_109 = l_Lean_Syntax_setArg(x_1, x_5, x_108);
lean_ctor_set(x_105, 1, x_109);
return x_102;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_110 = lean_ctor_get(x_105, 0);
x_111 = lean_ctor_get(x_105, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_105);
x_112 = l_Lean_Syntax_setArg(x_6, x_5, x_111);
x_113 = l_Lean_Syntax_setArg(x_1, x_5, x_112);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_110);
lean_ctor_set(x_114, 1, x_113);
lean_ctor_set(x_102, 0, x_114);
return x_102;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_115 = lean_ctor_get(x_102, 0);
lean_inc(x_115);
lean_dec(x_102);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 lean_ctor_release(x_115, 1);
 x_118 = x_115;
} else {
 lean_dec_ref(x_115);
 x_118 = lean_box(0);
}
x_119 = l_Lean_Syntax_setArg(x_6, x_5, x_117);
x_120 = l_Lean_Syntax_setArg(x_1, x_5, x_119);
if (lean_is_scalar(x_118)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_118;
}
lean_ctor_set(x_121, 0, x_116);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_122, 0, x_121);
return x_122;
}
}
}
}
else
{
lean_object* x_123; lean_object* x_124; 
lean_dec(x_7);
x_123 = l_Lean_Syntax_getArg(x_6, x_5);
x_124 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_123);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; 
lean_dec(x_6);
lean_dec(x_1);
x_125 = lean_box(0);
return x_125;
}
else
{
uint8_t x_126; 
x_126 = !lean_is_exclusive(x_124);
if (x_126 == 0)
{
lean_object* x_127; uint8_t x_128; 
x_127 = lean_ctor_get(x_124, 0);
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_127, 1);
x_130 = l_Lean_Syntax_setArg(x_6, x_5, x_129);
x_131 = l_Lean_Syntax_setArg(x_1, x_5, x_130);
lean_ctor_set(x_127, 1, x_131);
return x_124;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_132 = lean_ctor_get(x_127, 0);
x_133 = lean_ctor_get(x_127, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_127);
x_134 = l_Lean_Syntax_setArg(x_6, x_5, x_133);
x_135 = l_Lean_Syntax_setArg(x_1, x_5, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_132);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_124, 0, x_136);
return x_124;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_137 = lean_ctor_get(x_124, 0);
lean_inc(x_137);
lean_dec(x_124);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = l_Lean_Syntax_setArg(x_6, x_5, x_139);
x_142 = l_Lean_Syntax_setArg(x_1, x_5, x_141);
if (lean_is_scalar(x_140)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_140;
}
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_144, 0, x_143);
return x_144;
}
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_7);
x_145 = l_Lean_Syntax_getArg(x_6, x_5);
x_146 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_145);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; 
lean_dec(x_6);
lean_dec(x_1);
x_147 = lean_box(0);
return x_147;
}
else
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_146);
if (x_148 == 0)
{
lean_object* x_149; uint8_t x_150; 
x_149 = lean_ctor_get(x_146, 0);
x_150 = !lean_is_exclusive(x_149);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_149, 1);
x_152 = l_Lean_Syntax_setArg(x_6, x_5, x_151);
x_153 = l_Lean_Syntax_setArg(x_1, x_5, x_152);
lean_ctor_set(x_149, 1, x_153);
return x_146;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_154 = lean_ctor_get(x_149, 0);
x_155 = lean_ctor_get(x_149, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_149);
x_156 = l_Lean_Syntax_setArg(x_6, x_5, x_155);
x_157 = l_Lean_Syntax_setArg(x_1, x_5, x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_154);
lean_ctor_set(x_158, 1, x_157);
lean_ctor_set(x_146, 0, x_158);
return x_146;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_159 = lean_ctor_get(x_146, 0);
lean_inc(x_159);
lean_dec(x_146);
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_162 = x_159;
} else {
 lean_dec_ref(x_159);
 x_162 = lean_box(0);
}
x_163 = l_Lean_Syntax_setArg(x_6, x_5, x_161);
x_164 = l_Lean_Syntax_setArg(x_1, x_5, x_163);
if (lean_is_scalar(x_162)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_162;
}
lean_ctor_set(x_165, 0, x_160);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_166, 0, x_165);
return x_166;
}
}
}
}
else
{
lean_object* x_167; lean_object* x_168; 
lean_dec(x_7);
x_167 = l_Lean_Syntax_getArg(x_6, x_5);
x_168 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_167);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; 
lean_dec(x_6);
lean_dec(x_1);
x_169 = lean_box(0);
return x_169;
}
else
{
uint8_t x_170; 
x_170 = !lean_is_exclusive(x_168);
if (x_170 == 0)
{
lean_object* x_171; uint8_t x_172; 
x_171 = lean_ctor_get(x_168, 0);
x_172 = !lean_is_exclusive(x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_171, 1);
x_174 = l_Lean_Syntax_setArg(x_6, x_5, x_173);
x_175 = l_Lean_Syntax_setArg(x_1, x_5, x_174);
lean_ctor_set(x_171, 1, x_175);
return x_168;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_176 = lean_ctor_get(x_171, 0);
x_177 = lean_ctor_get(x_171, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_171);
x_178 = l_Lean_Syntax_setArg(x_6, x_5, x_177);
x_179 = l_Lean_Syntax_setArg(x_1, x_5, x_178);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_176);
lean_ctor_set(x_180, 1, x_179);
lean_ctor_set(x_168, 0, x_180);
return x_168;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_181 = lean_ctor_get(x_168, 0);
lean_inc(x_181);
lean_dec(x_168);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_184 = x_181;
} else {
 lean_dec_ref(x_181);
 x_184 = lean_box(0);
}
x_185 = l_Lean_Syntax_setArg(x_6, x_5, x_183);
x_186 = l_Lean_Syntax_setArg(x_1, x_5, x_185);
if (lean_is_scalar(x_184)) {
 x_187 = lean_alloc_ctor(0, 2, 0);
} else {
 x_187 = x_184;
}
lean_ctor_set(x_187, 0, x_182);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_188, 0, x_187);
return x_188;
}
}
}
}
else
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_7);
x_189 = l_Lean_Syntax_getArg(x_6, x_5);
x_190 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_189);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; 
lean_dec(x_6);
lean_dec(x_1);
x_191 = lean_box(0);
return x_191;
}
else
{
uint8_t x_192; 
x_192 = !lean_is_exclusive(x_190);
if (x_192 == 0)
{
lean_object* x_193; uint8_t x_194; 
x_193 = lean_ctor_get(x_190, 0);
x_194 = !lean_is_exclusive(x_193);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_193, 1);
x_196 = l_Lean_Syntax_setArg(x_6, x_5, x_195);
x_197 = l_Lean_Syntax_setArg(x_1, x_5, x_196);
lean_ctor_set(x_193, 1, x_197);
return x_190;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_198 = lean_ctor_get(x_193, 0);
x_199 = lean_ctor_get(x_193, 1);
lean_inc(x_199);
lean_inc(x_198);
lean_dec(x_193);
x_200 = l_Lean_Syntax_setArg(x_6, x_5, x_199);
x_201 = l_Lean_Syntax_setArg(x_1, x_5, x_200);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_198);
lean_ctor_set(x_202, 1, x_201);
lean_ctor_set(x_190, 0, x_202);
return x_190;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_203 = lean_ctor_get(x_190, 0);
lean_inc(x_203);
lean_dec(x_190);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
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
x_207 = l_Lean_Syntax_setArg(x_6, x_5, x_205);
x_208 = l_Lean_Syntax_setArg(x_1, x_5, x_207);
if (lean_is_scalar(x_206)) {
 x_209 = lean_alloc_ctor(0, 2, 0);
} else {
 x_209 = x_206;
}
lean_ctor_set(x_209, 0, x_204);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_210, 0, x_209);
return x_210;
}
}
}
}
else
{
lean_object* x_211; lean_object* x_212; 
lean_dec(x_7);
x_211 = l_Lean_Syntax_getArg(x_6, x_5);
x_212 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_211);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; 
lean_dec(x_6);
lean_dec(x_1);
x_213 = lean_box(0);
return x_213;
}
else
{
uint8_t x_214; 
x_214 = !lean_is_exclusive(x_212);
if (x_214 == 0)
{
lean_object* x_215; uint8_t x_216; 
x_215 = lean_ctor_get(x_212, 0);
x_216 = !lean_is_exclusive(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_215, 1);
x_218 = l_Lean_Syntax_setArg(x_6, x_5, x_217);
x_219 = l_Lean_Syntax_setArg(x_1, x_5, x_218);
lean_ctor_set(x_215, 1, x_219);
return x_212;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_220 = lean_ctor_get(x_215, 0);
x_221 = lean_ctor_get(x_215, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_215);
x_222 = l_Lean_Syntax_setArg(x_6, x_5, x_221);
x_223 = l_Lean_Syntax_setArg(x_1, x_5, x_222);
x_224 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_224, 0, x_220);
lean_ctor_set(x_224, 1, x_223);
lean_ctor_set(x_212, 0, x_224);
return x_212;
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_225 = lean_ctor_get(x_212, 0);
lean_inc(x_225);
lean_dec(x_212);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_228 = x_225;
} else {
 lean_dec_ref(x_225);
 x_228 = lean_box(0);
}
x_229 = l_Lean_Syntax_setArg(x_6, x_5, x_227);
x_230 = l_Lean_Syntax_setArg(x_1, x_5, x_229);
if (lean_is_scalar(x_228)) {
 x_231 = lean_alloc_ctor(0, 2, 0);
} else {
 x_231 = x_228;
}
lean_ctor_set(x_231, 0, x_226);
lean_ctor_set(x_231, 1, x_230);
x_232 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_232, 0, x_231);
return x_232;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l_Lean_Elab_Command_elabAxiom_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_elabAxiom_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__4___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_elabAxiom_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__4___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = 0;
x_7 = l_Lean_Syntax_getPos_x3f(x_1, x_6);
x_8 = l_Lean_Syntax_getTailPos_x3f(x_1, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_FileMap_toPosition(x_5, x_9);
lean_inc(x_10);
x_11 = l_Lean_FileMap_leanPosToLspPos(x_5, x_10);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_12);
lean_inc(x_10);
x_13 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_10);
lean_ctor_set(x_13, 3, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_4);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
x_17 = l_Lean_FileMap_toPosition(x_5, x_16);
lean_dec(x_16);
lean_inc(x_17);
x_18 = l_Lean_FileMap_leanPosToLspPos(x_5, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_15);
lean_ctor_set(x_20, 2, x_17);
lean_ctor_set(x_20, 3, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_4);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_7, 0);
lean_inc(x_22);
lean_dec(x_7);
x_23 = l_Lean_FileMap_toPosition(x_5, x_22);
lean_dec(x_22);
lean_inc(x_23);
x_24 = l_Lean_FileMap_leanPosToLspPos(x_5, x_23);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_inc(x_25);
lean_inc(x_23);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_4);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_dec(x_24);
x_29 = lean_ctor_get(x_8, 0);
lean_inc(x_29);
lean_dec(x_8);
x_30 = l_Lean_FileMap_toPosition(x_5, x_29);
lean_dec(x_29);
lean_inc(x_30);
x_31 = l_Lean_FileMap_leanPosToLspPos(x_5, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_23);
lean_ctor_set(x_33, 1, x_28);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_4);
return x_34;
}
}
}
}
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_st_ref_take(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_declRangeExt;
x_12 = l_Lean_MapDeclarationExtension_insert___rarg(x_11, x_10, x_1, x_2);
lean_ctor_set(x_7, 0, x_12);
x_13 = lean_st_ref_set(x_4, x_7, x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_ctor_get(x_7, 3);
x_24 = lean_ctor_get(x_7, 4);
x_25 = lean_ctor_get(x_7, 5);
x_26 = lean_ctor_get(x_7, 6);
x_27 = lean_ctor_get(x_7, 7);
x_28 = lean_ctor_get(x_7, 8);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_29 = l_Lean_declRangeExt;
x_30 = l_Lean_MapDeclarationExtension_insert___rarg(x_29, x_20, x_1, x_2);
x_31 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_21);
lean_ctor_set(x_31, 2, x_22);
lean_ctor_set(x_31, 3, x_23);
lean_ctor_set(x_31, 4, x_24);
lean_ctor_set(x_31, 5, x_25);
lean_ctor_set(x_31, 6, x_26);
lean_ctor_set(x_31, 7, x_27);
lean_ctor_set(x_31, 8, x_28);
x_32 = lean_st_ref_set(x_4, x_31, x_8);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
x_35 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
static lean_object* _init_l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("example");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_2);
x_6 = l_Lean_Syntax_getKind(x_2);
x_7 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__2;
x_8 = lean_name_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_2);
x_9 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_2, x_3, x_4, x_5);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Elab_getDeclarationSelectionRef(x_2);
x_13 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_12, x_3, x_4, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(x_1, x_16, x_3, x_4, x_15);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
x_12 = l_Lean_Elab_Term_applyAttributesAt(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAxiom___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashSetImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAxiom___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabAxiom___lambda__2___closed__1;
x_2 = l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 1);
x_17 = 2;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_2);
x_18 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_20 = l_Lean_Elab_Term_elabType(x_3, x_9, x_10, x_11, x_12, x_13, x_14, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 0;
x_24 = lean_box(0);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_25 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_23, x_23, x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_27 = l_Lean_Meta_instantiateMVars(x_21, x_11, x_12, x_13, x_14, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = 1;
lean_inc(x_11);
x_31 = l_Lean_Meta_mkForallFVars(x_8, x_28, x_23, x_30, x_11, x_12, x_13, x_14, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
lean_inc(x_11);
x_34 = l_Lean_Meta_mkForallFVars(x_4, x_32, x_30, x_30, x_11, x_12, x_13, x_14, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unsigned_to_nat(1u);
x_38 = l_Lean_Elab_Term_levelMVarToParam(x_35, x_37, x_9, x_10, x_11, x_12, x_13, x_14, x_36);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Elab_Command_elabAxiom___lambda__2___closed__3;
lean_inc(x_41);
x_43 = l_Lean_CollectLevelParams_main(x_41, x_42);
x_44 = lean_ctor_get(x_43, 2);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l_Lean_Elab_sortDeclLevelParams(x_5, x_6, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_41);
lean_dec(x_2);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_0__Lean_Elab_Term_throwStuckAtUniverseCnstr___spec__15(x_7, x_48, x_9, x_10, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_45, 0);
lean_inc(x_50);
lean_dec(x_45);
lean_inc(x_2);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_51, 2, x_41);
x_52 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_53 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set_uint8(x_53, sizeof(void*)*1, x_52);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_54);
x_55 = l_Lean_Elab_Term_ensureNoUnassignedMVars(x_54, x_9, x_10, x_11, x_12, x_13, x_14, x_40);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_54);
x_57 = l_Lean_addDecl___at_Lean_Elab_Term_evalExpr___spec__3(x_54, x_9, x_10, x_11, x_12, x_13, x_14, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; uint8_t x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_2);
x_60 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_59, x_9, x_10, x_11, x_12, x_13, x_14, x_58);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_st_ref_get(x_14, x_61);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_2);
x_66 = l_Lean_isExtern(x_65, x_2);
if (x_66 == 0)
{
uint8_t x_67; lean_object* x_68; 
lean_dec(x_54);
x_67 = 1;
x_68 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_67, x_9, x_10, x_11, x_12, x_13, x_14, x_64);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_68;
}
else
{
lean_object* x_69; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_69 = l_Lean_compileDecl___at_Lean_Elab_Term_evalExpr___spec__5(x_54, x_9, x_10, x_11, x_12, x_13, x_14, x_64);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; uint8_t x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = 1;
x_72 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_71, x_9, x_10, x_11, x_12, x_13, x_14, x_70);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_72;
}
else
{
uint8_t x_73; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_69);
if (x_73 == 0)
{
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_69, 0);
x_75 = lean_ctor_get(x_69, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_69);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_54);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_77 = !lean_is_exclusive(x_60);
if (x_77 == 0)
{
return x_60;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_60, 0);
x_79 = lean_ctor_get(x_60, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_60);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_54);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_81 = !lean_is_exclusive(x_57);
if (x_81 == 0)
{
return x_57;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_57, 0);
x_83 = lean_ctor_get(x_57, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_57);
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
lean_dec(x_54);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_85 = !lean_is_exclusive(x_55);
if (x_85 == 0)
{
return x_55;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_55, 0);
x_87 = lean_ctor_get(x_55, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_55);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_34);
if (x_89 == 0)
{
return x_34;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_34, 0);
x_91 = lean_ctor_get(x_34, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_34);
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
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_31);
if (x_93 == 0)
{
return x_31;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_31, 0);
x_95 = lean_ctor_get(x_31, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_31);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
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
x_97 = !lean_is_exclusive(x_27);
if (x_97 == 0)
{
return x_27;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_27, 0);
x_99 = lean_ctor_get(x_27, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_27);
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
lean_dec(x_21);
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
x_101 = !lean_is_exclusive(x_25);
if (x_101 == 0)
{
return x_25;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_25, 0);
x_103 = lean_ctor_get(x_25, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_25);
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
x_105 = !lean_is_exclusive(x_20);
if (x_105 == 0)
{
return x_20;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_20, 0);
x_107 = lean_ctor_get(x_20, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_20);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; 
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
lean_dec(x_3);
lean_dec(x_2);
x_109 = !lean_is_exclusive(x_18);
if (x_109 == 0)
{
return x_18;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_18, 0);
x_111 = lean_ctor_get(x_18, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_18);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_17 = 0;
x_18 = lean_box(0);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_19 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_17, x_17, x_18, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = lean_array_get_size(x_9);
x_23 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_24 = l_Array_toSubarray___rarg(x_9, x_23, x_22);
x_25 = lean_ctor_get(x_1, 6);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_21);
x_27 = lean_array_get_size(x_25);
x_28 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_29 = 0;
x_30 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_runTermElabM___spec__1(x_25, x_28, x_29, x_26, x_10, x_11, x_12, x_13, x_14, x_15, x_20);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = !lean_is_exclusive(x_10);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_10, 7);
lean_dec(x_35);
lean_ctor_set(x_10, 7, x_33);
x_36 = l_Lean_Elab_Term_resetMessageLog(x_10, x_11, x_12, x_13, x_14, x_15, x_32);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_10);
x_38 = l_Lean_Elab_Term_addAutoBoundImplicits(x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Syntax_getArgs(x_2);
lean_inc(x_7);
x_42 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__2___boxed), 15, 7);
lean_closure_set(x_42, 0, x_3);
lean_closure_set(x_42, 1, x_4);
lean_closure_set(x_42, 2, x_5);
lean_closure_set(x_42, 3, x_39);
lean_closure_set(x_42, 4, x_6);
lean_closure_set(x_42, 5, x_7);
lean_closure_set(x_42, 6, x_8);
x_43 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_43, 0, x_41);
lean_closure_set(x_43, 1, x_42);
x_44 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLevelNames___rarg), 9, 2);
lean_closure_set(x_44, 0, x_7);
lean_closure_set(x_44, 1, x_43);
x_45 = l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(x_44, x_10, x_11, x_12, x_13, x_14, x_15, x_40);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_10);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_38);
if (x_46 == 0)
{
return x_38;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_38, 0);
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_38);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_50 = lean_ctor_get(x_10, 0);
x_51 = lean_ctor_get(x_10, 1);
x_52 = lean_ctor_get(x_10, 2);
x_53 = lean_ctor_get(x_10, 3);
x_54 = lean_ctor_get(x_10, 4);
x_55 = lean_ctor_get_uint8(x_10, sizeof(void*)*8);
x_56 = lean_ctor_get_uint8(x_10, sizeof(void*)*8 + 1);
x_57 = lean_ctor_get_uint8(x_10, sizeof(void*)*8 + 2);
x_58 = lean_ctor_get(x_10, 5);
x_59 = lean_ctor_get(x_10, 6);
x_60 = lean_ctor_get_uint8(x_10, sizeof(void*)*8 + 3);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_10);
x_61 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_51);
lean_ctor_set(x_61, 2, x_52);
lean_ctor_set(x_61, 3, x_53);
lean_ctor_set(x_61, 4, x_54);
lean_ctor_set(x_61, 5, x_58);
lean_ctor_set(x_61, 6, x_59);
lean_ctor_set(x_61, 7, x_33);
lean_ctor_set_uint8(x_61, sizeof(void*)*8, x_55);
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 1, x_56);
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 2, x_57);
lean_ctor_set_uint8(x_61, sizeof(void*)*8 + 3, x_60);
x_62 = l_Lean_Elab_Term_resetMessageLog(x_61, x_11, x_12, x_13, x_14, x_15, x_32);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
lean_inc(x_14);
lean_inc(x_12);
lean_inc(x_61);
x_64 = l_Lean_Elab_Term_addAutoBoundImplicits(x_9, x_61, x_11, x_12, x_13, x_14, x_15, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Lean_Syntax_getArgs(x_2);
lean_inc(x_7);
x_68 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__2___boxed), 15, 7);
lean_closure_set(x_68, 0, x_3);
lean_closure_set(x_68, 1, x_4);
lean_closure_set(x_68, 2, x_5);
lean_closure_set(x_68, 3, x_65);
lean_closure_set(x_68, 4, x_6);
lean_closure_set(x_68, 5, x_7);
lean_closure_set(x_68, 6, x_8);
x_69 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_69, 0, x_67);
lean_closure_set(x_69, 1, x_68);
x_70 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withLevelNames___rarg), 9, 2);
lean_closure_set(x_70, 0, x_7);
lean_closure_set(x_70, 1, x_69);
x_71 = l_Lean_Elab_Term_withoutAutoBoundImplicit___rarg(x_70, x_61, x_11, x_12, x_13, x_14, x_15, x_66);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_61);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_72 = lean_ctor_get(x_64, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_64, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_74 = x_64;
} else {
 lean_dec_ref(x_64);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_15);
lean_dec(x_14);
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
x_76 = !lean_is_exclusive(x_19);
if (x_76 == 0)
{
return x_19;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_19, 0);
x_78 = lean_ctor_get(x_19, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_19);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Elab_expandDeclSig(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Command_getLevelNames___rarg(x_4, x_5);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_16 = l_Lean_Elab_Command_expandDeclId(x_7, x_1, x_3, x_4, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 2);
lean_inc(x_20);
lean_dec(x_17);
lean_inc(x_2);
lean_inc(x_19);
x_21 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(x_19, x_2, x_3, x_4, x_18);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
lean_inc(x_19);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_19);
x_24 = l_Lean_Elab_Command_getScope___rarg(x_4, x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 5);
lean_inc(x_27);
x_28 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__3___boxed), 16, 8);
lean_closure_set(x_28, 0, x_25);
lean_closure_set(x_28, 1, x_11);
lean_closure_set(x_28, 2, x_1);
lean_closure_set(x_28, 3, x_19);
lean_closure_set(x_28, 4, x_12);
lean_closure_set(x_28, 5, x_14);
lean_closure_set(x_28, 6, x_20);
lean_closure_set(x_28, 7, x_2);
x_29 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg), 9, 2);
lean_closure_set(x_29, 0, x_27);
lean_closure_set(x_29, 1, x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicit___rarg), 8, 1);
lean_closure_set(x_30, 0, x_29);
x_31 = l_Lean_Elab_Command_liftTermElabM___rarg(x_23, x_30, x_3, x_4, x_26);
lean_dec(x_4);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
lean_object* l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Command_elabAxiom___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Command_elabAxiom___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_7);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Lean_Elab_Command_elabAxiom___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_2);
lean_dec(x_1);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of attributes in constructor declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__2;
x_11 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_10, x_3, x_4, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'unsafe' in constructor declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__2;
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'partial' in constructor declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__2;
x_10 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of 'noncomputable' in constructor declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(x_1, x_6, x_2, x_3, x_4);
lean_dec(x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__2;
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_8, x_2, x_3, x_4);
lean_dec(x_3);
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
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_2, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Elab_getDeclarationRange___at_Lean_Elab_Command_elabAxiom___spec__2(x_3, x_4, x_5, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__3(x_1, x_13, x_4, x_5, x_12);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(x_1, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getIdAt(x_2, x_10);
x_12 = l_Lean_Name_append(x_3, x_11);
x_13 = l_Lean_Syntax_getArg(x_2, x_10);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_15 = l_Lean_Elab_Command_getRef(x_5, x_6, x_9);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_replaceRef(x_13, x_16);
lean_dec(x_16);
x_19 = lean_ctor_get(x_5, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_5, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_5, 3);
lean_inc(x_22);
x_23 = lean_ctor_get(x_5, 4);
lean_inc(x_23);
x_24 = lean_ctor_get(x_5, 5);
lean_inc(x_24);
x_25 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_21);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_23);
lean_ctor_set(x_25, 5, x_24);
lean_ctor_set(x_25, 6, x_18);
lean_inc(x_6);
x_26 = l_Lean_Elab_applyVisibility___at_Lean_Elab_Command_expandDeclId___spec__3(x_14, x_12, x_25, x_6, x_17);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(3u);
x_30 = l_Lean_Syntax_getArg(x_2, x_29);
x_31 = l_Lean_Syntax_isNone(x_30);
lean_dec(x_30);
x_32 = lean_unsigned_to_nat(4u);
x_33 = l_Lean_Syntax_getArg(x_2, x_32);
x_34 = l_Lean_Elab_expandOptDeclSig(x_33);
lean_dec(x_33);
if (x_31 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
lean_inc(x_27);
x_38 = l_Lean_addDocString_x27___at_Lean_Elab_Command_expandDeclId___spec__7(x_27, x_37, x_5, x_6, x_28);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_2);
lean_inc(x_27);
x_40 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_27, x_2, x_13, x_5, x_6, x_39);
lean_dec(x_6);
lean_dec(x_5);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = 1;
x_44 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_44, 0, x_2);
lean_ctor_set(x_44, 1, x_1);
lean_ctor_set(x_44, 2, x_27);
lean_ctor_set(x_44, 3, x_35);
lean_ctor_set(x_44, 4, x_36);
lean_ctor_set_uint8(x_44, sizeof(void*)*5, x_43);
lean_ctor_set(x_40, 0, x_44);
return x_40;
}
else
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_dec(x_40);
x_46 = 1;
x_47 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_47, 0, x_2);
lean_ctor_set(x_47, 1, x_1);
lean_ctor_set(x_47, 2, x_27);
lean_ctor_set(x_47, 3, x_35);
lean_ctor_set(x_47, 4, x_36);
lean_ctor_set_uint8(x_47, sizeof(void*)*5, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_49 = lean_ctor_get(x_34, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_34, 1);
lean_inc(x_50);
lean_dec(x_34);
x_51 = lean_ctor_get(x_1, 0);
lean_inc(x_51);
lean_inc(x_27);
x_52 = l_Lean_addDocString_x27___at_Lean_Elab_Command_expandDeclId___spec__7(x_27, x_51, x_5, x_6, x_28);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
lean_inc(x_2);
lean_inc(x_27);
x_54 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_27, x_2, x_13, x_5, x_6, x_53);
lean_dec(x_6);
lean_dec(x_5);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
lean_dec(x_56);
x_57 = 0;
x_58 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_58, 0, x_2);
lean_ctor_set(x_58, 1, x_1);
lean_ctor_set(x_58, 2, x_27);
lean_ctor_set(x_58, 3, x_49);
lean_ctor_set(x_58, 4, x_50);
lean_ctor_set_uint8(x_58, sizeof(void*)*5, x_57);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = 0;
x_61 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_61, 0, x_2);
lean_ctor_set(x_61, 1, x_1);
lean_ctor_set(x_61, 2, x_27);
lean_ctor_set(x_61, 3, x_49);
lean_ctor_set(x_61, 4, x_50);
lean_ctor_set_uint8(x_61, sizeof(void*)*5, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_26);
if (x_63 == 0)
{
return x_26;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_26, 0);
x_65 = lean_ctor_get(x_26, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_26);
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
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_8);
if (x_67 == 0)
{
return x_8;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_8, 0);
x_69 = lean_ctor_get(x_8, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_8);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' constructor in a 'private' inductive datatype");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
lean_dec(x_5);
x_9 = l_Lean_Elab_Modifiers_isProtected(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(x_1, x_2, x_3, x_10, x_6, x_7, x_8);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_Lean_Elab_Modifiers_isPrivate(x_4);
lean_dec(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(x_1, x_2, x_3, x_13, x_6, x_7, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__2;
x_16 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_15, x_6, x_7, x_8);
lean_dec(x_7);
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
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' constructor in a 'private' inductive datatype");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_4 < x_3;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_1);
x_10 = x_5;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_12 = lean_array_uget(x_5, x_4);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_5, x_4, x_13);
x_15 = x_12;
x_24 = lean_unsigned_to_nat(1u);
x_25 = l_Lean_Syntax_getArg(x_15, x_24);
x_26 = l_Lean_Elab_Command_getRef(x_6, x_7, x_8);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_replaceRef(x_15, x_27);
lean_dec(x_27);
x_30 = lean_ctor_get(x_6, 0);
x_31 = lean_ctor_get(x_6, 1);
x_32 = lean_ctor_get(x_6, 2);
x_33 = lean_ctor_get(x_6, 3);
x_34 = lean_ctor_get(x_6, 4);
x_35 = lean_ctor_get(x_6, 5);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
x_36 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_31);
lean_ctor_set(x_36, 2, x_32);
lean_ctor_set(x_36, 3, x_33);
lean_ctor_set(x_36, 4, x_34);
lean_ctor_set(x_36, 5, x_35);
lean_ctor_set(x_36, 6, x_29);
lean_inc(x_7);
lean_inc(x_36);
x_37 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_25, x_36, x_7, x_28);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Elab_Modifiers_isPrivate(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_box(0);
lean_inc(x_7);
lean_inc(x_1);
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(x_38, x_15, x_2, x_1, x_41, x_36, x_7, x_39);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_16 = x_43;
x_17 = x_44;
goto block_23;
}
else
{
uint8_t x_45; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_42);
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
x_49 = l_Lean_Elab_Modifiers_isPrivate(x_1);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_box(0);
lean_inc(x_7);
lean_inc(x_1);
x_51 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(x_38, x_15, x_2, x_1, x_50, x_36, x_7, x_39);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_16 = x_52;
x_17 = x_53;
goto block_23;
}
else
{
uint8_t x_54; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
return x_51;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_51);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_38);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_1);
x_58 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__2;
x_59 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_58, x_36, x_7, x_39);
lean_dec(x_7);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_36);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_37);
if (x_64 == 0)
{
return x_37;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_37, 0);
x_66 = lean_ctor_get(x_37, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_37);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
block_23:
{
size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = 1;
x_19 = x_4 + x_18;
x_20 = x_16;
x_21 = lean_array_uset(x_14, x_4, x_20);
x_4 = x_19;
x_5 = x_21;
x_8 = x_17;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Elab_expandOptDeclSig(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_2, x_13);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_15 = l_Lean_Elab_Command_expandDeclId(x_14, x_1, x_3, x_4, x_7);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 2);
lean_inc(x_20);
lean_dec(x_16);
lean_inc(x_2);
lean_inc(x_19);
x_21 = l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1(x_19, x_2, x_3, x_4, x_17);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(4u);
x_24 = l_Lean_Syntax_getArg(x_2, x_23);
x_25 = l_Lean_Syntax_getArgs(x_24);
lean_dec(x_24);
x_26 = lean_array_get_size(x_25);
x_27 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_28 = x_25;
x_29 = lean_box_usize(x_27);
x_30 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1;
lean_inc(x_19);
lean_inc(x_1);
x_31 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed), 8, 5);
lean_closure_set(x_31, 0, x_1);
lean_closure_set(x_31, 1, x_19);
lean_closure_set(x_31, 2, x_29);
lean_closure_set(x_31, 3, x_30);
lean_closure_set(x_31, 4, x_28);
x_32 = x_31;
lean_inc(x_4);
lean_inc(x_3);
x_33 = lean_apply_3(x_32, x_3, x_4, x_22);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_unsigned_to_nat(5u);
x_37 = l_Lean_Syntax_getArg(x_2, x_36);
x_38 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(x_37, x_3, x_4, x_35);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_41, 0, x_2);
lean_ctor_set(x_41, 1, x_1);
lean_ctor_set(x_41, 2, x_18);
lean_ctor_set(x_41, 3, x_19);
lean_ctor_set(x_41, 4, x_20);
lean_ctor_set(x_41, 5, x_11);
lean_ctor_set(x_41, 6, x_12);
lean_ctor_set(x_41, 7, x_34);
lean_ctor_set(x_41, 8, x_40);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_38, 0);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_38);
x_44 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_44, 0, x_2);
lean_ctor_set(x_44, 1, x_1);
lean_ctor_set(x_44, 2, x_18);
lean_ctor_set(x_44, 3, x_19);
lean_ctor_set(x_44, 4, x_20);
lean_ctor_set(x_44, 5, x_11);
lean_ctor_set(x_44, 6, x_12);
lean_ctor_set(x_44, 7, x_34);
lean_ctor_set(x_44, 8, x_42);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_34);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_38);
if (x_46 == 0)
{
return x_38;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_38, 0);
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_38);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_33);
if (x_50 == 0)
{
return x_33;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_33, 0);
x_52 = lean_ctor_get(x_33, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_33);
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
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_15);
if (x_54 == 0)
{
return x_15;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_15, 0);
x_56 = lean_ctor_get(x_15, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_15);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_6);
if (x_58 == 0)
{
return x_6;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_6, 0);
x_60 = lean_ctor_get(x_6, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_6);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_addAuxDeclarationRanges___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_classInductiveSyntaxToView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabInductive___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Elab_Command_elabInductive___closed__1;
x_10 = lean_array_push(x_9, x_7);
x_11 = l_Lean_Elab_Command_elabInductiveViews(x_10, x_3, x_4, x_8);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_6);
if (x_12 == 0)
{
return x_6;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_6, 0);
x_14 = lean_ctor_get(x_6, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_6);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabClassInductive___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("class");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabClassInductive___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_elabClassInductive___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabClassInductive___closed__3() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_Lean_Elab_Command_elabClassInductive___closed__2;
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Command_elabClassInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Elab_Command_elabClassInductive___closed__3;
x_7 = l_Lean_Elab_Modifiers_addAttribute(x_1, x_6);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_7, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Elab_Command_elabInductive___closed__1;
x_12 = lean_array_push(x_11, x_9);
x_13 = l_Lean_Elab_Command_elabInductiveViews(x_12, x_3, x_4, x_10);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("null");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_elabDeclaration___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("namespace");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_elabDeclaration___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("end");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_elabDeclaration___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabDeclaration(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_7, x_2, x_3, x_4);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
lean_inc(x_12);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__18;
x_15 = lean_name_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20;
x_17 = lean_name_eq(x_13, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__22;
x_19 = lean_name_eq(x_13, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__24;
x_21 = lean_name_eq(x_13, x_20);
lean_dec(x_13);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_9);
x_22 = l_Lean_Elab_Command_isDefLike(x_12);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_23 = l_Lean_Elab_Command_elabDeclaration___closed__2;
x_24 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_23, x_2, x_3, x_10);
lean_dec(x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = l_Lean_Elab_Command_elabInductive___closed__1;
x_26 = lean_array_push(x_25, x_1);
x_27 = l_Lean_Elab_Command_elabMutualDef(x_26, x_2, x_3, x_10);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_1);
x_28 = l_Lean_Elab_Command_elabStructure(x_9, x_12, x_2, x_3, x_10);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_13);
lean_dec(x_1);
x_29 = l_Lean_Elab_Command_elabClassInductive(x_9, x_12, x_2, x_3, x_10);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_13);
lean_dec(x_1);
x_30 = l_Lean_Elab_Command_elabInductive(x_9, x_12, x_2, x_3, x_10);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_13);
lean_dec(x_1);
x_31 = l_Lean_Elab_Command_elabAxiom(x_9, x_12, x_2, x_3, x_10);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_8);
if (x_32 == 0)
{
return x_8;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_8, 0);
x_34 = lean_ctor_get(x_8, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_8);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_36 = lean_ctor_get(x_5, 0);
lean_inc(x_36);
lean_dec(x_5);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
lean_inc(x_1);
x_39 = l_Lean_mkIdentFrom(x_1, x_37);
x_40 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(x_2, x_3, x_4);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l_Lean_Elab_Command_getMainModule___rarg(x_3, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Elab_Command_elabDeclaration___closed__5;
lean_inc(x_41);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_41);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_50 = lean_array_push(x_49, x_48);
lean_inc(x_39);
x_51 = lean_array_push(x_50, x_39);
x_52 = l_Lean_Elab_Command_elabDeclaration___closed__6;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Elab_Command_elabDeclaration___closed__8;
x_55 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_55, 0, x_41);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_Elab_Command_elabInductive___closed__1;
x_57 = lean_array_push(x_56, x_39);
x_58 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = lean_array_push(x_49, x_55);
x_61 = lean_array_push(x_60, x_59);
x_62 = l_Lean_Elab_Command_elabDeclaration___closed__9;
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_65 = lean_array_push(x_64, x_53);
x_66 = lean_array_push(x_65, x_38);
x_67 = lean_array_push(x_66, x_63);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_58);
lean_ctor_set(x_68, 1, x_67);
lean_inc(x_68);
x_69 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCommand), 4, 1);
lean_closure_set(x_69, 0, x_68);
x_70 = l_Lean_Elab_Command_withMacroExpansion___rarg(x_1, x_68, x_69, x_2, x_3, x_46);
return x_70;
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Elab");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2;
x_2 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabDeclaration");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDeclaration), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_4 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__5;
x_5 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__6;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
x_8 = l_Lean_Syntax_getKind(x_7);
x_9 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20;
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
size_t x_12; size_t x_13; 
x_12 = 1;
x_13 = x_2 + x_12;
x_2 = x_13;
goto _start;
}
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_5, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = 1;
return x_10;
}
else
{
size_t x_11; size_t x_12; uint8_t x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_13 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(x_4, x_11, x_12);
lean_dec(x_4);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 < x_1;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_array_uget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l_Lean_Syntax_getArg(x_13, x_11);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_14, x_4, x_5, x_6);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = l_Lean_Syntax_getArg(x_13, x_18);
lean_dec(x_13);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_16, x_19, x_4, x_5, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_2 + x_23;
x_25 = x_21;
x_26 = lean_array_uset(x_12, x_2, x_25);
x_2 = x_24;
x_3 = x_26;
x_6 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
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
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_15);
if (x_32 == 0)
{
return x_15;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_15, 0);
x_34 = lean_ctor_get(x_15, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_15);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = x_1;
x_8 = lean_box_usize(x_6);
x_9 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1;
x_10 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed), 6, 3);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
lean_closure_set(x_10, 2, x_7);
x_11 = x_10;
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_3(x_11, x_2, x_3, x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Command_elabInductiveViews(x_13, x_2, x_3, x_14);
return x_15;
}
else
{
uint8_t x_16; 
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(x_7, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
x_8 = l_Lean_Elab_Command_isDefLike(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_2 + x_10;
x_2 = x_11;
goto _start;
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
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_5, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = 1;
return x_10;
}
else
{
size_t x_11; size_t x_12; uint8_t x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_13 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(x_4, x_11, x_12);
lean_dec(x_4);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("variable");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("universe");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("check");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("set_option");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("open");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__2;
x_4 = lean_name_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__4;
x_6 = lean_name_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__6;
x_8 = lean_name_eq(x_2, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__8;
x_10 = lean_name_eq(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__10;
x_12 = lean_name_eq(x_2, x_11);
lean_dec(x_2);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_2);
x_14 = 1;
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = 1;
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_2);
x_16 = 1;
return x_16;
}
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_fget(x_1, x_2);
x_7 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Array_toSubarray___rarg(x_1, x_8, x_2);
x_11 = l_Array_ofSubarray___rarg(x_10);
x_12 = l_Array_toSubarray___rarg(x_1, x_2, x_3);
x_13 = l_Array_ofSubarray___rarg(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_box(0);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_2 = x_18;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_2(x_4, x_8, x_9);
return x_10;
}
}
else
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_apply_3(x_5, x_13, x_14, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conflicting namespaces in mutual declaration, using namespace '");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', but used '");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' in previous declaration");
return x_1;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_14; 
x_14 = x_3 < x_2;
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_6);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_uget(x_1, x_3);
x_17 = !lean_is_exclusive(x_4);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
x_20 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_16);
if (lean_obj_tag(x_19) == 0)
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_array_push(x_18, x_16);
lean_ctor_set(x_4, 0, x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_4);
x_7 = x_22;
x_8 = x_6;
goto block_13;
}
else
{
uint8_t x_23; 
lean_dec(x_16);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_ctor_set(x_20, 0, x_25);
x_27 = lean_array_push(x_18, x_26);
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_27);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_4);
x_7 = x_28;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec(x_20);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_30);
x_33 = lean_array_push(x_18, x_31);
lean_ctor_set(x_4, 1, x_32);
lean_ctor_set(x_4, 0, x_33);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_4);
x_7 = x_34;
x_8 = x_6;
goto block_13;
}
}
}
else
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_array_push(x_18, x_16);
lean_ctor_set(x_4, 0, x_35);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_4);
x_7 = x_36;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_16);
x_37 = lean_ctor_get(x_20, 0);
lean_inc(x_37);
lean_dec(x_20);
x_38 = lean_ctor_get(x_19, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_name_eq(x_38, x_39);
if (x_41 == 0)
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_free_object(x_4);
lean_dec(x_19);
lean_dec(x_18);
x_42 = 1;
x_43 = l_Lean_Name_toString(x_39, x_42);
x_44 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1;
x_45 = lean_string_append(x_44, x_43);
lean_dec(x_43);
x_46 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2;
x_47 = lean_string_append(x_45, x_46);
x_48 = l_Lean_Name_toString(x_38, x_42);
x_49 = lean_string_append(x_47, x_48);
lean_dec(x_48);
x_50 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3;
x_51 = lean_string_append(x_49, x_50);
x_52 = l_Lean_Macro_throwErrorAt___rarg(x_40, x_51, x_5, x_6);
lean_dec(x_40);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
return x_52;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_52);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_38);
x_57 = lean_array_push(x_18, x_40);
lean_ctor_set(x_4, 0, x_57);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_4);
x_7 = x_58;
x_8 = x_6;
goto block_13;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_4, 0);
x_60 = lean_ctor_get(x_4, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_4);
lean_inc(x_16);
x_61 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_16);
if (lean_obj_tag(x_60) == 0)
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_array_push(x_59, x_16);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_7 = x_64;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_16);
x_65 = lean_ctor_get(x_61, 0);
lean_inc(x_65);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_66 = x_61;
} else {
 lean_dec_ref(x_61);
 x_66 = lean_box(0);
}
x_67 = lean_ctor_get(x_65, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
if (lean_is_scalar(x_66)) {
 x_69 = lean_alloc_ctor(1, 1, 0);
} else {
 x_69 = x_66;
}
lean_ctor_set(x_69, 0, x_67);
x_70 = lean_array_push(x_59, x_68);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_7 = x_72;
x_8 = x_6;
goto block_13;
}
}
else
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_array_push(x_59, x_16);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_60);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_7 = x_75;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_dec(x_16);
x_76 = lean_ctor_get(x_61, 0);
lean_inc(x_76);
lean_dec(x_61);
x_77 = lean_ctor_get(x_60, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
x_80 = lean_name_eq(x_77, x_78);
if (x_80 == 0)
{
uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_60);
lean_dec(x_59);
x_81 = 1;
x_82 = l_Lean_Name_toString(x_78, x_81);
x_83 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1;
x_84 = lean_string_append(x_83, x_82);
lean_dec(x_82);
x_85 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2;
x_86 = lean_string_append(x_84, x_85);
x_87 = l_Lean_Name_toString(x_77, x_81);
x_88 = lean_string_append(x_86, x_87);
lean_dec(x_87);
x_89 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3;
x_90 = lean_string_append(x_88, x_89);
x_91 = l_Lean_Macro_throwErrorAt___rarg(x_79, x_90, x_5, x_6);
lean_dec(x_79);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
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
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_78);
lean_dec(x_77);
x_96 = lean_array_push(x_59, x_79);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_60);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_7 = x_98;
x_8 = x_6;
goto block_13;
}
}
}
}
}
block_13:
{
lean_object* x_9; size_t x_10; size_t x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
x_4 = x_9;
x_6 = x_8;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMutualNamespace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l_Lean_Elab_Command_expandMutualNamespace___closed__1;
lean_inc(x_2);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(x_6, x_8, x_9, x_10, x_2, x_3);
lean_dec(x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = lean_box(1);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_box(1);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_ctor_get(x_12, 0);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
lean_inc(x_1);
x_23 = l_Lean_mkIdentFrom(x_1, x_22);
x_24 = l_Lean_nullKind;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
x_26 = l_Lean_Syntax_setArg(x_1, x_4, x_25);
x_27 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_20);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_Lean_Elab_Command_elabDeclaration___closed__5;
lean_inc(x_29);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_33 = lean_array_push(x_32, x_31);
lean_inc(x_23);
x_34 = lean_array_push(x_33, x_23);
x_35 = l_Lean_Elab_Command_elabDeclaration___closed__6;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Elab_Command_elabDeclaration___closed__8;
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_Elab_Command_elabInductive___closed__1;
x_40 = lean_array_push(x_39, x_23);
x_41 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_array_push(x_32, x_38);
x_44 = lean_array_push(x_43, x_42);
x_45 = l_Lean_Elab_Command_elabDeclaration___closed__9;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_48 = lean_array_push(x_47, x_36);
x_49 = lean_array_push(x_48, x_26);
x_50 = lean_array_push(x_49, x_46);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_41);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_27, 0, x_51);
return x_27;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_52 = lean_ctor_get(x_27, 0);
x_53 = lean_ctor_get(x_27, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_27);
x_54 = l_Lean_Elab_Command_elabDeclaration___closed__5;
lean_inc(x_52);
x_55 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_57 = lean_array_push(x_56, x_55);
lean_inc(x_23);
x_58 = lean_array_push(x_57, x_23);
x_59 = l_Lean_Elab_Command_elabDeclaration___closed__6;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_Lean_Elab_Command_elabDeclaration___closed__8;
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_52);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_Elab_Command_elabInductive___closed__1;
x_64 = lean_array_push(x_63, x_23);
x_65 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = lean_array_push(x_56, x_62);
x_68 = lean_array_push(x_67, x_66);
x_69 = l_Lean_Elab_Command_elabDeclaration___closed__9;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_72 = lean_array_push(x_71, x_60);
x_73 = lean_array_push(x_72, x_26);
x_74 = lean_array_push(x_73, x_70);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_65);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_53);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_11);
if (x_77 == 0)
{
return x_11;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_11, 0);
x_79 = lean_ctor_get(x_11, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_11);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mutual");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandMutualNamespace");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 < x_2;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_uget(x_1, x_3);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_inc(x_9);
x_13 = l_Lean_Macro_expandMacro_x3f(x_9, x_5, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_push(x_11, x_9);
lean_ctor_set(x_4, 0, x_16);
x_17 = 1;
x_18 = x_3 + x_17;
x_3 = x_18;
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; size_t x_25; size_t x_26; 
lean_dec(x_12);
lean_dec(x_9);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
lean_dec(x_14);
x_22 = lean_array_push(x_11, x_21);
x_23 = 1;
x_24 = lean_box(x_23);
lean_ctor_set(x_4, 1, x_24);
lean_ctor_set(x_4, 0, x_22);
x_25 = 1;
x_26 = x_3 + x_25;
x_3 = x_26;
x_6 = x_20;
goto _start;
}
}
else
{
uint8_t x_28; 
lean_free_object(x_4);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_4, 0);
x_33 = lean_ctor_get(x_4, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_4);
lean_inc(x_5);
lean_inc(x_9);
x_34 = l_Lean_Macro_expandMacro_x3f(x_9, x_5, x_6);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; 
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_array_push(x_32, x_9);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
x_39 = 1;
x_40 = x_3 + x_39;
x_3 = x_40;
x_4 = x_38;
x_6 = x_36;
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; size_t x_48; size_t x_49; 
lean_dec(x_33);
lean_dec(x_9);
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_dec(x_34);
x_43 = lean_ctor_get(x_35, 0);
lean_inc(x_43);
lean_dec(x_35);
x_44 = lean_array_push(x_32, x_43);
x_45 = 1;
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = 1;
x_49 = x_3 + x_48;
x_3 = x_49;
x_4 = x_47;
x_6 = x_42;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_9);
lean_dec(x_5);
x_51 = lean_ctor_get(x_34, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_34, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_53 = x_34;
} else {
 lean_dec_ref(x_34);
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
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMutualElement___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l_Lean_Elab_Command_expandMutualElement___closed__1;
x_11 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(x_6, x_8, x_9, x_10, x_2, x_3);
lean_dec(x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_box(1);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_box(1);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_11);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_11, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = l_Lean_nullKind;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Syntax_setArg(x_1, x_4, x_25);
lean_ctor_set(x_11, 0, x_26);
return x_11;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_dec(x_11);
x_28 = lean_ctor_get(x_12, 0);
lean_inc(x_28);
lean_dec(x_12);
x_29 = l_Lean_nullKind;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Syntax_setArg(x_1, x_4, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_11);
if (x_33 == 0)
{
return x_11;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_11, 0);
x_35 = lean_ctor_get(x_11, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_11);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandMutualElement");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMutualPreamble___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("section");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMutualPreamble___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMutualPreamble___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_2 = l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(1);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_Command_expandMutualPreamble___closed__1;
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_20 = lean_array_push(x_19, x_18);
x_21 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_22 = lean_array_push(x_20, x_21);
x_23 = l_Lean_Elab_Command_expandMutualPreamble___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_nullKind;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_13);
x_27 = l_Lean_Syntax_setArg(x_1, x_4, x_26);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_16);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = l_Lean_Elab_Command_elabDeclaration___closed__8;
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_array_push(x_19, x_32);
x_34 = lean_array_push(x_33, x_21);
x_35 = l_Lean_Elab_Command_elabDeclaration___closed__9;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Elab_Command_elabInductive___closed__1;
x_38 = lean_array_push(x_37, x_24);
x_39 = l_Array_append___rarg(x_38, x_12);
x_40 = lean_array_push(x_37, x_27);
x_41 = l_Array_append___rarg(x_39, x_40);
x_42 = lean_array_push(x_37, x_36);
x_43 = l_Array_append___rarg(x_41, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_25);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_28, 0, x_44);
return x_28;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_45 = lean_ctor_get(x_28, 0);
x_46 = lean_ctor_get(x_28, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_28);
x_47 = l_Lean_Elab_Command_elabDeclaration___closed__8;
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_array_push(x_19, x_48);
x_50 = lean_array_push(x_49, x_21);
x_51 = l_Lean_Elab_Command_elabDeclaration___closed__9;
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_Elab_Command_elabInductive___closed__1;
x_54 = lean_array_push(x_53, x_24);
x_55 = l_Array_append___rarg(x_54, x_12);
x_56 = lean_array_push(x_53, x_27);
x_57 = l_Array_append___rarg(x_55, x_56);
x_58 = lean_array_push(x_53, x_52);
x_59 = l_Array_append___rarg(x_57, x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_25);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_46);
return x_61;
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandMutualPreamble");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualPreamble), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMutual___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid mutual block");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMutual___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabMutual___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabMutual(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Elab_Command_elabMutual___closed__2;
x_8 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_7, x_2, x_3, x_4);
lean_dec(x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_getArgs(x_10);
lean_dec(x_10);
x_12 = l_Lean_Elab_Command_elabMutualDef(x_11, x_2, x_3, x_4);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_16 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(x_15, x_2, x_3, x_4);
return x_16;
}
}
}
lean_object* l_Lean_Elab_Command_elabMutual___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabMutual(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabMutual");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMutual___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabAttr_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Command_elabAttr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAttr_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_push(x_3, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("eraseAttr");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown attribute [");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 < x_2;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_uget(x_1, x_3);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_14 = l_Lean_Syntax_getKind(x_10);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__2;
x_16 = lean_name_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; size_t x_18; size_t x_19; 
x_17 = lean_array_push(x_13, x_10);
lean_ctor_set(x_4, 1, x_17);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_free_object(x_4);
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_10, x_21);
lean_dec(x_10);
x_23 = l_Lean_Syntax_getId(x_22);
lean_dec(x_22);
x_24 = lean_erase_macro_scopes(x_23);
x_25 = lean_st_ref_get(x_6, x_7);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_24);
x_29 = l_Lean_isAttribute(x_28, x_24);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_13);
lean_dec(x_12);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_24);
x_31 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__4;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__6;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_34, x_5, x_6, x_27);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; size_t x_45; size_t x_46; 
x_40 = lean_box(0);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(x_24, x_13, x_12, x_40, x_5, x_6, x_27);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
lean_dec(x_42);
x_45 = 1;
x_46 = x_3 + x_45;
x_3 = x_46;
x_4 = x_44;
x_7 = x_43;
goto _start;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_48 = lean_ctor_get(x_4, 0);
x_49 = lean_ctor_get(x_4, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_4);
lean_inc(x_10);
x_50 = l_Lean_Syntax_getKind(x_10);
x_51 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__2;
x_52 = lean_name_eq(x_50, x_51);
lean_dec(x_50);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; size_t x_55; size_t x_56; 
x_53 = lean_array_push(x_49, x_10);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_53);
x_55 = 1;
x_56 = x_3 + x_55;
x_3 = x_56;
x_4 = x_54;
goto _start;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_58 = lean_unsigned_to_nat(1u);
x_59 = l_Lean_Syntax_getArg(x_10, x_58);
lean_dec(x_10);
x_60 = l_Lean_Syntax_getId(x_59);
lean_dec(x_59);
x_61 = lean_erase_macro_scopes(x_60);
x_62 = lean_st_ref_get(x_6, x_7);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_61);
x_66 = l_Lean_isAttribute(x_65, x_61);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_49);
lean_dec(x_48);
x_67 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_67, 0, x_61);
x_68 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__4;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__6;
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_71, x_5, x_6, x_64);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
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
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
x_77 = lean_box(0);
x_78 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(x_61, x_49, x_48, x_77, x_5, x_6, x_64);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_ctor_get(x_79, 0);
lean_inc(x_81);
lean_dec(x_79);
x_82 = 1;
x_83 = x_3 + x_82;
x_3 = x_83;
x_4 = x_81;
x_7 = x_80;
goto _start;
}
}
}
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAttr___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at___private_Lean_Elab_PreDefinition_Basic_0__Lean_Elab_getLevelParamsPreDecls___spec__2(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown constant '");
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'");
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_box(0);
x_10 = l_Lean_mkConst(x_1, x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__4;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_List_map___at_Lean_resolveGlobalConstCore___spec__2(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_inc(x_6);
lean_inc(x_1);
x_9 = l_Lean_resolveGlobalName___at_Lean_Elab_Term_resolveName___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = l_List_filterAux___at_Lean_resolveGlobalConstCore___spec__1(x_10, x_12);
x_14 = l_List_isEmpty___rarg(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_15 = lean_box(0);
x_16 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6___lambda__1(x_13, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_13);
x_17 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected identifier");
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(x_10);
x_12 = l_List_isEmpty___rarg(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_11);
x_14 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__3;
x_16 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAttr___spec__5(x_1, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_16;
}
}
}
static lean_object* _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ambiguous identifier '");
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', possible interpretations: ");
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = 0;
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_formatStxAux(x_12, x_13, x_14, x_1);
x_16 = l_Std_Format_defWidth;
x_17 = lean_format_pretty(x_15, x_16);
x_18 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__1;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__2;
x_21 = lean_string_append(x_19, x_20);
x_22 = l_List_map___at_Lean_resolveGlobalConstNoOverload___spec__1(x_10);
x_23 = l_List_toString___at_Lean_resolveGlobalConstNoOverloadCore___spec__2(x_22);
x_24 = lean_string_append(x_21, x_23);
lean_dec(x_23);
x_25 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__3;
x_26 = lean_string_append(x_24, x_25);
x_27 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_10, 1);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_9);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_9, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_10, 0);
lean_inc(x_33);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_33);
return x_9;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_9, 1);
lean_inc(x_34);
lean_dec(x_9);
x_35 = lean_ctor_get(x_10, 0);
lean_inc(x_35);
lean_dec(x_10);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_30);
x_37 = lean_ctor_get(x_9, 1);
lean_inc(x_37);
lean_dec(x_9);
x_38 = lean_box(0);
x_39 = 0;
x_40 = lean_unsigned_to_nat(0u);
x_41 = l_Lean_Syntax_formatStxAux(x_38, x_39, x_40, x_1);
x_42 = l_Std_Format_defWidth;
x_43 = lean_format_pretty(x_41, x_42);
x_44 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__1;
x_45 = lean_string_append(x_44, x_43);
lean_dec(x_43);
x_46 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__2;
x_47 = lean_string_append(x_45, x_46);
x_48 = l_List_map___at_Lean_resolveGlobalConstNoOverload___spec__1(x_10);
x_49 = l_List_toString___at_Lean_resolveGlobalConstNoOverloadCore___spec__2(x_48);
x_50 = lean_string_append(x_47, x_49);
lean_dec(x_49);
x_51 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__3;
x_52 = lean_string_append(x_50, x_51);
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = l_Lean_throwError___at_Lean_Elab_Term_mkAuxName___spec__1(x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_37);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_9);
if (x_56 == 0)
{
return x_9;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_9, 0);
x_58 = lean_ctor_get(x_9, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_9);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Command_elabAttr___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = l_Lean_ConstantInfo_levelParams(x_11);
lean_dec(x_11);
x_13 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_12);
x_14 = l_Lean_mkConst(x_1, x_13);
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
x_17 = l_Lean_ConstantInfo_levelParams(x_15);
lean_dec(x_15);
x_18 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_17);
x_19 = l_Lean_mkConst(x_1, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_9);
if (x_21 == 0)
{
return x_9;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_9, 0);
x_23 = lean_ctor_get(x_9, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_9);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_8, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_4, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 5);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get_uint8(x_17, sizeof(void*)*2);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_15, 0);
lean_dec(x_20);
lean_ctor_set(x_15, 0, x_11);
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_11);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_dec(x_15);
lean_inc(x_3);
lean_inc(x_11);
x_24 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Command_elabAttr___spec__8(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_1);
x_29 = l_Lean_LocalContext_empty;
x_30 = 0;
x_31 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set(x_31, 2, x_2);
lean_ctor_set(x_31, 3, x_25);
lean_ctor_set_uint8(x_31, sizeof(void*)*4, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = l_Lean_Elab_pushInfoLeaf___at_Lean_Elab_Term_addDotCompletionInfo___spec__2(x_32, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_11);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_11);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_24);
if (x_38 == 0)
{
return x_24;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_24, 0);
x_40 = lean_ctor_get(x_24, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_24);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_10);
if (x_42 == 0)
{
return x_10;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_10, 0);
x_44 = lean_ctor_get(x_10, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_10);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__9(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_4 < x_3;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = lean_array_uget(x_2, x_4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_16 = l_Lean_Attribute_erase(x_1, x_15, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = 1;
x_19 = x_4 + x_18;
x_20 = lean_box(0);
x_4 = x_19;
x_5 = x_20;
x_12 = x_17;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_13 = l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2(x_1, x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_14);
x_16 = l_Lean_Elab_Term_applyAttributes(x_14, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_array_get_size(x_4);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = lean_box(0);
x_21 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__9(x_14, x_4, x_19, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_20);
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
uint8_t x_30; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_16);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_34 = !lean_is_exclusive(x_13);
if (x_34 == 0)
{
return x_13;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_13, 0);
x_36 = lean_ctor_get(x_13, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_13);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_6 < x_5;
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_7);
x_13 = lean_array_uget(x_4, x_6);
x_14 = lean_box(0);
x_15 = lean_box_usize(x_1);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_13);
x_16 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___lambda__1___boxed), 12, 5);
lean_closure_set(x_16, 0, x_13);
lean_closure_set(x_16, 1, x_14);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_2);
lean_closure_set(x_16, 4, x_15);
x_17 = l_Lean_Elab_Command_getRef(x_8, x_9, x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_replaceRef(x_13, x_18);
lean_dec(x_18);
lean_dec(x_13);
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
x_23 = lean_ctor_get(x_8, 2);
x_24 = lean_ctor_get(x_8, 3);
x_25 = lean_ctor_get(x_8, 4);
x_26 = lean_ctor_get(x_8, 5);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
x_27 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_24);
lean_ctor_set(x_27, 4, x_25);
lean_ctor_set(x_27, 5, x_26);
lean_ctor_set(x_27, 6, x_20);
x_28 = l_Lean_Elab_Command_liftTermElabM___rarg(x_14, x_16, x_27, x_9, x_19);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = 1;
x_31 = x_6 + x_30;
x_32 = lean_box(0);
x_6 = x_31;
x_7 = x_32;
x_10 = x_29;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_3);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabAttr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAttr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_getSepArgs(x_6);
lean_dec(x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_10 = 0;
x_11 = l_Lean_Elab_Command_elabAttr___closed__1;
lean_inc(x_2);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(x_7, x_9, x_10, x_11, x_2, x_3, x_4);
lean_dec(x_7);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(x_16, x_2, x_3, x_14);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(4u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
x_22 = l_Lean_Syntax_getArgs(x_21);
lean_dec(x_21);
x_23 = lean_array_get_size(x_22);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = lean_box(0);
x_26 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10(x_10, x_15, x_18, x_22, x_24, x_10, x_25, x_2, x_3, x_19);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_22);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
return x_26;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_26, 0);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_26);
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
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_17);
if (x_35 == 0)
{
return x_17;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_17, 0);
x_37 = lean_ctor_get(x_17, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_17);
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
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_12);
if (x_39 == 0)
{
return x_12;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_12, 0);
x_41 = lean_ctor_get(x_12, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_12);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAttr___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAttr___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabAttr___spec__6___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Elab_Command_elabAttr___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_mkConstWithLevelParams___at_Lean_Elab_Command_elabAttr___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_resolveGlobalConstNoOverloadWithInfo___at_Lean_Elab_Command_elabAttr___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__9(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; lean_object* x_14; 
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___lambda__1(x_1, x_2, x_3, x_4, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_13 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__10(x_11, x_2, x_3, x_4, x_12, x_13, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Lean_Elab_Command_elabAttr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabAttr(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("attribute");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabAttr");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAttr___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declModifiers");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Term");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("attributes");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("@[");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("attrInstance");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("attrKind");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabInductive___closed__1;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__11;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Attr");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simple");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__15;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__16;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__13;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__19;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declId");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__21;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("initFn");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__24;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("optDeclSig");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__27;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("typeSpec");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__29;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(":");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("app");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__32;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("IO");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__35;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__38;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Unit");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__41;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__44() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__44;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__47() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declValSimple");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__47;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(":=");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("do");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
x_6 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_4, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_8);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_14 = lean_array_push(x_13, x_1);
x_15 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_16 = lean_array_push(x_14, x_15);
x_17 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__18;
x_20 = lean_array_push(x_19, x_18);
x_21 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_Elab_Command_elabInductive___closed__1;
x_24 = lean_array_push(x_23, x_22);
x_25 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_8);
x_28 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_28, 0, x_8);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_30 = lean_array_push(x_29, x_12);
x_31 = lean_array_push(x_30, x_26);
x_32 = lean_array_push(x_31, x_28);
x_33 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_array_push(x_23, x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_25);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_38 = lean_array_push(x_37, x_36);
x_39 = lean_array_push(x_38, x_15);
x_40 = lean_array_push(x_39, x_15);
x_41 = lean_array_push(x_40, x_15);
x_42 = lean_array_push(x_41, x_15);
x_43 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_8);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_8);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_9);
lean_inc(x_10);
x_48 = l_Lean_addMacroScope(x_10, x_47, x_9);
x_49 = lean_box(0);
x_50 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_8);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_8);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_49);
x_52 = lean_array_push(x_13, x_51);
x_53 = lean_array_push(x_52, x_15);
x_54 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_8);
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_8);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
lean_inc(x_9);
lean_inc(x_10);
x_59 = l_Lean_addMacroScope(x_10, x_58, x_9);
x_60 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_61 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_8);
x_62 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_62, 0, x_8);
lean_ctor_set(x_62, 1, x_60);
lean_ctor_set(x_62, 2, x_59);
lean_ctor_set(x_62, 3, x_61);
x_63 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43;
x_64 = l_Lean_addMacroScope(x_10, x_63, x_9);
x_65 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__42;
x_66 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__45;
lean_inc(x_8);
x_67 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_67, 0, x_8);
lean_ctor_set(x_67, 1, x_65);
lean_ctor_set(x_67, 2, x_64);
lean_ctor_set(x_67, 3, x_66);
x_68 = lean_array_push(x_23, x_67);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_25);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_array_push(x_13, x_62);
x_71 = lean_array_push(x_70, x_69);
x_72 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_array_push(x_13, x_57);
x_75 = lean_array_push(x_74, x_73);
x_76 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = lean_array_push(x_23, x_77);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_25);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_81 = lean_array_push(x_80, x_79);
x_82 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_8);
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_8);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_8);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_array_push(x_13, x_87);
x_89 = lean_array_push(x_88, x_2);
x_90 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = lean_array_push(x_29, x_85);
x_93 = lean_array_push(x_92, x_91);
x_94 = lean_array_push(x_93, x_15);
x_95 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_98 = lean_array_push(x_97, x_46);
x_99 = lean_array_push(x_98, x_55);
x_100 = lean_array_push(x_99, x_83);
x_101 = lean_array_push(x_100, x_96);
x_102 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
x_104 = lean_array_push(x_13, x_44);
x_105 = lean_array_push(x_104, x_103);
x_106 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_105);
lean_ctor_set(x_6, 0, x_107);
return x_6;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_108 = lean_ctor_get(x_6, 0);
x_109 = lean_ctor_get(x_6, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_6);
x_110 = lean_ctor_get(x_4, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_4, 1);
lean_inc(x_111);
lean_dec(x_4);
x_112 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_108);
x_113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_113, 0, x_108);
lean_ctor_set(x_113, 1, x_112);
x_114 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_115 = lean_array_push(x_114, x_1);
x_116 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_117 = lean_array_push(x_115, x_116);
x_118 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
x_120 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__18;
x_121 = lean_array_push(x_120, x_119);
x_122 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = l_Lean_Elab_Command_elabInductive___closed__1;
x_125 = lean_array_push(x_124, x_123);
x_126 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_125);
x_128 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_108);
x_129 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_129, 0, x_108);
lean_ctor_set(x_129, 1, x_128);
x_130 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_131 = lean_array_push(x_130, x_113);
x_132 = lean_array_push(x_131, x_127);
x_133 = lean_array_push(x_132, x_129);
x_134 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = lean_array_push(x_124, x_135);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_126);
lean_ctor_set(x_137, 1, x_136);
x_138 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_139 = lean_array_push(x_138, x_137);
x_140 = lean_array_push(x_139, x_116);
x_141 = lean_array_push(x_140, x_116);
x_142 = lean_array_push(x_141, x_116);
x_143 = lean_array_push(x_142, x_116);
x_144 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
x_146 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_108);
x_147 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_147, 0, x_108);
lean_ctor_set(x_147, 1, x_146);
x_148 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_110);
lean_inc(x_111);
x_149 = l_Lean_addMacroScope(x_111, x_148, x_110);
x_150 = lean_box(0);
x_151 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_108);
x_152 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_152, 0, x_108);
lean_ctor_set(x_152, 1, x_151);
lean_ctor_set(x_152, 2, x_149);
lean_ctor_set(x_152, 3, x_150);
x_153 = lean_array_push(x_114, x_152);
x_154 = lean_array_push(x_153, x_116);
x_155 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_154);
x_157 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_108);
x_158 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_158, 0, x_108);
lean_ctor_set(x_158, 1, x_157);
x_159 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
lean_inc(x_110);
lean_inc(x_111);
x_160 = l_Lean_addMacroScope(x_111, x_159, x_110);
x_161 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_162 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_108);
x_163 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_163, 0, x_108);
lean_ctor_set(x_163, 1, x_161);
lean_ctor_set(x_163, 2, x_160);
lean_ctor_set(x_163, 3, x_162);
x_164 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43;
x_165 = l_Lean_addMacroScope(x_111, x_164, x_110);
x_166 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__42;
x_167 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__45;
lean_inc(x_108);
x_168 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_168, 0, x_108);
lean_ctor_set(x_168, 1, x_166);
lean_ctor_set(x_168, 2, x_165);
lean_ctor_set(x_168, 3, x_167);
x_169 = lean_array_push(x_124, x_168);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_126);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_array_push(x_114, x_163);
x_172 = lean_array_push(x_171, x_170);
x_173 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_172);
x_175 = lean_array_push(x_114, x_158);
x_176 = lean_array_push(x_175, x_174);
x_177 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_176);
x_179 = lean_array_push(x_124, x_178);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_126);
lean_ctor_set(x_180, 1, x_179);
x_181 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_182 = lean_array_push(x_181, x_180);
x_183 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_182);
x_185 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_108);
x_186 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_186, 0, x_108);
lean_ctor_set(x_186, 1, x_185);
x_187 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
x_188 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_188, 0, x_108);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_array_push(x_114, x_188);
x_190 = lean_array_push(x_189, x_2);
x_191 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_190);
x_193 = lean_array_push(x_130, x_186);
x_194 = lean_array_push(x_193, x_192);
x_195 = lean_array_push(x_194, x_116);
x_196 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_195);
x_198 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_199 = lean_array_push(x_198, x_147);
x_200 = lean_array_push(x_199, x_156);
x_201 = lean_array_push(x_200, x_184);
x_202 = lean_array_push(x_201, x_197);
x_203 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_202);
x_205 = lean_array_push(x_114, x_145);
x_206 = lean_array_push(x_205, x_204);
x_207 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_206);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_109);
return x_209;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("private");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("protected");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected visibility annotation");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__6;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__7;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__8;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__9;
x_2 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__11;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__7;
x_2 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__13;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declSig");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid initialization command, 'visibility' modifer is not allowed");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("init");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtinInit");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__19;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Lean_Syntax_getArg(x_2, x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_2, x_7);
x_9 = lean_unsigned_to_nat(3u);
x_10 = l_Lean_Syntax_getArg(x_2, x_9);
x_11 = l_Lean_Syntax_isNone(x_8);
if (x_1 == 0)
{
lean_object* x_769; 
x_769 = l_Lean_Elab_Command_expandInitCmd___closed__18;
x_12 = x_769;
goto block_768;
}
else
{
lean_object* x_770; 
x_770 = l_Lean_Elab_Command_expandInitCmd___closed__20;
x_12 = x_770;
goto block_768;
}
block_768:
{
lean_object* x_13; 
x_13 = l_Lean_mkIdentFrom(x_2, x_12);
if (x_11 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = l_Lean_Syntax_getArg(x_8, x_5);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_8, x_15);
lean_dec(x_8);
x_17 = l_Lean_Syntax_getArg(x_16, x_15);
lean_dec(x_16);
x_18 = l_Lean_Syntax_isNone(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = l_Lean_Syntax_getArg(x_6, x_5);
lean_dec(x_6);
x_20 = l_Lean_Syntax_getKind(x_19);
x_21 = l_Lean_Elab_Command_expandInitCmd___closed__2;
x_22 = lean_name_eq(x_20, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_Elab_Command_expandInitCmd___closed__4;
x_24 = lean_name_eq(x_20, x_23);
lean_dec(x_20);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
x_25 = l_Lean_Elab_Command_expandInitCmd___closed__5;
x_26 = l_Lean_Macro_throwError___rarg(x_25, x_3, x_4);
lean_dec(x_3);
return x_26;
}
else
{
lean_object* x_27; uint8_t x_28; 
lean_inc(x_3);
x_27 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_3, x_4);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_3, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_3, 1);
lean_inc(x_31);
lean_dec(x_3);
x_32 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_29);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_29);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_30);
lean_inc(x_31);
x_35 = l_Lean_addMacroScope(x_31, x_34, x_30);
x_36 = lean_box(0);
x_37 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_29);
x_38 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_38, 0, x_29);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_38, 2, x_35);
lean_ctor_set(x_38, 3, x_36);
x_39 = l_Lean_Elab_Command_elabDeclaration___closed__7;
lean_inc(x_38);
x_40 = lean_array_push(x_39, x_38);
x_41 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_42 = lean_array_push(x_40, x_41);
x_43 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_29);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_29);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
x_48 = l_Lean_addMacroScope(x_31, x_47, x_30);
x_49 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_50 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_29);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_29);
lean_ctor_set(x_51, 1, x_49);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_50);
x_52 = l_Lean_Elab_Command_elabInductive___closed__1;
lean_inc(x_17);
x_53 = lean_array_push(x_52, x_17);
x_54 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_array_push(x_39, x_51);
x_57 = lean_array_push(x_56, x_55);
x_58 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = lean_array_push(x_39, x_46);
lean_inc(x_60);
x_61 = lean_array_push(x_60, x_59);
x_62 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = lean_array_push(x_52, x_63);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_54);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_67 = lean_array_push(x_66, x_65);
x_68 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_29);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_29);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
lean_inc(x_29);
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_29);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_array_push(x_39, x_73);
x_75 = lean_array_push(x_74, x_10);
x_76 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_79 = lean_array_push(x_78, x_71);
x_80 = lean_array_push(x_79, x_77);
x_81 = lean_array_push(x_80, x_41);
x_82 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_85 = lean_array_push(x_84, x_33);
x_86 = lean_array_push(x_85, x_44);
x_87 = lean_array_push(x_86, x_69);
x_88 = lean_array_push(x_87, x_83);
x_89 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = l_Lean_Elab_Command_expandInitCmd___closed__12;
x_92 = lean_array_push(x_91, x_90);
x_93 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
x_95 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_29);
x_96 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_96, 0, x_29);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_array_push(x_52, x_38);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_54);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_array_push(x_39, x_13);
x_100 = lean_array_push(x_99, x_98);
x_101 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_104 = lean_array_push(x_103, x_102);
x_105 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
x_107 = lean_array_push(x_52, x_106);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_54);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_29);
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_29);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_array_push(x_78, x_96);
x_112 = lean_array_push(x_111, x_108);
x_113 = lean_array_push(x_112, x_110);
x_114 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
x_116 = lean_array_push(x_52, x_115);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_54);
lean_ctor_set(x_117, 1, x_116);
x_118 = l_Lean_Elab_Command_expandInitCmd___closed__3;
lean_inc(x_29);
x_119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_119, 0, x_29);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_array_push(x_52, x_119);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_23);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_array_push(x_52, x_121);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_54);
lean_ctor_set(x_123, 1, x_122);
x_124 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_125 = lean_array_push(x_124, x_117);
x_126 = lean_array_push(x_125, x_123);
x_127 = lean_array_push(x_126, x_41);
x_128 = lean_array_push(x_127, x_41);
x_129 = lean_array_push(x_128, x_41);
x_130 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
x_132 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
x_133 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_133, 0, x_29);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_60, x_17);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_62);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_array_push(x_66, x_135);
x_137 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_136);
x_139 = lean_array_push(x_84, x_133);
x_140 = lean_array_push(x_139, x_14);
x_141 = lean_array_push(x_140, x_138);
x_142 = lean_array_push(x_141, x_41);
x_143 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_142);
x_145 = lean_array_push(x_39, x_131);
x_146 = lean_array_push(x_145, x_144);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_93);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_array_push(x_39, x_94);
x_149 = lean_array_push(x_148, x_147);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_54);
lean_ctor_set(x_150, 1, x_149);
lean_ctor_set(x_27, 0, x_150);
return x_27;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_151 = lean_ctor_get(x_27, 0);
x_152 = lean_ctor_get(x_27, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_27);
x_153 = lean_ctor_get(x_3, 2);
lean_inc(x_153);
x_154 = lean_ctor_get(x_3, 1);
lean_inc(x_154);
lean_dec(x_3);
x_155 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_151);
x_156 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_156, 0, x_151);
lean_ctor_set(x_156, 1, x_155);
x_157 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_153);
lean_inc(x_154);
x_158 = l_Lean_addMacroScope(x_154, x_157, x_153);
x_159 = lean_box(0);
x_160 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_151);
x_161 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_161, 0, x_151);
lean_ctor_set(x_161, 1, x_160);
lean_ctor_set(x_161, 2, x_158);
lean_ctor_set(x_161, 3, x_159);
x_162 = l_Lean_Elab_Command_elabDeclaration___closed__7;
lean_inc(x_161);
x_163 = lean_array_push(x_162, x_161);
x_164 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_165 = lean_array_push(x_163, x_164);
x_166 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_165);
x_168 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_151);
x_169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_169, 0, x_151);
lean_ctor_set(x_169, 1, x_168);
x_170 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
x_171 = l_Lean_addMacroScope(x_154, x_170, x_153);
x_172 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_173 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_151);
x_174 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_174, 0, x_151);
lean_ctor_set(x_174, 1, x_172);
lean_ctor_set(x_174, 2, x_171);
lean_ctor_set(x_174, 3, x_173);
x_175 = l_Lean_Elab_Command_elabInductive___closed__1;
lean_inc(x_17);
x_176 = lean_array_push(x_175, x_17);
x_177 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_176);
x_179 = lean_array_push(x_162, x_174);
x_180 = lean_array_push(x_179, x_178);
x_181 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_180);
x_183 = lean_array_push(x_162, x_169);
lean_inc(x_183);
x_184 = lean_array_push(x_183, x_182);
x_185 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_184);
x_187 = lean_array_push(x_175, x_186);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_177);
lean_ctor_set(x_188, 1, x_187);
x_189 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_190 = lean_array_push(x_189, x_188);
x_191 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_190);
x_193 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_151);
x_194 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_194, 0, x_151);
lean_ctor_set(x_194, 1, x_193);
x_195 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
lean_inc(x_151);
x_196 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_196, 0, x_151);
lean_ctor_set(x_196, 1, x_195);
x_197 = lean_array_push(x_162, x_196);
x_198 = lean_array_push(x_197, x_10);
x_199 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_198);
x_201 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_202 = lean_array_push(x_201, x_194);
x_203 = lean_array_push(x_202, x_200);
x_204 = lean_array_push(x_203, x_164);
x_205 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_204);
x_207 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_208 = lean_array_push(x_207, x_156);
x_209 = lean_array_push(x_208, x_167);
x_210 = lean_array_push(x_209, x_192);
x_211 = lean_array_push(x_210, x_206);
x_212 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_211);
x_214 = l_Lean_Elab_Command_expandInitCmd___closed__12;
x_215 = lean_array_push(x_214, x_213);
x_216 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_215);
x_218 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_151);
x_219 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_219, 0, x_151);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_array_push(x_175, x_161);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_177);
lean_ctor_set(x_221, 1, x_220);
x_222 = lean_array_push(x_162, x_13);
x_223 = lean_array_push(x_222, x_221);
x_224 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_223);
x_226 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_227 = lean_array_push(x_226, x_225);
x_228 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_227);
x_230 = lean_array_push(x_175, x_229);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_177);
lean_ctor_set(x_231, 1, x_230);
x_232 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_151);
x_233 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_233, 0, x_151);
lean_ctor_set(x_233, 1, x_232);
x_234 = lean_array_push(x_201, x_219);
x_235 = lean_array_push(x_234, x_231);
x_236 = lean_array_push(x_235, x_233);
x_237 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_236);
x_239 = lean_array_push(x_175, x_238);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_177);
lean_ctor_set(x_240, 1, x_239);
x_241 = l_Lean_Elab_Command_expandInitCmd___closed__3;
lean_inc(x_151);
x_242 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_242, 0, x_151);
lean_ctor_set(x_242, 1, x_241);
x_243 = lean_array_push(x_175, x_242);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_23);
lean_ctor_set(x_244, 1, x_243);
x_245 = lean_array_push(x_175, x_244);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_177);
lean_ctor_set(x_246, 1, x_245);
x_247 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_248 = lean_array_push(x_247, x_240);
x_249 = lean_array_push(x_248, x_246);
x_250 = lean_array_push(x_249, x_164);
x_251 = lean_array_push(x_250, x_164);
x_252 = lean_array_push(x_251, x_164);
x_253 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_252);
x_255 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
x_256 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_256, 0, x_151);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_array_push(x_183, x_17);
x_258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_258, 0, x_185);
lean_ctor_set(x_258, 1, x_257);
x_259 = lean_array_push(x_189, x_258);
x_260 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_259);
x_262 = lean_array_push(x_207, x_256);
x_263 = lean_array_push(x_262, x_14);
x_264 = lean_array_push(x_263, x_261);
x_265 = lean_array_push(x_264, x_164);
x_266 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_265);
x_268 = lean_array_push(x_162, x_254);
x_269 = lean_array_push(x_268, x_267);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_216);
lean_ctor_set(x_270, 1, x_269);
x_271 = lean_array_push(x_162, x_217);
x_272 = lean_array_push(x_271, x_270);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_177);
lean_ctor_set(x_273, 1, x_272);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_152);
return x_274;
}
}
}
else
{
lean_object* x_275; uint8_t x_276; 
lean_dec(x_20);
lean_inc(x_3);
x_275 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_3, x_4);
x_276 = !lean_is_exclusive(x_275);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; 
x_277 = lean_ctor_get(x_275, 0);
x_278 = lean_ctor_get(x_3, 2);
lean_inc(x_278);
x_279 = lean_ctor_get(x_3, 1);
lean_inc(x_279);
lean_dec(x_3);
x_280 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_277);
x_281 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_281, 0, x_277);
lean_ctor_set(x_281, 1, x_280);
x_282 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_278);
lean_inc(x_279);
x_283 = l_Lean_addMacroScope(x_279, x_282, x_278);
x_284 = lean_box(0);
x_285 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_277);
x_286 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_286, 0, x_277);
lean_ctor_set(x_286, 1, x_285);
lean_ctor_set(x_286, 2, x_283);
lean_ctor_set(x_286, 3, x_284);
x_287 = l_Lean_Elab_Command_elabDeclaration___closed__7;
lean_inc(x_286);
x_288 = lean_array_push(x_287, x_286);
x_289 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_290 = lean_array_push(x_288, x_289);
x_291 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_292, 0, x_291);
lean_ctor_set(x_292, 1, x_290);
x_293 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_277);
x_294 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_294, 0, x_277);
lean_ctor_set(x_294, 1, x_293);
x_295 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
x_296 = l_Lean_addMacroScope(x_279, x_295, x_278);
x_297 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_298 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_277);
x_299 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_299, 0, x_277);
lean_ctor_set(x_299, 1, x_297);
lean_ctor_set(x_299, 2, x_296);
lean_ctor_set(x_299, 3, x_298);
x_300 = l_Lean_Elab_Command_elabInductive___closed__1;
lean_inc(x_17);
x_301 = lean_array_push(x_300, x_17);
x_302 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_302);
lean_ctor_set(x_303, 1, x_301);
x_304 = lean_array_push(x_287, x_299);
x_305 = lean_array_push(x_304, x_303);
x_306 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_307 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_307, 0, x_306);
lean_ctor_set(x_307, 1, x_305);
x_308 = lean_array_push(x_287, x_294);
lean_inc(x_308);
x_309 = lean_array_push(x_308, x_307);
x_310 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_311, 1, x_309);
x_312 = lean_array_push(x_300, x_311);
x_313 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_313, 0, x_302);
lean_ctor_set(x_313, 1, x_312);
x_314 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_315 = lean_array_push(x_314, x_313);
x_316 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_317 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_315);
x_318 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_277);
x_319 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_319, 0, x_277);
lean_ctor_set(x_319, 1, x_318);
x_320 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
lean_inc(x_277);
x_321 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_321, 0, x_277);
lean_ctor_set(x_321, 1, x_320);
x_322 = lean_array_push(x_287, x_321);
x_323 = lean_array_push(x_322, x_10);
x_324 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_324);
lean_ctor_set(x_325, 1, x_323);
x_326 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_327 = lean_array_push(x_326, x_319);
x_328 = lean_array_push(x_327, x_325);
x_329 = lean_array_push(x_328, x_289);
x_330 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_330);
lean_ctor_set(x_331, 1, x_329);
x_332 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_333 = lean_array_push(x_332, x_281);
x_334 = lean_array_push(x_333, x_292);
x_335 = lean_array_push(x_334, x_317);
x_336 = lean_array_push(x_335, x_331);
x_337 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_338 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_338, 0, x_337);
lean_ctor_set(x_338, 1, x_336);
x_339 = l_Lean_Elab_Command_expandInitCmd___closed__12;
x_340 = lean_array_push(x_339, x_338);
x_341 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_342 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_340);
x_343 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_277);
x_344 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_344, 0, x_277);
lean_ctor_set(x_344, 1, x_343);
x_345 = lean_array_push(x_300, x_286);
x_346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_346, 0, x_302);
lean_ctor_set(x_346, 1, x_345);
x_347 = lean_array_push(x_287, x_13);
x_348 = lean_array_push(x_347, x_346);
x_349 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_350 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_348);
x_351 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_352 = lean_array_push(x_351, x_350);
x_353 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_352);
x_355 = lean_array_push(x_300, x_354);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_302);
lean_ctor_set(x_356, 1, x_355);
x_357 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_277);
x_358 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_358, 0, x_277);
lean_ctor_set(x_358, 1, x_357);
x_359 = lean_array_push(x_326, x_344);
x_360 = lean_array_push(x_359, x_356);
x_361 = lean_array_push(x_360, x_358);
x_362 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_363 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_363, 0, x_362);
lean_ctor_set(x_363, 1, x_361);
x_364 = lean_array_push(x_300, x_363);
x_365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_365, 0, x_302);
lean_ctor_set(x_365, 1, x_364);
x_366 = l_Lean_Elab_Command_expandInitCmd___closed__1;
lean_inc(x_277);
x_367 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_367, 0, x_277);
lean_ctor_set(x_367, 1, x_366);
x_368 = lean_array_push(x_300, x_367);
x_369 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_369, 0, x_21);
lean_ctor_set(x_369, 1, x_368);
x_370 = lean_array_push(x_300, x_369);
x_371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_371, 0, x_302);
lean_ctor_set(x_371, 1, x_370);
x_372 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_373 = lean_array_push(x_372, x_365);
x_374 = lean_array_push(x_373, x_371);
x_375 = lean_array_push(x_374, x_289);
x_376 = lean_array_push(x_375, x_289);
x_377 = lean_array_push(x_376, x_289);
x_378 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_378);
lean_ctor_set(x_379, 1, x_377);
x_380 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
x_381 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_381, 0, x_277);
lean_ctor_set(x_381, 1, x_380);
x_382 = lean_array_push(x_308, x_17);
x_383 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_383, 0, x_310);
lean_ctor_set(x_383, 1, x_382);
x_384 = lean_array_push(x_314, x_383);
x_385 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_384);
x_387 = lean_array_push(x_332, x_381);
x_388 = lean_array_push(x_387, x_14);
x_389 = lean_array_push(x_388, x_386);
x_390 = lean_array_push(x_389, x_289);
x_391 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_391);
lean_ctor_set(x_392, 1, x_390);
x_393 = lean_array_push(x_287, x_379);
x_394 = lean_array_push(x_393, x_392);
x_395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_395, 0, x_341);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_array_push(x_287, x_342);
x_397 = lean_array_push(x_396, x_395);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_302);
lean_ctor_set(x_398, 1, x_397);
lean_ctor_set(x_275, 0, x_398);
return x_275;
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; 
x_399 = lean_ctor_get(x_275, 0);
x_400 = lean_ctor_get(x_275, 1);
lean_inc(x_400);
lean_inc(x_399);
lean_dec(x_275);
x_401 = lean_ctor_get(x_3, 2);
lean_inc(x_401);
x_402 = lean_ctor_get(x_3, 1);
lean_inc(x_402);
lean_dec(x_3);
x_403 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_399);
x_404 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_404, 0, x_399);
lean_ctor_set(x_404, 1, x_403);
x_405 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_401);
lean_inc(x_402);
x_406 = l_Lean_addMacroScope(x_402, x_405, x_401);
x_407 = lean_box(0);
x_408 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_399);
x_409 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_409, 0, x_399);
lean_ctor_set(x_409, 1, x_408);
lean_ctor_set(x_409, 2, x_406);
lean_ctor_set(x_409, 3, x_407);
x_410 = l_Lean_Elab_Command_elabDeclaration___closed__7;
lean_inc(x_409);
x_411 = lean_array_push(x_410, x_409);
x_412 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_413 = lean_array_push(x_411, x_412);
x_414 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_415, 0, x_414);
lean_ctor_set(x_415, 1, x_413);
x_416 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_399);
x_417 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_417, 0, x_399);
lean_ctor_set(x_417, 1, x_416);
x_418 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
x_419 = l_Lean_addMacroScope(x_402, x_418, x_401);
x_420 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_421 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_399);
x_422 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_422, 0, x_399);
lean_ctor_set(x_422, 1, x_420);
lean_ctor_set(x_422, 2, x_419);
lean_ctor_set(x_422, 3, x_421);
x_423 = l_Lean_Elab_Command_elabInductive___closed__1;
lean_inc(x_17);
x_424 = lean_array_push(x_423, x_17);
x_425 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_426 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_426, 0, x_425);
lean_ctor_set(x_426, 1, x_424);
x_427 = lean_array_push(x_410, x_422);
x_428 = lean_array_push(x_427, x_426);
x_429 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_430 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_430, 0, x_429);
lean_ctor_set(x_430, 1, x_428);
x_431 = lean_array_push(x_410, x_417);
lean_inc(x_431);
x_432 = lean_array_push(x_431, x_430);
x_433 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_434, 0, x_433);
lean_ctor_set(x_434, 1, x_432);
x_435 = lean_array_push(x_423, x_434);
x_436 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_436, 0, x_425);
lean_ctor_set(x_436, 1, x_435);
x_437 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_438 = lean_array_push(x_437, x_436);
x_439 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_440, 0, x_439);
lean_ctor_set(x_440, 1, x_438);
x_441 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_399);
x_442 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_442, 0, x_399);
lean_ctor_set(x_442, 1, x_441);
x_443 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
lean_inc(x_399);
x_444 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_444, 0, x_399);
lean_ctor_set(x_444, 1, x_443);
x_445 = lean_array_push(x_410, x_444);
x_446 = lean_array_push(x_445, x_10);
x_447 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_448 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_448, 0, x_447);
lean_ctor_set(x_448, 1, x_446);
x_449 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_450 = lean_array_push(x_449, x_442);
x_451 = lean_array_push(x_450, x_448);
x_452 = lean_array_push(x_451, x_412);
x_453 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_454 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_452);
x_455 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_456 = lean_array_push(x_455, x_404);
x_457 = lean_array_push(x_456, x_415);
x_458 = lean_array_push(x_457, x_440);
x_459 = lean_array_push(x_458, x_454);
x_460 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_461 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_461, 0, x_460);
lean_ctor_set(x_461, 1, x_459);
x_462 = l_Lean_Elab_Command_expandInitCmd___closed__12;
x_463 = lean_array_push(x_462, x_461);
x_464 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_465 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_465, 0, x_464);
lean_ctor_set(x_465, 1, x_463);
x_466 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_399);
x_467 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_467, 0, x_399);
lean_ctor_set(x_467, 1, x_466);
x_468 = lean_array_push(x_423, x_409);
x_469 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_469, 0, x_425);
lean_ctor_set(x_469, 1, x_468);
x_470 = lean_array_push(x_410, x_13);
x_471 = lean_array_push(x_470, x_469);
x_472 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_473 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_473, 0, x_472);
lean_ctor_set(x_473, 1, x_471);
x_474 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_475 = lean_array_push(x_474, x_473);
x_476 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_477 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_477, 0, x_476);
lean_ctor_set(x_477, 1, x_475);
x_478 = lean_array_push(x_423, x_477);
x_479 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_479, 0, x_425);
lean_ctor_set(x_479, 1, x_478);
x_480 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_399);
x_481 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_481, 0, x_399);
lean_ctor_set(x_481, 1, x_480);
x_482 = lean_array_push(x_449, x_467);
x_483 = lean_array_push(x_482, x_479);
x_484 = lean_array_push(x_483, x_481);
x_485 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_485);
lean_ctor_set(x_486, 1, x_484);
x_487 = lean_array_push(x_423, x_486);
x_488 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_488, 0, x_425);
lean_ctor_set(x_488, 1, x_487);
x_489 = l_Lean_Elab_Command_expandInitCmd___closed__1;
lean_inc(x_399);
x_490 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_490, 0, x_399);
lean_ctor_set(x_490, 1, x_489);
x_491 = lean_array_push(x_423, x_490);
x_492 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_492, 0, x_21);
lean_ctor_set(x_492, 1, x_491);
x_493 = lean_array_push(x_423, x_492);
x_494 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_494, 0, x_425);
lean_ctor_set(x_494, 1, x_493);
x_495 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_496 = lean_array_push(x_495, x_488);
x_497 = lean_array_push(x_496, x_494);
x_498 = lean_array_push(x_497, x_412);
x_499 = lean_array_push(x_498, x_412);
x_500 = lean_array_push(x_499, x_412);
x_501 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_502 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_502, 0, x_501);
lean_ctor_set(x_502, 1, x_500);
x_503 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
x_504 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_504, 0, x_399);
lean_ctor_set(x_504, 1, x_503);
x_505 = lean_array_push(x_431, x_17);
x_506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_506, 0, x_433);
lean_ctor_set(x_506, 1, x_505);
x_507 = lean_array_push(x_437, x_506);
x_508 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_509 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_509, 0, x_508);
lean_ctor_set(x_509, 1, x_507);
x_510 = lean_array_push(x_455, x_504);
x_511 = lean_array_push(x_510, x_14);
x_512 = lean_array_push(x_511, x_509);
x_513 = lean_array_push(x_512, x_412);
x_514 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
x_515 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_515, 0, x_514);
lean_ctor_set(x_515, 1, x_513);
x_516 = lean_array_push(x_410, x_502);
x_517 = lean_array_push(x_516, x_515);
x_518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_518, 0, x_464);
lean_ctor_set(x_518, 1, x_517);
x_519 = lean_array_push(x_410, x_465);
x_520 = lean_array_push(x_519, x_518);
x_521 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_521, 0, x_425);
lean_ctor_set(x_521, 1, x_520);
x_522 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_522, 0, x_521);
lean_ctor_set(x_522, 1, x_400);
return x_522;
}
}
}
else
{
lean_object* x_523; uint8_t x_524; 
lean_dec(x_6);
lean_inc(x_3);
x_523 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_3, x_4);
x_524 = !lean_is_exclusive(x_523);
if (x_524 == 0)
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; 
x_525 = lean_ctor_get(x_523, 0);
x_526 = lean_ctor_get(x_3, 2);
lean_inc(x_526);
x_527 = lean_ctor_get(x_3, 1);
lean_inc(x_527);
lean_dec(x_3);
x_528 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_525);
x_529 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_529, 0, x_525);
lean_ctor_set(x_529, 1, x_528);
x_530 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_526);
lean_inc(x_527);
x_531 = l_Lean_addMacroScope(x_527, x_530, x_526);
x_532 = lean_box(0);
x_533 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_525);
x_534 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_534, 0, x_525);
lean_ctor_set(x_534, 1, x_533);
lean_ctor_set(x_534, 2, x_531);
lean_ctor_set(x_534, 3, x_532);
x_535 = l_Lean_Elab_Command_elabDeclaration___closed__7;
lean_inc(x_534);
x_536 = lean_array_push(x_535, x_534);
x_537 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_538 = lean_array_push(x_536, x_537);
x_539 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_540 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_540, 0, x_539);
lean_ctor_set(x_540, 1, x_538);
x_541 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_525);
x_542 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_542, 0, x_525);
lean_ctor_set(x_542, 1, x_541);
x_543 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
x_544 = l_Lean_addMacroScope(x_527, x_543, x_526);
x_545 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_546 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_525);
x_547 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_547, 0, x_525);
lean_ctor_set(x_547, 1, x_545);
lean_ctor_set(x_547, 2, x_544);
lean_ctor_set(x_547, 3, x_546);
x_548 = l_Lean_Elab_Command_elabInductive___closed__1;
lean_inc(x_17);
x_549 = lean_array_push(x_548, x_17);
x_550 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_551 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_551, 0, x_550);
lean_ctor_set(x_551, 1, x_549);
x_552 = lean_array_push(x_535, x_547);
x_553 = lean_array_push(x_552, x_551);
x_554 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_555 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_555, 0, x_554);
lean_ctor_set(x_555, 1, x_553);
x_556 = lean_array_push(x_535, x_542);
lean_inc(x_556);
x_557 = lean_array_push(x_556, x_555);
x_558 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_559 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_559, 0, x_558);
lean_ctor_set(x_559, 1, x_557);
x_560 = lean_array_push(x_548, x_559);
x_561 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_561, 0, x_550);
lean_ctor_set(x_561, 1, x_560);
x_562 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_563 = lean_array_push(x_562, x_561);
x_564 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_565 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_565, 0, x_564);
lean_ctor_set(x_565, 1, x_563);
x_566 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_525);
x_567 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_567, 0, x_525);
lean_ctor_set(x_567, 1, x_566);
x_568 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
lean_inc(x_525);
x_569 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_569, 0, x_525);
lean_ctor_set(x_569, 1, x_568);
x_570 = lean_array_push(x_535, x_569);
x_571 = lean_array_push(x_570, x_10);
x_572 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_573 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_573, 0, x_572);
lean_ctor_set(x_573, 1, x_571);
x_574 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_575 = lean_array_push(x_574, x_567);
x_576 = lean_array_push(x_575, x_573);
x_577 = lean_array_push(x_576, x_537);
x_578 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_579 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_579, 0, x_578);
lean_ctor_set(x_579, 1, x_577);
x_580 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_581 = lean_array_push(x_580, x_529);
x_582 = lean_array_push(x_581, x_540);
x_583 = lean_array_push(x_582, x_565);
x_584 = lean_array_push(x_583, x_579);
x_585 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_586 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_586, 0, x_585);
lean_ctor_set(x_586, 1, x_584);
x_587 = l_Lean_Elab_Command_expandInitCmd___closed__12;
x_588 = lean_array_push(x_587, x_586);
x_589 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_590 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_590, 0, x_589);
lean_ctor_set(x_590, 1, x_588);
x_591 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_525);
x_592 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_592, 0, x_525);
lean_ctor_set(x_592, 1, x_591);
x_593 = lean_array_push(x_548, x_534);
x_594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_594, 0, x_550);
lean_ctor_set(x_594, 1, x_593);
x_595 = lean_array_push(x_535, x_13);
x_596 = lean_array_push(x_595, x_594);
x_597 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_598, 0, x_597);
lean_ctor_set(x_598, 1, x_596);
x_599 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_600 = lean_array_push(x_599, x_598);
x_601 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_602 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_602, 0, x_601);
lean_ctor_set(x_602, 1, x_600);
x_603 = lean_array_push(x_548, x_602);
x_604 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_604, 0, x_550);
lean_ctor_set(x_604, 1, x_603);
x_605 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_525);
x_606 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_606, 0, x_525);
lean_ctor_set(x_606, 1, x_605);
x_607 = lean_array_push(x_574, x_592);
x_608 = lean_array_push(x_607, x_604);
x_609 = lean_array_push(x_608, x_606);
x_610 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_611 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_611, 0, x_610);
lean_ctor_set(x_611, 1, x_609);
x_612 = lean_array_push(x_548, x_611);
x_613 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_613, 0, x_550);
lean_ctor_set(x_613, 1, x_612);
x_614 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_615 = lean_array_push(x_614, x_613);
x_616 = lean_array_push(x_615, x_537);
x_617 = lean_array_push(x_616, x_537);
x_618 = lean_array_push(x_617, x_537);
x_619 = lean_array_push(x_618, x_537);
x_620 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_621 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_621, 0, x_620);
lean_ctor_set(x_621, 1, x_619);
x_622 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
x_623 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_623, 0, x_525);
lean_ctor_set(x_623, 1, x_622);
x_624 = lean_array_push(x_556, x_17);
x_625 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_625, 0, x_558);
lean_ctor_set(x_625, 1, x_624);
x_626 = lean_array_push(x_562, x_625);
x_627 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_628 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_628, 0, x_627);
lean_ctor_set(x_628, 1, x_626);
x_629 = lean_array_push(x_580, x_623);
x_630 = lean_array_push(x_629, x_14);
x_631 = lean_array_push(x_630, x_628);
x_632 = lean_array_push(x_631, x_537);
x_633 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
x_634 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_634, 0, x_633);
lean_ctor_set(x_634, 1, x_632);
x_635 = lean_array_push(x_535, x_621);
x_636 = lean_array_push(x_635, x_634);
x_637 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_637, 0, x_589);
lean_ctor_set(x_637, 1, x_636);
x_638 = lean_array_push(x_535, x_590);
x_639 = lean_array_push(x_638, x_637);
x_640 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_640, 0, x_550);
lean_ctor_set(x_640, 1, x_639);
lean_ctor_set(x_523, 0, x_640);
return x_523;
}
else
{
lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; 
x_641 = lean_ctor_get(x_523, 0);
x_642 = lean_ctor_get(x_523, 1);
lean_inc(x_642);
lean_inc(x_641);
lean_dec(x_523);
x_643 = lean_ctor_get(x_3, 2);
lean_inc(x_643);
x_644 = lean_ctor_get(x_3, 1);
lean_inc(x_644);
lean_dec(x_3);
x_645 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11;
lean_inc(x_641);
x_646 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_646, 0, x_641);
lean_ctor_set(x_646, 1, x_645);
x_647 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26;
lean_inc(x_643);
lean_inc(x_644);
x_648 = l_Lean_addMacroScope(x_644, x_647, x_643);
x_649 = lean_box(0);
x_650 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25;
lean_inc(x_641);
x_651 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_651, 0, x_641);
lean_ctor_set(x_651, 1, x_650);
lean_ctor_set(x_651, 2, x_648);
lean_ctor_set(x_651, 3, x_649);
x_652 = l_Lean_Elab_Command_elabDeclaration___closed__7;
lean_inc(x_651);
x_653 = lean_array_push(x_652, x_651);
x_654 = l_Lean_Elab_Command_expandMutualPreamble___closed__3;
x_655 = lean_array_push(x_653, x_654);
x_656 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22;
x_657 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_657, 0, x_656);
lean_ctor_set(x_657, 1, x_655);
x_658 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31;
lean_inc(x_641);
x_659 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_659, 0, x_641);
lean_ctor_set(x_659, 1, x_658);
x_660 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37;
x_661 = l_Lean_addMacroScope(x_644, x_660, x_643);
x_662 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36;
x_663 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39;
lean_inc(x_641);
x_664 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_664, 0, x_641);
lean_ctor_set(x_664, 1, x_662);
lean_ctor_set(x_664, 2, x_661);
lean_ctor_set(x_664, 3, x_663);
x_665 = l_Lean_Elab_Command_elabInductive___closed__1;
lean_inc(x_17);
x_666 = lean_array_push(x_665, x_17);
x_667 = l_Lean_Elab_Command_elabDeclaration___closed__4;
x_668 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_668, 0, x_667);
lean_ctor_set(x_668, 1, x_666);
x_669 = lean_array_push(x_652, x_664);
x_670 = lean_array_push(x_669, x_668);
x_671 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33;
x_672 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_672, 0, x_671);
lean_ctor_set(x_672, 1, x_670);
x_673 = lean_array_push(x_652, x_659);
lean_inc(x_673);
x_674 = lean_array_push(x_673, x_672);
x_675 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30;
x_676 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_676, 0, x_675);
lean_ctor_set(x_676, 1, x_674);
x_677 = lean_array_push(x_665, x_676);
x_678 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_678, 0, x_667);
lean_ctor_set(x_678, 1, x_677);
x_679 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46;
x_680 = lean_array_push(x_679, x_678);
x_681 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28;
x_682 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_682, 0, x_681);
lean_ctor_set(x_682, 1, x_680);
x_683 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49;
lean_inc(x_641);
x_684 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_684, 0, x_641);
lean_ctor_set(x_684, 1, x_683);
x_685 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50;
lean_inc(x_641);
x_686 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_686, 0, x_641);
lean_ctor_set(x_686, 1, x_685);
x_687 = lean_array_push(x_652, x_686);
x_688 = lean_array_push(x_687, x_10);
x_689 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51;
x_690 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_690, 0, x_689);
lean_ctor_set(x_690, 1, x_688);
x_691 = l_Lean_Elab_Command_elabDeclaration___closed__10;
x_692 = lean_array_push(x_691, x_684);
x_693 = lean_array_push(x_692, x_690);
x_694 = lean_array_push(x_693, x_654);
x_695 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48;
x_696 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_696, 0, x_695);
lean_ctor_set(x_696, 1, x_694);
x_697 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52;
x_698 = lean_array_push(x_697, x_646);
x_699 = lean_array_push(x_698, x_657);
x_700 = lean_array_push(x_699, x_682);
x_701 = lean_array_push(x_700, x_696);
x_702 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12;
x_703 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_703, 0, x_702);
lean_ctor_set(x_703, 1, x_701);
x_704 = l_Lean_Elab_Command_expandInitCmd___closed__12;
x_705 = lean_array_push(x_704, x_703);
x_706 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8;
x_707 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_707, 0, x_706);
lean_ctor_set(x_707, 1, x_705);
x_708 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7;
lean_inc(x_641);
x_709 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_709, 0, x_641);
lean_ctor_set(x_709, 1, x_708);
x_710 = lean_array_push(x_665, x_651);
x_711 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_711, 0, x_667);
lean_ctor_set(x_711, 1, x_710);
x_712 = lean_array_push(x_652, x_13);
x_713 = lean_array_push(x_712, x_711);
x_714 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17;
x_715 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_715, 0, x_714);
lean_ctor_set(x_715, 1, x_713);
x_716 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_717 = lean_array_push(x_716, x_715);
x_718 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9;
x_719 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_719, 0, x_718);
lean_ctor_set(x_719, 1, x_717);
x_720 = lean_array_push(x_665, x_719);
x_721 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_721, 0, x_667);
lean_ctor_set(x_721, 1, x_720);
x_722 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5;
lean_inc(x_641);
x_723 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_723, 0, x_641);
lean_ctor_set(x_723, 1, x_722);
x_724 = lean_array_push(x_691, x_709);
x_725 = lean_array_push(x_724, x_721);
x_726 = lean_array_push(x_725, x_723);
x_727 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6;
x_728 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_728, 0, x_727);
lean_ctor_set(x_728, 1, x_726);
x_729 = lean_array_push(x_665, x_728);
x_730 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_730, 0, x_667);
lean_ctor_set(x_730, 1, x_729);
x_731 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20;
x_732 = lean_array_push(x_731, x_730);
x_733 = lean_array_push(x_732, x_654);
x_734 = lean_array_push(x_733, x_654);
x_735 = lean_array_push(x_734, x_654);
x_736 = lean_array_push(x_735, x_654);
x_737 = l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2;
x_738 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_738, 0, x_737);
lean_ctor_set(x_738, 1, x_736);
x_739 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15;
x_740 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_740, 0, x_641);
lean_ctor_set(x_740, 1, x_739);
x_741 = lean_array_push(x_673, x_17);
x_742 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_742, 0, x_675);
lean_ctor_set(x_742, 1, x_741);
x_743 = lean_array_push(x_679, x_742);
x_744 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_745 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_745, 0, x_744);
lean_ctor_set(x_745, 1, x_743);
x_746 = lean_array_push(x_697, x_740);
x_747 = lean_array_push(x_746, x_14);
x_748 = lean_array_push(x_747, x_745);
x_749 = lean_array_push(x_748, x_654);
x_750 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16;
x_751 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_751, 0, x_750);
lean_ctor_set(x_751, 1, x_749);
x_752 = lean_array_push(x_652, x_738);
x_753 = lean_array_push(x_752, x_751);
x_754 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_754, 0, x_706);
lean_ctor_set(x_754, 1, x_753);
x_755 = lean_array_push(x_652, x_707);
x_756 = lean_array_push(x_755, x_754);
x_757 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_757, 0, x_667);
lean_ctor_set(x_757, 1, x_756);
x_758 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_758, 0, x_757);
lean_ctor_set(x_758, 1, x_642);
return x_758;
}
}
}
else
{
uint8_t x_759; 
lean_dec(x_8);
x_759 = l_Lean_Syntax_isNone(x_6);
lean_dec(x_6);
if (x_759 == 0)
{
lean_object* x_760; lean_object* x_761; uint8_t x_762; 
lean_dec(x_13);
lean_dec(x_10);
x_760 = l_Lean_Elab_Command_expandInitCmd___closed__16;
x_761 = l_Lean_Macro_throwError___rarg(x_760, x_3, x_4);
lean_dec(x_3);
x_762 = !lean_is_exclusive(x_761);
if (x_762 == 0)
{
return x_761;
}
else
{
lean_object* x_763; lean_object* x_764; lean_object* x_765; 
x_763 = lean_ctor_get(x_761, 0);
x_764 = lean_ctor_get(x_761, 1);
lean_inc(x_764);
lean_inc(x_763);
lean_dec(x_761);
x_765 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_765, 0, x_763);
lean_ctor_set(x_765, 1, x_764);
return x_765;
}
}
else
{
lean_object* x_766; lean_object* x_767; 
x_766 = lean_box(0);
x_767 = l_Lean_Elab_Command_expandInitCmd___lambda__1(x_13, x_10, x_766, x_3, x_4);
return x_767;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_expandInitCmd___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_Command_expandInitCmd(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandInitialize(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = l_Lean_Elab_Command_expandInitCmd(x_4, x_1, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("initialize");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandInitialize");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandInitialize), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = l_Lean_Elab_Command_expandInitCmd(x_4, x_1, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtin_initialize");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandBuiltinInitialize");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandBuiltinInitialize), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
lean_object* initialize_Lean_Elab_DefView(lean_object*);
lean_object* initialize_Lean_Elab_Inductive(lean_object*);
lean_object* initialize_Lean_Elab_Structure(lean_object*);
lean_object* initialize_Lean_Elab_MutualDef(lean_object*);
lean_object* initialize_Lean_Elab_DeclarationRange(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Declaration(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DefView(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Structure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_MutualDef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__1 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__1);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__2 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__2);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__3 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__3);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__4);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__5 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__5);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__6);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__7 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__7);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__8);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__9 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__9);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__10 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__10);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__11);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__12);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__13 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__13);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__14 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__14();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__14);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__15);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__16);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__17 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__17();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__17);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__18 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__18();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__18);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__19 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__19();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__19);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__20);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__21 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__21();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__21);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__22 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__22();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__22);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__23 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__23();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__23);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__24 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__24();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__24);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__25 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__25();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__25);
l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__26 = _init_l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__26();
lean_mark_persistent(l_Lean_Elab_Command_expandDeclNamespace_x3f___closed__26);
l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__1 = _init_l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__1();
lean_mark_persistent(l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__1);
l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__2 = _init_l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__2();
lean_mark_persistent(l_Lean_Elab_addDeclarationRanges___at_Lean_Elab_Command_elabAxiom___spec__1___closed__2);
l_Lean_Elab_Command_elabAxiom___lambda__2___closed__1 = _init_l_Lean_Elab_Command_elabAxiom___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabAxiom___lambda__2___closed__1);
l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2 = _init_l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabAxiom___lambda__2___closed__2);
l_Lean_Elab_Command_elabAxiom___lambda__2___closed__3 = _init_l_Lean_Elab_Command_elabAxiom___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabAxiom___lambda__2___closed__3);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__1 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__1);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__2 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___closed__2);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__1 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__1);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__2 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___closed__2);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__1 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__1);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__2 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___closed__2);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__1 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__1);
l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__2 = _init_l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___lambda__2___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___closed__2);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1);
l_Lean_Elab_Command_elabInductive___closed__1 = _init_l_Lean_Elab_Command_elabInductive___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabInductive___closed__1);
l_Lean_Elab_Command_elabClassInductive___closed__1 = _init_l_Lean_Elab_Command_elabClassInductive___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabClassInductive___closed__1);
l_Lean_Elab_Command_elabClassInductive___closed__2 = _init_l_Lean_Elab_Command_elabClassInductive___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabClassInductive___closed__2);
l_Lean_Elab_Command_elabClassInductive___closed__3 = _init_l_Lean_Elab_Command_elabClassInductive___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabClassInductive___closed__3);
l_Lean_Elab_Command_elabDeclaration___closed__1 = _init_l_Lean_Elab_Command_elabDeclaration___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__1);
l_Lean_Elab_Command_elabDeclaration___closed__2 = _init_l_Lean_Elab_Command_elabDeclaration___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__2);
l_Lean_Elab_Command_elabDeclaration___closed__3 = _init_l_Lean_Elab_Command_elabDeclaration___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__3);
l_Lean_Elab_Command_elabDeclaration___closed__4 = _init_l_Lean_Elab_Command_elabDeclaration___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__4);
l_Lean_Elab_Command_elabDeclaration___closed__5 = _init_l_Lean_Elab_Command_elabDeclaration___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__5);
l_Lean_Elab_Command_elabDeclaration___closed__6 = _init_l_Lean_Elab_Command_elabDeclaration___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__6);
l_Lean_Elab_Command_elabDeclaration___closed__7 = _init_l_Lean_Elab_Command_elabDeclaration___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__7);
l_Lean_Elab_Command_elabDeclaration___closed__8 = _init_l_Lean_Elab_Command_elabDeclaration___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__8);
l_Lean_Elab_Command_elabDeclaration___closed__9 = _init_l_Lean_Elab_Command_elabDeclaration___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__9);
l_Lean_Elab_Command_elabDeclaration___closed__10 = _init_l_Lean_Elab_Command_elabDeclaration___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__10);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__2);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__3);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__4);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__5);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__6 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__6();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__6);
res = l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__2 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__2);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__3 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__3);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__4 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__4);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__5 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__5);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__6 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__6);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__7 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__7);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__8 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__8);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__9 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__9);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__10 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__10);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3);
l_Lean_Elab_Command_expandMutualNamespace___closed__1 = _init_l_Lean_Elab_Command_expandMutualNamespace___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandMutualNamespace___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__2);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__3);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__4);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__5);
res = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_expandMutualElement___closed__1 = _init_l_Lean_Elab_Command_expandMutualElement___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandMutualElement___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__2);
l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__3);
res = l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_expandMutualPreamble___closed__1 = _init_l_Lean_Elab_Command_expandMutualPreamble___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandMutualPreamble___closed__1);
l_Lean_Elab_Command_expandMutualPreamble___closed__2 = _init_l_Lean_Elab_Command_expandMutualPreamble___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_expandMutualPreamble___closed__2);
l_Lean_Elab_Command_expandMutualPreamble___closed__3 = _init_l_Lean_Elab_Command_expandMutualPreamble___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_expandMutualPreamble___closed__3);
l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__2);
l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__3);
res = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_elabMutual___closed__1 = _init_l_Lean_Elab_Command_elabMutual___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabMutual___closed__1);
l_Lean_Elab_Command_elabMutual___closed__2 = _init_l_Lean_Elab_Command_elabMutual___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabMutual___closed__2);
l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1);
l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabMutual___closed__2);
l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabMutual___closed__3);
res = l___regBuiltin_Lean_Elab_Command_elabMutual(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___closed__6);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__1 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__1();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__1);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__2 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__2();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__2);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__3 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__3();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__3);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__4 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__4();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabAttr___spec__7___closed__4);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__1 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__1);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__2 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__2();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__2);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__3 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__3();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabAttr___spec__4___closed__3);
l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__1 = _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__1);
l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__2 = _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__2();
lean_mark_persistent(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__2);
l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__3 = _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__3();
lean_mark_persistent(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabAttr___spec__3___closed__3);
l_Lean_Elab_Command_elabAttr___closed__1 = _init_l_Lean_Elab_Command_elabAttr___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabAttr___closed__1);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__2);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__3);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__4);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__5);
res = l___regBuiltin_Lean_Elab_Command_elabAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__1 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__1);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__2);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__3 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__3);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__4);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__5 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__5);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__6);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__7);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__8 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__8);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__9);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__10 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__10);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__11 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__11);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__12 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__12);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__13 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__13);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__14 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__14();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__14);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__15 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__15();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__15);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__16 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__16();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__16);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__17);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__18 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__18();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__18);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__19 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__19();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__19);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__20);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__21 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__21();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__21);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__22);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__23);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__24 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__24();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__24);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__25);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__26);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__27 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__27();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__27);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__28);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__29 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__29();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__29);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__30);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__31);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__32 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__32();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__32);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__33);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__34);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__35 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__35();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__35);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__36);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__37);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__38 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__38();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__38);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__39);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__40);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__41 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__41();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__41);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__42 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__42();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__42);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__43);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__44 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__44();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__44);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__45 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__45();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__45);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__46);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__47 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__47();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__47);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__48);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__49);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__50);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__51);
l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52 = _init_l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___lambda__1___closed__52);
l_Lean_Elab_Command_expandInitCmd___closed__1 = _init_l_Lean_Elab_Command_expandInitCmd___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__1);
l_Lean_Elab_Command_expandInitCmd___closed__2 = _init_l_Lean_Elab_Command_expandInitCmd___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__2);
l_Lean_Elab_Command_expandInitCmd___closed__3 = _init_l_Lean_Elab_Command_expandInitCmd___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__3);
l_Lean_Elab_Command_expandInitCmd___closed__4 = _init_l_Lean_Elab_Command_expandInitCmd___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__4);
l_Lean_Elab_Command_expandInitCmd___closed__5 = _init_l_Lean_Elab_Command_expandInitCmd___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__5);
l_Lean_Elab_Command_expandInitCmd___closed__6 = _init_l_Lean_Elab_Command_expandInitCmd___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__6);
l_Lean_Elab_Command_expandInitCmd___closed__7 = _init_l_Lean_Elab_Command_expandInitCmd___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__7);
l_Lean_Elab_Command_expandInitCmd___closed__8 = _init_l_Lean_Elab_Command_expandInitCmd___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__8);
l_Lean_Elab_Command_expandInitCmd___closed__9 = _init_l_Lean_Elab_Command_expandInitCmd___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__9);
l_Lean_Elab_Command_expandInitCmd___closed__10 = _init_l_Lean_Elab_Command_expandInitCmd___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__10);
l_Lean_Elab_Command_expandInitCmd___closed__11 = _init_l_Lean_Elab_Command_expandInitCmd___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__11);
l_Lean_Elab_Command_expandInitCmd___closed__12 = _init_l_Lean_Elab_Command_expandInitCmd___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__12);
l_Lean_Elab_Command_expandInitCmd___closed__13 = _init_l_Lean_Elab_Command_expandInitCmd___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__13);
l_Lean_Elab_Command_expandInitCmd___closed__14 = _init_l_Lean_Elab_Command_expandInitCmd___closed__14();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__14);
l_Lean_Elab_Command_expandInitCmd___closed__15 = _init_l_Lean_Elab_Command_expandInitCmd___closed__15();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__15);
l_Lean_Elab_Command_expandInitCmd___closed__16 = _init_l_Lean_Elab_Command_expandInitCmd___closed__16();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__16);
l_Lean_Elab_Command_expandInitCmd___closed__17 = _init_l_Lean_Elab_Command_expandInitCmd___closed__17();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__17);
l_Lean_Elab_Command_expandInitCmd___closed__18 = _init_l_Lean_Elab_Command_expandInitCmd___closed__18();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__18);
l_Lean_Elab_Command_expandInitCmd___closed__19 = _init_l_Lean_Elab_Command_expandInitCmd___closed__19();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__19);
l_Lean_Elab_Command_expandInitCmd___closed__20 = _init_l_Lean_Elab_Command_expandInitCmd___closed__20();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__20);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__2);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__3);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__4);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__5);
res = l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__2);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__3);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__4 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__4);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__5 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__5);
res = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
