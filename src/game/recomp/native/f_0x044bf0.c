#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00044BF0
 * Original: 0x00044BF0 - 0x00044CE5 (245 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044BF0(void)
{
    recomp_xmm_t xmm0, xmm1;

loc_00044BF0:
    xmm0.f[0] = MEMF(0x3B18C4); /* movss */
    ecx = MEM32(0x3AB028);
    edx = MEM32(0x3AB02C);
    xmm1.f[0] = MEMF(0x3B18C0); /* movss */
    MEMF(0x54F1A0) = xmm0.f[0]; /* movss */
    MEMF(0x54F1A4) = xmm0.f[0]; /* movss */
    MEMF(0x54F1A8) = xmm0.f[0]; /* movss */
    MEMF(0x54F1B0) = xmm0.f[0]; /* movss */
    MEMF(0x54F1B4) = xmm0.f[0]; /* movss */
    MEMF(0x54F1B8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B18BC); /* movss */
    MEMF(0x54F1BC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B18B8); /* movss */
    MEMF(0x54F1D4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1870); /* movss */
    MEM32(0x54F1C0) = ecx;
    SET_LO8(ecx, MEM8(0x3AB030));
    MEM32(0x54F1C4) = edx;
    MEMF(0x54F1D8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(0x54F1AC) = xmm1.f[0]; /* movss */
    MEM8(0x54F1C8) = LO8(ecx);
    MEM32(0x54F1CC) = 0;
    MEM32(0x54F1D0) = 1;
    MEMF(0x54F1DC) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x8A08) = 0x20;
    edx = eax + 0x8A0C;
    MEM32(eax + 0x8A00) = edx;
    MEM32(eax + 0x8B14) = 0xFFFFFFFFu;
    MEM32(0x46076C) = 0x2B9D6F8;
    MEM32(0x460768) = 0xFD462907u;
    esp += 4; return; /* ret */

}
