#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0005DFD0
 * Original: 0x0005DFD0 - 0x0005E6B8 (1768 bytes, 432 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005DFD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0005DFD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xF8;
    edx = MEM32(ebp + 8);
    ecx = MEM32(edx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ecx));
    MEM32(ebp + -12) = ecx;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = esi;
    ecx = ecx & 0x7F;
    ecx = MEM32(edi + ecx * 4 + 0x20);
    if (CMP_EQ(MEM16(ecx + 0x1C), LO16(esi))) goto loc_0005E00D; /* je: equal / zero */

loc_0005DFFB:
    edi = MEM32(edi + 0x1C);
    edi = edi;

loc_0005E000:
    if (CMP_EQ(ecx, edi)) goto loc_0005E00D; /* je: equal / zero */

loc_0005E004:
    ecx = ecx + 0x20;
    if (CMP_NE(MEM16(ecx + 0x1C), LO16(esi))) goto loc_0005E000; /* jne: not equal / not zero */

loc_0005E00D:
    xmm4.f[0] = MEMF(eax + 4); /* movss */
    xmm6.f[0] = MEMF(eax); /* movss */
    ecx = MEM32(0x75481C);
    /* test LO8(ecx), 1 - flags set for next jcc */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm6.f[0] = xmm6.f[0] / xmm4.f[0]; /* divss */
    xmm6.f[0] = xmm6.f[0] * MEMF(edx + 8); /* mulss */
    xmm6.f[0] = xmm6.f[0] * MEMF(0x3B16E8); /* mulss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    esi = 0x49FAD0;
    edi = 0x4A0AB0;
    MEM32(ebp + -16) = 0;
    MEMF(ebp + -120) = xmm4.f[0]; /* movss */
    MEMF(ebp + -152) = xmm2.f[0]; /* movss */
    if (TEST_NZ(LO8(ecx), 1)) goto loc_0005E0A0; /* jne: not equal / not zero */

loc_0005E067:
    MEMF(0x7547B4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B18BC); /* movss */
    ecx = ecx | 1;
    MEMF(0x7547B8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A5600); /* movss */
    MEM32(0x75481C) = ecx;
    MEMF(0x7547BC) = xmm1.f[0]; /* movss */
    MEMF(0x7547C0) = xmm0.f[0]; /* movss */

loc_0005E0A0:
    /* test LO8(ecx), 2 - flags set for next jcc */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(ecx), 2)) goto loc_0005E0D9; /* jne: not equal / not zero */

loc_0005E0A8:
    xmm1.f[0] = MEMF(0x389DB8); /* movss */
    ecx = ecx | 2;
    MEM32(0x75481C) = ecx;
    MEMF(0x7547A4) = xmm1.f[0]; /* movss */
    MEMF(0x7547A8) = xmm1.f[0]; /* movss */
    MEMF(0x7547AC) = xmm5.f[0]; /* movss */
    MEMF(0x7547B0) = xmm5.f[0]; /* movss */

loc_0005E0D9:
    ecx = MEM32(edx);
    ebx = MEM32(ecx + 0xA0);
    /* cmp MEM16(ebx + 0x1C), 0x20 - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (CMP_EQ(MEM16(ebx + 0x1C), 0x20)) goto loc_0005E108; /* je: equal / zero */

loc_0005E0EB:
    goto loc_0005E0F0;

    /* nop */

loc_0005E0F0:
    ebx = MEM32(ecx + 0x1C);
    /* cmp MEM32(ebp + -8), ebx - flags set for next jcc */
    ebx = MEM32(ebp + -8);
    if (CMP_EQ(MEM32(ebp + -8), ebx)) goto loc_0005E108; /* je: equal / zero */

loc_0005E0FB:
    ebx = ebx + 0x20;
    /* cmp MEM16(ebx + 0x1C), 0x20 - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (CMP_NE(MEM16(ebx + 0x1C), 0x20)) goto loc_0005E0F0; /* jne: not equal / not zero */

loc_0005E108:
    xmm1.f[0] = MEMF(ebx + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x39940C); /* mulss */
    ebx = MEM32(ecx + 8);
    xmm3.f[0] = MEMF(edx + 0x14); /* movss */
    MEMF(ebp + -232) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    MEM32(ebp + -28) = ebx;
    ebx = MEM32(ecx + 0xC);
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -28); /* mulss */
    MEMF(ebp + -52) = xmm1.f[0]; /* movss */
    MEM32(ebp + -24) = ebx;
    xmm1.f[0] = MEMF(ebp + -24); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    eax = MEM32(ebp + -52);
    ebx = MEM32(ebp + -12);
    /* cmp MEM16(ebx), 0x5C - flags set for next jcc */
    MEM32(ebp + -92) = eax;
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + -92); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(edx + 8); /* mulss */
    MEMF(ebp + -48) = xmm1.f[0]; /* movss */
    eax = MEM32(ebp + -48);
    MEM32(ebp + -88) = eax;
    MEMF(ebp + -92) = xmm3.f[0]; /* movss */
    eax = 3;
    if (CMP_NE(MEM16(ebx), 0x5C)) goto loc_0005E18A; /* jne: not equal / not zero */

