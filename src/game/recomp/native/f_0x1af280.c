#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AF280
 * Original: 0x001AF280 - 0x001AF97C (1788 bytes, 428 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001AF280:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm6.f[0] = MEMF(0x3B1688); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    edx = esp + 0x38;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(esi); /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = MEM32(ebp + 8);
    edx = esp + 0xC;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* addps: xmm4.f[0] += xmm3.f[0] (packed 4xfloat) */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    edx = ecx + 0x20;
    esi = esp + 0xC;
    xmm5.f[0] = MEMF(esi); /* movss */
    /* shufps xmm5, xmm5, 0 */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    esi = esp + 0xC;
    xmm5.f[0] = MEMF(esi); /* movss */
    /* shufps xmm5, xmm5, 0 */
    /* mulps: xmm3.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    esi = esp + 0xC;
    xmm3.f[0] = MEMF(esi); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    esi = esp + 0xC;
    xmm5.f[0] = MEMF(esi); /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* shufps xmm3, xmm3, 0 */
    /* shufps xmm5, xmm5, 0 */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    ecx = esp + 0x50;
    esi = 4;

loc_001AF3B5:
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm6.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    /* addps: xmm7.f[0] += xmm6.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx), xmm7.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    /* addps: xmm6.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx + 0x40), xmm6.b, 16); /* movaps */
    ecx = ecx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_001AF3B5; /* jne: not equal / not zero */

loc_001AF3DD:
    xmm0.f[0] = MEMF(edx); /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    esi = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 8); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0xC;
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x24);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x28);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = esi;
    ecx = 0x80000000u;
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0xC) = ecx;
    esi = MEM32(esp + 0x3C);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x40) = esi;
    esi = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x44) = esi;
    esi = MEM32(esp + 0x18);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    MEM32(esp + 0x48) = esi;
    esi = MEM32(esp + 0x1C);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x4C) = esi;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0xC) = ecx;
    esi = MEM32(esp + 0x3C);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    ecx = eax + 0x10;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x2C);
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEM32(ecx + 0xC) = edx;
    /* shufps xmm0, xmm2, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xd2 */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    /* shufps xmm7, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm7.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm7.b, xmm3.b, 16); /* movaps */
    /* shufps xmm7, xmm3, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    ecx = 0x3832AC;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm0, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm3.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x50) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* shufps xmm1, xmm2, 0xd2 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    MEMF(eax + 0x30) = xmm3.f[0]; /* movss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0xA0) (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    memcpy(xmm7.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(eax + 0x54) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    MEMF(eax + 0x24) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* subps: xmm4.f[0] -= xmm7.f[0] (packed 4xfloat) */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    /* shufps xmm1, xmm4, 0xd2 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xd2 */
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0xc9 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* shufps xmm4, xmm3, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm5.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm0, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm3.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    MEMF(eax + 0x58) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* shufps xmm1, xmm2, 0xd2 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    MEMF(eax + 0x38) = xmm3.f[0]; /* movss */
    /* subps: xmm6.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    /* shufps xmm0, xmm6, 0xc9 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x48); /* movss */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    MEMF(eax + 0x2C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x5C) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
