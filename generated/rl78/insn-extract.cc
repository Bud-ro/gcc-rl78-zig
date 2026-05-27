/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 100:  /* udivmodsi4_g13 */
    case 99:  /* udivmodsi4_g14 */
    case 98:  /* *udivmodhi4_g14 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 88:  /* nonlocal_goto_insn */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 86:  /* trampoline_init */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 85:  /* sel_rb */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 84:  /* pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 83:  /* push */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 78:  /* bt */
    case 77:  /* bf */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 74:  /* *cbranchsi4_real_ge */
    case 73:  /* *cbranchsi4_real_lt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 72:  /* cbranchhi4_real_inverted */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 65:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 41:  /* movqi_from_es */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 79:  /* *negandhi3_real */
    case 50:  /* *addqihi3a_real */
    case 39:  /* *negandhi3_virt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 76:  /* *cbranchsi4_real */
    case 75:  /* *cbranchsi4_real_signed */
    case 38:  /* *cbranchsi4_virt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 71:  /* cbranchhi4_real */
    case 70:  /* *cbranchhi4_real_signed */
    case 69:  /* *cbranchqi4_real */
    case 68:  /* *cbranchqi4_real_signed */
    case 37:  /* *cbranchhi4_virt */
    case 36:  /* *cbranchhi4_virt_signed */
    case 35:  /* *cbranchqi4_virt */
    case 34:  /* *cbranchqi4_virt_signed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 64:  /* *indirect_jump_real */
    case 42:  /* movqi_cs */
    case 40:  /* movqi_to_es */
    case 31:  /* *indirect_jump_virt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 97:  /* mulsi3_g13 */
    case 96:  /* mulsi3_g14 */
    case 95:  /* mulhi3_g13 */
    case 94:  /* mulhi3_g14 */
    case 93:  /* *mulqi3_rl78 */
    case 92:  /* subsi3_internal_real */
    case 91:  /* subsi3_internal_virt */
    case 90:  /* addsi3_internal_real */
    case 89:  /* addsi3_internal_virt */
    case 30:  /* ashlsi3_virt */
    case 29:  /* lshrsi3_virt */
    case 28:  /* ashrsi3_virt */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 54:  /* *umulqihi3_real */
    case 18:  /* *umulqihi3_virt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 67:  /* *call_value_real */
    case 63:  /* *lshrhi3_real */
    case 62:  /* *lshrqi3_real */
    case 61:  /* *ashrhi3_real */
    case 60:  /* *ashrqi3_real */
    case 59:  /* *ashlhi3_real */
    case 58:  /* *ashlqi3_real */
    case 57:  /* *xorqi3_real */
    case 56:  /* *iorqi3_real */
    case 55:  /* *andqi3_real */
    case 53:  /* *umulhi3_shift_real */
    case 52:  /* *subhi3_real */
    case 51:  /* *subqi3_real */
    case 49:  /* *addhi3_real */
    case 48:  /* *addqi3_real */
    case 33:  /* *call_value_virt */
    case 27:  /* *lshrhi3_virt */
    case 26:  /* *lshrqi3_virt */
    case 25:  /* *ashrhi3_virt */
    case 24:  /* *ashrqi3_virt */
    case 23:  /* *ashlhi3_virt */
    case 22:  /* *ashlqi3_virt */
    case 21:  /* *xorqi3_virt */
    case 20:  /* *iorqi3_virt */
    case 19:  /* *andqi3_virt */
    case 17:  /* *umulhi3_shift_virt */
    case 16:  /* *subhi3_virt */
    case 15:  /* *subqi3_virt */
    case 14:  /* *addhi3_virt */
    case 13:  /* *addqi3_virt */
    case 12:  /* *inchi3_virt */
    case 11:  /* *incqi3_virt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 47:  /* *extendqihi2_real */
    case 46:  /* *zero_extendqihi2_real */
    case 45:  /* *bswaphi2_real */
    case 10:  /* *extendqihi2_virt */
    case 9:  /* *zero_extendqihi2_virt */
    case 8:  /* *bswaphi2_virt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 66:  /* *call_real */
    case 44:  /* *movhi_real */
    case 43:  /* *movqi_real */
    case 32:  /* *call_virt */
    case 7:  /* *movhi_virt */
    case 6:  /* *movhi_virt_mm */
    case 5:  /* *movqi_virt */
    case 4:  /* *movqi_virt_mm */
    case 3:  /* movsf */
    case 2:  /* movsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 87:  /* trampoline_uninit */
    case 82:  /* brk_interrupt_return */
    case 81:  /* interrupt_return */
    case 80:  /* rl78_return */
    case 1:  /* nop */
      break;

    }
}
