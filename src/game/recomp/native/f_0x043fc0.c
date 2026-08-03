#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00043FC0
 * Original: 0x00043FC0 - 0x0004416A (426 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00043FC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00043FC0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(ebp + 0xE124);
    PUSH32(esp, esi);
    esi = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = eax + eax * 8;
    eax = eax << 4;
    ecx = ebx;
    ecx = ecx & 3;
    edx = eax + ebp + 0x10;
    eax = ecx;
    eax = eax << 5;
    ebx++;
    /* cmp ebx, 0x190 - flags set for next jcc */
    eax = eax + edx + 0x10;
    MEM32(ebp + 0xE124) = ebx;
    if (CMP_NE(ebx, 0x190)) goto loc_0004400C; /* jne: not equal / not zero */

loc_00044002:
    MEM32(ebp + 0xE124) = 0;

loc_0004400C:
    xmm3.f[0] = MEMF(edi + 4); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_00044028; /* jbe: below or equal (unsigned <=) */

loc_00044019:
    /* comiss xmm2.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm5.f[0])) goto loc_00044028; /* jb: below (unsigned <) */

loc_0004401E:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */

loc_00044028:
    ebx = MEM32(ebp + 0xE110);
    xmm1.f[0] = MEMF(ebx + 0x48); /* movss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm0.f[0])) goto loc_000440A2; /* jb: below (unsigned <) */

loc_0004404F:
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    esi = MEM32(esi);
    MEM32(eax) = esi;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    esi = MEM32(edi);
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEM32(eax + 0x10) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_000440A2:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ebp = MEM32(ebp + 0xE110);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0x48); /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(ebp + 0x48); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * MEMF(ebp + 0x4C); /* mulss */
    xmm3.f[0] = MEMF(esi + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4.f[0] = MEMF(esi + 4); /* movss */
    esi = MEM32(esi);
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm5.f[0] = MEMF(ebp + 0x48); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x3B1684); /* mulss */
    MEM32(eax) = esi;
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 8); /* movss */
    esi = MEM32(edi);
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    MEM32(eax + 0x10) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(edx + ecx * 4) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
