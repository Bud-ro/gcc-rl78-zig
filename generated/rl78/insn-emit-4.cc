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

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78.md:56 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:80 */
rtx
gen_movsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* /home/carson/git/gcc-rl78-zig/.zig-cache/gcc-rl78-build/gcc-14.2.0/gcc/config/rl78/rl78-expand.md:94 */
rtx
gen_movsf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

