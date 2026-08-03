#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000F9CE0
 * Original: 0x000F9CE0 - 0x000FA4DC (2044 bytes, 419 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000F9CE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    memcpy(xmm1.b, (void *)XBOX_PTR(0x5579B0), 16); /* movaps */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
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
    memcpy((void *)XBOX_PTR(esp + 0x48), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x5579A0), 16); /* movaps */
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
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    PUSH32(esp, esi);
    eax = esp + 0x5C;
    ecx = esp + 0x4C;
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x30) = ecx;
    esi = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x38);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = MEMF((esi) + 0);
    float _d1 = xmm0.f[1];
    float _s1 = MEMF((esi) + 4);
    float _d2 = xmm0.f[2];
    float _s2 = MEMF((esi) + 8);
    float _d3 = xmm0.f[3];
    float _s3 = MEMF((esi) + 12);
    xmm0.f[0] = _d0 - _s0;
    xmm0.f[1] = _d1 - _s1;
    xmm0.f[2] = _d2 - _s2;
    xmm0.f[3] = _d3 - _s3;
    } /* subps */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    {
    float _d0 = xmm1.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm1.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm1.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm1.f[3];
    float _s3 = xmm1.f[3];
    xmm1.f[0] = _d0;
    xmm1.f[1] = _d0;
    xmm1.f[2] = _s0;
    xmm1.f[3] = _s0;
    } /* shufps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm0.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm0.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm0.f[3];
    float _s3 = xmm1.f[3];
    xmm0.f[0] = _d0 * _s0;
    xmm0.f[1] = _d1 * _s1;
    xmm0.f[2] = _d2 * _s2;
    xmm0.f[3] = _d3 * _s3;
    } /* mulps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = MEMF((esi) + 0);
    float _d1 = xmm0.f[1];
    float _s1 = MEMF((esi) + 4);
    float _d2 = xmm0.f[2];
    float _s2 = MEMF((esi) + 8);
    float _d3 = xmm0.f[3];
    float _s3 = MEMF((esi) + 12);
    xmm0.f[0] = _d0 + _s0;
    xmm0.f[1] = _d1 + _s1;
    xmm0.f[2] = _d2 + _s2;
    xmm0.f[3] = _d3 + _s3;
    } /* addps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x44);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    esi = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x74) = eax;
    eax = esp + 0x30;
    xmm0.f[0] = MEMF(eax); /* movss */
    {
    float _d0 = xmm0.f[0];
    float _s0 = xmm0.f[0];
    float _d1 = xmm0.f[1];
    float _s1 = xmm0.f[1];
    float _d2 = xmm0.f[2];
    float _s2 = xmm0.f[2];
    float _d3 = xmm0.f[3];
    float _s3 = xmm0.f[3];
    xmm0.f[0] = _d0;
    xmm0.f[1] = _d0;
    xmm0.f[2] = _s0;
    xmm0.f[3] = _s0;
    } /* shufps */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    {
    float _d0 = xmm3.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm3.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm3.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm3.f[3];
    float _s3 = xmm1.f[3];
    xmm3.f[0] = _d0 + _s0;
    xmm3.f[1] = _d1 + _s1;
    xmm3.f[2] = _d2 + _s2;
    xmm3.f[3] = _d3 + _s3;
    } /* addps */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
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
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi); /* mulss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x5726C8); /* movss */
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(esp + 0x24);
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    MEM32(esp + 0x28) = ecx;
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x2C) = edx;
    xmm6.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x30) = eax;
    xmm4.f[0] = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(ebx);
    xmm5.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(0x49FB90) = ecx;
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16C0); /* mulss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ebx + 4);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(0x49FB94) = edx;
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx); /* addss */
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebx + 4); /* addss */
    eax = MEM32(esp + 0x18);
    xmm3.f[0] = MEMF(0x49FB90); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(0x49FB94); /* movss */
    MEM32(0x49FBA8) = eax;
    xmm7.f[0] = MEMF(0x49FBA8); /* movss */
    MEM32(0x49FBAC) = ecx;
    xmm1.f[0] = MEMF(0x49FBAC); /* movss */
    MEMF(0x49FBA0) = xmm7.f[0]; /* movss */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    MEMF(0x49FB98) = xmm3.f[0]; /* movss */
    MEMF(0x49FB9C) = xmm1.f[0]; /* movss */
    MEMF(0x49FBA4) = xmm7.f[0]; /* movss */
    eax = MEM32(esi + 8);
    if (TEST_Z(LO8(eax), 1)) goto loc_000F9FB8; /* je: equal / zero */

