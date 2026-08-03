#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A8220
 * Original: 0x001A8220 - 0x001A8635 (1045 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001A8220:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = edi;

loc_001A8230:
    edi = MEM32(esi + 0x10C);
    if (TEST_Z(edi, edi)) goto loc_001A862E; /* je: equal / zero */

loc_001A823E:
    SET_LO8(eax, MEM8(edi + 0x17A));
    MEM8(esi + 0x17A) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x175));
    MEM8(esi + 0x175) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x17B));
    MEM8(esi + 0x17B) = LO8(edx);
    eax = MEM32(edi + 0xC4);
    MEM32(esi + 0xC4) = eax;
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0xA0), xmm0.b, 16); /* movaps */
    ecx = MEM32(esi + 0x10C);
    xmm0.f[0] = MEMF(ecx + 0x134); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x90), 16); /* movaps */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x90), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esi + 0x138); /* movss */
    ebx = esi + 0x90;
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    eax = esp + 0x18;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0xA0), xmm0.b, 16); /* movaps */
    if (TEST_Z(MEM8(esi + 0x174), 4)) goto loc_001A838C; /* je: equal / zero */

loc_001A831C:
    eax = MEM32(esi + 0x10C);
    if (TEST_Z(eax, eax)) goto loc_001A838C; /* je: equal / zero */

loc_001A8326:
    SET_LO8(eax, MEM8(esi + 0x173));
    if (CMP_EQ(LO8(eax), 8)) goto loc_001A8334; /* je: equal / zero */

loc_001A8330:
    if (CMP_NE(LO8(eax), 9)) goto loc_001A838C; /* jne: not equal / not zero */

loc_001A8334:
    xmm0.f[0] = MEMF(esi + 0x150); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    ecx = esi;
    eax = esi;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019DBF0(); /* call 0x0019DBF0 */

loc_001A838C:
    xmm0.f[0] = MEMF(esi + 0x14C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    edx = esp + 0x20;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    eax = esi + 0x30;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    ecx = esi;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019DBF0(); /* call 0x0019DBF0 */

loc_001A83E5:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = ebx;
    memcpy((void *)XBOX_PTR(ebx), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A83FB:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A8418; /* jp: parity */

loc_001A8408:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */

loc_001A8418:
    xmm0.f[0] = MEMF(esi + 0x138); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = esp + 0x24;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x80), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x40), 16); /* movaps */
    edi = esi + 0x80;
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A8465:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A8482; /* jp: parity */

loc_001A8472:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */

loc_001A8482:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = esi + 0x70;
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A84B2:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A84CC; /* jp: parity */

loc_001A84BF:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */

loc_001A84CC:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x70), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = edi;
    memcpy((void *)XBOX_PTR(edi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A84FC:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A8518; /* jp: parity */

loc_001A8508:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */

loc_001A8518:
    ecx = MEM32(0x73A19C);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A8620; /* jle: less or equal (signed <=) */

loc_001A852C:
    ecx = 0; /* xor self */
    edi = 0; /* xor self */

loc_001A8530:
    edx = MEM32(eax * 4 + 0x73A1A8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x40), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xA0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x64) = xmm2.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = MEMF(0x3980F8); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    edx = esp + 0x28;
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = ZX8(MEM8(esi + 0x177));
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    edx = edx + ecx;
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edx * 4 + 0x647C34) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A85C9; /* jbe: below or equal (unsigned <=) */

loc_001A85AF:
    edx = ZX8(MEM8(eax + 0x649B3C));
    SET_LO8(ebx, MEM8(esi + 0x177));
    MEM8(edx + eax * 8 + 0x649A8E) = LO8(ebx);
    MEM8(eax + 0x649B3C) = MEM8(eax + 0x649B3C) + 1;

loc_001A85C9:
    xmm1.f[0] = MEMF(0x3A2928); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A85F0; /* jbe: below or equal (unsigned <=) */

loc_001A85D6:
    edx = ZX8(MEM8(eax + 0x649B36));
    SET_LO8(ebx, MEM8(esi + 0x177));
    MEM8(edx + edi + 0x6499F8) = LO8(ebx);
    MEM8(eax + 0x649B36) = MEM8(eax + 0x649B36) + 1;

loc_001A85F0:
    edx = ZX8(MEM8(eax + 0x649B30));
    SET_LO8(ebx, MEM8(esi + 0x177));
    MEM8(edx + ecx + 0x649404) = LO8(ebx);
    MEM8(eax + 0x649B30) = MEM8(eax + 0x649B30) + 1;
    edx = MEM32(esp + 0x2C);
    eax++;
    edi = edi + 0x19;
    ecx = ecx + 0xFE;
    if (CMP_L(eax, edx)) goto loc_001A8530; /* jl: less (signed <) */

loc_001A8620:
    esi = MEM32(esi + 0x110);
    if (TEST_NZ(esi, esi)) goto loc_001A8230; /* jne: not equal / not zero */

loc_001A862E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
