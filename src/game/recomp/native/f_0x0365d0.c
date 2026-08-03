#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000365D0
 * Original: 0x000365D0 - 0x000367B6 (486 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000365D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000365D0:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000365E8; /* je: equal / zero */

loc_000365E0:
    ebx = ebx + 0x94;
    goto loc_000365EB;

loc_000365E8:
    ebx = ebx + 0x40;

loc_000365EB:
    eax = MEM32(ebx + 0x50);
    eax = eax + eax * 4;
    esi = MEM32(ebx + eax * 4 + 8);
    edi = MEM32(ebx + eax * 4);
    ecx = ebx + eax * 4;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = eax + eax * 8;
    edx = edx << 4;
    edx = edx + edi;
    edi = esi;
    edi = edi & 3;
    eax = edi;
    eax = eax << 5;
    esi++;
    /* cmp esi, MEM32(ecx + 4) - flags set for next jcc */
    eax = eax + edx + 0x10;
    MEM32(ecx + 8) = esi;
    if (CMP_NE(esi, MEM32(ecx + 4))) goto loc_0003662C; /* jne: not equal / not zero */

loc_00036625:
    MEM32(ecx + 8) = 0;

loc_0003662C:
    esi = MEM32(ebx + 0x50);
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    esi++;
    esi = esi & 3;
    MEM32(ebx + 0x50) = esi;
    ebx = MEM32(esp + 0x1C);
    xmm3.f[0] = MEMF(ebx + 4); /* movss */
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm3.f[0])) goto loc_00036656; /* jbe: below or equal (unsigned <=) */

loc_00036647:
    /* comiss xmm2.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm5.f[0])) goto loc_00036656; /* jb: below (unsigned <) */

loc_0003664C:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */

loc_00036656:
    esi = MEM32(esp + 0x14);
    esi = MEM32(esi + 0xE8);
    xmm1.f[0] = MEMF(esi + 0x50); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] >= xmm0.f[0])) goto loc_0003675D; /* jae: above or equal (unsigned >=) */

loc_00036685:
    xmm1.f[0] = MEMF(ecx + 0xC); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x50); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    /* comiss xmm0.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm0.f[0] >= xmm4.f[0])) goto loc_0003675D; /* jae: above or equal (unsigned >=) */

loc_000366A3:
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x18)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = MEM32(esp + 0x14);
    esi = MEM32(esi + 0xE8);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0x50); /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(esi + 0x50); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esi + 0x54); /* mulss */
    xmm3.f[0] = MEMF(ebp + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4.f[0] = MEMF(ebp + 4); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm5.f[0] = MEMF(esi + 0x50); /* movss */
    esi = MEM32(ebp);
    xmm5.f[0] = xmm5.f[0] * MEMF(0x3B1684); /* mulss */
    MEM32(eax) = esi;
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    xmm1.f[0] = MEMF(ebx + 4); /* movss */
    esi = MEM32(ebx);
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm2.f[0]; /* movss */
    goto loc_0003679C;

loc_0003675D:
    xmm0.f[0] = MEMF(ebp + 4); /* movss */
    esi = MEM32(ebp);
    xmm1.f[0] = MEMF(ebp + 8); /* movss */
    MEM32(eax) = esi;
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    xmm1.f[0] = MEMF(ebx + 8); /* movss */
    esi = MEM32(ebx);
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_0003679C:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEM32(eax + 0x10) = esi;
    MEMF(edx + edi * 4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
