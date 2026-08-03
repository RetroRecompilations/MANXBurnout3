#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245156
 * Original: 0x00245156 - 0x0024516A (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245156(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00245156:
    PUSH32(esp, 0); sub_00245561(); /* call 0x00245561 */

loc_0024515B:
    if (CMP_EQ(MEM8(0x41D2D4), 0)) goto loc_00245169; /* je: equal / zero */

loc_00245164:
    g_seh_ebp = ebp; sub_0024A02A(); return; /* tail jmp 0x0024A02A */

loc_00245169:
    esp += 4; return; /* ret */

}
