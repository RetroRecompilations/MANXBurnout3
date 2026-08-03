#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000F67B0
 * Original: 0x000F67B0 - 0x000F68DD (301 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F67B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000F67B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x4D6180);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(ebp + 8));
    ebx = 0x20;
    /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_000F67FE; /* je: equal / zero */

loc_000F67D6:
    eax = MEM32(esi + 0xA0);
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ebx))) goto loc_000F67F1; /* je: equal / zero */

loc_000F67E2:
    ecx = MEM32(esi + 0x1C);

loc_000F67E5:
    if (CMP_EQ(eax, ecx)) goto loc_000F67F1; /* je: equal / zero */

loc_000F67E9:
    eax = eax + ebx;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ebx))) goto loc_000F67E5; /* jne: not equal / not zero */

loc_000F67F1:
    xmm2.f[0] = MEMF(eax + 0x18); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x39940C); /* mulss */

loc_000F67FE:
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    eax = ecx;
    eax = eax & 0x7F;
    eax = MEM32(esi + eax * 4 + 0x20);
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ecx))) goto loc_000F6821; /* je: equal / zero */

loc_000F6812:
    edx = MEM32(esi + 0x1C);

loc_000F6815:
    if (CMP_EQ(eax, edx)) goto loc_000F6821; /* je: equal / zero */

loc_000F6819:
    eax = eax + ebx;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_000F6815; /* jne: not equal / not zero */

loc_000F6821:
    xmm1.f[0] = MEMF(eax); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_000F682E; /* jb: below (unsigned <) */

loc_000F682A:
    SET_LO8(ecx, 1);
    goto loc_000F6830;

loc_000F682E:
    SET_LO8(ecx, 0); /* xor self */

loc_000F6830:
    SET_LO8(edx, MEM8(ebp + 8));
    SET_LO8(edx, LO8(edx) & 0x40);
    SET_LO8(ebx, LO8(ecx));
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEM8(esp + 0xF) = LO8(edx);
    if ((LO8(edx) != 0)) goto loc_000F6846; /* jne: not equal / not zero */

loc_000F6841:
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */

loc_000F6846:
    edi = edi + 2;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_000F68A1; /* je: equal / zero */

loc_000F6853:
    xmm3.f[0] = MEMF(eax + 0x18); /* movss */
    edx = ecx;
    edx = edx & 0x7F;
    eax = MEM32(esi + edx * 4 + 0x20);
    /* cmp MEM16(eax + 0x1C), LO16(ecx) - flags set for next jcc */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ecx))) goto loc_000F6882; /* je: equal / zero */

loc_000F6872:
    edx = MEM32(esi + 0x1C);

loc_000F6875:
    if (CMP_EQ(eax, edx)) goto loc_000F6882; /* je: equal / zero */

loc_000F6879:
    eax = eax + 0x20;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_000F6875; /* jne: not equal / not zero */

loc_000F6882:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_000F688F; /* jne: not equal / not zero */

loc_000F6886:
    xmm3.f[0] = MEMF(eax); /* movss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm3.f[0] < xmm0.f[0])) goto loc_000F6891; /* jb: below (unsigned <) */

loc_000F688F:
    SET_LO8(ebx, 1);

loc_000F6891:
    SET_LO16(ecx, MEM16(edi + 2));
    edi = edi + 2;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_000F6853; /* jne: not equal / not zero */

loc_000F689D:
    SET_LO8(edx, MEM8(esp + 0xF));

loc_000F68A1:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000F68D6; /* je: equal / zero */

loc_000F68A5:
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_000F68B5; /* jne: not equal / not zero */

loc_000F68A9:
    xmm2.f[0] = MEMF(eax + 0x10); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 8); /* addss */
    goto loc_000F68BA;

loc_000F68B5:
    xmm2.f[0] = MEMF(eax + 0x18); /* movss */

loc_000F68BA:
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 0x10) = eax;
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */

loc_000F68D6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