loc_000F9EED:
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    eax = eax & 3;
    if (CMP_NE(LO8(eax), 3)) goto loc_000F9F19; /* jne: not equal / not zero */

loc_000F9EF8:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x557980), 16); /* movaps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm0.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm0.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm0.f[3];
    float _s3 = xmm1.f[3];
    xmm0.f[0] = _d0 * _s0;
    xmm0.f[1] = _d1 * _s1;
    xmm0.f[2] = _d2 * _s2;
    xmm0.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy((void *)XBOX_PTR(0x49FAD0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAE0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAF0), xmm0.b, 16); /* movaps */
    goto loc_000F9F69;

loc_000F9F19:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x557940), 16); /* movaps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm0.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm0.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm0.f[3];
    float _s3 = xmm1.f[3];
    xmm0.f[0] = _d0 * _s0;
    xmm0.f[1] = _d1 * _s1;
    xmm0.f[2] = _d2 * _s2;
    xmm0.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x4094A0), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    {
    float _d0 = xmm2.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm2.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm2.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm2.f[3];
    float _s3 = xmm1.f[3];
    xmm2.f[0] = _d0 * _s0;
    xmm2.f[1] = _d1 * _s1;
    xmm2.f[2] = _d2 * _s2;
    xmm2.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x4094B0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAD0), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    {
    float _d0 = xmm2.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm2.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm2.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm2.f[3];
    float _s3 = xmm1.f[3];
    xmm2.f[0] = _d0 * _s0;
    xmm2.f[1] = _d1 * _s1;
    xmm2.f[2] = _d2 * _s2;
    xmm2.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x4094C0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAE0), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    {
    float _d0 = xmm2.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm2.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm2.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm2.f[3];
    float _s3 = xmm1.f[3];
    xmm2.f[0] = _d0 * _s0;
    xmm2.f[1] = _d1 * _s1;
    xmm2.f[2] = _d2 * _s2;
    xmm2.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x4094D0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAF0), xmm2.b, 16); /* movaps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm0.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm0.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm0.f[3];
    float _s3 = xmm1.f[3];
    xmm0.f[0] = _d0 * _s0;
    xmm0.f[1] = _d1 * _s1;
    xmm0.f[2] = _d2 * _s2;
    xmm0.f[3] = _d3 * _s3;
    } /* mulps */

loc_000F9F69:
    PUSH32(esp, 0x49FAD0);
    edx = esp + 0x24;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = 0x49FB90;
    memcpy((void *)XBOX_PTR(0x49FB00), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_000F9F86:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x5C), 16); /* movaps */
    xmm0.f[0] = MEMF(0x49FB94); /* movss */
    xmm1.f[0] = MEMF(0x49FB9C); /* movss */
    xmm3.f[0] = MEMF(0x49FB90); /* movss */
    xmm4.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm5.f[0] = MEMF(esp + 0x40); /* movss */
    xmm6.f[0] = MEMF(esp + 0x38); /* movss */
    esp = esp + 0xC;

loc_000F9FB8:
    /* test MEM8(esi + 8), 0x10 - flags set for next jcc */
    xmm7.f[0] = MEMF(0x49FBA8); /* movss */
    if (TEST_Z(MEM8(esi + 8), 0x10)) goto loc_000FA10C; /* je: equal / zero */

