#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019FFA0
 * Original: 0x0019FFA0 - 0x001A03DF (1087 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    uint64_t mm0, mm1;

loc_0019FFA0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    SET_LO8(eax, MEM8(ecx + 0x41));
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019FFBA; /* jne: not equal / not zero */

loc_0019FFB6:
    eax = 0; /* xor self */
    goto loc_0019FFC5;

loc_0019FFBA:
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;

loc_0019FFC5:
    eax = MEM32(eax);
    xmm0.f[0] = MEMF(ecx + 0x34); /* movss */
    esi = MEM32(eax + 0x10);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    edx = (int32_t)xmm0.f[0]; /* cvttss2si */
    ecx = esi + -1;
    /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x48) = edx;
    if (CMP_L(edx, ecx)) goto loc_0019FFF4; /* jl: less (signed <) */

loc_0019FFE9:
    edx = esi + -2;
    MEM32(esp + 0x48) = edx;
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */

loc_0019FFF4:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax);
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = eax;
    ecx = esp + 0xD0;
    goto loc_001A0050;

loc_001A003F:
    edx = MEM32(esp + 0x48);
    goto loc_001A0050;

    /* nop */
    /* nop */

loc_001A0050:
    edx = edx + eax + -1;
    MEM32(esp + 0xA0) = edx;
    mm0 = MEM32(esp + 0x4C); /* movd */
    mm1 = MEM32(esp + 0x4C); /* movd */
    /* pcmpgtd mm0, qword ptr [esp + 0xa0] (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [esp + 0xa0] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0x14) = mm0; /* movd */
    /* emms - empty MMX state */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = edx;
    mm0 = MEM32(esp + 0x20); /* movd */
    mm1 = MEM32(esp + 0x1C); /* movd */
    /* pcmpgtd mm0, mm1 (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [esp + 0x20] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0x18) = mm0; /* movd */
    /* emms - empty MMX state */
    edx = MEM32(esp + 0x18);
    ebx = ZX16(MEM16(edi + edx * 4));
    ebx = ebx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + esi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + -16), xmm0.b, 16); /* movaps */
    MEM32(esp + 0xA0) = edx;
    edx = ZX16(MEM16(edi + edx * 4 + 2));
    edx = edx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + esi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    eax++;
    ecx = ecx + 0x20;
    if (CMP_L(eax, 4)) goto loc_001A003F; /* jl: less (signed <) */

loc_001A00DF:
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_000116D0(); /* call 0x000116D0 */

loc_001A00E8:
    eax = esp + 0x100;
    ecx = esp + 0xE0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x14) = ecx;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_000116D0(); /* call 0x000116D0 */

loc_001A0133:
    edx = esp + 0x110;
    eax = esp + 0xF0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00011540(); /* call 0x00011540 */

loc_001A017E:
    ecx = esp + 0xD0;
    edx = esp + 0xC0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edx;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x6C) = eax;
    eax = esp + 0x30;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = edx;
    PUSH32(esp, 0); sub_00011540(); /* call 0x00011540 */

loc_001A01E6:
    ecx = esp + 0xF0;
    edx = esp + 0xE0;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edx;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x7C) = eax;
    eax = esp + 0x30;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    PUSH32(esp, 0); sub_00011540(); /* call 0x00011540 */

loc_001A024E:
    ecx = esp + 0x110;
    edx = esp + 0x100;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edx;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x8C) = eax;
    eax = esp + 0x30;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x88) = edx;
    PUSH32(esp, 0); sub_00011540(); /* call 0x00011540 */

loc_001A02C2:
    ecx = esp + 0x130;
    edx = esp + 0x120;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = edx;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    MEM32(esp + 0x90) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0x9C) = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB0), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    ecx = 0x3832AC;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    edx = esp + 0x140;
    PUSH32(esp, edx);
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    eax = esp + 0x94;
    /* shufps xmm2, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    PUSH32(esp, eax);
    edi = esp + 0x188;
    ecx = esp + 0x88;
    edx = esp + 0x78;
    esi = esp + 0x68;
    memcpy((void *)XBOX_PTR(esp + 0xB8), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0019EBA0(); /* call 0x0019EBA0 */

loc_001A03C1:
    esi = MEM32(ebp + 0xC);
    ecx = esp + 0xB8;
    PUSH32(esp, ecx);
    ecx = edi;
    edx = esp + 0x14C;
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_0019F030(); /* call 0x0019F030 */

}
