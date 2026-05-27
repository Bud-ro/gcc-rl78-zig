/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"
#include "target.h"


struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
struct target_constraints *this_target_constraints = &default_target_constraints;
#endif
static inline bool
aligned_register_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 25 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/common.md"
{
  /* Require the offset in a non-paradoxical subreg to be naturally aligned.
     For example, if we have a subreg of something that is double the size of
     this operand, the offset must select the first or second half of it.  */
  if (SUBREG_P (op)
      && multiple_p (SUBREG_BYTE (op), GET_MODE_SIZE (GET_MODE (op))))
    op = SUBREG_REG (op);
  if (!REG_P (op))
    return false;

  if (HARD_REGISTER_P (op))
    {
      if (!in_hard_reg_set_p (operand_reg_set, GET_MODE (op), REGNO (op)))
	return false;

      /* Reject hard registers that would need reloading, so that the reload
	 is visible to IRA and to pre-RA optimizers.  */
      if (REGNO (op) % REG_NREGS (op) != 0)
	return false;
    }
  return true;
}

bool
aligned_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(aligned_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rl78_volatile_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 24 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0), MEM_ADDR_SPACE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rl78_general_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) || (rl78_volatile_memory_operand (op, mode));
}

bool
rl78_nonimmediate_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || (rl78_volatile_memory_operand (op, mode));
}

bool
rl78_nonfar_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (rl78_general_operand (op, mode)) && (!(
#line 44 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(rl78_far_p (op))));
}

bool
rl78_nonfar_nonimm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (rl78_nonimmediate_operand (op, mode)) && (!(
#line 49 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(rl78_far_p (op))));
}

bool
rl78_near_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 54 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(!rl78_far_p (op) && rl78_as_legitimate_address (VOIDmode, XEXP (op, 0), true, ADDR_SPACE_GENERIC)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
ubyte_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 59 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(IN_RANGE (INTVAL (op), 0, 255)));
}

bool
rl78_incdec_memory_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 63 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(rl78_far_p (op)
|| satisfies_constraint_Wsa (op)
|| satisfies_constraint_Whl (op)
|| satisfies_constraint_Wh1 (op)
|| satisfies_constraint_Wab (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rl78_1_2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 73 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(IN_RANGE (INTVAL (op), 1, 2)
		   || IN_RANGE (INTVAL (op), -2, -1)));
}

bool
rl78_24_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 78 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(INTVAL (op) == 2 || INTVAL (op) == 4));
}

