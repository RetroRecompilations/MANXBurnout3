#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00132950
 * Original: 0x00132950 - 0x00132D07 (951 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132950(void)
{
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00132950:
    xmm4.f[0] = MEMF(0x3B16CC); /* movss */
    MEMF(eax + 0x88) = xmm4.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(eax + 0xB8) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x104) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B17B0); /* movss */
    xmm1.f[0] = MEMF(0x3A3408); /* movss */
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(eax + 0x10C) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B17AC); /* movss */
    xmm2.f[0] = MEMF(0x3B174C); /* movss */
    MEMF(eax + 0x130) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B17A8); /* movss */
    MEMF(eax + 0x138) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B17A4); /* movss */
    MEMF(eax + 0x13C) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B17A0); /* movss */
    MEMF(eax + 0x140) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B179C); /* movss */
    MEMF(eax + 0x144) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1798); /* movss */
    MEMF(eax + 0x148) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1794); /* movss */
    MEMF(eax + 0x150) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1790); /* movss */
    MEMF(eax + 0x14C) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B178C); /* movss */
    MEMF(eax + 0x154) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1788); /* movss */
    MEMF(eax + 0x158) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x39CC00); /* movss */
    MEMF(eax + 0x8C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0xA8) = xmm3.f[0]; /* movss */
    MEMF(eax + 0xBC) = xmm3.f[0]; /* movss */
    MEMF(eax + 0xD8) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1784); /* movss */
    MEMF(eax + 0x160) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(eax + 0x98) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x94) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xA4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC4) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xD4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(eax + 0xD0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x108) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x118) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1780); /* movss */
    MEMF(eax + 0x120) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B177C); /* movss */
    MEMF(eax + 0x164) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1778); /* movss */
    MEMF(eax + 0x90) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x9C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xC0) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xCC) = xmm2.f[0]; /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + 0xE0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1694); /* movss */
    MEMF(eax + 0x11C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x124) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(eax + 0x168) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1774); /* movss */
    MEM8(eax) = 0;
    MEMF(eax + 0xE4) = xmm2.f[0]; /* movss */
    MEMF(eax + 0xE8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xEC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xF8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x100) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x128) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x12C) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x134) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1B8) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x190) = xmm1.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B1770); /* movss */
    xmm6.f[0] = MEMF(0x3A69C0); /* movss */
    MEMF(eax + 0x16C) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B176C); /* movss */
    MEMF(eax + 0x170) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1768); /* movss */
    MEMF(eax + 0x15C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1764); /* movss */
    MEMF(eax + 0x174) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1760); /* movss */
    MEMF(eax + 0x1A0) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B175C); /* movss */
    MEMF(eax + 0x188) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1758); /* movss */
    MEMF(eax + 0x19C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1754); /* movss */
    MEMF(eax + 0x1B4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1750); /* movss */
    MEMF(eax + 0x194) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(eax + 0x17C) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(eax + 0x178) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x3B1690); /* movss */
    MEMF(eax + 0x1A4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A5600); /* movss */
    MEMF(eax + 0x1BC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A35C4); /* movss */
    MEMF(eax + 0x198) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x180) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x184) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x18C) = xmm6.f[0]; /* movss */
    MEMF(eax + 0x1A8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1AC) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1B0) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C0) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x1C4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C8) = xmm5.f[0]; /* movss */
    MEMF(eax + 0x1CC) = xmm4.f[0]; /* movss */
    esp += 4; return; /* ret */

}
