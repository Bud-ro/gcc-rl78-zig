/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "flags.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "regs.h"
#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_28[] = {
  "; ashrsi %0, 0",
  "movw ax,%H1 \n\t sarw ax,1 \n\t movw %H0,ax \n\t mov a,%Q1 \n\t rorc a,1 \n\t mov %Q0,a \n\t mov a,%q1 \n\t rorc a,1 \n\t mov %q0,a",
  "movw ax,%H1 \n\t sarw ax,1 \n\t movw %H0,ax \n\t mov a,%Q1 \n\t rorc a,1 \n\t mov %Q0,a \n\t mov a,%q1 \n\t rorc a,1 \n\t mov %q0,a",
  "movw ax,%1 \n\t shlw ax,%r2 \n\t mov %0,a             \n\t mov x,%Q1 \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t sarw ax,%u2 \n\t movw %H0,ax",
  "movw ax,%1 \n\t shlw ax,%r2 \n\t mov %0,a             \n\t mov x,%Q1 \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t sarw ax,%u2 \n\t movw %H0,ax",
  "movw ax,%1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t mov a,%Q1 \n\t mov x,a   \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t sarw ax,%u2 \n\t movw %H0,ax",
  "mov x,%Q1            \n\t mov a,%H1 \n\t movw %0,ax \n\t movw ax,%H1 \n\t sarw ax,8 \n\t movw %H0,ax",
  "mov a,%Q1 \n\t mov x, a \n\t mov a,%H1 \n\t movw %0,ax \n\t movw ax,%H1 \n\t sarw ax,8 \n\t movw %H0,ax",
  "mov x,%Q1           \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t movw ax,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t sarw ax,%u2 \n\t movw %H0,ax",
  "mov x,%Q1           \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t movw ax,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t sarw ax,%u2 \n\t movw %H0,ax",
  "mov a,%Q1 \n\t mov x,a \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t movw ax,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t sarw ax,%u2 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t movw %0,ax \n\t sarw ax,15 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t sarw ax,%S2 \n\t movw %0,ax \n\t sarw ax,15 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t sarw ax,%S2 \n\t movw %0,ax \n\t sarw ax,15 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t mov %0,a \n\t sarw ax,15 \n\t movw %H0,ax \n\t mov %Q0,a",
  "movw ax,%H1 \n\t sar a,%s2 \n\t mov %0,a \n\t sarw ax,15 \n\t movw %H0,ax \n\t mov %Q0,a",
  "mov b,%2 \n\t cmp0 b \n\t bz $2f \n\t 1: \n\t movw ax,%H1 \n\t sarw ax,1 \n\t movw %H0,ax \n\t mov a,%Q1 \n\t rorc a,1 \n\t mov %Q0,a \n\t mov a,%q1 \n\t rorc a,1 \n\t mov %q0,a \n\t dec b \n\t bnz $1b \n\t 2:",
};

static const char * const output_29[] = {
  "; lshrsi %0, 0",
  "movw ax,%H1 \n\t shrw ax,1 \n\t movw %H0,ax \n\t mov a,%Q1 \n\t rorc a,1 \n\t mov %Q0,a \n\t mov a,%q1 \n\t rorc a,1 \n\t mov %q0,a",
  "movw ax,%H1 \n\t shrw ax,1 \n\t movw %H0,ax \n\t mov a,%Q1 \n\t rorc a,1 \n\t mov %Q0,a \n\t mov a,%q1 \n\t rorc a,1 \n\t mov %q0,a",
  "movw ax,%1 \n\t shlw ax,%r2 \n\t mov %0,a             \n\t mov x,%Q1 \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t shrw ax,%u2 \n\t movw %H0,ax",
  "movw ax,%1 \n\t shlw ax,%r2 \n\t mov %0,a             \n\t mov x,%Q1 \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t shrw ax,%u2 \n\t movw %H0,ax",
  "movw ax,%1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t mov a,%Q1 \n\t mov x,a   \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t shrw ax,%u2 \n\t movw %H0,ax",
  "mov x,%Q1            \n\t mov a,%H1 \n\t movw %0,ax \n\t movw ax,%H1 \n\t shrw ax,8 \n\t movw %H0,ax",
  "mov a,%Q1 \n\t mov x, a \n\t mov a,%H1 \n\t movw %0,ax \n\t movw ax,%H1 \n\t shrw ax,8 \n\t movw %H0,ax",
  "mov x,%Q1           \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t movw ax,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t shrw ax,%u2 \n\t movw %H0,ax",
  "mov x,%Q1           \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t movw ax,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t shrw ax,%u2 \n\t movw %H0,ax",
  "mov a,%Q1 \n\t mov x,a \n\t mov a,%H1 \n\t shlw ax,%r2 \n\t mov %0,a \n\t movw ax,%H1 \n\t shlw ax,%r2 \n\t mov %Q0,a \n\t movw ax,%H1 \n\t shrw ax,%u2 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t movw %0,ax \n\t movw ax,#0 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t shrw ax,%S2 \n\t movw %0,ax \n\t movw ax,#0 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t shrw ax,%S2 \n\t movw %0,ax \n\t movw ax,#0 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t mov %0,a \n\t movw ax,#0 \n\t movw %H0,ax \n\t mov %Q0,a",
  "movw ax,%H1 \n\t shr a,%s2 \n\t mov %0,a \n\t movw ax,#0 \n\t movw %H0,ax \n\t mov %Q0,a",
  "mov b,%2 \n\t cmp0 b \n\t bz $2f \n\t 1: \n\t movw ax,%H1 \n\t shrw ax,1 \n\t movw %H0,ax \n\t mov a,%Q1 \n\t rorc a,1 \n\t mov %Q0,a \n\t mov a,%q1 \n\t rorc a,1 \n\t mov %q0,a \n\t dec b \n\t bnz $1b \n\t 2:",
};

