#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7420
 * Original: 0x001B7420 - 0x001B7447 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7420(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B7420:
    eax = 0; /* xor self */
    ecx = edx + 0x14;

loc_001B7425:
    if (CMP_EQ(MEM32(ecx), edi)) goto loc_001B743B; /* je: equal / zero */

loc_001B7429:
    eax++;
    ecx = ecx + 0x90;
    if (CMP_L(eax, 8)) goto loc_001B7425; /* jl: less (signed <) */

loc_001B7435:
    eax = 0; /* xor self */
    MEM32(eax + 0x18) = esi;
    esp += 4; return; /* ret */

loc_001B743B:
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + edx;
    MEM32(eax + 0x18) = esi;
    esp += 4; return; /* ret */

}
