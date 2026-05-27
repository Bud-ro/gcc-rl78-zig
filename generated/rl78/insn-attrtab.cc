/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
num_delay_slots (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 0;

    }
}

enum attr_is_g13_muldiv_insn
get_attr_is_g13_muldiv_insn (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 95:  /* mulhi3_g13 */
    case 97:  /* mulsi3_g13 */
    case 100:  /* udivmodsi4_g13 */
      return IS_G13_MULDIV_INSN_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return IS_G13_MULDIV_INSN_NO;

    }
}

enum attr_update_Z
get_attr_update_Z (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 70:  /* *cbranchhi4_real_signed */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return UPDATE_Z_CLOBBER;
        }
      else
        {
	  return UPDATE_Z_NO;
        }

    case 63:  /* *lshrhi3_real */
    case 62:  /* *lshrqi3_real */
    case 61:  /* *ashrhi3_real */
    case 60:  /* *ashrqi3_real */
    case 59:  /* *ashlhi3_real */
    case 58:  /* *ashlqi3_real */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return UPDATE_Z_NO;
        }
      else
        {
	  return UPDATE_Z_CLOBBER;
        }

    case 56:  /* *iorqi3_real */
    case 55:  /* *andqi3_real */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return UPDATE_Z_NO;
        }
      else
        {
	  return UPDATE_Z_UPDATE_Z;
        }

    case 49:  /* *addhi3_real */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xfULL))
        {
	  return UPDATE_Z_NO;
        }
      else
        {
	  return UPDATE_Z_UPDATE_Z;
        }

    case 66:  /* *call_real */
    case 67:  /* *call_value_real */
    case 68:  /* *cbranchqi4_real_signed */
    case 69:  /* *cbranchqi4_real */
    case 71:  /* cbranchhi4_real */
    case 72:  /* cbranchhi4_real_inverted */
    case 75:  /* *cbranchsi4_real_signed */
    case 76:  /* *cbranchsi4_real */
    case 77:  /* bf */
    case 78:  /* bt */
    case 79:  /* *negandhi3_real */
      return UPDATE_Z_CLOBBER;

    case 48:  /* *addqi3_real */
    case 50:  /* *addqihi3a_real */
    case 51:  /* *subqi3_real */
    case 52:  /* *subhi3_real */
    case 57:  /* *xorqi3_real */
      return UPDATE_Z_UPDATE_Z;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return UPDATE_Z_NO;

    }
}

enum attr_valloc
get_attr_valloc (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 99:  /* udivmodsi4_g14 */
      return VALLOC_DIVSI;

    case 98:  /* *udivmodhi4_g14 */
      return VALLOC_DIVHI;

    case 28:  /* ashrsi3_virt */
    case 29:  /* lshrsi3_virt */
    case 30:  /* ashlsi3_virt */
    case 38:  /* *cbranchsi4_virt */
    case 89:  /* addsi3_internal_virt */
    case 90:  /* addsi3_internal_real */
    case 91:  /* subsi3_internal_virt */
    case 92:  /* subsi3_internal_real */
    case 93:  /* *mulqi3_rl78 */
    case 94:  /* mulhi3_g14 */
    case 95:  /* mulhi3_g13 */
    case 96:  /* mulsi3_g14 */
    case 97:  /* mulsi3_g13 */
    case 100:  /* udivmodsi4_g13 */
      return VALLOC_MACAX;

    case 17:  /* *umulhi3_shift_virt */
    case 18:  /* *umulqihi3_virt */
      return VALLOC_UMUL;

    case 34:  /* *cbranchqi4_virt_signed */
    case 35:  /* *cbranchqi4_virt */
    case 36:  /* *cbranchhi4_virt_signed */
    case 37:  /* *cbranchhi4_virt */
      return VALLOC_CMP;

    case 31:  /* *indirect_jump_virt */
    case 32:  /* *call_virt */
      return VALLOC_RO1;

    case 2:  /* movsi */
    case 3:  /* movsf */
    case 4:  /* *movqi_virt_mm */
    case 5:  /* *movqi_virt */
    case 6:  /* *movhi_virt_mm */
    case 7:  /* *movhi_virt */
    case 8:  /* *bswaphi2_virt */
    case 9:  /* *zero_extendqihi2_virt */
    case 10:  /* *extendqihi2_virt */
    case 33:  /* *call_value_virt */
      return VALLOC_OP1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return VALLOC_OP2;

    }
}

int
eligible_for_delay (rtx_insn *delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx_insn *candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;

  if (num_delay_slots (delay_insn) == 0)
    return 0;
  gcc_assert (slot < 0);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = candidate_insn;
  switch (slot)
    {
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_true (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
eligible_for_annul_false (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
const_num_delay_slots (rtx_insn *insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 0;