loc_000F9FCA:
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(0x4094E0), 16); /* movaps */
    {
    float _d0 = xmm2.f[0];
    float _s0 = xmm1.f[0];
    float _d1 = xmm2.f[1];
    float _s1 = xmm1.f[1];
    float _d2 = xmm2.f[2];
    float _s2 = xmm1.f[2];
    float _d3 = xmm2.f[3];
    float _s3 = xmm1.f[3];
    xmm2.f[0] = _d0 * _s0;
    xmm2.f[1] = _d1 * _s1;
    xmm2.f[2] = _d2 * _s2;
    xmm2.f[3] = _d3 * _s3;
    } /* mulps */
    xmm1.f[0] = MEMF(esi + 0xC); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm2.b, 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x28); /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = eax;
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x2C) = ecx;
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x49FBAC); /* movss */
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x2C) = eax;
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(0x49FBA0); /* movss */
    MEM32(esp + 0x44) = ecx;
    MEM32(0x49FB5C) = ecx;
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(0x49FB54) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    ecx = esp + 0x20;
    PUSH32(esp, 2);
    MEM32(esp + 0x2C) = edx;
    xmm2.f[0] = MEMF(esp + 0x2C); /* movss */
    MEM32(esp + 0x44) = eax;
    MEM32(0x49FB58) = eax;
    MEMF(0x49FB64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, ecx);
    eax = 0x49FB50;
    ecx = esp + 0x98;
    MEMF(0x49FB50) = xmm1.f[0]; /* movss */
    MEMF(0x49FB60) = xmm2.f[0]; /* movss */
    MEMF(0x49FB68) = xmm1.f[0]; /* movss */
    MEMF(0x49FB6C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C75C0(); /* call 0x001C75C0 */

loc_000FA0E0:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x58), 16); /* movaps */
    xmm0.f[0] = MEMF(0x49FB94); /* movss */
    xmm1.f[0] = MEMF(0x49FB9C); /* movss */
    xmm3.f[0] = MEMF(0x49FB90); /* movss */
    xmm4.f[0] = MEMF(esp + 0x38); /* movss */
    xmm5.f[0] = MEMF(esp + 0x3C); /* movss */
    esp = esp + 8;

loc_000FA10C:
    eax = MEM32(esi + 8);
    ecx = eax;
    ecx = ecx & 0x20;
    if ((ecx == 0)) goto loc_000FA155; /* je: equal / zero */

loc_000FA116:
    memcpy(xmm6.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(0x5579A0), 16); /* movaps */
    memcpy(xmm2.b, xmm7.b, 16); /* movaps */
    {
    float _d0 = xmm7.f[0];
    float _s0 = xmm6.f[0];
    float _d1 = xmm7.f[1];
    float _s1 = xmm6.f[1];
    float _d2 = xmm7.f[2];
    float _s2 = xmm6.f[2];
    float _d3 = xmm7.f[3];
    float _s3 = xmm6.f[3];
    xmm7.f[0] = _d0 * _s0;
    xmm7.f[1] = _d1 * _s1;
    xmm7.f[2] = _d2 * _s2;
    xmm7.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm7.b, 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(0x5579A0), 16); /* movaps */
    {
    float _d0 = xmm7.f[0];
    float _s0 = xmm6.f[0];
    float _d1 = xmm7.f[1];
    float _s1 = xmm6.f[1];
    float _d2 = xmm7.f[2];
    float _s2 = xmm6.f[2];
    float _d3 = xmm7.f[3];
    float _s3 = xmm6.f[3];
    xmm7.f[0] = _d0 * _s0;
    xmm7.f[1] = _d1 * _s1;
    xmm7.f[2] = _d2 * _s2;
    xmm7.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm7.b, 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(0x5579A0), 16); /* movaps */
    {
    float _d0 = xmm2.f[0];
    float _s0 = xmm6.f[0];
    float _d1 = xmm2.f[1];
    float _s1 = xmm6.f[1];
    float _d2 = xmm2.f[2];
    float _s2 = xmm6.f[2];
    float _d3 = xmm2.f[3];
    float _s3 = xmm6.f[3];
    xmm2.f[0] = _d0 * _s0;
    xmm2.f[1] = _d1 * _s1;
    xmm2.f[2] = _d2 * _s2;
    xmm2.f[3] = _d3 * _s3;
    } /* mulps */
    {
    float _d0 = xmm7.f[0];
    float _s0 = xmm6.f[0];
    float _d1 = xmm7.f[1];
    float _s1 = xmm6.f[1];
    float _d2 = xmm7.f[2];
    float _s2 = xmm6.f[2];
    float _d3 = xmm7.f[3];
    float _s3 = xmm6.f[3];
    xmm7.f[0] = _d0 * _s0;
    xmm7.f[1] = _d1 * _s1;
    xmm7.f[2] = _d2 * _s2;
    xmm7.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm7.b, 16); /* movaps */

