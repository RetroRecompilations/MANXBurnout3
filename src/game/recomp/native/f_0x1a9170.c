#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A9170
 * Original: 0x001A9170 - 0x001A935B (491 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001A9170:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    xmm5.f[0] = MEMF(0x60EA20); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    MEM8(esp + 0xF) = 0;
    if (CMP_LE(ebx & ebx, 0)) goto loc_001A91F1; /* jle: less or equal (signed <=) */

loc_001A9198:
    ecx = MEM32(ebp + 8);
    eax = esi + 0xF0;
    ecx = ecx + 0x30;
    edx = ebx;

loc_001A91A6:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x90), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edi = esp + 0x10;
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = eax + 4;
    ecx = ecx + 0x70;
    edx--;
    if ((edx != 0)) goto loc_001A91A6; /* jne: not equal / not zero */

loc_001A91F1:
    /* comiss xmm5.f[0], MEMF(esi + 0x164) - sets EFLAGS */
    if ((xmm5.f[0] <= MEMF(esi + 0x164))) goto loc_001A9352; /* jbe: below or equal (unsigned <=) */

loc_001A91FE:
    eax = MEM32(esi + 0x114);
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esi + 0x124) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xC4); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1688) - sets EFLAGS */
    MEMF(esi + 0x164) = xmm5.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(0x3B1688))) goto loc_001A933B; /* jbe: below or equal (unsigned <=) */

loc_001A9239:
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_001A933B; /* jle: less or equal (signed <=) */

loc_001A9243:
    eax = MEM32(ebp + 8);
    ecx = eax + 0x40;
    ebx = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    goto loc_001A9260;

loc_001A9251:
    xmm5.f[0] = MEMF(esp + 0x14); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(ebp + 8);
    /* nop */

loc_001A9260:
    edx = ZX8(MEM8(esi + 0x177));
    edx = edx + ebx;
    xmm0.f[0] = MEMF(edx * 4 + 0x647C34); /* movss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] < xmm3.f[0])) goto loc_001A9316; /* jb: below (unsigned <) */

loc_001A9281:
    xmm1.f[0] = MEMF(0x3B17E8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A9316; /* jbe: below or equal (unsigned <=) */

loc_001A9292:
    ecx = MEM32(esp + 0x10);
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x90), 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* shufps xmm4, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    edx = esp + 0x18;
    MEMF(edx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm3.f[0])) goto loc_001A92F0; /* jbe: below or equal (unsigned <=) */

loc_001A92CC:
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_001A9360(); /* call 0x001A9360 */

loc_001A92DA:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A9316; /* je: equal / zero */

loc_001A92DE:
    xmm5.f[0] = xmm5.f[0] + MEMF(0x3B16E8); /* addss */
    MEMF(esi + 0x164) = xmm5.f[0]; /* movss */
    goto loc_001A9311;

loc_001A92F0:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001A9600(); /* call 0x001A9600 */

loc_001A92F7:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A9316; /* je: equal / zero */

loc_001A92FB:
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A5600); /* addss */
    MEMF(esi + 0x164) = xmm0.f[0]; /* movss */

loc_001A9311:
    MEM8(esp + 0xF) = 1;

loc_001A9316:
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0xC);
    edi++;
    ecx = ecx + 0x70;
    ebx = ebx + 0xFE;
    /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(edi, eax)) goto loc_001A9251; /* jl: less (signed <) */

loc_001A9333:
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A9352; /* jne: not equal / not zero */

loc_001A933B:
    if (CMP_NE(MEM8(esi + 0x172), 1)) goto loc_001A9352; /* jne: not equal / not zero */

loc_001A9344:
    MEM8(esi + 0x172) = 0;
    MEM8(esi + 0x170) = 0xFF;

loc_001A9352:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