static const char * const output_30[] = {
  "; lshrsi %0, 0",
  "movw ax,%1 \n\t shlw ax,1 \n\t movw %0,ax \n\t movw ax,%H1 \n\t rolwc ax,1 \n\t movw %H0,ax",
  "movw ax,%1 \n\t shlw ax,1 \n\t movw %0,ax \n\t movw ax,%H1 \n\t rolwc ax,1 \n\t movw %H0,ax",
  "movw ax,%H1 \n\t shlw ax,%u2 \n\t mov %E0,a \n\t mov x,%Q1           \n\t mov a, %H1 \n\t shlw ax,%S2 \n\t mov %H0,a \n\t movw ax,%1 \n\t shlw ax,%u2 \n\t movw %0,ax",
  "movw ax,%H1 \n\t shlw ax,%u2 \n\t mov %E0,a \n\t mov x,%Q1           \n\t mov a, %H1 \n\t shlw ax,%S2 \n\t mov %H0,a \n\t movw ax,%1 \n\t shlw ax,%u2 \n\t movw %0,ax",
  "movw ax,%H1 \n\t shlw ax,%u2 \n\t mov %E0,a \n\t mov a,%Q1 \n\t mov x,a \n\t mov a, %H1 \n\t shlw ax,%S2 \n\t mov %H0,a \n\t movw ax,%1 \n\t shlw ax,%u2 \n\t movw %0,ax",
  "mov x,%Q1           \n\t mov a,%H1 \n\t movw %H0,ax \n\t movw ax,%1 \n\t shlw ax,8 \n\t movw %0,ax",
  "mov a,%Q1 \n\t mov x,a \n\t mov a,%H1 \n\t movw %H0,ax \n\t movw ax,%1 \n\t shlw ax,8 \n\t movw %0,ax",
  "mov x,%Q1           \n\t mov a,%H1 \n\t shlw ax,%s2 \n\t movw %H0,ax \n\t movw ax,%1 \n\t shlw ax,%s2 \n\t mov %H0,a \n\t movw ax,%1 \n\t shlw ax,%u2 \n\t movw %0,ax",
  "mov x,%Q1           \n\t mov a,%H1 \n\t shlw ax,%s2 \n\t movw %H0,ax \n\t movw ax,%1 \n\t shlw ax,%s2 \n\t mov %H0,a \n\t movw ax,%1 \n\t shlw ax,%u2 \n\t movw %0,ax",
  "mov a,%Q1 \n\t mov x,a \n\t mov a,%H1 \n\t shlw ax,%s2 \n\t movw %H0,ax \n\t movw ax,%1 \n\t shlw ax,%s2 \n\t mov %H0,a \n\t movw ax,%1 \n\t shlw ax,%u2 \n\t movw %0,ax",
  "movw ax,%1 \n\t movw %H0,ax \n\t movw %0,#0",
  "movw ax,%1 \n\t movw %H0,ax \n\t movw ax,#0 \n\t movw %0,ax",
  "movw ax,%1 \n\t shlw ax,%S2 \n\t movw %H0,ax \n\t movw %0,#0",
  "movw ax,%1 \n\t shlw ax,%S2 \n\t movw %H0,ax \n\t movw ax,#0 \n\t movw %0,ax",
  "mov a,%1 \n\t movw %H0,ax \n\t mov %H0,#0 \n\t movw %0,#0",
  "mov a,%1 \n\t movw %H0,ax \n\t movw ax,#0 \n\t mov %H0,a \n\t movW %0,ax",
  "mov a,%1 \n\t shl a,%s2 \n\t movw %H0,ax \n\t mov %H0,#0 \n\t movw %0,#0",
  "mov a,%1 \n\t shl a,%s2 \n\t movw %H0,ax \n\t movw ax,#0 \n\t mov %H0,a \n\t movW %0,ax",
  "mov a,%2 \n\t cmp0 a \n\t bz $2f \n\t mov d,a \n\t movw ax,%H1 \n\t movw bc,%1 \n\t 1: \n\t shlw bc,1 \n\t rolwc ax,1 \n\t dec d \n\t bnz $1b \n\t movw %H0,ax \n\t movw ax,bc \n\t movw %0,ax \n\t 2:",
  "mov a,%2 \n\t mov d,a \n\t movw ax,%H1 \n\t movw bc,%1 \n\t cmp0 0xFFEFD \n\t bz $2f \n\t 1: \n\t shlw bc,1 \n\t rolwc ax,1 \n\t dec d \n\t bnz $1b \n\t 2: \n\t movw %H0,ax \n\t movw ax,bc \n\t movw %0,ax",
  "mov a,%2 \n\t mov d,a \n\t movw ax,%1 \n\t movw bc,ax \n\t movw ax,%H1 \n\t cmp0 0xFFEFD \n\t bz $2f \n\t 1: \n\t shlw bc,1 \n\t rolwc ax,1 \n\t dec d \n\t bnz $1b \n\t 2: \n\t movw %H0,ax \n\t movw ax,bc \n\t movw %0,ax",
};

static const char * const output_43[] = {
  "; mov\t%0, %1",
  "oneb\t%0",
  "clrb\t%0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %S1",
  "mov\t%0, %1",
};

static const char * const output_44[] = {
  "; movw\t%0, %1",
  "onew\t%0",
  "clrw\t%0",
  "movw\t%0, %1",
  "movw\t%0, %1",
  "movw\t%0, %1",
  "movw\t%0, %S1",
  "movw\t%0, %1",
  "movw\t%0, %1",
};

static const char * const output_45[] = {
  "xch\ta, x",
  "movw\tax, %1\n\txch\ta, x",
};

static const char * const output_46[] = {
  "mov\t%Q0, #0",
  "mov\tx, a \n\tmov\ta, #0",
};

static const char * const output_47[] = {
  "shlw\t%0, 8 \n\tsarw\t%0, 8",
  "sarw\t%0, 8",
};

static const char * const output_48[] = {
  "inc\t%p0",
  "dec\t%p0",
  "add\t%0, %2",
  "add\t%0, %2",
  "add\t%0, %2",
};

static const char * const output_49[] = {
  "incw\t%p0",
  "decw\t%p0",
  "incw\t%0 \n\tincw\t%0",
  "decw\t%0 \n\tdecw\t%0",
  "addw\t%0, %p2",
  "addw\t%0, %2",
  "subw\t%0, %m2",
  "movw\t%0, %1 \n\taddw\t%0, %2",
};

static const char * const output_53[] = {
  "shlw\t%0, 1",
  "shlw\t%0, 2",
};

static const char * const output_55[] = {
  "clr1\t%0.%B2",
  "and\t%0, %2",
  "and\t%0, %2",
  "and\t%0, %2",
};

static const char * const output_56[] = {
  "set1\t%0.%B2",
  "or\t%0, %2",
  "or\t%0, %2",
  "or\t%0, %2",
};

static const char * const output_58[] = {
  "shl\t%0, %u2",
  "cmp0 %2\n\t bz $2f\n\t 1: shl\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
  "inc %2\n\tdec %2\n\tbz $2f\n\t1: shl\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
};

static const char * const output_59[] = {
  "shlw\t%0, %u2",
  "cmp0 %2\n\t bz $2f\n\t 1: shlw\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
  "inc %2\n\tdec %2\n\tbz $2f\n\t1: shlw\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
};

static const char * const output_60[] = {
  "sar\t%0, %u2",
  "cmp0 %2\n\t bz $2f\n\t 1: sar\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
  "inc %2\n\tdec %2\n\tbz $2f\n\t1: sar\t%0, 1\n\tdec %2 \n\tbnz $1b\n\t2:",
};

