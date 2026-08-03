#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014B3D0
 * Original: 0x0014B3D0 - 0x0014B5F3 (547 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014B3D0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0014B3D0:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = MEMF(0x3B18A8); /* movss */
    xmm2.f[0] = MEMF(0x3B16B4); /* movss */
    xmm3.f[0] = MEMF(0x3B16EC); /* movss */
    MEMF(esi + 0x7C4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x7C8) = xmm1.f[0]; /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM8(esi + 0x8C5) = LO8(ebx);
    MEM8(esi + 0x8C6) = LO8(ebx);
    MEM8(esi + 0x8C7) = LO8(ebx);
    MEM8(esi + 0x8CB) = LO8(ebx);
    MEM8(esi + 0x8CC) = LO8(ebx);
    MEM8(esi + 0x8CD) = LO8(ebx);
    MEM8(esi + 0x8C3) = LO8(ebx);
    MEM8(esi + 0x8C4) = LO8(ebx);
    MEM8(esi + 0x8CE) = LO8(ebx);
    MEM8(esi + 0x8CF) = LO8(ebx);
    eax = 0; /* xor self */
    MEM32(esi + 0x514) = eax;
    MEM32(esi + 0x518) = eax;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xF0) = ebx;
    MEM32(esi + 0xF4) = ebx;
    MEM32(esi + 0x130) = ebx;
    MEM32(esi + 0x134) = ebx;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x174) = ebx;
    MEMF(esi + 0x52C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A2D50); /* movss */
    MEMF(esi + 0x53C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1D34); /* movss */
    MEMF(esi + 0x534) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    MEMF(esi + 0x544) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(esi + 0x54C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x55C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esi + 0x550) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3A7950); /* movss */
    MEMF(esi + 0x554) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x56C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x574) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x528) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esi + 0x538) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1690); /* movss */
    MEMF(esi + 0x570) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x834) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x39CC00); /* movss */
    MEMF(esi + 0x530) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3A69C0); /* movss */
    MEMF(esi + 0x540) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esi + 0x838) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EC424); /* movss */
    eax = esi;
    MEMF(esi + 0x564) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x548) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x558) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x560) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x568) = xmm2.f[0]; /* movss */
    MEMF(esi + 0x83C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x884) = ebx;
    MEM8(esi + 0x8DC) = LO8(ebx);
    MEM32(esi + 0x888) = ebx;
    MEM8(esi + 0x8E2) = LO8(ebx);
    MEM8(esi + 0x8E3) = LO8(ebx);
    MEM32(esi + 0x87C) = ebx;
    PUSH32(esp, 0); sub_0014A710(); /* call 0x0014A710 */

loc_0014B5CF:
    eax = MEM32(0x3EC42C);
    MEM8(esi + 0x8D8) = LO8(ebx);
    MEM8(esi + 0x93E) = LO8(ebx);
    MEM32(esi) = 1;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0014B5F1; /* jne: not equal / not zero */

loc_0014B5EB:
    MEM32(0x3EC42C) = ebx;

loc_0014B5F1:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
