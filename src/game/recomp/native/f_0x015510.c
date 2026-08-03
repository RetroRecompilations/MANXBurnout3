#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00015510
 * Original: 0x00015510 - 0x0001552D (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015510(void)
{

loc_00015510:
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    ecx = ecx << 0x10;
    esi = esi + edx;
    ecx = ecx + esi;
    MEM32(eax) = ecx;
    ecx = ecx + edx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