static const char * const output_61[] = {
  "sarw\t%0, %u2",
  "cmp0 %2\n\t bz $2f\n\t 1: sarw\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
  "inc %2\n\tdec %2\n\tbz $2f\n\t1: sarw\t%0, 1\n\tdec %2\n\tbnz $1b\n\t2:",
};

static const char * const output_62[] = {
  "shr\t%0, %u2",
  "cmp0 %2\n\t bz $2f\n\t 1: shr\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
  "inc %2\n\tdec %2\n\tbz $2f\n\t1: shr\t%0, 1\n\tdec %2\n\tbnz $1b\n\t2:",
};

static const char * const output_63[] = {
  "shrw\t%0, %u2",
  "cmp0 %2\n\t bz $2f\n\t 1: shrw\t%0, 1 \n\tdec %2 \n\tbnz $1b\n\t2:",
  "inc %2\n\tdec %2\n\tbz $2f\n\t1: shrw\t%0, 1\n\tdec %2\n\tbnz $1b\n\t2:",
};

static const char * const output_66[] = {
  "call\t!!%A0",
  "call\t%A0",
};

static const char * const output_67[] = {
  "call\t!!%A1",
  "call\t%A1",
};

static const char *
output_68 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 411 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
{
    gcc_assert (GET_CODE (operands[0]) != EQ && GET_CODE (operands[0]) != NE);

    switch (which_alternative)
    {
    case 0: return "cmp0\t%1\n\t xor1\tCY, %1.7\n\t sk%C0\n\t br\t!!%3";
    case 1: return "cmp\t%1, %2\n\t xor1\tCY, %1.7\n\t not1\tCY\n\t sk%C0\n\t br\t!!%3";
    case 4:
    case 2: return "cmp\t%1, %2\n\t xor1\tCY, %1.7\n\t sk%C0\n\t br\t!!%3";
    case 3: return "cmp\t%1, %2\n\t xor1\tCY, %1.7\n\t xor1\tCY, %2.7\n\t sk%C0\n\t br\t!!%3";
    default: gcc_unreachable ();
    }
  }
}

static const char *
output_69 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 435 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
{
    if (which_alternative == 0)
      {
        if (rl78_flags_already_set (operands[0], operands[1]))
          return "sk%C0\n\t br\t!!%3\n\t # zero-comparison eliminated";
	else
	  return "cmp0\t%1\n\t sk%C0\n\t br\t!!%3";
      }
    return "cmp\t%1, %2\n\t sk%C0\n\t br\t!!%3";
  }
}

static const char * const output_70[] = {
  "cmpw\t%1, %2\n\t xor1\tCY, %Q1.7\n\t not1\tCY\n\t sk%C0\n\t br\t!!%3",
  "cmpw\t%1, %2\n\t xor1\tCY, %Q1.7\n\t sk%C0\n\t br\t!!%3",
  "cmpw\t%1, %2\n\t xor1\tCY, %Q1.7\n\t xor1\tCY, %Q2.7\n\t sk%C0\n\t br\t!!%3",
  "%z0\t!!%3",
};

static const char *
output_71 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 472 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
{
    switch (which_alternative)
      {
      case 0:
        if (rl78_flags_already_set (operands[0], operands[1]))
	  return "sk%C0\n\t br\t!!%3\n\t # cmpw eliminated";
	/* else fall through.  */
      case 1:
	return "cmpw\t%1, %2\n\t sk%C0\n\t br\t!!%3";
      case 2:
        return "%z0\t!!%3";
      default:
        gcc_unreachable ();
      }
  }
}

static const char *
output_72 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 498 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md"
{
    if (which_alternative == 0 && rl78_flags_already_set (operands[0], operands[1]))
      return "sk%C0\n\t br\t!!%3\n\t # inverted cmpw eliminated";
    else
      return "cmpw\t%1, %2\n\t sk%C0\n\t br\t!!%3";
  }
}

static const char * const output_73[] = {
  "mov\ta, %E0\n\t mov1\tCY, a.7\n\t sknc\n\t br\t!!%1",
  "mov1\tCY, %E0.7\n\t sknc\n\t br\t!!%1",
};

static const char * const output_74[] = {
  "mov\ta, %E0\n\t mov1\tCY, a.7\n\t skc\n\t br\t!!%1",
  "mov1\tCY, %E0.7\n\t skc\n\t br\t!!%1",
};

static const char * const output_75[] = {
  "movw\tax, %H1\n\t cmpw\tax, %H2\n\t xor1\tCY, a.7\n\t not1\tCY\n\t movw\tax, %h1\n\t sknz\n\t cmpw\tax, %h2\n\t sk%C0\n\t br\t!!%3",
  "movw\tax, %H1\n\t cmpw\tax, %H2\n\t xor1\tCY, a.7\n\t movw\tax, %h1\n\t sknz\n\t cmpw\tax, %h2\n\t sk%C0\n\t br\t!!%3",
  "movw\tax, %H1\n\t cmpw\tax, %H2\n\t xor1\tCY, a.7\n\t xor1\tCY, %E2.7\n\t movw\tax, %h1\n\t sknz\n\t cmpw\tax, %h2\n\t sk%C0\n\t br\t!!%3",
  "movw\tax, %H1\n\t cmpw\tax, %H2\n\t xor1\tCY, a.7\n\t not1\tCY\n\t movw\tax, %h1\n\t sknz\n\t cmpw\tax, %h2\n\t sk%0\n\t br\t!!%3",
  "movw\tax, %H1\n\t cmpw\tax, %H2\n\t xor1\tCY, a.7\n\t movw\tax, %h1\n\t sknz\n\t cmpw\tax, %h2\n\t sk%0\n\t br\t!!%3",
};

static const char * const output_83[] = {
  "push\t%v0",
  "push\t%v0 ; %0",
};

static const char * const output_84[] = {
  "pop\t%v0",
  "pop\t%v0 ; %0",
};

static const char *
output_90 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 257 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
{ return rl78_addsi3_internal (operands, which_alternative); }
}

static const char * const output_92[] = {
  "movw ax,%h1 \n\tsubw ax,%h2 \n\tmovw %h0, ax \n\tmovw ax,%H1 \n\tsknc \n\tdecw ax \n\tsubw ax,%H2 \n\tmovw %H0,ax",
  "movw ax,%h1 \n\tsubw ax,%h2 \n\tmovw %h0, ax \n\tmovw ax,%H1 \n\tsknc \n\tdecw ax \n\tsubw ax,%H2 \n\tmovw %H0,ax",
  "movw ax,%h1 \n\tsubw ax,%h2 \n\tmovw bc,  ax \n\tmovw ax,%H1 \n\tsknc \n\tdecw ax \n\tsubw ax,%H2 \n\tmovw %H0,ax \n\tmovw ax,bc \n\tmovw %h0, ax",
};

