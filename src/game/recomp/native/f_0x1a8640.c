#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A8640
 * Original: 0x001A8640 - 0x001A8C20 (1504 bytes, 356 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001A8640:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    /* test MEM8(edi + 0x174), 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ecx, 1);
    if (TEST_NZ(MEM8(edi + 0x174), 4)) goto loc_001A865D; /* jne: not equal / not zero */

loc_001A8656:
    MEM8(esp + 0x13) = 0;
    goto loc_001A8685;

loc_001A865D:
    eax = MEM32(edi + 0x10C);
    if (TEST_NZ(eax, eax)) goto loc_001A866E; /* jne: not equal / not zero */

loc_001A8667:
    MEM8(esp + 0x13) = 0;
    goto loc_001A8685;

loc_001A866E:
    SET_LO8(eax, MEM8(edi + 0x173));
    if (CMP_EQ(LO8(eax), 8)) goto loc_001A8681; /* je: equal / zero */

loc_001A8678:
    /* cmp LO8(eax), 9 - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (CMP_NE(LO8(eax), 9)) goto loc_001A8685; /* jne: not equal / not zero */

loc_001A8681:
    MEM8(esp + 0x13) = LO8(ecx);

loc_001A8685:
    ebx = MEM32(edi + 0x10C);
    SET_LO8(edx, MEM8(ebx + 0x17A));
    MEM8(edi + 0x17A) = LO8(edx);
    SET_LO8(edx, MEM8(ebx + 0x175));
    MEM8(edi + 0x175) = LO8(edx);
    SET_LO8(edx, MEM8(ebx + 0x17B));
    MEM8(edi + 0x17B) = LO8(edx);
    edx = MEM32(ebx + 0xC4);
    MEM32(edi + 0xC4) = edx;
    SET_LO8(edx, MEM8(ebx + 0xC8));
    eax = edi + 0x70;
    MEM8(edi + 0xC8) = LO8(edx);
    /* test MEM8(edi + 0x17A), LO8(ecx) - flags set for next jcc */
    esi = eax;
    MEM32(esp + 0x14) = esi;
    if (TEST_NZ(MEM8(edi + 0x17A), LO8(ecx))) goto loc_001A8A12; /* jne: not equal / not zero */

loc_001A86DC:
    xmm0.f[0] = MEMF(ebx + 0x134); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x90), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = esp + 0x18;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xA0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    esi = esi + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A8728:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A873F; /* jp: parity */

loc_001A8735:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */

loc_001A873F:
    xmm0.f[0] = MEMF(edi + 0x138); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x14C); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = esp + 0x18;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    esi = edi + 0x30;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    eax = esi;
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019DC60(); /* call 0x0019DC60 */

loc_001A87C5:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A87D4; /* jne: not equal / not zero */

loc_001A87C9:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x40), xmm0.b, 16); /* movaps */

loc_001A87D4:
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A8833; /* je: equal / zero */

loc_001A87DC:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    eax = esi;
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0019DC60(); /* call 0x0019DC60 */

loc_001A8803:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A8812; /* jne: not equal / not zero */

loc_001A8807:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */

loc_001A8812:
    eax = esp + 0x20;
    PUSH32(esp, eax);
    esi = edi;
    PUSH32(esp, 0); sub_0019DFD0(); /* call 0x0019DFD0 */

loc_001A881E:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    esi = edi + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0019DFD0(); /* call 0x0019DFD0 */

loc_001A8833:
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    esi = edi + 0x90;
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = esi;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A884F:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A886C; /* jp: parity */

loc_001A885C:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x98) = xmm0.f[0]; /* movss */

loc_001A886C:
    xmm0.f[0] = MEMF(edi + 0x138); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = esp + 0x18;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edi + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x80), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x40), 16); /* movaps */
    ebx = edi + 0x80;
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = ebx;
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A88B9:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A88D6; /* jp: parity */

loc_001A88C6:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x84) = xmm0.f[0]; /* movss */

loc_001A88D6:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = edi + 0x70;
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A8906:
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A8920; /* jp: parity */

loc_001A8913:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x70) = xmm0.f[0]; /* movss */

loc_001A8920:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0x70), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = ebx;
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_001A8950:
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001A896C; /* jp: parity */

loc_001A895C:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(edi + 0x84) = xmm0.f[0]; /* movss */

loc_001A896C:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x40) (packed 4xfloat) */
    ecx = MEM32(edi + 0xB0);
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    eax = esp + 0x18;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(ecx + 0xD));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001A8A82; /* jle: less or equal (signed <=) */