loc_0005E174:
    if (CMP_NE(MEM8(edx + 0x13), 0)) goto loc_0005E18A; /* jne: not equal / not zero */

loc_0005E17A:
    eax = ZX16(MEM16(ebx + 2));
    ebx = ebx + 2;
    eax = eax - 0x31;
    ebx = ebx + 2;
    MEM32(ebp + -12) = ebx;

loc_0005E18A:
    xmm1.f[0] = MEMF(eax * 4 + 0x7547B4); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax * 4 + 0x7547A4); /* addss */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = MEMF(ebp + -88); /* movss */
    MEMF(ebp + -28) = xmm7.f[0]; /* movss */
    edx = MEM32(ebp + -28);
    MEM32(ebp + -84) = edx;
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(ebp + -24) = xmm3.f[0]; /* movss */
    edx = MEM32(ebp + -24);
    MEM32(ebp + -80) = edx;
    edx = eax;
    edx = edx & 0x7F;
    ebx = MEM32(ecx + edx * 4 + 0x20);
    /* cmp MEM16(ebx + 0x1C), LO16(eax) - flags set for next jcc */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    if (CMP_EQ(MEM16(ebx + 0x1C), LO16(eax))) goto loc_0005E1F3; /* je: equal / zero */

loc_0005E1E3:
    ecx = MEM32(ecx + 0x1C);

loc_0005E1E6:
    if (CMP_EQ(ebx, ecx)) goto loc_0005E1F3; /* je: equal / zero */

loc_0005E1EA:
    ebx = ebx + 0x20;
    if (CMP_NE(MEM16(ebx + 0x1C), LO16(eax))) goto loc_0005E1E6; /* jne: not equal / not zero */

loc_0005E1F3:
    xmm4.f[0] = MEMF(ebx + 0x10); /* movss */
    xmm1.f[0] = MEMF(ebp + -84); /* movss */
    eax = 0x49FAD0;
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    eax = eax - 8;
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEM32(ebp + -36) = ebx;
    MEMF(ebp + -244) = xmm3.f[0]; /* movss */
    MEM32(ebp + -60) = 0x4A0AC8;
    MEM32(ebp + -40) = 0x49FAE8;
    MEM32(ebp + -8) = 0x4A0AC0;
    MEM32(ebp + -32) = 0x49FAE0;
    edx = 0x4A0AB8;
    ecx = 0x49FAD8;
    MEM32(ebp + -20) = 0x4A0AA8;
    MEM32(ebp + -56) = eax;
    goto loc_0005E250;

    /* nop */

loc_0005E250:
    xmm4.f[0] = MEMF(ebx); /* movss */
    /* comiss xmm4.f[0], xmm5.f[0] - sets EFLAGS */
    if ((xmm4.f[0] < xmm5.f[0])) goto loc_0005E57A; /* jb: below (unsigned <) */