static const char *
output_98 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 513 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
{
    if (find_reg_note (insn, REG_UNUSED, operands[3]))
      return "; G14 udivhi macro %0 = %1 / %2 \n	movw    ax, %h1 \n	movw    de, %h2 \n	push	psw	; Save the current interrupt status \n	di		; Disable interrupts. See Renesas Technical update TN-RL*-A025B/E \n	divhu   	; ax = ax / de \n	pop	psw	; Restore saved interrupt status \n	movw    %h0, ax \n	; end of udivhi macro";
    else if (find_reg_note (insn, REG_UNUSED, operands[0]))
      return "; G14 umodhi macro %3 = %1 %% %2 \n	movw    ax, %h1 \n	movw    de, %h2 \n	push	psw	; Save the current interrupt status \n	di		; Disable interrupts. See Renesas Technical update TN-RL*-A025B/E \n	divhu   	; de = ax %% de \n	pop	psw	; Restore saved interrupt status \n	movw	ax, de \n	movw    %h3, ax \n	; end of umodhi macro";
    else
      return "; G14 udivmodhi macro %0 = %1 / %2 and %3 = %1 %% %2 \n	movw    ax, %h1 \n	movw    de, %h2 \n	push	psw	; Save the current interrupt status \n	di		; Disable interrupts. See Renesas Technical update TN-RL*-A025B/E \n	divhu   	; ax = ax / de, de = ax %% de \n	pop	psw	; Restore saved interrupt status \n	movw    %h0, ax \n	movw	ax, de \n	movw    %h3, ax \n	; end of udivmodhi macro";
  }
}

static const char *
output_99 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 582 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
{
    if (find_reg_note (insn, REG_UNUSED, operands[3]))
      return "; G14 udivsi macro %0 = %1 / %2 \n	movw    ax, %h1 \n	movw    bc, %H1 \n	movw    de, %h2 \n	movw    hl, %H2 \n	push	psw	; Save the current interrupt status \n	di		; Disable interrupts. See Renesas Technical update TN-RL*-A025B/E \n	divwu   	; bcax = bcax / hlde \n	pop	psw	; Restore saved interrupt status \n	movw    %h0, ax \n	movw	ax, bc \n	movw    %H0, ax \n	; end of udivsi macro";
    else if (find_reg_note (insn, REG_UNUSED, operands[0]))
      return "; G14 umodsi macro %3 = %1 %% %2 \n	movw    ax, %h1 \n	movw    bc, %H1 \n	movw    de, %h2 \n	movw    hl, %H2 \n	push	psw	; Save the current interrupt status \n	di		; Disable interrupts. See Renesas Technical update TN-RL*-A025B/E \n	divwu   	; hlde = bcax %% hlde \n	pop	psw	; Restore saved interrupt status \n	movw	ax, de \n	movw    %h3, ax \n	movw	ax, hl \n	movw    %H3, ax \n	; end of umodsi macro";
    else
      return "; G14 udivmodsi macro %0 = %1 / %2 and %3 = %1 %% %2 \n	movw    ax, %h1 \n	movw    bc, %H1 \n	movw    de, %h2 \n	movw    hl, %H2 \n	push	psw	; Save the current interrupt status \n	di		; Disable interrupts. See Renesas Technical update TN-RL*-A025B/E \n	divwu   	; bcax = bcax / hlde, hlde = bcax %% hlde \n	pop	psw	; Restore saved interrupt status \n	movw    %h0, ax \n	movw	ax, bc \n	movw    %H0, ax \n	movw	ax, de \n	movw    %h3, ax \n	movw	ax, hl \n	movw    %H3, ax \n	; end of udivmodsi macro";
  }
}