bool
uword_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((((GET_CODE (op) == CONST) || ((GET_CODE (op) == CONST_INT) && (
#line 83 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(IN_RANGE (INTVAL (op), 0, 65536))))) || ((GET_CODE (op) == SUBREG) && ((GET_CODE (XEXP (op, 0)) == SYMBOL_REF) || (GET_CODE (XEXP (op, 0)) == CONST)))) || (GET_CODE (op) == SYMBOL_REF)) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
rl78_cmp_operator_signed (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GT:
    case GE:
    case LT:
    case LE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
rl78_cmp_operator_real (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case GTU:
    case LTU:
    case GEU:
    case LEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
rl78_cmp_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case GTU:
    case LTU:
    case GEU:
    case LEU:
    case GT:
    case LT:
    case GE:
    case LE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
rl78_ax_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 99 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(REGNO (op) == AX_REG || REGNO (op) >= FIRST_PSEUDO_REGISTER))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rl78_addw_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 103 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(REGNO (op) == AX_REG || REGNO (op) == SP_REG || REGNO (op) >= FIRST_PSEUDO_REGISTER))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rl78_stack_based_mem (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (((GET_CODE (XEXP (op, 0)) == REG) && (
#line 108 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(REGNO (XEXP (op, 0)) == SP_REG))) || ((GET_CODE (XEXP (op, 0)) == PLUS) && ((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG) && ((
#line 111 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(REGNO (XEXP (XEXP (op, 0), 0)) == SP_REG)) && ((GET_CODE (XEXP (XEXP (op, 0), 1)) == CONST_INT) && (
#line 113 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/predicates.md"
(IN_RANGE (INTVAL (XEXP (XEXP (op, 0), 1)), 0, 256 - GET_MODE_SIZE (GET_MODE (op))))))))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'A':
      return CONSTRAINT_A;
    case 'B':
      return CONSTRAINT_B;
    case 'C':
      if (!strncmp (str + 1, "bc", 2))
        return CONSTRAINT_Cbc;
      if (!strncmp (str + 1, "de", 2))
        return CONSTRAINT_Cde;
      if (!strncmp (str + 1, "ca", 2))
        return CONSTRAINT_Cca;
      if (!strncmp (str + 1, "cv", 2))
        return CONSTRAINT_Ccv;
      if (!strncmp (str + 1, "d2", 2))
        return CONSTRAINT_Cd2;
      if (!strncmp (str + 1, "hl", 2))
        return CONSTRAINT_Chl;
      if (!strncmp (str + 1, "h1", 2))
        return CONSTRAINT_Ch1;
      if (!strncmp (str + 1, "hb", 2))
        return CONSTRAINT_Chb;
      if (!strncmp (str + 1, "s1", 2))
        return CONSTRAINT_Cs1;
      if (!strncmp (str + 1, "ab", 2))
        return CONSTRAINT_Cab;
      break;
    case 'D':
      return CONSTRAINT_D;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'I':
      if (!strncmp (str + 1, "nt3", 3))
        return CONSTRAINT_Int3;
      if (!strncmp (str + 1, "v08", 3))
        return CONSTRAINT_Iv08;
      if (!strncmp (str + 1, "v16", 3))
        return CONSTRAINT_Iv16;
      if (!strncmp (str + 1, "v24", 3))
        return CONSTRAINT_Iv24;
      if (!strncmp (str + 1, "s09", 3))
        return CONSTRAINT_Is09;
      if (!strncmp (str + 1, "s17", 3))
        return CONSTRAINT_Is17;
      if (!strncmp (str + 1, "s25", 3))
        return CONSTRAINT_Is25;
      if (!strncmp (str + 1, "Ssi", 3))
        return CONSTRAINT_ISsi;
      if (!strncmp (str + 1, "Shi", 3))
        return CONSTRAINT_IShi;
      if (!strncmp (str + 1, "Sqi", 3))
        return CONSTRAINT_ISqi;
      if (!strncmp (str + 1, "bqi", 3))
        return CONSTRAINT_Ibqi;
      if (!strncmp (str + 1, "Bqi", 3))
        return CONSTRAINT_IBqi;
      if (!strncmp (str + 1, "nt8", 3))
        return CONSTRAINT_Int8;
      break;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'P':
      return CONSTRAINT_P;
    case 'Q':
      if (!strncmp (str + 1, "sc", 2))
        return CONSTRAINT_Qsc;
      if (!strncmp (str + 1, "s8", 2))
        return CONSTRAINT_Qs8;
      if (!strncmp (str + 1, "bi", 2))
        return CONSTRAINT_Qbi;
      break;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      return CONSTRAINT_T;
    case 'U':
      return CONSTRAINT_U;
    case 'V':
      return CONSTRAINT_V;
    case 'W':
      if (!strncmp (str + 1, "bc", 2))
        return CONSTRAINT_Wbc;
      if (!strncmp (str + 1, "de", 2))
        return CONSTRAINT_Wde;
      if (!strncmp (str + 1, "ca", 2))
        return CONSTRAINT_Wca;
      if (!strncmp (str + 1, "cv", 2))
        return CONSTRAINT_Wcv;
      if (!strncmp (str + 1, "d2", 2))
        return CONSTRAINT_Wd2;
      if (!strncmp (str + 1, "hl", 2))
        return CONSTRAINT_Whl;
      if (!strncmp (str + 1, "h1", 2))
        return CONSTRAINT_Wh1;
      if (!strncmp (str + 1, "hb", 2))
        return CONSTRAINT_Whb;
      if (!strncmp (str + 1, "s1", 2))
        return CONSTRAINT_Ws1;
      if (!strncmp (str + 1, "fr", 2))
        return CONSTRAINT_Wfr;
      if (!strncmp (str + 1, "sa", 2))
        return CONSTRAINT_Wsa;
      if (!strncmp (str + 1, "sf", 2))
        return CONSTRAINT_Wsf;
      if (!strncmp (str + 1, "ab", 2))
        return CONSTRAINT_Wab;
      break;
    case 'X':
      return CONSTRAINT_X;
    case 'Y':
      return CONSTRAINT_Y;
    case 'Z':
      if (!strncmp (str + 1, "10W", 3))
        return CONSTRAINT_Z10W;
      if (!strncmp (str + 1, "int", 3))
        return CONSTRAINT_Zint;
      if (!strncmp (str + 1, "08W", 3))
        return CONSTRAINT_Z08W;
      break;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      return CONSTRAINT_e;
    case 'h':
      return CONSTRAINT_h;
    case 'i':
      return CONSTRAINT_i;
    case 'l':
      return CONSTRAINT_l;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 'v':
      return CONSTRAINT_v;
    case 'w':
      return CONSTRAINT_w;
    case 'x':
      return CONSTRAINT_x;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_A, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_B, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_D, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_M, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_N, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_O, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_P, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_R, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_S, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_T, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_U, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Y, (int) UCHAR_MAX),
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_a, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_b, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_c, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_d, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_e, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_h, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_l, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_v, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_w, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_x, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_R: return QI_REGS;
    case CONSTRAINT_a: return AREG;
    case CONSTRAINT_x: return XREG;
    case CONSTRAINT_b: return BREG;
    case CONSTRAINT_c: return CREG;
    case CONSTRAINT_d: return DREG;
    case CONSTRAINT_e: return EREG;
    case CONSTRAINT_h: return HREG;
    case CONSTRAINT_l: return LREG;
    case CONSTRAINT_w: return PSWREG;
    case CONSTRAINT_A: return AXREG;
    case CONSTRAINT_B: return BCREG;
    case CONSTRAINT_D: return DEREG;
    case CONSTRAINT_T: return HLREG;
    case CONSTRAINT_S: return SPREG;
    case CONSTRAINT_v: return V_REGS;
    case CONSTRAINT_Z08W: return R8W_REGS;
    case CONSTRAINT_Z10W: return R10W_REGS;
    case CONSTRAINT_Zint: return INT_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_Int8,
  satisfies_constraint_Int3,
  satisfies_constraint_Iv08,
  satisfies_constraint_Iv16,
  satisfies_constraint_Iv24,
  satisfies_constraint_Is09,
  satisfies_constraint_Is17,
  satisfies_constraint_Is25,
  satisfies_constraint_ISsi,
  satisfies_constraint_IShi,
  satisfies_constraint_ISqi,
  satisfies_constraint_Ibqi,
  satisfies_constraint_IBqi,
  satisfies_constraint_J,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_M,
  satisfies_constraint_N,
  satisfies_constraint_O,
  satisfies_constraint_P,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_Cab,
  satisfies_constraint_Wab,
  satisfies_constraint_Cbc,
  satisfies_constraint_Wbc,
  satisfies_constraint_Cde,
  satisfies_constraint_Wde,
  satisfies_constraint_Cca,
  satisfies_constraint_Wca,
  satisfies_constraint_Ccv,
  satisfies_constraint_Wcv,
  satisfies_constraint_Cd2,
  satisfies_constraint_Wd2,
  satisfies_constraint_Chl,
  satisfies_constraint_Whl,
  satisfies_constraint_Ch1,
  satisfies_constraint_Wh1,
  satisfies_constraint_Chb,
  satisfies_constraint_Whb,
  satisfies_constraint_Cs1,
  satisfies_constraint_Ws1,
  satisfies_constraint_Wsa,
  satisfies_constraint_Wsf,
  satisfies_constraint_Y,
  satisfies_constraint_U,
  satisfies_constraint_Qbi,
  satisfies_constraint_Qsc,
  satisfies_constraint_p,
  satisfies_constraint_Qs8,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_Wfr,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_Int8:
      return 
#line 53 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 0, 255));

    case CONSTRAINT_Int3:
      return 
#line 58 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 1, 7));

    case CONSTRAINT_Iv08:
      return 
#line 64 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 8, 8));

    case CONSTRAINT_Iv16:
      return 
#line 70 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 16, 16));

    case CONSTRAINT_Iv24:
      return 
#line 76 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 24, 24));

    case CONSTRAINT_Is09:
      return 
#line 82 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 9, 15));

    case CONSTRAINT_Is17:
      return 
#line 88 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 17, 23));

    case CONSTRAINT_Is25:
      return 
#line 94 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 25, 31));

    case CONSTRAINT_ISsi:
      return 
#line 100 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0x80000000) != 0);

    case CONSTRAINT_IShi:
      return 
#line 106 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0x8000) != 0);

    case CONSTRAINT_ISqi:
      return 
#line 112 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0x80) != 0);

    case CONSTRAINT_Ibqi:
      return 
#line 118 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((ival & 0xff) && (exact_log2 (ival & 0xff) >= 0));

    case CONSTRAINT_IBqi:
      return 
#line 123 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
((~ival & 0xff) && (exact_log2 (~ival & 0xff) >= 0));

    case CONSTRAINT_J:
      return 
#line 128 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, -255, 0));

    case CONSTRAINT_K:
      return 
#line 133 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 1, 1));

    case CONSTRAINT_L:
      return 
#line 138 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, -1, -1));

    case CONSTRAINT_M:
      return 
#line 143 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 0, 0));

    case CONSTRAINT_N:
      return 
#line 148 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 2, 2));

    case CONSTRAINT_O:
      return 
#line 153 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, -2, -2));

    case CONSTRAINT_P:
      return 
#line 158 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/constraints.md"
(IN_RANGE (ival, 1, 15));

    default: break;
    }
  return false;
}


void
init_reg_class_start_regs ()
{
}
