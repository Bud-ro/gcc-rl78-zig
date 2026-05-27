/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "emit-rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third parameter to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.cc) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx_insn *gen_split_1 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_2 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_1 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_2 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_3 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_4 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_5 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_6 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_7 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_8 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_9 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_10 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_11 (rtx_insn *, rtx *);




static int
pattern0 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_QImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!rl78_nonimmediate_operand (operands[0], E_QImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!rl78_general_operand (operands[1], E_QImode))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!rl78_general_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern1 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  switch (GET_MODE (operands[0]))
    {
    case E_QImode:
      if (GET_MODE (x3) != E_QImode
          || !general_operand (operands[2], E_QImode))
        return -1;
      return 0;

    case E_HImode:
      if (GET_MODE (x3) != E_HImode
          || !general_operand (operands[2], E_QImode))
        return -1;
      return 1;

    case E_SImode:
      if (pnum_clobbers == NULL
          || !nonimmediate_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode
          || !nonimmediate_operand (operands[1], E_SImode)
          || !nonmemory_operand (operands[2], E_SImode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

static int
pattern2 (rtx x1, unsigned int i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UDIV
      || GET_MODE (x3) != i2)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != UMOD
      || GET_MODE (x5) != i2)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 0
      || GET_MODE (x7) != E_HImode)
    return -1;
  x8 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != i1
      || GET_MODE (x9) != E_HImode)
    return -1;
  return 0;
}

static int
pattern3 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 0
      || GET_MODE (x5) != E_HImode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!nonimmediate_operand (operands[0], E_SImode))
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!nonimmediate_operand (operands[1], E_SImode))
    return -1;
  x8 = XEXP (x3, 1);
  operands[2] = x8;
  if (!nonmemory_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern4 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_HImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 32
      || GET_MODE (x2) != E_HImode)
    return -1;
  return 0;
}

static int
pattern5 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_HImode
      || !register_operand (operands[0], E_HImode)
      || GET_MODE (x1) != E_HImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  if (!register_operand (operands[1], i1))
    return -1;
  return 0;
}

static int
pattern6 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !nonimmediate_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode
      || !general_operand (operands[1], E_SImode)
      || !general_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

static int
pattern7 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != CLOBBER)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 0
      || GET_MODE (x2) != E_HImode)
    return -1;
  return 0;
}

static int
pattern8 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) != PC)
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != PC)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  return pattern7 (x6); /* [-1, 0] */
}

static int
pattern9 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !general_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern10 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 0
      || GET_MODE (x5) != E_HImode)
    return -1;
  x6 = XVECEXP (x1, 0, 2);
  x7 = XEXP (x6, 0);
  if (REGNO (x7) != 2
      || !nonimmediate_operand (operands[0], E_SImode))
    return -1;
  x8 = XEXP (x3, 0);
  operands[1] = x8;
  if (!general_operand (operands[1], E_SImode))
    return -1;
  x9 = XEXP (x3, 1);
  operands[2] = x9;
  if (!general_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

static int
pattern11 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !general_operand (operands[1], i1)
      || !general_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern12 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], i1))
    return -1;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  if (!register_operand (operands[2], i1))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[3] = x7;
  if (!register_operand (operands[3], i1))
    return -1;
  x8 = XEXP (x6, 1);
  x9 = XEXP (x8, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  x10 = XEXP (x8, 1);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  return 0;
}

static int
pattern13 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  if (!immediate_operand (operands[1], E_VOIDmode))
    return -1;
  x3 = XEXP (x1, 0);
  if (!rtx_equal_p (x3, operands[0]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 1
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x4, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  return 0;
}

static int
pattern14 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1))
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1
      || !register_operand (operands[1], i1)
      || !register_operand (operands[2], i1)
      || !register_operand (operands[3], i1))
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) != i1)
    return -1;
  return 0;
}

static int
recog_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (!rl78_cmp_operator_signed (operands[0], E_VOIDmode))
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_CODE (x4) != LABEL_REF)
    return -1;
  x5 = XEXP (x2, 2);
  if (GET_CODE (x5) != PC)
    return -1;
  x6 = XEXP (x3, 0);
  operands[1] = x6;
  x7 = XEXP (x3, 1);
  operands[2] = x7;
  if (nonmemory_operand (operands[2], E_QImode)
      && general_operand (operands[1], E_QImode))
    {
      x8 = XEXP (x4, 0);
      operands[3] = x8;
      if (
#line 355 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
        return 34; /* *cbranchqi4_virt_signed */
    }
  if (!nonmemory_operand (operands[2], E_HImode)
      || !general_operand (operands[1], E_HImode))
    return -1;
  x8 = XEXP (x4, 0);
  operands[3] = x8;
  if (!
#line 379 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
    return -1;
  return 36; /* *cbranchhi4_virt_signed */
}

static int
recog_2 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  x5 = XEXP (x3, 1);
  operands[2] = x5;
  x6 = XEXP (x2, 1);
  switch (GET_CODE (x6))
    {
    case LABEL_REF:
      x7 = XEXP (x2, 2);
      if (GET_CODE (x7) != PC)
        return -1;
      x8 = XEXP (x6, 0);
      operands[3] = x8;
      if (rl78_general_operand (operands[1], E_QImode)
          && rl78_general_operand (operands[2], E_QImode)
          && 
#line 367 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
        return 35; /* *cbranchqi4_virt */
      if (!rl78_general_operand (operands[1], E_HImode)
          || !rl78_general_operand (operands[2], E_HImode)
          || !
#line 391 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
        return -1;
      return 37; /* *cbranchhi4_virt */

    case PC:
      x7 = XEXP (x2, 2);
      if (GET_CODE (x7) != LABEL_REF
          || !general_operand (operands[1], E_HImode)
          || !rl78_general_operand (operands[2], E_HImode))
        return -1;
      x9 = XEXP (x7, 0);
      operands[3] = x9;
      if (!
#line 497 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 72; /* cbranchhi4_real_inverted */

    default:
      return -1;
    }
}

static int
recog_3 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  if (rl78_cmp_operator_real (operands[0], E_VOIDmode))
    {
      res = recog_2 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != AND)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 1
      || GET_MODE (x5) != E_QImode)
    return -1;
  x6 = XEXP (x3, 1);
  if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x7 = XEXP (x2, 1);
  if (GET_CODE (x7) != LABEL_REF)
    return -1;
  x8 = XEXP (x2, 2);
  if (GET_CODE (x8) != PC)
    return -1;
  x9 = XEXP (x4, 1);
  operands[0] = x9;
  if (!immediate_operand (operands[0], E_VOIDmode))
    return -1;
  x10 = XEXP (x7, 0);
  operands[1] = x10;
  switch (GET_CODE (x3))
    {
    case EQ:
      return 77; /* bf */

    case NE:
      return 78; /* bt */

    default:
      return -1;
    }
}

static int
recog_4 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != LABEL_REF)
    return -1;
  x4 = XEXP (x2, 2);
  if (GET_CODE (x4) != PC)
    return -1;
  x5 = XEXP (x2, 0);
  operands[0] = x5;
  if (!rl78_cmp_operator (operands[0], E_VOIDmode))
    return -1;
  x6 = XEXP (x5, 0);
  operands[1] = x6;
  if (!general_operand (operands[1], E_SImode))
    return -1;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  if (!nonmemory_operand (operands[2], E_SImode))
    return -1;
  x8 = XEXP (x3, 0);
  operands[3] = x8;
  if (!
#line 405 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
    return -1;
  *pnum_clobbers = 1;
  return 38; /* *cbranchsi4_virt */
}