static const char *
output_100 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 649 "/home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md"
{
    if (find_reg_note (insn, REG_UNUSED, operands[3]))
      return "; G13 udivsi macro %0 = %1 / %2 \n	mov	a, #0xC0	; Set DIVMODE=1 and MACMODE=1 \n	mov	!0xf00e8, a	; This preps the peripheral for division without interrupt generation \n	movw	ax, %H1		\n	movw	0xffff2, ax	; MDAH \n	movw	ax, %h1		\n	movw	0xffff0, ax	; MDAL \n	movw	ax, %H2		\n	movw	0xffff4, ax	; MDBH \n	movw	ax, %h2		\n	movw	0xffff6, ax	; MDBL \n	mov	a, #0xC1	; Set the DIVST bit in MDUC \n	mov	!0xf00e8, a	; This starts the division op \n1:	mov	a, !0xf00e8	; Wait 16 clocks or until DIVST is clear \n	bt	a.0, $1b	\n	movw    ax, 0xffff0	; Read the quotient \n	movw	%h0, ax		\n	movw    ax, 0xffff2	\n	movw	%H0, ax		\n	; end of udivsi macro";
    else if (find_reg_note (insn, REG_UNUSED, operands[0]))
      return "; G13 umodsi macro %3 = %1 %% %2 \n	mov	a, #0xC0	; Set DIVMODE=1 and MACMODE=1 \n	mov	!0xf00e8, a	; This preps the peripheral for division without interrupt generation \n	movw	ax, %H1		\n	movw	0xffff2, ax	; MDAH \n	movw	ax, %h1		\n	movw	0xffff0, ax	; MDAL \n	movw	ax, %H2		\n	movw	0xffff4, ax	; MDBH \n	movw	ax, %h2		\n	movw	0xffff6, ax	; MDBL \n	mov	a, #0xC1	; Set the DIVST bit in MDUC \n	mov	!0xf00e8, a	; This starts the division op \n1:	mov	a, !0xf00e8	; Wait 16 clocks or until DIVST is clear \n	bt	a.0, $1b	\n  	movw	ax, !0xf00e0	; Read the remainder \n	movw	%h3, ax		\n	movw	ax, !0xf00e2	\n	movw	%H3, ax		\n	; end of umodsi macro";
    else
      return "; G13 udivmodsi macro %0 = %1 / %2 and %3 = %1 %% %2 \n	mov	a, #0xC0	; Set DIVMODE=1 and MACMODE=1 \n	mov	!0xf00e8, a	; This preps the peripheral for division without interrupt generation \n	movw	ax, %H1		\n	movw	0xffff2, ax	; MDAH \n	movw	ax, %h1		\n	movw	0xffff0, ax	; MDAL \n	movw	ax, %H2		\n	movw	0xffff4, ax	; MDBH \n	movw	ax, %h2		\n	movw	0xffff6, ax	; MDBL \n	mov	a, #0xC1	; Set the DIVST bit in MDUC \n	mov	!0xf00e8, a	; This starts the division op \n1:	mov	a, !0xf00e8	; Wait 16 clocks or until DIVST is clear \n	bt	a.0, $1b	\n	movw    ax, 0xffff0	; Read the quotient \n	movw	%h0, ax		\n	movw    ax, 0xffff2	\n	movw	%H0, ax		\n  	movw	ax, !0xf00e0	; Read the remainder \n	movw	%h3, ax		\n	movw	ax, !0xf00e2	\n	movw	%H3, ax		\n	; end of udivmodsi macro";
      }
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=vYS,v,Wfr",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "viYS,Wfr,v",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=vYS,v,Wfr",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "viYS,Wfr,v",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    rl78_near_mem_operand,
    "=Y",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_near_mem_operand,
    "Y",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=vY,v,*Wfr,Y,*Wfr,*Wfr",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vInt8JY,*Wfr,vInt8J,*Wfr,Y,*Wfr",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    rl78_near_mem_operand,
    "=Y",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_near_mem_operand,
    "Y",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=vS,Y,v,*Wfr",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "viYS,viS,*Wfr,vi",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonfar_nonimm_operand,
    "=vm",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonfar_nonimm_operand,
    "=vY,*Wfr",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim,viY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_incdec_memory_operand,
    "=vm",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_incdec_memory_operand,
    "0",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_1_2_operand,
    "KLNO",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rl78_incdec_memory_operand,
    "=vm",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_incdec_memory_operand,
    "0",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_1_2_operand,
    "KLNO",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rl78_nonimmediate_operand,
    "=vY,S,*Wfr,vY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%viY,0,0viY,*Wfr",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim,i,viY,viY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=vY,S,*Wfr,vY",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%viY,0,0viY,*Wfr",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim,i,viY,viY",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=vY,S,*Wfr,vY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "viY,0,0viY,*Wfr",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim,i,viY,viY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=vY,S,*Wfr,vY",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "viY,0,0viY,*Wfr",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim,i,viY,viY",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rl78_nonfar_operand,
    "%vim",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_24_operand,
    "Ni",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rl78_nonfar_operand,
    "%vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=vm,*Wfr,vY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%vim,0viY,*Wfr",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim,viY,viY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=vm,*Wfr,vY",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%vim,0viY,*Wfr",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim,viY,viY",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonfar_nonimm_operand,
    "=vm",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonfar_operand,
    "vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonfar_nonimm_operand,
    "=vm",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonfar_operand,
    "vim",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,vU,&vU,v,&vU,&vU,v,&vU,v,&vU,&vU,vU,v,&vU,vU,vU,vU",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,vU,0,vWab,U,0,vU,0,vWab,U,vU,0,vU,vU,vU,0",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "M,K,K,Int3,Int3,Int3,Iv08,Iv08,Is09,Is09,Is09,Iv16,Is17,Is17,Iv24,Is25,iv",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,vU,&vU,v,&vU,&vU,v,&vU,v,&vU,&vU,v,U,v,&vU,v,U,v,U,vWab,vU,vU",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,vU,0,vWab,U,0,vU,0,vWab,U,vU,vU,0,vU,vU,vU,vU,vU,0,vWab,U",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "M,K,K,Int3,Int3,Int3,Iv08,Iv08,Is09,Is09,Is09,Iv16,Iv16,Is17,Is17,Iv24,Iv24,Is25,Is25,iv,iv,iv",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "vm",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "Wab,Wcv",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Wab,Wcv",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_signed,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "vi",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_real,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    rl78_general_operand,
    "vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_signed,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "vim",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "vi",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_real,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    rl78_general_operand,
    "vim",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "vim",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "vim",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "vi",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rl78_nonimmediate_operand,
    "=Rv,RaxbcWab,RaxbcWab,a,bcx,R,WabWd2WhlWh1WhbWbcWs1v,bcx,WsaWsf",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "0,K,M,RInt8sJvWabWdeWd2WhlWh1WhbWbcWs1,Wab,aInt8J,a,R,i",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=Rv,AB,AB,RSv,A,BDTvSWabWd2WdeWhlWh1WbcWs1,BDT,ABDT,v",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "0,K,M,i,BDTvSWabWd2WdeWh1WhlWbcWs1,A,BDT,vS,ABDT",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonfar_nonimm_operand,
    "=A,A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "0,viU",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Rv,A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "0,a",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=A,A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "x,a",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=RvWabWhlWh1Wsa,RvWabWhlWh1Wsa,a,*bcdehl,Wsa",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%0,0,0,0,0",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "K,L,RWhlWh1Wabi,a,i",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=vABDTWhlWh1WabWsa,vABDTWhlWh1WabWsa,v,v,A,S,S,A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%0,0,0,0,0,0,0,S",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "K,L,N,O,RWh1WhlWabiv,Int8Qs8,J,Ri",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "R",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=a,R,v",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "0,0,0",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "RiWabWhbWh1Whl,a,i",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=A,S",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "0,0",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "iBDTWabWh1v,i",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A,A",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rl78_nonfar_operand,
    "0,0",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_24_operand,
    "N,i",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "%a",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "x",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=WsfWsaWhlWab,A,R,vWsa",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%0,0,0,0",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "IBqi,iRvWabWhbWh1Whl,A,i",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=WsfWsaWhlWab,A,R,vWsa",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%0,0,0,0",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "Ibqi,iRvWabWhbWh1Whl,A,i",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_nonimmediate_operand,
    "=A,R,vWsa",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "%0,0,0",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "iRvWabWhbWh1Whl,A,i",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=abc,a,a",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "0,0,0",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Int3,bc,dehl",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=AB,A,A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "0,0,0",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "P,bc,dehl",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "Wab,Wca",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v,v",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "Wab,Wca",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_signed,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "A,A,A,A,Wsa",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "M,ISqi,i,v,i",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_real,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    rl78_general_operand,
    "Wabvaxbc,a,vWsaWab,bcdehl",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "M,iRvWabWhlWh1Whb,i,a",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_signed,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "A,A,A,vR",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "IShi,i,v,1",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_real,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "A,A,vR",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "M,iBDTvWabWhlWh1,1",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_real,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "A,A",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "M,iBDTvWabWhlWh1",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_general_operand,
    "U,vWabWhlWh1",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_signed,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "vU,vU,vU,i,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "ISsi,i,v,S,v",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator_real,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "vUi",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "iWhlWh1v",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=A",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "n",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "ABDT,vZint",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=ABDT,vZint",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Z08W",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Z08W",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Z10W",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "vi",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "vi",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "vi",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=v,&vm,vm",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "0,vim,vim",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim,vim,vim",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=v,&vU,vU",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "+0,viU,viU",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "viWabWhlWh1,viWabWhlWh1,viWabWhlWh1",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&v",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "viU",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vi",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "viU",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vi",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&v",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "viU",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vi",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&v",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "viU",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "viU",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "v",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=v",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rl78_nonimmediate_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rl78_general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rl78_cmp_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=&vm",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "vim",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_DFmode,
    0,
    0,
    1,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:56 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:80 */
  {
    "movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsi },
    &operand_data[1],
    2,
    2,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:94 */
  {
    "movsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsf },
    &operand_data[3],
    2,
    2,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:36 */
  {
    "*movqi_virt_mm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.mov %0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[5],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:44 */
  {
    "*movqi_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.mov %0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[7],
    2,
    2,
    0,
    6,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:52 */
  {
    "*movhi_virt_mm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.movw %0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[9],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:60 */
  {
    "*movhi_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.movw %0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[11],
    2,
    2,
    0,
    4,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:68 */
  {
    "*bswaphi2_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.bswaphi\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:78 */
  {
    "*zero_extendqihi2_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.zero_extend\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[15],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:86 */
  {
    "*extendqihi2_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.sign_extend\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[15],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:96 */
  {
    "*incqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.inc\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[17],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:96 */
  {
    "*inchi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.inc\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[20],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:105 */
  {
    "*addqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.add\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[23],
    3,
    3,
    0,
    4,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:105 */
  {
    "*addhi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.add\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[26],
    3,
    3,
    0,
    4,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:114 */
  {
    "*subqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.sub\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[29],
    3,
    3,
    0,
    4,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:114 */
  {
    "*subhi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.sub\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[32],
    3,
    3,
    0,
    4,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:123 */
  {
    "*umulhi3_shift_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.mulu\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[35],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:132 */
  {
    "*umulqihi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.mulu\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[38],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:141 */
  {
    "*andqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.and\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:150 */
  {
    "*iorqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.or\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[41],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:159 */
  {
    "*xorqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.xor\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[44],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:170 */
  {
    "*ashlqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.shl\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:170 */
  {
    "*ashlhi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.shl\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[50],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:179 */
  {
    "*ashrqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.sar\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:179 */
  {
    "*ashrhi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.sar\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[50],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:188 */
  {
    "*lshrqi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.shr\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[47],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:188 */
  {
    "*lshrhi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.shr\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[50],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:203 */
  {
    "ashrsi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_28 },
#else
    { 0, output_28, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrsi3_virt },
    &operand_data[53],
    3,
    3,
    0,
    17,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:241 */
  {
    "lshrsi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_29 },
#else
    { 0, output_29, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrsi3_virt },
    &operand_data[53],
    3,
    3,
    0,
    17,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:279 */
  {
    "ashlsi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_30 },
#else
    { 0, output_30, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3_virt },
    &operand_data[56],
    3,
    3,
    0,
    22,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:323 */
  {
    "*indirect_jump_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.br\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[59],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:331 */
  {
    "*call_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.call\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[60],
    2,
    2,
    0,
    2,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:339 */
  {
    "*call_value_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.call\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[62],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:348 */
  {
    "*cbranchqi4_virt_signed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.cmp\t%1, %2\n\tv.b%C0\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[65],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:360 */
  {
    "*cbranchqi4_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.cmp\t%1, %2\n\tv.b%C0\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[69],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:372 */
  {
    "*cbranchhi4_virt_signed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.cmpw\t%1, %2\n\tv.b%C0\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[73],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:384 */
  {
    "*cbranchhi4_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.cmpw\t%1, %2\n\tv.b%C0\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[77],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:396 */
  {
    "*cbranchsi4_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.cmpd\t%1, %2\n\tv.b%C0\t%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[81],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-virt.md:442 */
  {
    "*negandhi3_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "v.nand\t%0, %1, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[85],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:40 */
  {
    "movqi_to_es",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\tes, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi_to_es },
    &operand_data[88],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:47 */
  {
    "movqi_from_es",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%0, es",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi_from_es },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:54 */
  {
    "movqi_cs",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\tcs, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi_cs },
    &operand_data[88],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:61 */
  {
    "*movqi_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_43 },
#else
    { 0, output_43, 0 },
#endif
    { 0 },
    &operand_data[90],
    2,
    2,
    0,
    9,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:77 */
  {
    "*movhi_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_44 },
#else
    { 0, output_44, 0 },
#endif
    { 0 },
    &operand_data[92],
    2,
    2,
    0,
    9,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:93 */
  {
    "*bswaphi2_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_45 },
#else
    { 0, output_45, 0 },
#endif
    { 0 },
    &operand_data[94],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:104 */
  {
    "*zero_extendqihi2_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_46 },
#else
    { 0, output_46, 0 },
#endif
    { 0 },
    &operand_data[96],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:113 */
  {
    "*extendqihi2_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    { 0 },
    &operand_data[98],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:124 */
  {
    "*addqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    { 0 },
    &operand_data[100],
    3,
    3,
    0,
    5,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:139 */
  {
    "*addhi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_49 },
#else
    { 0, output_49, 0 },
#endif
    { 0 },
    &operand_data[103],
    3,
    3,
    0,
    8,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:157 */
  {
    "*addqihi3a_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%q0, %q1 \n\taddc\t%Q0, #0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[106],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:167 */
  {
    "*subqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[109],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:177 */
  {
    "*subhi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "subw\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[112],
    3,
    3,
    0,
    2,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:187 */
  {
    "*umulhi3_shift_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_53 },
#else
    { 0, output_53, 0 },
#endif
    { 0 },
    &operand_data[115],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:197 */
  {
    "*umulqihi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulu\t%2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[118],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:205 */
  {
    "*andqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_55 },
#else
    { 0, output_55, 0 },
#endif
    { 0 },
    &operand_data[121],
    3,
    3,
    0,
    4,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:219 */
  {
    "*iorqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_56 },
#else
    { 0, output_56, 0 },
#endif
    { 0 },
    &operand_data[124],
    3,
    3,
    0,
    4,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:233 */
  {
    "*xorqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[127],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:245 */
  {
    "*ashlqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_58 },
#else
    { 0, output_58, 0 },
#endif
    { 0 },
    &operand_data[130],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:258 */
  {
    "*ashlhi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_59 },
#else
    { 0, output_59, 0 },
#endif
    { 0 },
    &operand_data[133],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:273 */
  {
    "*ashrqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_60 },
#else
    { 0, output_60, 0 },
#endif
    { 0 },
    &operand_data[130],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:286 */
  {
    "*ashrhi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_61 },
#else
    { 0, output_61, 0 },
#endif
    { 0 },
    &operand_data[133],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:301 */
  {
    "*lshrqi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_62 },
#else
    { 0, output_62, 0 },
#endif
    { 0 },
    &operand_data[130],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:314 */
  {
    "*lshrhi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_63 },
#else
    { 0, output_63, 0 },
#endif
    { 0 },
    &operand_data[133],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:329 */
  {
    "*indirect_jump_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "br\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[136],
    1,
    1,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:336 */
  {
    "jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "br\t!!%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_jump },
    &operand_data[61],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:344 */
  {
    "*call_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_66 },
#else
    { 0, output_66, 0 },
#endif
    { 0 },
    &operand_data[137],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:373 */
  {
    "*call_value_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_67 },
#else
    { 0, output_67, 0 },
#endif
    { 0 },
    &operand_data[139],
    3,
    3,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:403 */
  {
    "*cbranchqi4_real_signed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_68 },
#else
    { 0, 0, output_68 },
#endif
    { 0 },
    &operand_data[142],
    4,
    4,
    0,
    5,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:427 */
  {
    "*cbranchqi4_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_69 },
#else
    { 0, 0, output_69 },
#endif
    { 0 },
    &operand_data[146],
    4,
    4,
    0,
    4,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:448 */
  {
    "*cbranchhi4_real_signed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_70 },
#else
    { 0, output_70, 0 },
#endif
    { 0 },
    &operand_data[150],
    4,
    4,
    0,
    4,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:464 */
  {
    "cbranchhi4_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_71 },
#else
    { 0, 0, output_71 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchhi4_real },
    &operand_data[154],
    4,
    4,
    0,
    3,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:490 */
  {
    "cbranchhi4_real_inverted",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_72 },
#else
    { 0, 0, output_72 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchhi4_real_inverted },
    &operand_data[158],
    4,
    4,
    0,
    2,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:507 */
  {
    "*cbranchsi4_real_lt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_73 },
#else
    { 0, output_73, 0 },
#endif
    { 0 },
    &operand_data[162],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:521 */
  {
    "*cbranchsi4_real_ge",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_74 },
#else
    { 0, output_74, 0 },
#endif
    { 0 },
    &operand_data[162],
    2,
    2,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:535 */
  {
    "*cbranchsi4_real_signed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_75 },
#else
    { 0, output_75, 0 },
#endif
    { 0 },
    &operand_data[164],
    4,
    4,
    0,
    5,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:554 */
  {
    "*cbranchsi4_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movw\tax, %H1\n\t cmpw\tax, %H2\n\t movw\tax, %h1\n\t sknz\n\t cmpw\tax, %h2\n\t sk%C0\n\t br\t!!%3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[168],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:593 */
  {
    "bf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bt\tA.%B0, $1f\n\tbr !!%1\n\t1:",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bf },
    &operand_data[172],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:605 */
  {
    "bt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bf\tA.%B0, $1f\n\tbr !!%1\n\t1:",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bt },
    &operand_data[172],
    2,
    2,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-real.md:682 */
  {
    "*negandhi3_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor a, #0xff @ xch a, x @ xor a, #0xff @ xch a, x @ addw ax, #1 @ and a, %Q2 @ xch a, x @ and a, %q2 @ xch a, x",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[174],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:92 */
  {
    "rl78_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ret",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rl78_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:98 */
  {
    "interrupt_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "reti",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_interrupt_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:104 */
  {
    "brk_interrupt_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "retb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_brk_interrupt_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:120 */
  {
    "push",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_83 },
#else
    { 0, output_83, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_push },
    &operand_data[177],
    1,
    1,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:132 */
  {
    "pop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_84 },
#else
    { 0, output_84, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pop },
    &operand_data[178],
    1,
    1,
    0,
    2,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:144 */
  {
    "sel_rb",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sel\trb%u0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sel_rb },
    &operand_data[179],
    1,
    1,
    0,
    0,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:150 */
  {
    "trampoline_init",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "call !!___trampoline_init ; %0 <= %1 %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_trampoline_init },
    &operand_data[180],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:160 */
  {
    "trampoline_uninit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "call !!___trampoline_uninit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_trampoline_uninit },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:185 */
  {
    "nonlocal_goto_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; nonlocal goto\n\
	movw	ax, %3\n\
	movw	r22, ax\n\
	movw	ax, %2\n\
	movw	sp, ax\n\
	movw	ax, %1\n\
	br	ax\n\
",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nonlocal_goto_insn },
    &operand_data[183],
    4,
    4,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:237 */
  {
    "addsi3_internal_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_internal_virt },
    &operand_data[187],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:249 */
  {
    "addsi3_internal_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_90 },
#else
    { 0, 0, output_90 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_internal_real },
    &operand_data[190],
    3,
    3,
    0,
    3,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:281 */
  {
    "subsi3_internal_virt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_internal_virt },
    &operand_data[187],
    3,
    3,
    0,
    3,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:293 */
  {
    "subsi3_internal_real",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_internal_real },
    &operand_data[190],
    3,
    3,
    0,
    3,
    2
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:350 */
  {
    "*mulqi3_rl78",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; mulqi macro %0 = %1 * %2\n\
	mov    a, %h1\n\
	mov    x, a\n\
	mov    a, %h2\n\
	mulu   x ; ax = a * x\n\
	mov    a, x\n\
	mov    %h0, a\n\
	; end of mulqi macro",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[193],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:368 */
  {
    "mulhi3_g14",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; G14 mulhi macro %0 = %1 * %2\n\
	movw    ax, %h1\n\
	movw    bc, %h2\n\
	mulhu   ; bcax = bc * ax\n\
	movw    %h0, ax\n\
	; end of mulhi macro",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhi3_g14 },
    &operand_data[196],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:385 */
  {
    "mulhi3_g13",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; G13 mulhi macro %0 = %1 * %2\n\
	mov     a, #0x00\n\
	mov     !0xf00e8, a     ; MDUC\n\
	movw    ax, %h1\n\
	movw    0xffff0, ax     ; MDAL\n\
	movw    ax, %h2\n\
	movw    0xffff2, ax     ; MDAH\n\
	nop     ; mdb = mdal * mdah\n\
	movw    ax, 0xffff6     ; MDBL\n\
	movw    %h0, ax\n\
        ; end of mulhi macro",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhi3_g13 },
    &operand_data[196],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:410 */
  {
    "mulsi3_g14",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; G14 mulsi macro %0 = %1 * %2\n\
	movw	ax, %h1\n\
	movw	bc, %h2\n\
	MULHU	; bcax = bc * ax\n\
	movw	%h0, ax\n\
	movw	ax, bc\n\
	movw	0xffff0, ax\n\
	movw	ax, %H1\n\
	movw	bc, %h2\n\
	MACHU	; MACR += bc * ax\n\
	movw	ax, %h1\n\
	movw	bc, %H2\n\
	MACHU	; MACR += bc * ax\n\
	movw	ax, 0xffff0\n\
	movw	%H0, ax\n\
	; end of mulsi macro",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_g14 },
    &operand_data[199],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:442 */
  {
    "mulsi3_g13",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; G13 mulsi macro %0 = %1 * %2\n\
	mov	a, #0x00\n\
	mov	!0xf00e8, a	; MDUC\n\
	movw	ax, %h1\n\
	movw	0xffff0, ax	; MDAL\n\
	movw	ax, %h2\n\
	movw	0xffff2, ax	; MDAH\n\
	nop	; mdb = mdal * mdah\n\
	movw	ax, 0xffff6	; MDBL\n\
	movw	%h0, ax\n\
\n\
	mov	a, #0x40\n\
	mov	!0xf00e8, a	; MDUC\n\
	movw	ax, 0xffff4	; MDBH\n\
	movw	!0xf00e0, ax	; MDCL\n\
	movw	ax, #0\n\
	movw	!0xf00e2, ax	; MDCL\n\
	movw	ax, %H1\n\
	movw	0xffff0, ax	; MDAL\n\
	movw	ax, %h2\n\
	movw	0xffff2, ax	; MDAH\n\
	nop	; mdc += mdal * mdah\n\
\n\
	mov	a, #0x40\n\
	mov	!0xf00e8, a	; MDUC\n\
	movw	ax, %h1\n\
	movw	0xffff0, ax	; MDAL\n\
	movw	ax, %H2\n\
	movw	0xffff2, ax	; MDAH\n\
	nop	; mdc += mdal * mdah\n\
	nop	; Additional nop for MAC\n\
	movw	ax, !0xf00e0	; MDCL\n\
	movw	%H0, ax\n\
	; end of mulsi macro",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_g13 },
    &operand_data[202],
    3,
    3,
    0,
    1,
    1
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:503 */
  {
    "*udivmodhi4_g14",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_98 },
#else
    { 0, 0, output_98 },
#endif
    { 0 },
    &operand_data[205],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:570 */
  {
    "udivmodsi4_g14",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_99 },
#else
    { 0, 0, output_99 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4_g14 },
    &operand_data[209],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:640 */
  {
    "udivmodsi4_g13",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_100 },
#else
    { 0, 0, output_100 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4_g13 },
    &operand_data[209],
    4,
    4,
    2,
    1,
    3
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:23 */
  {
    "movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi },
    &operand_data[213],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:56 */
  {
    "movhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movhi },
    &operand_data[215],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:108 */
  {
    "bswaphi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswaphi2 },
    &operand_data[215],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:118 */
  {
    "zero_extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqihi2 },
    &operand_data[217],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:126 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqihi2 },
    &operand_data[217],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:136 */
  {
    "addqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addqi3 },
    &operand_data[219],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:136 */
  {
    "addhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addhi3 },
    &operand_data[222],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:146 */
  {
    "subqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subqi3 },
    &operand_data[219],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:146 */
  {
    "subhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subhi3 },
    &operand_data[222],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:156 */
  {
    "negqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negqi2 },
    &operand_data[213],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:156 */
  {
    "neghi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_neghi2 },
    &operand_data[215],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:166 */
  {
    "umulqihi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulqihi3 },
    &operand_data[225],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:174 */
  {
    "andqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andqi3 },
    &operand_data[228],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:184 */
  {
    "iorqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorqi3 },
    &operand_data[228],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:194 */
  {
    "xorqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorqi3 },
    &operand_data[228],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:204 */
  {
    "one_cmplqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplqi2 },
    &operand_data[213],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:216 */
  {
    "ashlqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlqi3 },
    &operand_data[219],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:216 */
  {
    "ashlhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlhi3 },
    &operand_data[231],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:226 */
  {
    "ashrqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrqi3 },
    &operand_data[219],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:226 */
  {
    "ashrhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrhi3 },
    &operand_data[231],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:236 */
  {
    "lshrqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrqi3 },
    &operand_data[219],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:236 */
  {
    "lshrhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrhi3 },
    &operand_data[231],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:246 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrsi3 },
    &operand_data[234],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:256 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrsi3 },
    &operand_data[234],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:266 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3 },
    &operand_data[234],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:278 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump },
    &operand_data[215],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:285 */
  {
    "call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call },
    &operand_data[237],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:292 */
  {
    "call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value },
    &operand_data[239],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:300 */
  {
    "cbranchqi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchqi4 },
    &operand_data[242],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:311 */
  {
    "cbranchhi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchhi4 },
    &operand_data[246],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:322 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4 },
    &operand_data[250],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:74 */
  {
    "prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prologue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:80 */
  {
    "epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:86 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:110 */
  {
    "eh_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_eh_return },
    &operand_data[254],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:171 */
  {
    "nonlocal_goto",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nonlocal_goto },
    &operand_data[255],
    4,
    4,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:204 */
  {
    "es_addr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_es_addr },
    &operand_data[254],
    1,
    1,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:217 */
  {
    "addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3 },
    &operand_data[259],
    3,
    3,
    0,
    1,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:227 */
  {
    "adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3 },
    &operand_data[262],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:261 */
  {
    "subsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3 },
    &operand_data[265],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:271 */
  {
    "subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3 },
    &operand_data[262],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:308 */
  {
    "mulqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulqi3 },
    &operand_data[268],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:320 */
  {
    "mulhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhi3 },
    &operand_data[271],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:335 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3 },
    &operand_data[274],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:488 */
  {
    "udivmodhi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodhi4 },
    &operand_data[277],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:551 */
  {
    "udivmodsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivmodsi4 },
    &operand_data[281],
    4,
    4,
    2,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:722 */
  {
    "movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdi },
    &operand_data[262],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:730 */
  {
    "movdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdf },
    &operand_data[285],
    2,
    2,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:738 */
  {
    "umindi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umindi3 },
    &operand_data[262],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:748 */
  {
    "umaxdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxdi3 },
    &operand_data[262],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:758 */
  {
    "smindi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smindi3 },
    &operand_data[262],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:768 */
  {
    "smaxdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxdi3 },
    &operand_data[262],
    3,
    3,
    0,
    0,
    0
  },
  /* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:778 */
  {
    "anddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_anddi3 },
    &operand_data[262],
    3,
    3,
    0,
    0,
    0
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
