#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD180
 * Original: 0x001CD180 - 0x001CD1F9 (121 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD180(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001CD180:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(eax + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x18) = ecx;
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x40) = 0xFFFFFFFFu;
    MEM8(eax + 0x44) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(ecx);
    MEM8(eax + 0x46) = LO8(ecx);
    esp += 4; return; /* ret */

}