loc_000FA155:
    if (TEST_NZ(LO8(eax), 4)) goto loc_000FA161; /* jne: not equal / not zero */

loc_000FA159:
    if (TEST_Z(ecx, ecx)) goto loc_000FA4D5; /* je: equal / zero */

loc_000FA161:
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    xmm6.f[0] = MEMF(esp + 0x38); /* movss */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] - MEMF(esp + 0x38); /* subss */
    MEM32(0x49FB50) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(esp + 0x3C); /* movss */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    MEM32(0x49FB58) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x49FB54) = eax;
    eax = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x49FB98); /* movss */
    MEM32(0x49FB5C) = edx;
    memcpy(xmm7.b, xmm4.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEM32(0x49FB60) = eax;
    eax = MEM32(esp + 0x1C);
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x38); /* movss */
    MEM32(0x49FB64) = ecx;
    ecx = MEM32(esp + 0x18);
    memcpy(xmm7.b, xmm3.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    MEM32(0x49FB68) = edx;
    edx = MEM32(esp + 0x1C);
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    MEM32(0x49FB6C) = eax;
    eax = MEM32(esp + 0x18);
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm3.f[0]; /* subss */
    MEM32(0x49FB70) = ecx;
    ecx = MEM32(esp + 0x1C);
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    MEM32(0x49FB74) = edx;
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    xmm3.f[0] = xmm3.f[0] - xmm6.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEM32(0x49FB78) = eax;
    eax = MEM32(esp + 0x1C);
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEM32(0x49FB7C) = ecx;
    MEM32(0x49FB80) = edx;
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(0x49FB84) = eax;
    MEM32(0x49FB88) = ecx;
    MEM32(0x49FB8C) = edx;
    memcpy((void *)XBOX_PTR(0x49FAD0), xmm2.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    PUSH32(esp, 0x49FAD0);
    eax = esp + 0x24;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = 0x49FB50;
    memcpy((void *)XBOX_PTR(0x49FB10), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAE0), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB20), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAF0), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB30), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB00), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB40), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_000FA331:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x8C), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x6C), 16); /* movaps */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(0x49FAD0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAE0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAF0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB00), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0x49FAD0);
    memcpy((void *)XBOX_PTR(0x49FB10), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB20), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB30), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB40), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    ecx = esp + 0x44;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    eax = 0x49FB50;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_000FA3A3:
    xmm0.f[0] = MEMF(0x49FBA0); /* movss */
    eax = MEM32(0x49FB5C);
    ecx = MEM32(0x49FB68);
    edx = MEM32(0x49FB58);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x3C); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x49FBA4); /* movss */
    MEM32(0x49FB54) = eax;
    eax = MEM32(esp + 0x24);
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x48); /* subss */
    esp = esp + 0xC;
    MEM32(0x49FB58) = ecx;
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(0x49FB50) = edx;
    edx = MEM32(0x49FB6C);
    MEM32(0x49FB60) = eax;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x49FAD0);
    MEM32(0x49FB64) = ecx;
    MEM32(0x49FB5C) = edx;
    edx = MEM32(esp + 0x1C);
    ecx = esp + 0x24;
    MEM32(0x49FB6C) = eax;
    memcpy((void *)XBOX_PTR(0x49FAD0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x84), 16); /* movaps */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    eax = 0x49FB50;
    MEM32(0x49FB68) = edx;
    memcpy((void *)XBOX_PTR(0x49FAF0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB00), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_000FA47F:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x7C), 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAD0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FAE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x6C), 16); /* movaps */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(0x49FAF0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x49FB00), xmm0.b, 16); /* movaps */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    PUSH32(esp, 0x49FAD0);
    edx = esp + 0x44;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 0xC); /* movss */
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = 0x49FB50;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_000FA4D2:
    esp = esp + 0xC;

loc_000FA4D5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
