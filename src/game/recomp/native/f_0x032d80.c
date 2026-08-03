#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00032D80
 * Original: 0x00032D80 - 0x00032DBB (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032D80(void)
{

loc_00032D80:
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(0x4D1FE0);
    MEM32(0x45D128) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x3AAF38);
    MEM32(0x45D138) = ecx;
    MEM32(0x45D164) = edx;
    MEM32(0x45D174) = eax;
    MEM32(0x45D18C) = eax;
    PUSH32(esp, 0); sub_0002DDF0(); /* call 0x0002DDF0 */

loc_00032DB2:
    MEM32(0x45D184) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