static int
recog_5 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case REG:
    case SUBREG:
    case MEM:
      operands[0] = x2;
      x3 = XEXP (x1, 1);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (nonimmediate_operand (operands[0], E_SImode)
              && general_operand (operands[1], E_SImode))
            return 2; /* movsi */
          break;

        case E_SFmode:
          if (nonimmediate_operand (operands[0], E_SFmode)
              && general_operand (operands[1], E_SFmode))
            return 3; /* movsf */
          break;

        case E_QImode:
          if (rl78_near_mem_operand (operands[0], E_QImode)
              && rl78_near_mem_operand (operands[1], E_VOIDmode)
              && 
#line 39 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 4; /* *movqi_virt_mm */
          if (nonimmediate_operand (operands[0], E_QImode)
              && general_operand (operands[1], E_VOIDmode)
              && 
#line 47 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 5; /* *movqi_virt */
          break;

        case E_HImode:
          if (rl78_near_mem_operand (operands[0], E_HImode)
              && rl78_near_mem_operand (operands[1], E_HImode)
              && 
#line 55 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 6; /* *movhi_virt_mm */
          if (nonimmediate_operand (operands[0], E_HImode)
              && general_operand (operands[1], E_HImode)
              && 
#line 63 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 7; /* *movhi_virt */
          if (rl78_nonimmediate_operand (operands[0], E_HImode)
              && rl78_general_operand (operands[1], E_HImode)
              && 
#line 80 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return 44; /* *movhi_real */
          break;

        default:
          break;
        }
      if (GET_CODE (x2) == REG
          && REGNO (x2) == 35
          && GET_MODE (x2) == E_QImode)
        {
          operands[0] = x3;
          if (register_operand (operands[0], E_QImode))
            return 40; /* movqi_to_es */
        }
      break;

    case PC:
      x3 = XEXP (x1, 1);
      operands[0] = x3;
      if (nonimmediate_operand (operands[0], E_HImode))
        {
          if (
#line 326 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 31; /* *indirect_jump_virt */
          if (
#line 332 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return 64; /* *indirect_jump_real */
        }
      break;

    default:
      break;
    }
  x3 = XEXP (x1, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      if (GET_CODE (x3) == REG
          && REGNO (x3) == 35
          && GET_MODE (x3) == E_QImode)
        {
          operands[0] = x2;
          if (register_operand (operands[0], E_QImode))
            return 41; /* movqi_from_es */
        }
      operands[0] = x3;
      if (register_operand (operands[0], E_QImode)
          && GET_CODE (x2) == REG
          && REGNO (x2) == 36
          && GET_MODE (x2) == E_QImode)
        return 42; /* movqi_cs */
      break;

    case LABEL_REF:
      if (GET_CODE (x2) == PC)
        {
          x4 = XEXP (x3, 0);
          operands[0] = x4;
          return 65; /* jump */
        }
      break;

    default:
      break;
    }
  operands[1] = x3;
  if (!rl78_general_operand (operands[1], E_VOIDmode))
    return -1;
  operands[0] = x2;
  if (!rl78_nonimmediate_operand (operands[0], E_QImode)
      || !
#line 64 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
    return -1;
  return 43; /* *movqi_real */
}

static int
recog_6 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      return recog_5 (x1, insn, pnum_clobbers);

    case BSWAP:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!rl78_nonfar_nonimm_operand (operands[0], E_HImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!general_operand (operands[1], E_HImode))
        return -1;
      if (
#line 71 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
        return 8; /* *bswaphi2_virt */
      if (!
#line 96 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 45; /* *bswaphi2_real */

    case ZERO_EXTEND:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!general_operand (operands[1], E_QImode))
        return -1;
      if (rl78_nonfar_nonimm_operand (operands[0], E_HImode)
          && 
#line 81 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 2)))
        return 9; /* *zero_extendqihi2_virt */
      if (!nonimmediate_operand (operands[0], E_HImode)
          || !
#line 107 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 46; /* *zero_extendqihi2_real */

    case SIGN_EXTEND:
      if (GET_MODE (x2) != E_HImode)
        return -1;
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!general_operand (operands[1], E_QImode))
        return -1;
      if (rl78_nonfar_nonimm_operand (operands[0], E_HImode)
          && 
#line 89 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 2)))
        return 10; /* *extendqihi2_virt */
      if (!nonimmediate_operand (operands[0], E_HImode)
          || !
#line 116 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 47; /* *extendqihi2_real */

    case PLUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[1] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_QImode:
              if (GET_MODE (x2) != E_QImode)
                return -1;
              if (rl78_incdec_memory_operand (operands[0], E_QImode)
                  && rl78_incdec_memory_operand (operands[1], E_QImode)
                  && rl78_1_2_operand (operands[2], E_QImode)
                  && 
#line 101 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
                return 11; /* *incqi3_virt */
              if (!rl78_nonimmediate_operand (operands[0], E_QImode)
                  || !rl78_general_operand (operands[1], E_QImode)
                  || !rl78_general_operand (operands[2], E_QImode))
                return -1;
              if (
#line 110 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 3)))
                return 13; /* *addqi3_virt */
              if (!
#line 129 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                return -1;
              return 48; /* *addqi3_real */

            case E_HImode:
              if (GET_MODE (x2) != E_HImode)
                return -1;
              if (rl78_incdec_memory_operand (operands[0], E_HImode)
                  && rl78_incdec_memory_operand (operands[1], E_HImode)
                  && rl78_1_2_operand (operands[2], E_HImode)
                  && 
#line 101 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
                return 12; /* *inchi3_virt */
              if (!rl78_nonimmediate_operand (operands[0], E_HImode)
                  || !rl78_general_operand (operands[1], E_HImode))
                return -1;
              if (rl78_general_operand (operands[2], E_HImode)
                  && 
#line 110 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 3)))
                return 14; /* *addhi3_virt */
              if (!
#line 144 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                return -1;
              return 49; /* *addhi3_real */

            case E_SImode:
              if (pattern6 (x2, pnum_clobbers) != 0)
                return -1;
              if (
#line 244 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_virt_insns_ok ()))
                {
                  *pnum_clobbers = 2;
                  return 89; /* addsi3_internal_virt */
                }
              if (!
#line 256 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_real_insns_ok ()))
                return -1;
              *pnum_clobbers = 2;
              return 90; /* addsi3_internal_real */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pattern5 (x2, E_QImode) != 0
              || !register_operand (operands[2], E_HImode)
              || !
#line 162 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 50; /* *addqihi3a_real */

        default:
          return -1;
        }

    case MINUS:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (GET_MODE (x2) != E_QImode
              || !rl78_general_operand (operands[2], E_QImode))
            return -1;
          if (rl78_nonimmediate_operand (operands[0], E_QImode)
              && rl78_general_operand (operands[1], E_QImode)
              && 
#line 119 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 3)))
            return 15; /* *subqi3_virt */
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !general_operand (operands[1], E_QImode)
              || !
#line 172 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 51; /* *subqi3_real */

        case E_HImode:
          if (GET_MODE (x2) != E_HImode
              || !rl78_general_operand (operands[2], E_HImode))
            return -1;
          if (rl78_nonimmediate_operand (operands[0], E_HImode)
              && rl78_general_operand (operands[1], E_HImode)
              && 
#line 119 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 3)))
            return 16; /* *subhi3_virt */
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || !
#line 182 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 52; /* *subhi3_real */

        case E_SImode:
          if (pattern6 (x2, pnum_clobbers) != 0)
            return -1;
          if (
#line 288 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_virt_insns_ok ()))
            {
              *pnum_clobbers = 2;
              return 91; /* subsi3_internal_virt */
            }
          if (!
#line 300 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_real_insns_ok ()))
            return -1;
          *pnum_clobbers = 2;
          return 92; /* subsi3_internal_real */

        default:
          return -1;
        }

    case MULT:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[1] = x4;
          x5 = XEXP (x2, 1);
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || GET_MODE (x2) != E_HImode)
                return -1;
              if (rl78_nonfar_operand (operands[1], E_HImode)
                  && rl78_24_operand (operands[2], E_HImode))
                {
                  if (
#line 127 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
                    return 17; /* *umulhi3_shift_virt */
                  if (
#line 191 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                    return 53; /* *umulhi3_shift_real */
                }
              if (pnum_clobbers == NULL
                  || !general_operand (operands[1], E_HImode)
                  || !general_operand (operands[2], E_HImode))
                return -1;
              if (
#line 375 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
                {
                  *pnum_clobbers = 2;
                  return 94; /* mulhi3_g14 */
                }
              if (!
#line 391 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G13))
                return -1;
              *pnum_clobbers = 1;
              return 95; /* mulhi3_g13 */

            case E_QImode:
              if (pattern9 (x2, pnum_clobbers, E_QImode) != 0)
                return -1;
              *pnum_clobbers = 1;
              return 93; /* *mulqi3_rl78 */

            case E_SImode:
              if (pattern9 (x2, pnum_clobbers, E_SImode) != 0)
                return -1;
              if (
#line 417 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
                {
                  *pnum_clobbers = 2;
                  return 96; /* mulsi3_g14 */
                }
              if (!
#line 449 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G13))
                return -1;
              *pnum_clobbers = 2;
              return 97; /* mulsi3_g13 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x4) != E_HImode)
            return -1;
          x5 = XEXP (x2, 1);
          if (GET_CODE (x5) != ZERO_EXTEND
              || GET_MODE (x5) != E_HImode
              || GET_MODE (x2) != E_HImode)
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          if (rl78_nonfar_operand (operands[1], E_QImode)
              && register_operand (operands[0], E_HImode))
            {
              x7 = XEXP (x5, 0);
              operands[2] = x7;
              if (general_operand (operands[2], E_QImode)
                  && 
#line 136 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
                return 18; /* *umulqihi3_virt */
            }
          if (!general_operand (operands[1], E_QImode)
              || !nonimmediate_operand (operands[0], E_HImode))
            return -1;
          x7 = XEXP (x5, 0);
          operands[2] = x7;
          if (!general_operand (operands[2], E_QImode)
              || !
#line 201 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 54; /* *umulqihi3_real */

        default:
          return -1;
        }

    case AND:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[1] = x4;
          if (!rl78_general_operand (operands[1], E_QImode)
              || !rl78_nonimmediate_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode
              || !rl78_general_operand (operands[2], E_QImode))
            return -1;
          if (
#line 146 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 3)))
            return 19; /* *andqi3_virt */
          if (!
#line 210 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 55; /* *andqi3_real */

        case NEG:
          if (pattern5 (x2, E_HImode) != 0
              || !immediate_operand (operands[2], E_HImode))
            return -1;
          if (
#line 447 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 39; /* *negandhi3_virt */
          if (!
#line 687 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 79; /* *negandhi3_real */

        default:
          return -1;
        }

    case IOR:
      if (pattern0 (x1, E_QImode) != 0)
        return -1;
      if (
#line 155 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 3)))
        return 20; /* *iorqi3_virt */
      if (!
#line 224 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 56; /* *iorqi3_real */

    case XOR:
      if (pattern0 (x1, E_VOIDmode) != 0)
        return -1;
      if (
#line 164 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok () && rl78_one_far_p (operands, 3)))
        return 21; /* *xorqi3_virt */
      if (!
#line 238 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 57; /* *xorqi3_real */

    case ASHIFT:
      switch (pattern1 (x1, pnum_clobbers))
        {
        case 0:
          if (rl78_nonfar_nonimm_operand (operands[0], E_QImode)
              && rl78_nonfar_operand (operands[1], E_QImode)
              && 
#line 175 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 22; /* *ashlqi3_virt */
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !general_operand (operands[1], E_QImode)
              || !
#line 250 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 58; /* *ashlqi3_real */

        case 1:
          if (rl78_nonfar_nonimm_operand (operands[0], E_HImode)
              && rl78_nonfar_operand (operands[1], E_HImode)
              && 
#line 175 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 23; /* *ashlhi3_virt */
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || !
#line 263 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 59; /* *ashlhi3_real */

        case 2:
          *pnum_clobbers = 1;
          return 30; /* ashlsi3_virt */

        default:
          return -1;
        }

    case ASHIFTRT:
      switch (pattern1 (x1, pnum_clobbers))
        {
        case 0:
          if (rl78_nonfar_nonimm_operand (operands[0], E_QImode)
              && rl78_nonfar_operand (operands[1], E_QImode)
              && 
#line 184 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 24; /* *ashrqi3_virt */
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !general_operand (operands[1], E_QImode)
              || !
#line 278 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 60; /* *ashrqi3_real */

        case 1:
          if (rl78_nonfar_nonimm_operand (operands[0], E_HImode)
              && rl78_nonfar_operand (operands[1], E_HImode)
              && 
#line 184 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 25; /* *ashrhi3_virt */
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || !
#line 291 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 61; /* *ashrhi3_real */

        case 2:
          *pnum_clobbers = 1;
          return 28; /* ashrsi3_virt */

        default:
          return -1;
        }

    case LSHIFTRT:
      switch (pattern1 (x1, pnum_clobbers))
        {
        case 0:
          if (rl78_nonfar_nonimm_operand (operands[0], E_QImode)
              && rl78_nonfar_operand (operands[1], E_QImode)
              && 
#line 193 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 26; /* *lshrqi3_virt */
          if (!nonimmediate_operand (operands[0], E_QImode)
              || !general_operand (operands[1], E_QImode)
              || !
#line 306 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 62; /* *lshrqi3_real */

        case 1:
          if (rl78_nonfar_nonimm_operand (operands[0], E_HImode)
              && rl78_nonfar_operand (operands[1], E_HImode)
              && 
#line 193 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
            return 27; /* *lshrhi3_virt */
          if (!nonimmediate_operand (operands[0], E_HImode)
              || !general_operand (operands[1], E_HImode)
              || !
#line 319 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
            return -1;
          return 63; /* *lshrhi3_real */

        case 2:
          *pnum_clobbers = 1;
          return 29; /* lshrsi3_virt */

        default:
          return -1;
        }

    case CALL:
      x3 = XEXP (x1, 0);
      operands[0] = x3;
      if (!register_operand (operands[0], E_VOIDmode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[1] = x4;
      if (!memory_operand (operands[1], E_HImode))
        return -1;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      if (
#line 343 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
        return 33; /* *call_value_virt */
      if (!
#line 377 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 67; /* *call_value_real */

    case IF_THEN_ELSE:
      x4 = XEXP (x2, 0);
      switch (GET_CODE (x4))
        {
        case NE:
        case EQ:
        case GE:
        case GT:
        case LE:
        case LT:
        case GEU:
        case GTU:
        case LEU:
        case LTU:
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != PC)
            return -1;
          switch (GET_CODE (x4))
            {
            case GE:
            case GT:
            case LE:
            case LT:
              res = recog_1 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
              break;

            case NE:
            case EQ:
            case GEU:
            case GTU:
            case LEU:
            case LTU:
              res = recog_3 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
              break;

            default:
              break;
            }
          if (pnum_clobbers != NULL)
            {
              res = recog_4 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
            }
          x5 = XEXP (x2, 1);
          if (GET_CODE (x5) != LABEL_REF)
            return -1;
          x8 = XEXP (x2, 2);
          if (GET_CODE (x8) != PC)
            return -1;
          switch (GET_CODE (x4))
            {
            case GE:
            case GT:
            case LE:
            case LT:
              operands[0] = x4;
              if (rl78_cmp_operator_signed (operands[0], E_VOIDmode))
                {
                  x6 = XEXP (x4, 0);
                  operands[1] = x6;
                  x9 = XEXP (x4, 1);
                  operands[2] = x9;
                  if (general_operand (operands[2], E_QImode)
                      && general_operand (operands[1], E_QImode))
                    {
                      x7 = XEXP (x5, 0);
                      operands[3] = x7;
                      if (
#line 410 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                        return 68; /* *cbranchqi4_real_signed */
                    }
                  if (general_operand (operands[2], E_HImode)
                      && general_operand (operands[1], E_HImode))
                    {
                      x7 = XEXP (x5, 0);
                      operands[3] = x7;
                      if (
#line 455 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                        return 70; /* *cbranchhi4_real_signed */
                    }
                }
              if (pnum_clobbers == NULL)
                return -1;
              x9 = XEXP (x4, 1);
              if (x9 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                {
                  x6 = XEXP (x4, 0);
                  operands[0] = x6;
                  if (rl78_general_operand (operands[0], E_SImode))
                    {
                      x7 = XEXP (x5, 0);
                      operands[1] = x7;
                      switch (GET_CODE (x4))
                        {
                        case LT:
                          if (
#line 515 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                            {
                              *pnum_clobbers = 1;
                              return 73; /* *cbranchsi4_real_lt */
                            }
                          break;

                        case GE:
                          if (
#line 529 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                            {
                              *pnum_clobbers = 1;
                              return 74; /* *cbranchsi4_real_ge */
                            }
                          break;

                        default:
                          break;
                        }
                    }
                }
              operands[0] = x4;
              if (!rl78_cmp_operator_signed (operands[0], E_VOIDmode))
                return -1;
              x6 = XEXP (x4, 0);
              operands[1] = x6;
              if (!general_operand (operands[1], E_SImode))
                return -1;
              operands[2] = x9;
              if (!nonmemory_operand (operands[2], E_SImode))
                return -1;
              x7 = XEXP (x5, 0);
              operands[3] = x7;
              if (!
#line 544 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                return -1;
              *pnum_clobbers = 1;
              return 75; /* *cbranchsi4_real_signed */

            case NE:
            case EQ:
            case GEU:
            case GTU:
            case LEU:
            case LTU:
              operands[0] = x4;
              if (!rl78_cmp_operator_real (operands[0], E_VOIDmode))
                return -1;
              x6 = XEXP (x4, 0);
              operands[1] = x6;
              x9 = XEXP (x4, 1);
              operands[2] = x9;
              if (rl78_general_operand (operands[2], E_QImode)
                  && rl78_general_operand (operands[1], E_QImode))
                {
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  if (
#line 434 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                    return 69; /* *cbranchqi4_real */
                }
              if (rl78_general_operand (operands[2], E_HImode)
                  && general_operand (operands[1], E_HImode))
                {
                  x7 = XEXP (x5, 0);
                  operands[3] = x7;
                  if (
#line 471 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                    return 71; /* cbranchhi4_real */
                }
              if (pnum_clobbers == NULL
                  || !general_operand (operands[2], E_SImode)
                  || !general_operand (operands[1], E_SImode))
                return -1;
              x7 = XEXP (x5, 0);
              operands[3] = x7;
              if (!
#line 563 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                return -1;
              *pnum_clobbers = 1;
              return 76; /* *cbranchsi4_real */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      switch (XVECLEN (x2, 0))
        {
        case 2:
          if (XINT (x2, 1) != 20)
            return -1;
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          if (!register_operand (operands[0], E_VOIDmode))
            return -1;
          x10 = XVECEXP (x2, 0, 0);
          operands[1] = x10;
          if (!register_operand (operands[1], E_VOIDmode))
            return -1;
          x11 = XVECEXP (x2, 0, 1);
          operands[2] = x11;
          if (!register_operand (operands[2], E_VOIDmode))
            return -1;
          return 86; /* trampoline_init */

        case 4:
          if (XINT (x2, 1) != 22)
            return -1;
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != PC)
            return -1;
          x10 = XVECEXP (x2, 0, 0);
          operands[0] = x10;
          x11 = XVECEXP (x2, 0, 1);
          operands[1] = x11;
          x12 = XVECEXP (x2, 0, 2);
          operands[2] = x12;
          x13 = XVECEXP (x2, 0, 3);
          operands[3] = x13;
          return 88; /* nonlocal_goto_insn */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

int
recog (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case CONST_INT:
      if (XWINT (x1, 0) != 0L)
        return -1;
      return 1; /* nop */

    case SET:
      return recog_6 (x1, insn, pnum_clobbers);

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          x2 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x2) != SET)
            return -1;
          x3 = XEXP (x2, 1);
          switch (GET_CODE (x3))
            {
            case ASHIFTRT:
              if (pattern3 (x1) != 0)
                return -1;
              return 28; /* ashrsi3_virt */

            case LSHIFTRT:
              if (pattern3 (x1) != 0)
                return -1;
              return 29; /* lshrsi3_virt */

            case ASHIFT:
              if (pattern3 (x1) != 0)
                return -1;
              return 30; /* ashlsi3_virt */

            case IF_THEN_ELSE:
              x4 = XEXP (x3, 0);
              switch (GET_CODE (x4))
                {
                case NE:
                case EQ:
                case GE:
                case GT:
                case LE:
                case LT:
                case GEU:
                case GTU:
                case LEU:
                case LTU:
                  operands[0] = x4;
                  if (rl78_cmp_operator (operands[0], E_VOIDmode))
                    {
                      x5 = XEXP (x3, 1);
                      if (GET_CODE (x5) == LABEL_REF
                          && pattern8 (x1) == 0)
                        {
                          x6 = XEXP (x4, 0);
                          operands[1] = x6;
                          if (general_operand (operands[1], E_SImode))
                            {
                              x7 = XEXP (x4, 1);
                              operands[2] = x7;
                              if (nonmemory_operand (operands[2], E_SImode))
                                {
                                  x8 = XEXP (x5, 0);
                                  operands[3] = x8;
                                  if (
#line 405 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
                                    return 38; /* *cbranchsi4_virt */
                                }
                            }
                        }
                    }
                  x5 = XEXP (x3, 1);
                  if (GET_CODE (x5) != LABEL_REF
                      || pattern8 (x1) != 0)
                    return -1;
                  switch (GET_CODE (x4))
                    {
                    case GE:
                    case GT:
                    case LE:
                    case LT:
                      x7 = XEXP (x4, 1);
                      if (x7 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                        {
                          x6 = XEXP (x4, 0);
                          operands[0] = x6;
                          if (rl78_general_operand (operands[0], E_SImode))
                            {
                              x8 = XEXP (x5, 0);
                              operands[1] = x8;
                              switch (GET_CODE (x4))
                                {
                                case LT:
                                  if (
#line 515 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                                    return 73; /* *cbranchsi4_real_lt */
                                  break;

                                case GE:
                                  if (
#line 529 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                                    return 74; /* *cbranchsi4_real_ge */
                                  break;

                                default:
                                  break;
                                }
                            }
                        }
                      operands[0] = x4;
                      if (!rl78_cmp_operator_signed (operands[0], E_VOIDmode))
                        return -1;
                      x6 = XEXP (x4, 0);
                      operands[1] = x6;
                      if (!general_operand (operands[1], E_SImode))
                        return -1;
                      operands[2] = x7;
                      if (!nonmemory_operand (operands[2], E_SImode))
                        return -1;
                      x8 = XEXP (x5, 0);
                      operands[3] = x8;
                      if (!
#line 544 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                        return -1;
                      return 75; /* *cbranchsi4_real_signed */

                    case NE:
                    case EQ:
                    case GEU:
                    case GTU:
                    case LEU:
                    case LTU:
                      operands[0] = x4;
                      if (!rl78_cmp_operator_real (operands[0], E_VOIDmode))
                        return -1;
                      x6 = XEXP (x4, 0);
                      operands[1] = x6;
                      if (!general_operand (operands[1], E_SImode))
                        return -1;
                      x7 = XEXP (x4, 1);
                      operands[2] = x7;
                      if (!general_operand (operands[2], E_SImode))
                        return -1;
                      x8 = XEXP (x5, 0);
                      operands[3] = x8;
                      if (!
#line 563 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
                        return -1;
                      return 76; /* *cbranchsi4_real */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case PLUS:
              if (pattern4 (x3) != 0)
                return -1;
              x5 = XEXP (x3, 1);
              if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + -2])
                return -1;
              x9 = XEXP (x2, 0);
              if (GET_CODE (x9) != REG
                  || REGNO (x9) != 32
                  || GET_MODE (x9) != E_HImode)
                return -1;
              x10 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x10) != SET)
                return -1;
              x11 = XEXP (x10, 0);
              if (GET_CODE (x11) != MEM
                  || GET_MODE (x11) != E_HImode)
                return -1;
              x12 = XEXP (x11, 0);
              if (GET_CODE (x12) != REG
                  || REGNO (x12) != 32
                  || GET_MODE (x12) != E_HImode)
                return -1;
              x13 = XEXP (x10, 1);
              operands[0] = x13;
              if (!register_operand (operands[0], E_HImode))
                return -1;
              return 83; /* push */

            case MEM:
              if (pattern4 (x3) != 0)
                return -1;
              x10 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x10) != SET)
                return -1;
              x13 = XEXP (x10, 1);
              if (GET_CODE (x13) != PLUS
                  || GET_MODE (x13) != E_HImode)
                return -1;
              x14 = XEXP (x13, 0);
              if (GET_CODE (x14) != REG
                  || REGNO (x14) != 32
                  || GET_MODE (x14) != E_HImode)
                return -1;
              x15 = XEXP (x13, 1);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 2])
                return -1;
              x11 = XEXP (x10, 0);
              if (GET_CODE (x11) != REG
                  || REGNO (x11) != 32
                  || GET_MODE (x11) != E_HImode)
                return -1;
              x9 = XEXP (x2, 0);
              operands[0] = x9;
              if (!register_operand (operands[0], E_HImode))
                return -1;
              return 84; /* pop */

            case MULT:
              x10 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x10) != CLOBBER)
                return -1;
              x11 = XEXP (x10, 0);
              if (GET_CODE (x11) != REG
                  || REGNO (x11) != 0
                  || GET_MODE (x11) != E_HImode)
                return -1;
              x9 = XEXP (x2, 0);
              operands[0] = x9;
              x4 = XEXP (x3, 0);
              operands[1] = x4;
              x5 = XEXP (x3, 1);
              operands[2] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_QImode:
                  if (pattern11 (x3, E_QImode) != 0)
                    return -1;
                  return 93; /* *mulqi3_rl78 */

                case E_HImode:
                  if (pattern11 (x3, E_HImode) != 0
                      || !
#line 391 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G13))
                    return -1;
                  return 95; /* mulhi3_g13 */

                default:
                  return -1;
                }

            case UDIV:
              if (pnum_clobbers == NULL)
                return -1;
              x10 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x10) != SET)
                return -1;
              x13 = XEXP (x10, 1);
              if (GET_CODE (x13) != UMOD)
                return -1;
              x9 = XEXP (x2, 0);
              operands[0] = x9;
              x4 = XEXP (x3, 0);
              operands[1] = x4;
              x5 = XEXP (x3, 1);
              operands[2] = x5;
              x11 = XEXP (x10, 0);
              operands[3] = x11;
              x14 = XEXP (x13, 0);
              if (!rtx_equal_p (x14, operands[1]))
                return -1;
              x15 = XEXP (x13, 1);
              if (!rtx_equal_p (x15, operands[2]))
                return -1;
              switch (GET_MODE (operands[0]))
                {
                case E_HImode:
                  if (pattern14 (x1, E_HImode) != 0
                      || !
#line 512 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
                    return -1;
                  *pnum_clobbers = 2;
                  return 98; /* *udivmodhi4_g14 */

                case E_SImode:
                  if (pattern14 (x1, E_SImode) != 0)
                    return -1;
                  if (
#line 581 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
                    {
                      *pnum_clobbers = 4;
                      return 99; /* udivmodsi4_g14 */
                    }
                  if (!
#line 648 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G13))
                    return -1;
                  *pnum_clobbers = 1;
                  return 100; /* udivmodsi4_g13 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case 3:
          x2 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x2) != SET)
            return -1;
          x16 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x16) != CLOBBER)
            return -1;
          x17 = XEXP (x16, 0);
          if (GET_CODE (x17) != REG
              || GET_MODE (x17) != E_HImode)
            return -1;
          x9 = XEXP (x2, 0);
          operands[0] = x9;
          x3 = XEXP (x2, 1);
          switch (GET_CODE (x3))
            {
            case PLUS:
              if (pattern10 (x1) != 0)
                return -1;
              if (
#line 244 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_virt_insns_ok ()))
                return 89; /* addsi3_internal_virt */
              if (!
#line 256 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_real_insns_ok ()))
                return -1;
              return 90; /* addsi3_internal_real */

            case MINUS:
              if (pattern10 (x1) != 0)
                return -1;
              if (
#line 288 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_virt_insns_ok ()))
                return 91; /* subsi3_internal_virt */
              if (!
#line 300 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(rl78_real_insns_ok ()))
                return -1;
              return 92; /* subsi3_internal_real */

            case MULT:
              x10 = XVECEXP (x1, 0, 1);
              if (pattern7 (x10) != 0
                  || REGNO (x17) != 2)
                return -1;
              x4 = XEXP (x3, 0);
              operands[1] = x4;
              x5 = XEXP (x3, 1);
              operands[2] = x5;
              switch (GET_MODE (operands[0]))
                {
                case E_HImode:
                  if (pattern11 (x3, E_HImode) != 0
                      || !
#line 375 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
                    return -1;
                  return 94; /* mulhi3_g14 */

                case E_SImode:
                  if (pattern11 (x3, E_SImode) != 0)
                    return -1;
                  if (
#line 417 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
                    return 96; /* mulsi3_g14 */
                  if (!
#line 449 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G13))
                    return -1;
                  return 97; /* mulsi3_g13 */

                default:
                  return -1;
                }

            case UDIV:
              if (GET_MODE (x3) != E_SImode)
                return -1;
              x10 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x10) != SET)
                return -1;
              x13 = XEXP (x10, 1);
              if (GET_CODE (x13) != UMOD
                  || GET_MODE (x13) != E_SImode
                  || REGNO (x17) != 0
                  || pattern12 (x1, E_SImode) != 0
                  || !
#line 648 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G13))
                return -1;
              return 100; /* udivmodsi4_g13 */

            default:
              return -1;
            }

        case 4:
          if (pattern2 (x1, 4, E_HImode) != 0)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          x9 = XEXP (x2, 0);
          operands[0] = x9;
          if (pattern12 (x1, E_HImode) != 0
              || !
#line 512 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
            return -1;
          return 98; /* *udivmodhi4_g14 */

        case 6:
          if (pattern2 (x1, 2, E_SImode) != 0)
            return -1;
          x18 = XVECEXP (x1, 0, 4);
          if (GET_CODE (x18) != CLOBBER)
            return -1;
          x19 = XEXP (x18, 0);
          if (GET_CODE (x19) != REG
              || REGNO (x19) != 4
              || GET_MODE (x19) != E_HImode)
            return -1;
          x20 = XVECEXP (x1, 0, 5);
          if (GET_CODE (x20) != CLOBBER)
            return -1;
          x21 = XEXP (x20, 0);
          if (GET_CODE (x21) != REG
              || REGNO (x21) != 6
              || GET_MODE (x21) != E_HImode)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          x9 = XEXP (x2, 0);
          operands[0] = x9;
          if (pattern12 (x1, E_SImode) != 0
              || !
#line 581 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(RL78_MUL_G14))
            return -1;
          return 99; /* udivmodsi4_g14 */

        default:
          return -1;
        }

    case CALL:
      x22 = XEXP (x1, 0);
      operands[0] = x22;
      if (!memory_operand (operands[0], E_HImode))
        return -1;
      x23 = XEXP (x1, 1);
      operands[1] = x23;
      if (
#line 334 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_virt_insns_ok ()))
        return 32; /* *call_virt */
      if (!
#line 347 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(rl78_real_insns_ok ()))
        return -1;
      return 66; /* *call_real */

    case RETURN:
      return 80; /* rl78_return */

    case UNSPEC_VOLATILE:
      if (XVECLEN (x1, 0) != 1)
        return -1;
      switch (XINT (x1, 1))
        {
        case 2:
          x2 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x2) != RETURN)
            return -1;
          return 81; /* interrupt_return */

        case 3:
          x2 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x2) != RETURN)
            return -1;
          return 82; /* brk_interrupt_return */

        case 10:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!immediate_operand (operands[0], E_VOIDmode)
              || !
#line 146 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
(!TARGET_G10))
            return -1;
          return 85; /* sel_rb */

        case 21:
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 87; /* trampoline_uninit */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

rtx_insn *
split_insns (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  if (GET_CODE (x1) != SET)
    return NULL;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  operands[1] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || !general_operand (operands[1], E_SImode))
        return NULL;
      return gen_split_1 (insn, operands);

    case E_SFmode:
      if (!nonimmediate_operand (operands[0], E_SFmode)
          || !general_operand (operands[1], E_SFmode))
        return NULL;
      return gen_split_2 (insn, operands);

    default:
      return NULL;
    }
}

static rtx_insn *
peephole2_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x2) == SET)
    {
      x3 = XEXP (x2, 0);
      operands[2] = x3;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      if (
#line 417 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_peep_movhi_p (operands)))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_1 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
    }
  if (!register_operand (operands[0], E_HImode)
      || !register_operand (operands[1], E_HImode))
    return NULL;
  switch (GET_CODE (x2))
    {
    case CALL:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_HImode)
        return NULL;
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x5 = XEXP (x3, 0);
      if (!rtx_equal_p (x5, operands[0])
          || !
#line 367 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (2, REGNO (operands[0]))
   && REGNO (operands[1]) < 8))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_3 (insn, operands);

    case SET:
      x3 = XEXP (x2, 0);
      operands[2] = x3;
      if (!register_operand (operands[2], E_HImode))
        return NULL;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case CALL:
          x6 = XEXP (x4, 0);
          if (GET_CODE (x6) != MEM
              || GET_MODE (x6) != E_HImode)
            return NULL;
          x7 = XEXP (x4, 1);
          if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          x8 = XEXP (x6, 0);
          if (!rtx_equal_p (x8, operands[0])
              || !
#line 397 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (2, REGNO (operands[0]))
   && REGNO (operands[1]) < 8))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_4 (insn, operands);

        case REG:
        case SUBREG:
          if (!rtx_equal_p (x4, operands[0])
              || !
#line 652 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (2, REGNO (operands[0]))
   && (REGNO (operands[1]) < 8 || REGNO (operands[2]) < 8)))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_8 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

static rtx_insn *
peephole2_2 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  res = peephole2_1 (x1, insn, pmatch_len_);
  if (res != NULL_RTX)
    return res;
  if (peep2_current_count < 3
      || peep2_current_count < 4
      || GET_CODE (x2) != REG
      || REGNO (x2) != 1
      || GET_MODE (x2) != E_QImode)
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) != SET)
    return NULL;
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 1
      || GET_MODE (x4) != E_QImode)
    return NULL;
  x5 = XEXP (x3, 0);
  operands[0] = x5;
  x6 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x6) != SET)
    return NULL;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 1
      || GET_MODE (x7) != E_QImode)
    return NULL;
  x8 = XEXP (x6, 1);
  operands[3] = x8;
  x9 = PATTERN (peep2_next_insn (3));
  if (GET_CODE (x9) != SET)
    return NULL;
  x10 = XEXP (x9, 1);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 1
      || GET_MODE (x10) != E_QImode)
    return NULL;
  x11 = XEXP (x9, 0);
  operands[2] = x11;
  if (!
#line 433 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md"
(rl78_peep_movhi_p (operands)))
    return NULL;
  *pmatch_len_ = 3;
  return gen_peephole2_2 (insn, operands);
}

rtx_insn *
peephole2_insns (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  if (peep2_current_count < 2
      || GET_CODE (x1) != SET)
    return NULL;
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  res = peephole2_2 (x1, insn, pmatch_len_);
  if (res != NULL_RTX)
    return res;
  if (GET_CODE (x2) != REG)
    return NULL;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  x4 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x4) != SET)
    return NULL;
  switch (REGNO (x2))
    {
    case 0:
      if (GET_MODE (x2) != E_HImode
          || !rl78_stack_based_mem (operands[0], E_HImode))
        return NULL;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 0
          || GET_MODE (x5) != E_HImode)
        return NULL;
      x6 = XEXP (x4, 1);
      if (!rtx_equal_p (x6, operands[0]))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_5 (insn, operands);

    case 1:
      if (peep2_current_count < 3
          || GET_MODE (x2) != E_QImode
          || !register_operand (operands[0], E_QImode))
        return NULL;
      x6 = XEXP (x4, 1);
      if (GET_MODE (x6) != E_QImode)
        return NULL;
      x5 = XEXP (x4, 0);
      if (!rtx_equal_p (x5, operands[0]))
        return NULL;
      x7 = PATTERN (peep2_next_insn (2));
      if (GET_CODE (x7) != SET)
        return NULL;
      switch (GET_CODE (x6))
        {
        case AND:
          x8 = XEXP (x6, 1);
          operands[1] = x8;
          if (!immediate_operand (operands[1], E_VOIDmode))
            return NULL;
          x9 = XEXP (x6, 0);
          if (!rtx_equal_p (x9, operands[0]))
            return NULL;
          x10 = XEXP (x7, 1);
          switch (GET_CODE (x10))
            {
            case IF_THEN_ELSE:
              x11 = XEXP (x10, 1);
              if (GET_CODE (x11) != LABEL_REF)
                return NULL;
              x12 = XEXP (x10, 2);
              if (GET_CODE (x12) != PC)
                return NULL;
              x13 = XEXP (x7, 0);
              if (GET_CODE (x13) != PC)
                return NULL;
              x14 = XEXP (x11, 0);
              operands[2] = x14;
              x15 = XEXP (x10, 0);
              switch (GET_CODE (x15))
                {
                case EQ:
                  x16 = XEXP (x15, 1);
                  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    return NULL;
                  x17 = XEXP (x15, 0);
                  if (!rtx_equal_p (x17, operands[0])
                      || !
#line 628 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (3, REGNO (operands[0]))
   && exact_log2 (INTVAL (operands[1])) >= 0))
                    return NULL;
                  *pmatch_len_ = 2;
                  return gen_peephole2_6 (insn, operands);

                case NE:
                  x16 = XEXP (x15, 1);
                  if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    return NULL;
                  x17 = XEXP (x15, 0);
                  if (!rtx_equal_p (x17, operands[0])
                      || !
#line 641 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (3, REGNO (operands[0]))
   && exact_log2 (INTVAL (operands[1])) >= 0))
                    return NULL;
                  *pmatch_len_ = 2;
                  return gen_peephole2_7 (insn, operands);

                default:
                  return NULL;
                }

            case REG:
            case SUBREG:
              if (!rtx_equal_p (x10, operands[0]))
                return NULL;
              x13 = XEXP (x7, 0);
              if (GET_CODE (x13) != REG
                  || REGNO (x13) != 1
                  || GET_MODE (x13) != E_QImode
                  || !
#line 678 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (3, REGNO (operands[0]))))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_11 (insn, operands);

            default:
              return NULL;
            }

        case IOR:
          if (pattern13 (x6) != 0
              || !
#line 662 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (3, REGNO (operands[0]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_9 (insn, operands);

        case XOR:
          if (pattern13 (x6) != 0
              || !
#line 670 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
(peep2_regno_dead_p (3, REGNO (operands[0]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_10 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}