loc_0005E25D:
    xmm4.f[0] = MEMF(ebx + 0x10); /* movss */
    xmm5.f[0] = MEMF(ebx + 0x14); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebx + 8); /* mulss */
    MEMF(ebp + -140) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(ebp + -80); /* movss */
    eax = MEM32(ebp + -140);
    MEM32(ebp + -100) = eax;
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ebp + -220) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(ebp + -100); /* movss */
    MEMF(ebp + -136) = xmm5.f[0]; /* movss */
    eax = MEM32(ebp + -136);
    MEM32(ebp + -96) = eax;
    eax = MEM32(ebp + -220);
    MEM32(ebp + -204) = eax;
    xmm3.f[0] = xmm3.f[0] + MEMF(ebp + -204); /* addss */
    MEMF(ebp + -172) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(ebp + -96); /* movss */
    MEMF(ebp + -108) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx + 0xC); /* movss */
    MEMF(ebp + -216) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -216);
    MEM32(ebp + -200) = eax;
    xmm3.f[0] = xmm3.f[0] + MEMF(ebp + -200); /* addss */
    eax = MEM32(ebp + -172);
    MEM32(ebp + -68) = eax;
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    MEMF(ebp + -168) = xmm3.f[0]; /* movss */
    eax = MEM32(ebp + -168);
    xmm3.f[0] = MEMF(ebp + -68); /* movss */
    MEM32(ebp + -64) = eax;
    eax = MEM32(ebp + -108);
    xmm5.f[0] = MEMF(ebp + -64); /* movss */
    MEMF(ebp + -104) = xmm1.f[0]; /* movss */
    MEM32(ebp + -116) = eax;
    eax = MEM32(ebp + -104);
    xmm1.f[0] = MEMF(ebp + -116); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(ebp + -132) = xmm1.f[0]; /* movss */
    MEM32(ebp + -112) = eax;
    eax = MEM32(ebp + -132);
    xmm1.f[0] = MEMF(ebp + -112); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    MEMF(ebp + -128) = xmm1.f[0]; /* movss */
    MEM32(ebp + -76) = eax;
    eax = MEM32(ebp + -128);
    xmm4.f[0] = MEMF(ebp + -76); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEM32(ebp + -72) = eax;
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + -72); /* subss */
    eax = MEM32(ebx);
    xmm1.f[0] = xmm1.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ebp + -160) = xmm5.f[0]; /* movss */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm7.b, xmm4.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm7.f[0] = xmm7.f[0] + xmm1.f[0]; /* addss */
    MEM32(ebp + -52) = eax;
    eax = MEM32(ebx + 4);
    xmm1.f[0] = MEMF(ebp + -52); /* movss */
    MEMF(ebp + -68) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(ebx + 0xC); /* movss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(ebx + 8); /* addss */
    MEMF(ebp + -28) = xmm2.f[0]; /* movss */
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -48) = eax;
    xmm2.f[0] = MEMF(ebp + -48); /* movss */
    MEMF(ebp + -196) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(ebp + -72); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(ebp + -164) = xmm7.f[0]; /* movss */
    MEMF(ebp + -192) = xmm5.f[0]; /* movss */
    MEMF(ebp + -76) = xmm4.f[0]; /* movss */
    MEMF(ebp + -24) = xmm3.f[0]; /* movss */
    MEM32(ebp + -148) = ebx;
    ebx = MEM32(ebp + -24);
    xmm3.f[0] = MEMF(ebp + -148); /* movss */
    MEM32(ebp + -144) = ebx;
    ebx = MEM32(ebp + -16);
    /* test ebx, ebx - flags set for next jcc */
    MEMF(ebp + -212) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebp + -144); /* movss */
    MEMF(ebp + -180) = xmm3.f[0]; /* movss */
    MEMF(ebp + -176) = xmm2.f[0]; /* movss */
    MEMF(ebp + -208) = xmm1.f[0]; /* movss */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0005E4A8; /* jle: less or equal (signed <=) */

loc_0005E42D:
    ebx = MEM32(ebp + -56);
    eax = MEM32(ebx);
    MEM32(esi) = eax;
    eax = MEM32(ebx + 4);
    ebx = ebx + 0x10;
    MEM32(ebp + -56) = ebx;
    ebx = MEM32(ebp + -32);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    ebx = ebx + 0x10;
    MEM32(ebp + -32) = ebx;
    ebx = MEM32(ebp + -40);
    ebx = ebx + 0x10;
    MEM32(edi) = eax;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax + 4);
    MEM32(ebp + -40) = ebx;
    ebx = MEM32(ebp + -20);
    ebx = ebx + 0x10;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(ebp + -8);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -64);
    ebx = ebx + 0x10;
    MEM32(ecx + 4) = eax;
    eax = MEM32(ebp + -52);
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(ebp + -60);
    ebx = ebx + 0x10;
    MEM32(edx) = eax;
    eax = MEM32(ebp + -48);
    MEM32(ebp + -60) = ebx;
    ebx = MEM32(ebp + -16);
    MEM32(edx + 4) = eax;
    esi = esi + 0x10;
    ecx = ecx + 0x10;
    edi = edi + 0x10;
    edx = edx + 0x10;
    ebx = ebx + 2;
    MEM32(ebp + -16) = ebx;

