/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 54 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 60 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 69 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 71 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 78 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 79 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 85 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 86 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 90 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 94 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(CONSTANT_P (op))) && (
#line 95 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 99 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 100 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 101 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 105 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 106 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 110 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 111 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 117 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 118 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 123 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_Int8 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 53 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 0, 255)));
}
static inline bool
satisfies_constraint_Int3 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 58 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 1, 7)));
}
static inline bool
satisfies_constraint_Iv08 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 64 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 8, 8)));
}
static inline bool
satisfies_constraint_Iv16 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 70 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 16, 16)));
}
static inline bool
satisfies_constraint_Iv24 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 76 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 24, 24)));
}
static inline bool
satisfies_constraint_Is09 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 82 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 9, 15)));
}
static inline bool
satisfies_constraint_Is17 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 88 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 17, 23)));
}
static inline bool
satisfies_constraint_Is25 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 94 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 25, 31)));
}
static inline bool
satisfies_constraint_ISsi (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 100 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0x80000000) != 0));
}
static inline bool
satisfies_constraint_IShi (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 106 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0x8000) != 0));
}
static inline bool
satisfies_constraint_ISqi (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 112 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0x80) != 0));
}
static inline bool
satisfies_constraint_Ibqi (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 118 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0xff) && (exact_log2 (ival & 0xff) >= 0)));
}
static inline bool
satisfies_constraint_IBqi (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 123 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((~ival & 0xff) && (exact_log2 (~ival & 0xff) >= 0)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 128 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, -255, 0)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 133 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 1, 1)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 138 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, -1, -1)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 143 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 0, 0)));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 148 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 2, 2)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 153 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, -2, -2)));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 158 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 1, 15)));
}
static inline bool
satisfies_constraint_Cab (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 228 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(CONSTANT_P (XEXP (op, 0)))) || (
#line 229 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(GET_CODE (XEXP (op, 0)) == PLUS && GET_CODE (XEXP (XEXP (op, 0), 0)) == SYMBOL_REF)));
}
static inline bool
satisfies_constraint_Wab (rtx op)
{
  return 
#line 234 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Cab (rl78_es_base (op)))
               || satisfies_constraint_Cab (op));
}
static inline bool
satisfies_constraint_Cbc (rtx op)
{
  return (GET_CODE (op) == MEM) && (((GET_CODE (XEXP (op, 0)) == REG) && (
#line 243 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (op, 0)) == BC_REG))) || ((GET_CODE (XEXP (op, 0)) == PLUS) && (((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG) && (
#line 246 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (XEXP (op, 0), 0)) == BC_REG))) && (
#line 247 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(uword_operand (XEXP (XEXP (op, 0), 1), VOIDmode))))));
}
static inline bool
satisfies_constraint_Wbc (rtx op)
{
  return 
#line 252 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Cbc (rl78_es_base (op)))
               || satisfies_constraint_Cbc (op));
}
static inline bool
satisfies_constraint_Cde (rtx op)
{
  return (GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == REG) && (
#line 260 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (op, 0)) == DE_REG)));
}
static inline bool
satisfies_constraint_Wde (rtx op)
{
  return 
#line 264 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Cde (rl78_es_base (op)))
               || satisfies_constraint_Cde (op));
}
static inline bool
satisfies_constraint_Cca (rtx op)
{
  return (GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == REG) && (
#line 272 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (op, 0)) <= HL_REG)));
}
static inline bool
satisfies_constraint_Wca (rtx op)
{
  return 
#line 276 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Cca (rl78_es_base (op)))
               || satisfies_constraint_Cca (op));
}
static inline bool
satisfies_constraint_Ccv (rtx op)
{
  return (GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == REG) && (
#line 284 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (op, 0)) < 32)));
}
static inline bool
satisfies_constraint_Wcv (rtx op)
{
  return 
#line 288 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Ccv (rl78_es_base (op)))
               || satisfies_constraint_Ccv (op));
}
static inline bool
satisfies_constraint_Cd2 (rtx op)
{
  return (GET_CODE (op) == MEM) && (((GET_CODE (XEXP (op, 0)) == REG) && (
#line 297 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (op, 0)) == DE_REG))) || ((GET_CODE (XEXP (op, 0)) == PLUS) && (((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG) && (
#line 300 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (XEXP (op, 0), 0)) == DE_REG))) && (
#line 301 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(uword_operand (XEXP (XEXP (op, 0), 1), VOIDmode))))));
}
static inline bool
satisfies_constraint_Wd2 (rtx op)
{
  return 
#line 306 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Cd2 (rl78_es_base (op)))
               || satisfies_constraint_Cd2 (op));
}
static inline bool
satisfies_constraint_Chl (rtx op)
{
  return (GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == REG) && (
#line 314 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (op, 0)) == HL_REG)));
}
static inline bool
satisfies_constraint_Whl (rtx op)
{
  return 
#line 318 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Chl (rl78_es_base (op)))
               || satisfies_constraint_Chl (op));
}
static inline bool
satisfies_constraint_Ch1 (rtx op)
{
  return (GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == PLUS) && (((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG) && (
#line 327 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (XEXP (op, 0), 0)) == HL_REG))) && (
#line 328 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(ubyte_operand (XEXP (XEXP (op, 0), 1), VOIDmode)))));
}
static inline bool
satisfies_constraint_Wh1 (rtx op)
{
  return 
#line 332 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Ch1 (rl78_es_base (op)))
               || satisfies_constraint_Ch1 (op));
}
static inline bool
satisfies_constraint_Chb (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 339 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(rl78_hl_b_c_addr_p (XEXP (op, 0))));
}
static inline bool
satisfies_constraint_Whb (rtx op)
{
  return 
#line 343 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Chb (rl78_es_base (op)))
               || satisfies_constraint_Chb (op));
}
static inline bool
satisfies_constraint_Cs1 (rtx op)
{
  return (GET_CODE (op) == MEM) && (((GET_CODE (XEXP (op, 0)) == REG) && (
#line 352 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (op, 0)) == SP_REG))) || ((GET_CODE (XEXP (op, 0)) == PLUS) && (((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG) && (
#line 355 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(REGNO (XEXP (XEXP (op, 0), 0)) == SP_REG))) && ((GET_CODE (XEXP (XEXP (op, 0), 1)) == CONST_INT) && (
#line 357 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (INTVAL (XEXP (XEXP (op, 0), 1)), 0, 256 - GET_MODE_SIZE (GET_MODE (op)))))))));
}
static inline bool
satisfies_constraint_Ws1 (rtx op)
{
  return 
#line 363 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((rl78_es_addr (op) && satisfies_constraint_Cs1 (rl78_es_base (op)))
               || satisfies_constraint_Cs1 (op));
}
static inline bool
satisfies_constraint_Wfr (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 370 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(rl78_far_p (op)));
}
static inline bool
satisfies_constraint_Wsa (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 376 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(rl78_saddr_p (op)));
}
static inline bool
satisfies_constraint_Wsf (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 382 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(rl78_sfr_p (op)));
}
static inline bool
satisfies_constraint_Y (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 388 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(!rl78_far_p (op) && rl78_as_legitimate_address (VOIDmode, XEXP (op, 0), true, ADDR_SPACE_GENERIC)));
}
static inline bool
satisfies_constraint_U (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 394 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(rl78_virt_insns_ok ()
|| satisfies_constraint_Wab (op)
|| satisfies_constraint_Wbc (op)
|| satisfies_constraint_Wde (op)
|| satisfies_constraint_Wd2 (op)
|| satisfies_constraint_Whl (op)
|| satisfies_constraint_Wh1 (op)
|| satisfies_constraint_Whb (op)
|| satisfies_constraint_Ws1 (op)
|| satisfies_constraint_Wfr (op) ));
}
static inline bool
satisfies_constraint_Qbi (rtx op)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case GTU:
    case LTU:
    case GEU:
    case LEU:
      return true;
    default:
      break;
    }
  return false;
}
static inline bool
satisfies_constraint_Qsc (rtx op)
{
  switch (GET_CODE (op))
    {
    case GT:
    case LT:
    case GE:
    case LE:
      return true;
    default:
      break;
    }
  return false;
}
static inline bool
satisfies_constraint_Qs8 (rtx op)
{
  return (GET_CODE (op) == SUBREG) && (
#line 416 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(GET_CODE (XEXP (op, 0)) == SYMBOL_REF));
}
#endif /* tm-constrs.h */
