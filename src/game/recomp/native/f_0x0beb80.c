#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000BEB80
 * Original: 0x000BEB80 - 0x000BEC0A (138 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BEB80(void)
{
    recomp_xmm_t xmm0, xmm1;

loc_000BEB80:
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    xmm1.f[0] = MEMF(0x3B189C); /* movss */
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    MEM32(0x557A54) = MEM32(0x557A54) + 3;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1898); /* movss */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(0x570088) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(0x57008C) = xmm0.f[0]; /* movss */
    MEMF(0x570090) = xmm1.f[0]; /* movss */
    MEMF(0x570094) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