loc_0005E4A8:
    ebx = MEM32(ebp + -68);
    MEM32(esi) = ebx;
    ebx = MEM32(ebp + -64);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(ebp + -52);
    MEM32(edi) = ebx;
    ebx = MEM32(ebp + -196);
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -164);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + -160);
    MEM32(ecx + 4) = eax;
    eax = MEM32(ebp + -180);
    MEM32(edx) = eax;
    eax = MEM32(ebp + -176);
    MEM32(edx + 4) = eax;
    eax = MEM32(ebp + -32);
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -192);
    MEM32(eax + 4) = ebx;
    eax = MEM32(ebp + -8);
    ebx = MEM32(ebp + -212);
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -208);
    MEM32(eax + 4) = ebx;
    eax = MEM32(ebp + -40);
    ebx = MEM32(ebp + -76);
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -72);
    MEM32(eax + 4) = ebx;
    eax = MEM32(ebp + -60);
    ebx = MEM32(ebp + -28);
    MEM32(eax) = ebx;
    ebx = MEM32(ebp + -24);
    MEM32(eax + 4) = ebx;
    ebx = MEM32(ebp + -56);
    ebx = ebx + 0x20;
    xmm1.f[0] = MEMF(ebp + -84); /* movss */
    xmm3.f[0] = MEMF(ebp + -244); /* movss */
    xmm2.f[0] = MEMF(ebp + -152); /* movss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ebp + -56) = ebx;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 0x20;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 0x20;
    ebx = MEM32(ebp + -20);
    ebx = ebx + 0x20;
    eax = eax + 0x20;
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -16);
    ebx = ebx + 0x20;
    esi = esi + 0x20;
    ecx = ecx + 0x20;
    edi = edi + 0x20;
    edx = edx + 0x20;
    eax = eax + 4;
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(ebp + -36);
    MEM32(ebp + -16) = eax;

loc_0005E57A:
    eax = MEM32(ebp + -12);
    eax = eax + 2;
    MEM32(ebp + -12) = eax;
    SET_LO16(eax, MEM16(eax));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0005E6B4; /* je: equal / zero */

loc_0005E58F:
    xmm7.f[0] = MEMF(ebx); /* movss */
    /* comiss xmm7.f[0], xmm5.f[0] - sets EFLAGS */
    xmm4.f[0] = MEMF(ebx + 0x18); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(ebp + -232); /* addss */
    ebx = MEM32(ebp + -12);
    if ((xmm7.f[0] >= xmm5.f[0])) goto loc_0005E5B7; /* jae: above or equal (unsigned >=) */

loc_0005E5A8:
    if (CMP_NE(MEM16(ebx + 2), 0x5C)) goto loc_0005E5B7; /* jne: not equal / not zero */

loc_0005E5AF:
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B1684); /* mulss */

loc_0005E5B7:
    /* cmp LO16(eax), 0x5C - flags set for next jcc */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm3.b, xmm7.b, 16); /* movaps */
    MEMF(ebp + -244) = xmm3.f[0]; /* movss */
    if (CMP_NE(LO16(eax), 0x5C)) goto loc_0005E65D; /* jne: not equal / not zero */

loc_0005E5D7:
    eax = MEM32(ebp + 8);
    if (CMP_NE(MEM8(eax + 0x13), 0)) goto loc_0005E65D; /* jne: not equal / not zero */

loc_0005E5E0:
    eax = ZX16(MEM16(ebx + 2));
    xmm0.f[0] = MEMF(eax * 4 + 0x7546F0); /* movss */
    ebx = ebx + 2;
    eax = eax - 0x31;
    ebx = ebx + 2;
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ebp + -92); /* mulss */
    MEM32(ebp + -12) = ebx;
    MEMF(ebp + -228) = xmm1.f[0]; /* movss */
    ebx = MEM32(ebp + -228);
    xmm1.f[0] = MEMF(ebp + -88); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax * 4 + 0x7547B4); /* subss */
    MEM32(ebp + -84) = ebx;
    MEMF(ebp + -224) = xmm1.f[0]; /* movss */
    ebx = MEM32(ebp + -224);
    xmm1.f[0] = MEMF(ebp + -84); /* movss */
    MEM32(ebp + -80) = ebx;
    ebx = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax * 4 + 0x7547A4); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -120); /* mulss */
    ebx = MEM32(ebp + -12);

loc_0005E65D:
    ebx = ZX16(MEM16(ebx));
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    MEM32(ebp + -36) = ebx;
    ebx = ebx & 0x7F;
    ebx = MEM32(eax + ebx * 4 + 0x20);
    SET_LO16(eax, MEM16(ebp + -36));
    if (CMP_EQ(MEM16(ebx + 0x1C), LO16(eax))) goto loc_0005E69C; /* je: equal / zero */

loc_0005E679:
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = MEM32(eax + 0x1C);
    MEM32(ebp + -184) = eax;

loc_0005E687:
    if (CMP_EQ(ebx, MEM32(ebp + -184))) goto loc_0005E69C; /* je: equal / zero */

loc_0005E68F:
    SET_LO16(eax, MEM16(ebp + -36));
    ebx = ebx + 0x20;
    if (CMP_NE(MEM16(ebx + 0x1C), LO16(eax))) goto loc_0005E687; /* jne: not equal / not zero */

loc_0005E69C:
    eax = MEM32(ebp + -16);
    /* cmp eax, 0x1F6 - flags set for next jcc */
    MEM32(ebp + -36) = ebx;
    if (CMP_BE(eax, 0x1F6)) goto loc_0005E250; /* jbe: below or equal (unsigned <=) */

loc_0005E6AD:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0005E6B4:
    eax = MEM32(ebp + -16);
    POP32(esp, edi);

}
