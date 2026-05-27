/* Generated automatically by the program `genemit'
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
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"
#include "dfp.h"
#include "output.h"
#include "recog.h"
#include "df.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "target.h"

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:237 */
rtx
gen_addsi3_internal_virt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:249 */
rtx
gen_addsi3_internal_real (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:281 */
rtx
gen_subsi3_internal_virt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:293 */
rtx
gen_subsi3_internal_real (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:368 */
rtx
gen_mulhi3_g14 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:385 */
rtx
gen_mulhi3_g13 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:410 */
rtx
gen_mulsi3_g14 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:442 */
rtx
gen_mulsi3_g13 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:570 */
rtx
gen_udivmodsi4_g14 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (operand3,
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 2),
		gen_hard_reg_clobber (HImode, 4),
		gen_hard_reg_clobber (HImode, 6)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:640 */
rtx
gen_udivmodsi4_g13 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (operand3,
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_hard_reg_clobber (HImode, 0)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:23 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 27 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
{
    if (MEM_P (operands[0]) && MEM_P (operands[1]))
      operands[1] = copy_to_mode_reg (QImode, operands[1]);
    if (rl78_far_p (operands[0]) && rl78_far_p (operands[1]))
      operands[1] = copy_to_mode_reg (QImode, operands[1]);

    /* GCC can generate (SUBREG (SYMBOL_REF)) when it has to store a symbol
       into a bitfield, or a packed ordinary field.  We can handle this
       provided that the destination is a register.  If not, then load the
       source into a register first.  */
    if (GET_CODE (operands[1]) == SUBREG
        && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
	&& ! REG_P (operands[0]))
	operands[1] = copy_to_mode_reg (QImode, operands[1]);

    /* Similarly for (SUBREG (CONST (PLUS (SYMBOL_REF)))).
       cf. g++.dg/abi/packed.C.  */
    if (GET_CODE (operands[1]) == SUBREG
	&& GET_CODE (XEXP (operands[1], 0)) == CONST
        && GET_CODE (XEXP (XEXP (operands[1], 0), 0)) == PLUS
        && GET_CODE (XEXP (XEXP (XEXP (operands[1], 0), 0), 0)) == SYMBOL_REF
	&& ! REG_P (operands[0]))
	operands[1] = copy_to_mode_reg (QImode, operands[1]);

    if (CONST_INT_P (operands[1]) && ! IN_RANGE (INTVAL (operands[1]), (HOST_WIDE_INT_M1U << 8) + 1, (1 << 8) - 1))
      FAIL;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:56 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 60 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
{
    if (MEM_P (operands[0]) && MEM_P (operands[1]))
      operands[1] = copy_to_mode_reg (HImode, operands[1]);
    if (rl78_far_p (operands[0]) && rl78_far_p (operands[1]))
      operands[1] = copy_to_mode_reg (HImode, operands[1]);

    /* FIXME: Not sure how GCC can generate (SUBREG (SYMBOL_REF)),
       but it does.  Since this makes no sense, reject it here.  */
    if (GET_CODE (operands[1]) == SUBREG
        && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF)
      FAIL;
    /* Similarly for (SUBREG (CONST (PLUS (SYMBOL_REF)))).  */
    if (GET_CODE (operands[1]) == SUBREG
	&& GET_CODE (XEXP (operands[1], 0)) == CONST
        && GET_CODE (XEXP (XEXP (operands[1], 0), 0)) == PLUS
        && GET_CODE (XEXP (XEXP (XEXP (operands[1], 0), 0), 0)) == SYMBOL_REF)
      FAIL;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:80 */
extern rtx_insn *gen_split_1 (rtx_insn *, rtx *);
rtx_insn *
gen_split_1 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_1 (rl78-expand.md:80)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 90 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
rl78_split_movsi (operands, SImode);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (operand2,
	operand4));
  emit_insn (gen_rtx_SET (operand3,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:94 */
extern rtx_insn *gen_split_2 (rtx_insn *, rtx *);
rtx_insn *
gen_split_2 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_2 (rl78-expand.md:94)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 104 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
rl78_split_movsi (operands, SFmode);
#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  emit_insn (gen_rtx_SET (operand2,
	operand4));
  emit_insn (gen_rtx_SET (operand3,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:108 */
rtx
gen_bswaphi2 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 112 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_2 (operands, gen_bswaphi2))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_BSWAP (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:118 */
rtx
gen_zero_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 122 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_2 (operands, gen_zero_extendqihi2))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:126 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 130 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_2 (operands, gen_extendqihi2))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:136 */
rtx
gen_addqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 142 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_3 (operands, gen_addqi3))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:136 */
rtx
gen_addhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 142 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_3 (operands, gen_addhi3))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:146 */
rtx
gen_subqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 152 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_3 (operands, gen_subqi3))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:146 */
rtx
gen_subhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 152 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_3 (operands, gen_subhi3))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:156 */
rtx
gen_negqi2 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 162 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_2 (operands, gen_negqi2))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MINUS (QImode,
	const0_rtx,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:156 */
rtx
gen_neghi2 (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 162 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_2 (operands, gen_neghi2))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MINUS (HImode,
	const0_rtx,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:166 */
rtx
gen_umulqihi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:174 */
rtx
gen_andqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 180 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md"
if (rl78_force_nonfar_3 (operands, gen_andqi3))
     DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

