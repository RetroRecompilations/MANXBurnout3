#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000F96F0
 * Original: 0x000F96F0 - 0x000F9850 (352 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F96F0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000F96F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x90;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = MEMF(ecx + 0x10); /* movss */
    edx = MEM32(eax);
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x14); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    {
    float _d0 = xmm1.f[0];
    float _s0 = xmm0.f[0];
    float _d1 = xmm1.f[1];
    float _s1 = xmm0.f[1];
    float _d2 = xmm1.f[2];
    float _s2 = xmm0.f[2];
    float _d3 = xmm1.f[3];
    float _s3 = xmm0.f[3];
    xmm1.f[0] = _d0 * _s0;
    xmm1.f[1] = _d1 * _s1;
    xmm1.f[2] = _d2 * _s2;
    xmm1.f[3] = _d3 * _s3;
    } /* mulps */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(esp);
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 4);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x4C) = edx;
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    edx = MEM32(ecx + 4);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    ecx = esp + 8;
    {
    float _d0 = xmm2.f[0];
    float _s0 = xmm3.f[0];
    float _d1 = xmm2.f[1];
    float _s1 = xmm3.f[1];
    float _d2 = xmm2.f[2];
    float _s2 = xmm3.f[2];
    float _d3 = xmm2.f[3];
    float _s3 = xmm3.f[3];
    xmm2.f[0] = _d0 * _s0;
    xmm2.f[1] = _d1 * _s1;
    xmm2.f[2] = _d2 * _s2;
    xmm2.f[3] = _d3 * _s3;
    } /* mulps */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    eax = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7960(); /* call 0x001C7960 */

loc_000F9849:
    esp = esp + 0x10;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
