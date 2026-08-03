#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003C0D0
 * Original: 0x0003C0D0 - 0x0003C29F (463 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003C0D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0003C0D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    xmm2.f[0] = MEMF(edx + 4); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = eax << 5;
    eax = eax + ebx;
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_0003C107; /* jbe: below or equal (unsigned <=) */

loc_0003C0F8:
    /* comiss xmm1.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm5.f[0])) goto loc_0003C107; /* jb: below (unsigned <) */

loc_0003C0FD:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */

loc_0003C107:
    ebx = MEM32(esi);
    xmm4.f[0] = MEMF(esi + 4); /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1AD4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    xmm3.f[0] = MEMF(esi + 8); /* movss */
    MEM32(eax) = ebx;
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    ebx = MEM32(edx);
    xmm3.f[0] = MEMF(edx + 8); /* movss */
    xmm4.f[0] = MEMF(edx + 4); /* movss */
    MEM32(eax + 0x10) = ebx;
    MEMF(eax + 0x14) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    if ((xmm1.f[0] >= xmm0.f[0])) goto loc_0003C1ED; /* jae: above or equal (unsigned >=) */

loc_0003C161:
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x3B1AD0); /* subss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] >= xmm3.f[0])) goto loc_0003C1ED; /* jae: above or equal (unsigned >=) */

loc_0003C178:
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1ACC); /* mulss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x387464); /* mulss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1AC8); /* mulss */
    xmm2.f[0] = MEMF(esi + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1AC4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0003C1F9;

loc_0003C1ED:
    esi = MEM32(esi + 4);
    MEM32(eax + 0xC) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 0x1C) = edx;

loc_0003C1F9:
    edx = MEM32(edi);
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    MEM32(eax + 0x20) = edx;
    edx = MEM32(edi + 4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(edi + 8);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ebp + 8);
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x10); /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1690); /* addss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3FBEE0), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x40), xmm1.b, 16); /* movaps */
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    esi = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    esi++;
    eax = esi;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(ecx + 0xC) = esi;
    if (CMP_NE(eax, edx)) goto loc_0003C297; /* jne: not equal / not zero */

loc_0003C290:
    MEM32(ecx + 0xC) = 0;

loc_0003C297:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
