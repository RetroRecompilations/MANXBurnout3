#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00130C80
 * Original: 0x00130C80 - 0x001314CB (2123 bytes, 548 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00130C80:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edx;
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x830), 16); /* movaps */
    edx = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x770), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x870), 16); /* movaps */
    edx = MEM32(ebp + 0x10);
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x7B0), 16); /* movaps */
    edx = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = MEM32(ebp + 0xC);
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(ebp + 0x2C);
    edx = MEM32(ebp + 0x10);
    xmm2.f[0] = MEMF(0x3B1684); /* movss */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x34);
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    eax = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x810), 16); /* movaps */
    ebx = MEM32(ebp + 0x48);
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    edx = esp + 0x10;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 0x28); /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    edx = esp + 0x10;
    xmm1.f[0] = MEMF(edx); /* movss */
    edx = MEM32(ebp + 8);
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x750), 16); /* movaps */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    edx = esp + 0x10;
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(esi + 0x2C); /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    edx = esp + 0x10;
    xmm3.f[0] = MEMF(edx); /* movss */
    edx = MEM32(ebp + 0x28);
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x850), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x1C), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x1C), xmm3.b, 16); /* movaps */
    xmm4.f[0] = MEMF(esp + 0x20); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm3.f[0] = MEMF(edx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(esi + 0x30); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x4C);
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    edx = esp + 0x14;
    xmm3.f[0] = MEMF(edx); /* movss */
    edx = MEM32(ebp + 0x10);
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x790), 16); /* movaps */
    edx = esp + 0x14;
    xmm2.f[0] = MEMF(edx); /* movss */
    edx = MEM32(ebp + 8);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    eax = esp + 0x14;
    xmm2.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ebp + 0x28);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(ebp + 0x10);
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm3.b, 16); /* movaps */
    xmm3.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(edx + 4) = xmm3.f[0]; /* movss */
    edx = MEM32(ebp + 0x14);
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x28); /* addss */
    ecx = MEM32(ebp + 0x2C);
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x2C); /* movss */
    eax = MEM32(ebp + 0x34);
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebp + 0x18);
    xmm1.f[0] = MEMF(esi + 0x30); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x34); /* addss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40AFA0);
    edx = esi;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_00130E9B:
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40AFB0);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_00130EAF:
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40AFC0);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_00130EC3:
    ecx = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x40AFD0);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_00130ED7:
    edx = MEM32(esi + 0x14);
    eax = MEM32(ebp + 0x18);
    xmm1.f[0] = MEMF(edx + 0x7F4); /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x20);
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x40);
    xmm0.f[0] = MEMF(eax + 0xE88); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xE98); /* subss */
    ecx = MEM32(esi + 0x18);
    xmm1.f[0] = MEMF(ecx + 0xA7C); /* movss */
    eax = MEM32(esi + 0x14);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x7E0), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + 0x720), 16); /* movaps */
    xmm5.f[0] = MEMF(0x3B1684); /* movss */
    edx = esp + 0x1C;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x7F0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    edx = ecx;
    xmm1.f[0] = MEMF(edx + 0x264); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0x164); /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16E8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 0xA70); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x28);
    ecx = esp + 0x1C;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm4.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x730), 16); /* movaps */
    eax = MEM32(esi + 0x18);
    /* addps: xmm1.f[0] += xmm4.f[0] (packed 4xfloat) */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x2C);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(eax + 0x224); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xA4); /* subss */
    eax = MEM32(esp + 0x20);
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esi + 0x10);
    edx = MEM32(edx + 0x40);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x28);
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEM32(esp + 0x38) = eax;
    xmm1.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0xE98); /* subss */
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x2C);
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 0xE98); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEM32(esp + 0x3C) = ecx;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    edx = MEM32(ebp + 0x38);
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    edx = esi;
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_001310F7:
    ecx = MEM32(ebp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_0013110B:
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_0013111F:
    edx = MEM32(ebp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_00131133:
    ecx = MEM32(ebp + 0x3C);
    eax = MEM32(ebp + 0x38);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = MEMF(0x3A69BC); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm1.f[0] > MEMF(esp + 0x1C))) goto loc_001311D1; /* ja: above (unsigned >) */

loc_00131186:
    edx = MEM32(ebp + 0x44);
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = MEM32(ebp + 0x40);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(esp + 0x1C))) goto loc_0013124F; /* jbe: below or equal (unsigned <=) */

loc_001311D1:
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_001311E2:
    ecx = MEM32(ebp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_001311F6:
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_0013120A:
    edx = MEM32(ebp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_00130B40(); /* call 0x00130B40 */

loc_0013121E:
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x40);
    xmm0.f[0] = MEMF(edx + 0xE84); /* movss */
    eax = MEM32(ebp + 0x38);
    ecx = MEM32(ebp + 0x3C);
    edx = MEM32(ebp + 0x40);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x44);
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x38);

loc_0013124F:
    esi = MEM32(ebp + 0x40);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ebp + 0x44);
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(0x3A69B4); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edi = esp + 0x1C;
    MEMF(edi) = xmm0.f[0]; /* movss */
    /* comiss xmm3.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    if ((xmm3.f[0] > MEMF(esp + 0x1C))) goto loc_001312FE; /* ja: above (unsigned >) */

loc_001312BF:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    edi = esp + 0x1C;
    MEMF(edi) = xmm0.f[0]; /* movss */
    /* comiss xmm3.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm3.f[0] <= MEMF(esp + 0x1C))) goto loc_0013135F; /* jbe: below or equal (unsigned <=) */

loc_001312FE:
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */

loc_0013135F:
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00131368:
    eax = MEM32(ebp + 0x1C);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x30) (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = MEMF(0x3A69BC); /* movss */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    /* comiss xmm4.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm4.f[0] > MEMF(esp + 0x1C))) goto loc_001313E1; /* ja: above (unsigned >) */

loc_001313B1:
    /* subps: xmm2.f[0] -= MEMF(esp + 0x20) (packed 4xfloat) */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x1C;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    /* comiss xmm4.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm4.f[0] <= MEMF(esp + 0x1C))) goto loc_00131410; /* jbe: below or equal (unsigned <=) */

loc_001313E1:
    ecx = MEM32(ebp + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = MEM32(ebp + 0x38);
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm1.f[0] = MEMF(ecx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16EC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16E8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_00131410:
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00131419:
    eax = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 0x3C);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(0x3A69BC); /* movss */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    /* comiss xmm3.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm3.f[0] > MEMF(esp + 0x1C))) goto loc_00131496; /* ja: above (unsigned >) */

loc_00131460:
    ecx = MEM32(ebp + 0x44);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0x1C;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    /* comiss xmm3.f[0], MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm3.f[0] <= MEMF(esp + 0x1C))) goto loc_001314C2; /* jbe: below or equal (unsigned <=) */

loc_00131496:
    ecx = MEM32(ebp + 0x20);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm1.f[0] = MEMF(ecx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16EC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16E8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */

loc_001314C2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 76; return; /* ret 72 */

}
