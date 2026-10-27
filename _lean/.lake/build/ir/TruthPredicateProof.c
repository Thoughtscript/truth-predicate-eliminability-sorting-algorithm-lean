// Lean compiler output
// Module: TruthPredicateProof
// Imports: public import Init public meta import Init
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instDecidableEqToySentence(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instDecidableEqToySentence___boxed(lean_object*, lean_object*);
static const lean_string_object lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "TruthPredicateProof.ToySentence.clean"};
static const lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__0 = (const lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__0_value;
static const lean_ctor_object lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__0_value)}};
static const lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__1 = (const lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__1_value;
static const lean_string_object lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "TruthPredicateProof.ToySentence.liar"};
static const lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__2 = (const lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__2_value;
static const lean_ctor_object lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__2_value)}};
static const lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__3 = (const lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__3_value;
static lean_once_cell_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4;
static lean_once_cell_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5;
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence___closed__0 = (const lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence___closed__0_value;
LEAN_EXPORT const lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence = (const lean_object*)&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence___closed__0_value;
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue___redArg();
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue(uint8_t);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toyTruthValue(uint8_t);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toyTruthValue___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorIdx(uint8_t v_x_1_){
_start:
{
if (v_x_1_ == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_boxed_5_; lean_object* v_res_6_; 
v_x_boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorIdx(v_x_boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim___redArg(lean_object* v_clean_22_){
_start:
{
lean_inc(v_clean_22_);
return v_clean_22_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim___redArg___boxed(lean_object* v_clean_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim___redArg(v_clean_23_);
lean_dec(v_clean_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_clean_28_){
_start:
{
lean_inc(v_clean_28_);
return v_clean_28_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_clean_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_clean_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_clean_32_);
lean_dec(v_clean_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim___redArg(lean_object* v_liar_35_){
_start:
{
lean_inc(v_liar_35_);
return v_liar_35_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim___redArg___boxed(lean_object* v_liar_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim___redArg(v_liar_36_);
lean_dec(v_liar_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_liar_41_){
_start:
{
lean_inc(v_liar_41_);
return v_liar_41_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_liar_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_liar_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_liar_45_);
lean_dec(v_liar_45_);
return v_res_47_;
}
}
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ofNat(lean_object* v_n_48_){
_start:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = lean_nat_dec_le(v_n_48_, v___x_49_);
if (v___x_50_ == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ofNat___boxed(lean_object* v_n_53_){
_start:
{
uint8_t v_res_54_; lean_object* v_r_55_; 
v_res_54_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ofNat(v_n_53_);
lean_dec(v_n_53_);
v_r_55_ = lean_box(v_res_54_);
return v_r_55_;
}
}
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instDecidableEqToySentence(uint8_t v_x_56_, uint8_t v_y_57_){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_58_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorIdx(v_x_56_);
v___x_59_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_ToySentence_ctorIdx(v_y_57_);
v___x_60_ = lean_nat_dec_eq(v___x_58_, v___x_59_);
lean_dec(v___x_59_);
lean_dec(v___x_58_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instDecidableEqToySentence___boxed(lean_object* v_x_61_, lean_object* v_y_62_){
_start:
{
uint8_t v_x_20__boxed_63_; uint8_t v_y_21__boxed_64_; uint8_t v_res_65_; lean_object* v_r_66_; 
v_x_20__boxed_63_ = lean_unbox(v_x_61_);
v_y_21__boxed_64_ = lean_unbox(v_y_62_);
v_res_65_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instDecidableEqToySentence(v_x_20__boxed_63_, v_y_21__boxed_64_);
v_r_66_ = lean_box(v_res_65_);
return v_r_66_;
}
}
static lean_object* _init_lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(2u);
v___x_74_ = lean_nat_to_int(v___x_73_);
return v___x_74_;
}
}
static lean_object* _init_lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_unsigned_to_nat(1u);
v___x_76_ = lean_nat_to_int(v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr(uint8_t v_x_77_, lean_object* v_prec_78_){
_start:
{
lean_object* v___y_80_; lean_object* v___y_87_; 
if (v_x_77_ == 0)
{
lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_93_ = lean_unsigned_to_nat(1024u);
v___x_94_ = lean_nat_dec_le(v___x_93_, v_prec_78_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4, &lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4_once, _init_lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4);
v___y_80_ = v___x_95_;
goto v___jp_79_;
}
else
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5, &lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5_once, _init_lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5);
v___y_80_ = v___x_96_;
goto v___jp_79_;
}
}
else
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(1024u);
v___x_98_ = lean_nat_dec_le(v___x_97_, v_prec_78_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_obj_once(&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4, &lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4_once, _init_lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__4);
v___y_87_ = v___x_99_;
goto v___jp_86_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5, &lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5_once, _init_lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__5);
v___y_87_ = v___x_100_;
goto v___jp_86_;
}
}
v___jp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_81_ = ((lean_object*)(lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__1));
lean_inc(v___y_80_);
v___x_82_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_82_, 0, v___y_80_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = 0;
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_82_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_83_);
v___x_85_ = l_Repr_addAppParen(v___x_84_, v_prec_78_);
return v___x_85_;
}
v___jp_86_:
{
lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_88_ = ((lean_object*)(lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___closed__3));
lean_inc(v___y_87_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___y_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = 0;
v___x_91_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_91_, sizeof(void*)*1, v___x_90_);
v___x_92_ = l_Repr_addAppParen(v___x_91_, v_prec_78_);
return v___x_92_;
}
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr___boxed(lean_object* v_x_101_, lean_object* v_prec_102_){
_start:
{
uint8_t v_x_117__boxed_103_; lean_object* v_res_104_; 
v_x_117__boxed_103_ = lean_unbox(v_x_101_);
v_res_104_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_instReprToySentence_repr(v_x_117__boxed_103_, v_prec_102_);
lean_dec(v_prec_102_);
return v_res_104_;
}
}
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue___redArg(){
_start:
{
uint8_t v___x_108_; 
v___x_108_ = 1;
return v___x_108_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue___redArg___boxed(lean_object* v___dummy_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue___redArg();
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue(uint8_t v_x_112_){
_start:
{
uint8_t v___x_113_; 
v___x_113_ = 1;
return v___x_113_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue___boxed(lean_object* v_x_114_){
_start:
{
uint8_t v_x_21__boxed_115_; uint8_t v_res_116_; lean_object* v_r_117_; 
v_x_21__boxed_115_ = lean_unbox(v_x_114_);
v_res_116_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toySentenceValue(v_x_21__boxed_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toyTruthValue(uint8_t v_x_118_){
_start:
{
if (v_x_118_ == 0)
{
uint8_t v___x_119_; 
v___x_119_ = 1;
return v___x_119_;
}
else
{
uint8_t v___x_120_; 
v___x_120_ = 0;
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toyTruthValue___boxed(lean_object* v_x_121_){
_start:
{
uint8_t v_x_18__boxed_122_; uint8_t v_res_123_; lean_object* v_r_124_; 
v_x_18__boxed_122_ = lean_unbox(v_x_121_);
v_res_123_ = lp_truth_x2dpredicate_x2dproof_TruthPredicateProof_toyTruthValue(v_x_18__boxed_122_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter___redArg(uint8_t v_x_125_, lean_object* v_h__1_126_, lean_object* v_h__2_127_){
_start:
{
if (v_x_125_ == 0)
{
lean_object* v___x_128_; lean_object* v___x_129_; 
lean_dec(v_h__2_127_);
v___x_128_ = lean_box(0);
v___x_129_ = lean_apply_1(v_h__1_126_, v___x_128_);
return v___x_129_;
}
else
{
lean_object* v___x_130_; lean_object* v___x_131_; 
lean_dec(v_h__1_126_);
v___x_130_ = lean_box(0);
v___x_131_ = lean_apply_1(v_h__2_127_, v___x_130_);
return v___x_131_;
}
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter___redArg___boxed(lean_object* v_x_132_, lean_object* v_h__1_133_, lean_object* v_h__2_134_){
_start:
{
uint8_t v_x_24__boxed_135_; lean_object* v_res_136_; 
v_x_24__boxed_135_ = lean_unbox(v_x_132_);
v_res_136_ = lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter___redArg(v_x_24__boxed_135_, v_h__1_133_, v_h__2_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter(lean_object* v_motive_137_, uint8_t v_x_138_, lean_object* v_h__1_139_, lean_object* v_h__2_140_){
_start:
{
if (v_x_138_ == 0)
{
lean_object* v___x_141_; lean_object* v___x_142_; 
lean_dec(v_h__2_140_);
v___x_141_ = lean_box(0);
v___x_142_ = lean_apply_1(v_h__1_139_, v___x_141_);
return v___x_142_;
}
else
{
lean_object* v___x_143_; lean_object* v___x_144_; 
lean_dec(v_h__1_139_);
v___x_143_ = lean_box(0);
v___x_144_ = lean_apply_1(v_h__2_140_, v___x_143_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter___boxed(lean_object* v_motive_145_, lean_object* v_x_146_, lean_object* v_h__1_147_, lean_object* v_h__2_148_){
_start:
{
uint8_t v_x_35__boxed_149_; lean_object* v_res_150_; 
v_x_35__boxed_149_ = lean_unbox(v_x_146_);
v_res_150_ = lp_truth_x2dpredicate_x2dproof___private_TruthPredicateProof_0__TruthPredicateProof_instReprToySentence_repr_match__1_splitter(v_motive_145_, v_x_35__boxed_149_, v_h__1_147_, v_h__2_148_);
return v_res_150_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_truth_x2dpredicate_x2dproof_TruthPredicateProof(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
