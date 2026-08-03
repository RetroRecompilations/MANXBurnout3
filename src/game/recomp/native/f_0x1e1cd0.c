#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E1CD0
 * Original: 0x001E1CD0 - 0x001E1D2F (95 bytes, 29 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E1CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001E1CD0:
    PUSH32(esp, esi);
    esi = MEM32(0x7591D0);
    eax = MEM32(esi + 0x7592C0);
    edx = MEM32(eax);
    /* cmp edx, eax - flags set for next jcc */
    ecx = MEM32(esi + 0x7592C4);
    if (CMP_EQ(edx, eax)) goto loc_001E1D17; /* je: equal / zero */

loc_001E1CE9:
    if (CMP_NE(MEM32(ecx), ecx)) goto loc_001E1CFC; /* jne: not equal / not zero */

loc_001E1CED:
    MEM32(ecx) = edx;
    MEM32(edx + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    MEM32(edx) = ecx;
    goto loc_001E1D0C;

loc_001E1CFC:
    esi = MEM32(ecx + 4);
    MEM32(esi) = edx;
    MEM32(edx + 4) = esi;
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;

loc_001E1D0C:
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    esi = MEM32(0x7591D0);

loc_001E1D17:
    MEM32(esi + 0x7592C4) = eax;
    MEM32(esi + 0x7592C0) = ecx;
    MEM32(esi + 0x7592A8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
