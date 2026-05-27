/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern bool general_operand (rtx, machine_mode);
extern bool address_operand (rtx, machine_mode);
extern bool register_operand (rtx, machine_mode);
extern bool pmode_register_operand (rtx, machine_mode);
extern bool scratch_operand (rtx, machine_mode);
extern bool immediate_operand (rtx, machine_mode);
extern bool const_int_operand (rtx, machine_mode);
extern bool const_double_operand (rtx, machine_mode);
extern bool nonimmediate_operand (rtx, machine_mode);
extern bool nonmemory_operand (rtx, machine_mode);
extern bool push_operand (rtx, machine_mode);
extern bool pop_operand (rtx, machine_mode);
extern bool memory_operand (rtx, machine_mode);
extern bool indirect_operand (rtx, machine_mode);
extern bool ordered_comparison_operator (rtx, machine_mode);
extern bool comparison_operator (rtx, machine_mode);
extern bool aligned_register_operand (rtx, machine_mode);
extern bool rl78_volatile_memory_operand (rtx, machine_mode);
extern bool rl78_general_operand (rtx, machine_mode);
extern bool rl78_nonimmediate_operand (rtx, machine_mode);
extern bool rl78_nonfar_operand (rtx, machine_mode);
extern bool rl78_nonfar_nonimm_operand (rtx, machine_mode);
extern bool rl78_near_mem_operand (rtx, machine_mode);
extern bool ubyte_operand (rtx, machine_mode);
extern bool rl78_incdec_memory_operand (rtx, machine_mode);
extern bool rl78_1_2_operand (rtx, machine_mode);
extern bool rl78_24_operand (rtx, machine_mode);
extern bool uword_operand (rtx, machine_mode);
extern bool rl78_cmp_operator_signed (rtx, machine_mode);
extern bool rl78_cmp_operator_real (rtx, machine_mode);
extern bool rl78_cmp_operator (rtx, machine_mode);
extern bool rl78_ax_operand (rtx, machine_mode);
extern bool rl78_addw_operand (rtx, machine_mode);
extern bool rl78_stack_based_mem (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#ifdef GCC_HARD_REG_SET_H
struct target_constraints {
  HARD_REG_SET register_filters[1];
};

extern struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
extern struct target_constraints *this_target_constraints;
#else
#define this_target_constraints (&default_target_constraints)
#endif

#define TEST_REGISTER_FILTER_BIT(ID, REGNO) \
  ((void) (ID), (void) (REGNO), false)

inline bool
test_register_filters (unsigned int, unsigned int)
{
  return true;
}
#endif

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_R,
  CONSTRAINT_a,
  CONSTRAINT_x,
  CONSTRAINT_b,
  CONSTRAINT_c,
  CONSTRAINT_d,
  CONSTRAINT_e,
  CONSTRAINT_h,
  CONSTRAINT_l,
  CONSTRAINT_w,
  CONSTRAINT_A,
  CONSTRAINT_B,
  CONSTRAINT_D,
  CONSTRAINT_T,
  CONSTRAINT_S,
  CONSTRAINT_v,
  CONSTRAINT_Z08W,
  CONSTRAINT_Z10W,
  CONSTRAINT_Zint,
  CONSTRAINT_Int8,
  CONSTRAINT_Int3,
  CONSTRAINT_Iv08,
  CONSTRAINT_Iv16,
  CONSTRAINT_Iv24,
  CONSTRAINT_Is09,
  CONSTRAINT_Is17,
  CONSTRAINT_Is25,
  CONSTRAINT_ISsi,
  CONSTRAINT_IShi,
  CONSTRAINT_ISqi,
  CONSTRAINT_Ibqi,
  CONSTRAINT_IBqi,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_N,
  CONSTRAINT_O,
  CONSTRAINT_P,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_Cab,
  CONSTRAINT_Wab,
  CONSTRAINT_Cbc,
  CONSTRAINT_Wbc,
  CONSTRAINT_Cde,
  CONSTRAINT_Wde,
  CONSTRAINT_Cca,
  CONSTRAINT_Wca,
  CONSTRAINT_Ccv,
  CONSTRAINT_Wcv,
  CONSTRAINT_Cd2,
  CONSTRAINT_Wd2,
  CONSTRAINT_Chl,
  CONSTRAINT_Whl,
  CONSTRAINT_Ch1,
  CONSTRAINT_Wh1,
  CONSTRAINT_Chb,
  CONSTRAINT_Whb,
  CONSTRAINT_Cs1,
  CONSTRAINT_Ws1,
  CONSTRAINT_Wsa,
  CONSTRAINT_Wsf,
  CONSTRAINT_Y,
  CONSTRAINT_U,
  CONSTRAINT_Qbi,
  CONSTRAINT_Qsc,
  CONSTRAINT_p,
  CONSTRAINT_Qs8,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_Wfr,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_Int8;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_Zint;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_Qsc;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_Qs8 && c <= CONSTRAINT_Qs8)
    {
      *allows_reg = true;
      return;
    }
  if (c >= CONSTRAINT_V && c <= CONSTRAINT_Wfr)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'C': return 3;
    case 'I': return 4;
    case 'Q': return 3;
    case 'W': return 3;
    case 'Z': return 4;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_Qs8)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_Int8)
    return CT_CONST_INT;
  return CT_REGISTER;
}

#ifdef GCC_HARD_REG_SET_H
static inline const HARD_REG_SET *
get_register_filter (constraint_num)
{
  return nullptr;
}
#endif

static inline int
get_register_filter_id (constraint_num)
{
  return -1;
}
#endif /* tm-preds.h */
