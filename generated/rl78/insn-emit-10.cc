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

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:666 */
extern rtx_insn *gen_peephole2_10 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_10 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_10 (rl78-real.md:666)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (gen_rtx_REG (QImode,
	1),
	gen_rtx_XOR (QImode,
	gen_rtx_REG (QImode,
	1),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:674 */
extern rtx_insn *gen_peephole2_11 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_11 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_11 (rl78-real.md:674)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (gen_rtx_REG (QImode,
	1),
	gen_rtx_AND (QImode,
	gen_rtx_REG (QImode,
	1),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:74 */
rtx
gen_prologue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 77 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_expand_prologue (); DONE;
#undef DONE
#undef FAIL
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:80 */
rtx
gen_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 83 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_expand_epilogue (); DONE;
#undef DONE
#undef FAIL
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:86 */
rtx
gen_sibcall_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 89 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
FAIL;
#undef DONE
#undef FAIL
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:110 */
rtx
gen_eh_return (rtx operand0)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 113 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_expand_eh_epilogue (operands[0]);
   emit_barrier ();
   DONE;
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
  }
  emit (operand0, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:171 */
rtx
gen_nonlocal_goto (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 180 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
emit_jump_insn (gen_nonlocal_goto_insn (operands[0], operands[1], operands[2], operands[3]));
   emit_barrier ();
   DONE;
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
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (4,
		operand0,
		operand1,
		operand2,
		operand3),
	22)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:204 */
rtx
gen_es_addr (rtx operand0)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		gen_rtx_REG (QImode,
	35),
		operand0),
	11);
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:217 */
rtx
gen_addsi3 (rtx operand0,
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
#line 223 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
emit_insn (gen_addsi3_internal_virt (operands[0], operands[1], operands[2]));
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
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:227 */
rtx
gen_adddi3 (rtx operand0,
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
#line 233 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_emit_libcall ("__adddi3", PLUS, DImode, DImode, 3, operands);
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
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:261 */
rtx
gen_subsi3 (rtx operand0,
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
#line 267 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
emit_insn (gen_subsi3_internal_virt (operands[0], operands[1], operands[2]));
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
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:271 */
rtx
gen_subdi3 (rtx operand0,
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
#line 277 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_emit_libcall ("__subdi3", MINUS, DImode, DImode, 3, operands);
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
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:308 */
rtx
gen_mulqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MULT (QImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:320 */
rtx
gen_mulhi3 (rtx operand0,
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
#line 326 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
{
    if (RL78_MUL_G14)
      emit_insn (gen_mulhi3_g14 (operands[0], operands[1], operands[2]));
    else /* RL78_MUL_G13 */
      emit_insn (gen_mulhi3_g13 (operands[0], operands[1], operands[2]));
    DONE;
  }
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
	gen_rtx_MULT (HImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:335 */
rtx
gen_mulsi3 (rtx operand0,
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
#line 341 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
{
    if (RL78_MUL_G14)
      emit_insn (gen_mulsi3_g14 (operands[0], operands[1], operands[2]));
    else /* RL78_MUL_G13 */
      emit_insn (gen_mulsi3_g13 (operands[0], operands[1], operands[2]));
    DONE;
  }
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
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:488 */
rtx
gen_udivmodhi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (operand3,
	gen_rtx_UMOD (HImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (HImode, 0),
		gen_hard_reg_clobber (HImode, 4)));
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:551 */
rtx
gen_udivmodsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 561 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
{
    if (RL78_MUL_G14)
      emit_insn (gen_udivmodsi4_g14 (operands[0], operands[1], operands[2], operands[3]));
    else /* RL78_MUL_G13 */
      emit_insn (gen_udivmodsi4_g13 (operands[0], operands[1], operands[2], operands[3]));
    DONE;
  }
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
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (operand3,
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:722 */
rtx
gen_movdi (rtx operand0,
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
#line 726 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_split_movdi(operands, DImode);
  DONE;
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

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:730 */
rtx
gen_movdf (rtx operand0,
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
#line 734 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_split_movdi(operands, DFmode);
  DONE;
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

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:738 */
rtx
gen_umindi3 (rtx operand0,
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
#line 744 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_emit_libcall ("__umindi3", UMIN, DImode, DImode, 3, operands);
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
	gen_rtx_UMIN (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:748 */
rtx
gen_umaxdi3 (rtx operand0,
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
#line 754 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_emit_libcall ("__umaxdi3", UMAX, DImode, DImode, 3, operands);
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
	gen_rtx_UMAX (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:758 */
rtx
gen_smindi3 (rtx operand0,
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
#line 764 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_emit_libcall ("__smindi3", SMIN, DImode, DImode, 3, operands);
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
	gen_rtx_SMIN (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:768 */
rtx
gen_smaxdi3 (rtx operand0,
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
#line 774 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_emit_libcall ("__smaxdi3", SMAX, DImode, DImode, 3, operands);
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
	gen_rtx_SMAX (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:778 */
rtx
gen_anddi3 (rtx operand0,
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
#line 784 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
rl78_emit_libcall ("__anddi3", AND, DImode, DImode, 3, operands);
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
	gen_rtx_AND (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 100:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (HImode, 0);
      break;

    case 99:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (HImode, 0);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (HImode, 2);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (HImode, 4);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (HImode, 6);
      break;

    case 98:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (HImode, 0);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (HImode, 4);
      break;

    case 97:
    case 96:
    case 94:
    case 92:
    case 91:
    case 90:
    case 89:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (HImode, 0);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (HImode, 2);
      break;

    case 95:
    case 93:
    case 76:
    case 75:
    case 74:
    case 73:
    case 38:
    case 30:
    case 29:
    case 28:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (HImode, 0);
      break;

    default:
      gcc_unreachable ();
    }
}


bool
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 94:
    case 92:
    case 91:
    case 90:
    case 89:
    case 95:
    case 93:
    case 76:
    case 75:
    case 74:
    case 73:
    case 38:
    case 30:
    case 29:
    case 28:
      return true;

    default:
      gcc_unreachable ();
    }
}
