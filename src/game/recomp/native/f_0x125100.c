#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00125100
 * Original: 0x00125100 - 0x00125372 (626 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00125100:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x50;
    SET_LO8(ecx, MEM8(ebp + 8));
    /* test LO8(ecx), 8 - flags set for next jcc */
    eax = MEM32(esi + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    if (TEST_Z(LO8(ecx), 8)) goto loc_00125130; /* je: equal / zero */

loc_00125123:
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x1D0); /* subss */
    goto loc_00125140;

loc_00125130:
    if (TEST_Z(LO8(ecx), 4)) goto loc_00125160; /* je: equal / zero */

loc_00125135:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x1E0); /* subss */

loc_00125140:
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */

loc_00125160:
    if (TEST_NZ(LO8(ecx), 0x21)) goto loc_001251A7; /* jne: not equal / not zero */

loc_00125165:
    if (TEST_Z(LO8(ecx), 0x42)) goto loc_001251E4; /* je: equal / zero */

loc_0012516A:
    xmm1.f[0] = MEMF(esi + 0x1E8); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x41A500); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 0xC); /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    MEMF(ebp + 0xC) = xmm2.f[0]; /* movss */
    goto loc_001251E9;

loc_001251A7:
    xmm1.f[0] = MEMF(esi + 0x1D8); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x41A500); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ebp + 0xC); /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    MEMF(ebp + 0xC) = xmm2.f[0]; /* movss */
    goto loc_001251E9;

loc_001251E4:
    xmm2.f[0] = MEMF(ebp + 0xC); /* movss */

loc_001251E9:
    /* comiss xmm4.f[0], MEMF(eax + 0x14) - sets EFLAGS */
    if ((xmm4.f[0] <= MEMF(eax + 0x14))) goto loc_00125235; /* jbe: below or equal (unsigned <=) */

loc_001251EF:
    xmm1.f[0] = MEMF(esi + 0x1D4); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    edx = esp + 0xC;
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(0x3A5600); /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    eax = esp + 0xC;
    xmm3.f[0] = MEMF(eax); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */

loc_00125235:
    /* test LO8(ecx), 0xE0 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x41A504); /* movss */
    eax = MEM32(ebp + 0x10);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 0x1F0); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0xC;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    if (TEST_NZ(LO8(ecx), 0xE0)) goto loc_001252BF; /* jne: not equal / not zero */

loc_0012529C:
    eax = MEM32(esi + 0xCC4);
    SET_LO8(edx, MEM8(eax + 0x1015));
    SET_LO8(edx, LO8(edx) | 6);
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEM8(eax + 0x1015) = LO8(edx);
    goto loc_001252CB;

loc_001252BF:
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */

loc_001252CB:
    if (TEST_NZ(LO8(ecx), 0x90)) goto loc_001252FD; /* jne: not equal / not zero */

loc_001252D0:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x110), 16); /* movaps */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00106500(); /* call 0x00106500 */

loc_001252EC:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esi + 0x110), xmm0.b, 16); /* movaps */
    goto loc_0012530E;

loc_001252FD:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x110), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x110), xmm1.b, 16); /* movaps */

loc_0012530E:
    eax = MEM32(esi + 0xCC4);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    eax = eax + 0xFF0;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    edx = MEM32(esi + 0xCC4);
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(edx + 0xFFC) = xmm0.f[0]; /* movss */
    /* cmp MEM8(esi + 0x215), 1 - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    SET_LO8(ecx, (CMP_EQ(MEM8(esi + 0x215), 1)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x40F270);
    eax = esp + 0x18;
    MEM8(esi + 0x20E) = 0;
    PUSH32(esp, 0); sub_00151490(); /* call 0x00151490 */

loc_0012536C:
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
