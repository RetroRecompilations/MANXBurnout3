#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5A80
 * Original: 0x001B5A80 - 0x001B5ABC (60 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5A80(void)
{
    recomp_xmm_t xmm0;

loc_001B5A80:
    eax = MEM32(0x4A1EB4);
    xmm0.f[0] = MEMF(0x49C120); /* movss */
    edx = 0; /* xor self */
    MEM32(ecx + 0x14) = eax;
    eax = 1;
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(edx);
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
