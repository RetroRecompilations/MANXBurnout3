#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E09E0
 * Original: 0x001E09E0 - 0x001E0A02 (34 bytes, 12 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E09E0(void)
{

loc_001E09E0:
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x1C);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edi + 0x20);
    MEM32(edx + 4) = eax;
    PUSH32(esp, 0); sub_001E0980(); /* call 0x001E0980 */

loc_001E09FB:
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
