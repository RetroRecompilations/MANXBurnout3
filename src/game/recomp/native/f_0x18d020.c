#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018D020
 * Original: 0x0018D020 - 0x0018D0D2 (178 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D020(void)
{
    recomp_xmm_t xmm0;

loc_0018D020:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = 0; /* xor self */
    MEM32(eax + 0x1970) = ecx;
    MEM32(eax + 0x1974) = ecx;
    MEM32(eax + 0x1980) = 8;
    MEM32(eax + 0x50) = ecx;
    MEM8(eax + 0x3D4) = LO8(ecx);
    MEM32(eax + 0x3A4) = ecx;
    MEM32(eax + 0x3A8) = ecx;
    MEMF(eax + 0x42C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x45C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x4BC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x394) = 0x2B9D6F8;
    MEM32(eax + 0x390) = 0xFD462907u;
    MEM32(eax + 0x1924) = ecx;
    MEM32(eax + 0x1360) = ecx;
    MEM32(eax + 0x1364) = ecx;
    MEM32(eax + 0x13B0) = ecx;
    MEM32(eax + 0x13B4) = ecx;
    MEM32(eax + 0x133C) = ecx;
    MEM32(eax + 0x1348) = ecx;
    edx = 1;
    MEM8(eax + 0x19AA) = LO8(edx);
    MEM32(eax + 0x19A4) = ecx;
    MEM32(eax + 0x18A0) = ecx;
    MEM32(eax + 0x197C) = ecx;
    MEM32(eax + 0x1978) = edx;
    esp += 4; return; /* ret */

}
