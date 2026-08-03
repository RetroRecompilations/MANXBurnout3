#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00114270
 * Original: 0x00114270 - 0x00114605 (917 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114270(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00114270:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(eax + 4);
    xmm2.f[0] = MEMF(ecx); /* movss */
    edx = MEM32(eax + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    MEMF(esp + 0x90) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 0x10); /* movss */
    MEMF(esp + 0x94) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 0x20); /* movss */
    MEMF(esp + 0x98) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 0x14); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 0x24); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x80) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 0x18); /* movss */
    MEMF(esp + 0x84) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(ecx + 0x28); /* movss */
    MEMF(esp + 0x88) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    edx = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    MEM32(esp + 0xC) = edx;
    edx = esp + 0x50;
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    MEM32(esp + 8) = edx;
    esi = MEM32(esp + 8);
    edi = MEM32(esp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xC0) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0xC4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xC8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xCC) = edx;
    edx = esp + 0x40;
    MEM32(esp + 8) = edx;
    edx = esp + 0x50;
    MEM32(esp + 0xC) = edx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xA0) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0xA4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xA8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xAC) = edx;
    edx = esp + 0x70;
    MEM32(esp + 8) = edx;
    edx = esp + 0x30;
    MEM32(esp + 0xC) = edx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xB0) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0xB4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xB8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xBC) = edx;
    edx = esp + 0x70;
    MEM32(esp + 8) = edx;
    edx = esp + 0x30;
    MEM32(esp + 0xC) = edx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0xD0) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0xD4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0xD8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xDC) = edx;
    edx = esp + 0x60;
    MEM32(esp + 8) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0xC) = edx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x80) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x84) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x88) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x8C) = edx;
    edx = esp + 0x60;
    MEM32(esp + 8) = edx;
    edx = esp + 0x20;
    MEM32(esp + 0xC) = edx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0xC8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC4); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC0); /* addss */
    edx = MEM32(esp + 0x90);
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xA8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xA4); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xA0); /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xB8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xB4); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xB0); /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xD8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xD4); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xD0); /* addss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x88); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x84); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x80); /* addss */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x94);
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0x18) = edx;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    edx = MEM32(esp + 0x9C);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm1.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    POP32(esp, edi);
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    MEM32(esp + 0x18) = edx;
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm1.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
