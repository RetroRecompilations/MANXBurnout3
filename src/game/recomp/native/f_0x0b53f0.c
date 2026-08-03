#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000B53F0
 * Original: 0x000B53F0 - 0x000B576A (890 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B53F0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000B53F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xBC;
    PUSH32(esp, esi);
    eax = MEM32(ebp + 0xC);
    ecx = ZX8(MEM8(eax));
    edx = ZX8(MEM8(eax + 1));
    xmm2.f[0] = MEMF(0x3B16AC); /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 2));
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 3));
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 4));
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 5));
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 6));
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax + 7));
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x28;
    xmm0.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    esi = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
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
    edx = esp + 0x28;
    xmm2.f[0] = MEMF(edx); /* movss */
    {
    float _d0 = xmm2.f[0];
    float _s0 = xmm2.f[0];
    float _d1 = xmm2.f[1];
    float _s1 = xmm2.f[1];
    float _d2 = xmm2.f[2];
    float _s2 = xmm2.f[2];
    float _d3 = xmm2.f[3];
    float _s3 = xmm2.f[3];
    xmm2.f[0] = _d0;
    xmm2.f[1] = _d0;
    xmm2.f[2] = _s0;
    xmm2.f[3] = _s0;
    } /* shufps */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    {
    float _d0 = xmm3.f[0];
    float _s0 = xmm0.f[0];
    float _d1 = xmm3.f[1];
    float _s1 = xmm0.f[1];
    float _d2 = xmm3.f[2];
    float _s2 = xmm0.f[2];
    float _d3 = xmm3.f[3];
    float _s3 = xmm0.f[3];
    xmm3.f[0] = _d0 * _s0;
    xmm3.f[1] = _d1 * _s1;
    xmm3.f[2] = _d2 * _s2;
    xmm3.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = xmm3.f[0];
    float _d1 = xmm0.f[1];
    float _s1 = xmm3.f[1];
    float _d2 = xmm0.f[2];
    float _s2 = xmm3.f[2];
    float _d3 = xmm0.f[3];
    float _s3 = xmm3.f[3];
    xmm0.f[0] = _d0 * _s0;
    xmm0.f[1] = _d1 * _s1;
    xmm0.f[2] = _d2 * _s2;
    xmm0.f[3] = _d3 * _s3;
    } /* mulps */
    xmm3.f[0] = MEMF(esi + 8); /* movss */
    {
    float _d0 = xmm1.f[0];
    float _s0 = xmm2.f[0];
    float _d1 = xmm1.f[1];
    float _s1 = xmm2.f[1];
    float _d2 = xmm1.f[2];
    float _s2 = xmm2.f[2];
    float _d3 = xmm1.f[3];
    float _s3 = xmm2.f[3];
    xmm1.f[0] = _d0 * _s0;
    xmm1.f[1] = _d1 * _s1;
    xmm1.f[2] = _d2 * _s2;
    xmm1.f[3] = _d3 * _s3;
    } /* mulps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    {
    float _d0 = xmm1.f[0];
    float _s0 = xmm2.f[0];
    float _d1 = xmm1.f[1];
    float _s1 = xmm2.f[1];
    float _d2 = xmm1.f[2];
    float _s2 = xmm2.f[2];
    float _d3 = xmm1.f[3];
    float _s3 = xmm2.f[3];
    xmm1.f[0] = _d0 * _s0;
    xmm1.f[1] = _d1 * _s1;
    xmm1.f[2] = _d2 * _s2;
    xmm1.f[3] = _d3 * _s3;
    } /* mulps */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esi + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(esp + 0x50) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    xmm3.f[0] = MEMF(esi + 0xC); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi); /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x28) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esi);
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 4); /* addss */
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x10);
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    edx = esp + 0x70;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, 4);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_000B55D5:
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    xmm1.f[0] = MEMF(esp + 0x5C); /* movss */
    xmm2.f[0] = MEMF(esp + 0x60); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x3C) = ecx;
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x40) = edx;
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x58) = ecx;
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    esp = esp + 0xC;
    MEM32(esp + 0x48) = eax;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    edx = esp + 0x10;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    ecx = esp + 0x68;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7C90(); /* call 0x001C7C90 */

loc_000B5686:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x68), 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x58); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x78), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x88), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB8), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x98), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA8), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi); /* addss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x38) = eax;
    xmm1.f[0] = MEMF(esp + 0x38); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x3C) = ecx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x34); /* addss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = eax;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x58); /* movss */
    edx = esp + 0x1C;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_000B5762:
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