loc_001A89BB:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0x120); /* divss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x128); /* addss */
    xmm1.f[0] = MEMF(0x3B1B10); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(edi + 0x128) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001A89F7; /* jbe: below or equal (unsigned <=) */

loc_001A89E6:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(edi + 0x128) = xmm0.f[0]; /* movss */
    goto loc_001A8A82;

loc_001A89F7:
    xmm2.f[0] = MEMF(0x3B1B0C); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_001A8A82; /* jbe: below or equal (unsigned <=) */

loc_001A8A04:
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi + 0x128) = xmm0.f[0]; /* movss */
    goto loc_001A8A82;

loc_001A8A12:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    eax = MEM32(edi + 0x10C);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    SET_LO8(ecx, MEM8(edi + 0x5F));
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    eax = eax + 0x30;
    memcpy((void *)XBOX_PTR(edi + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x40), xmm0.b, 16); /* movaps */
    edx = MEM32(eax + 0x20);
    MEM32(edi + 0x50) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(edi + 0x54) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(edi + 0x58) = edx;
    SET_LO16(edx, MEM16(eax + 0x2C));
    MEM16(edi + 0x5C) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 0x2E));
    MEM8(edi + 0x5E) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x2F));
    MEM8(edi + 0x5F) = LO8(eax);
    MEM8(edi + 0x5F) = LO8(ecx);

loc_001A8A82:
    /* test MEM8(edi + 0x174), 2 - flags set for next jcc */
    ecx = MEM32(0x73A19C);
    MEM32(esp + 0x1C) = ecx;
    if (TEST_NZ(MEM8(edi + 0x174), 2)) { sub_001A8C21(); return; } /* jne: not equal / not zero */

loc_001A8A99:
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A8BAE; /* jle: less or equal (signed <=) */

loc_001A8AA3:
    xmm2.f[0] = MEMF(0x3980F8); /* movss */
    xmm4.f[0] = MEMF(0x3A2928); /* movss */
    ecx = 0; /* xor self */
    esi = 0; /* xor self */
    goto loc_001A8AC0;

    /* nop */

loc_001A8AC0:
    edx = MEM32(eax * 4 + 0x73A1A8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x40), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    /* shufps xmm5, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0x18;
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = ZX8(MEM8(edi + 0x177));
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    edx = edx + ecx;
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edx * 4 + 0x647C34) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_001A8B58; /* jbe: below or equal (unsigned <=) */

loc_001A8B37:
    SET_LO8(edx, MEM8(eax + 0x649B3C));
    if (CMP_AE(LO8(edx), 8)) goto loc_001A8B58; /* jae: above or equal (unsigned >=) */

loc_001A8B42:
    SET_LO8(ebx, MEM8(edi + 0x177));
    edx = ZX8(LO8(edx));
    MEM8(edx + eax * 8 + 0x649A8E) = LO8(ebx);
    MEM8(eax + 0x649B3C) = MEM8(eax + 0x649B3C) + 1;

loc_001A8B58:
    /* comiss xmm4.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm4.f[0] <= xmm0.f[0])) goto loc_001A8B7E; /* jbe: below or equal (unsigned <=) */

loc_001A8B5D:
    SET_LO8(edx, MEM8(eax + 0x649B36));
    if (CMP_AE(LO8(edx), 0x19)) goto loc_001A8B7E; /* jae: above or equal (unsigned >=) */

loc_001A8B68:
    SET_LO8(ebx, MEM8(edi + 0x177));
    edx = ZX8(LO8(edx));
    MEM8(edx + esi + 0x6499F8) = LO8(ebx);
    MEM8(eax + 0x649B36) = MEM8(eax + 0x649B36) + 1;

loc_001A8B7E:
    edx = ZX8(MEM8(eax + 0x649B30));
    SET_LO8(ebx, MEM8(edi + 0x177));
    MEM8(edx + ecx + 0x649404) = LO8(ebx);
    MEM8(eax + 0x649B30) = MEM8(eax + 0x649B30) + 1;
    edx = MEM32(esp + 0x1C);
    eax++;
    esi = esi + 0x19;
    ecx = ecx + 0xFE;
    if (CMP_L(eax, edx)) goto loc_001A8AC0; /* jl: less (signed <) */

loc_001A8BAE:
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001A8C21(); return; } /* je: equal / zero */

loc_001A8BB6:
    eax = MEM32(esp + 0x14);
    eax = eax + 0x20;
    ecx = 0x80000000u;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    esi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x1C) = ecx;
    esi = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = ecx;

}
