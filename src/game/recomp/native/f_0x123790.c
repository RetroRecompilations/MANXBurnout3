#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00123790
 * Original: 0x00123790 - 0x001239B5 (549 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00123790:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    SET_LO8(eax, MEM8(esi + 0x215));
    /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(LO8(eax), 1)) goto loc_001237B2; /* je: equal / zero */

loc_001237A5:
    if (CMP_EQ(LO8(eax), 2)) goto loc_001237B2; /* je: equal / zero */

loc_001237A9:
    /* cmp LO8(eax), 3 - flags set for next jcc */
    MEM8(esp + 0xB) = 0;
    if (CMP_NE(LO8(eax), 3)) goto loc_001237B7; /* jne: not equal / not zero */

loc_001237B2:
    MEM8(esp + 0xB) = 1;

loc_001237B7:
    eax = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    ecx = MEM32(ebp + 0x14);
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B1A24); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEM32(edx) = 0xFFFFFFFFu;
    eax = MEM32(esi + 0x200);
    edx = MEM32(eax);
    ebx = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_0012394F; /* jle: less or equal (signed <=) */

loc_001237F7:
    MEM32(esp + 0xC) = ebx;
    goto loc_00123800;

    /* nop */

loc_00123800:
    ecx = MEM32(eax + 8);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + ebx * 2));
    SET_LO8(ecx, MEM8(esp + 0xB));
    edx = edx & 0xFF;
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edi = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0012383E; /* je: equal / zero */

loc_00123818:
    SET_LO8(ecx, MEM8(esi + 0x210));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012383E; /* jne: not equal / not zero */

loc_00123822:
    if (CMP_EQ(edi, 0x26)) goto loc_0012383E; /* je: equal / zero */

loc_00123827:
    if (TEST_S(edi, edi)) goto loc_00123830; /* jl: less (signed <) */

loc_0012382B:
    if (CMP_LE(edi, 0xB)) goto loc_0012383E; /* jle: less or equal (signed <=) */

loc_00123830:
    if (CMP_L(edi, 0xC)) goto loc_0012383A; /* jl: less (signed <) */

loc_00123835:
    if (CMP_LE(edi, 0x14)) goto loc_0012383E; /* jle: less or equal (signed <=) */

loc_0012383A:
    SET_LO8(ecx, 0); /* xor self */
    goto loc_00123840;

loc_0012383E:
    SET_LO8(ecx, 1);

loc_00123840:
    SET_LO8(edx, MEM8(esi + 0x210));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00123890; /* je: equal / zero */

loc_0012384A:
    edx = MEM32(esi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    eax = MEM32(eax + 4);
    edx = MEM32(esp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edx + 0x30), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x10;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x10))) goto loc_001238E8; /* ja: above (unsigned >) */

loc_00123890:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001238E8; /* je: equal / zero */

loc_00123894:
    ecx = MEM32(esi + 0x200);
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 0xC);
    ecx = edx + eax;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = ecx + 0x20;
    PUSH32(esp, eax);
    edx = ecx + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_001B2230(); /* call 0x001B2230 */

loc_001238C4:
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001238E8; /* je: equal / zero */

loc_001238CB:
    eax = MEM32(ebp + 0x14);
    xmm1.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001238E8; /* jbe: below or equal (unsigned <=) */

loc_001238DD:
    edx = MEM32(ebp + 0x10);
    ecx = eax;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEM32(edx) = ebx;

loc_001238E8:
    if (CMP_NE(edi, 0x26)) goto loc_00123905; /* jne: not equal / not zero */

loc_001238ED:
    eax = MEM32(esi + 0xCC4);
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(eax + 0x324) = xmm0.f[0]; /* movss */
    goto loc_00123930;

loc_00123905:
    ecx = MEM32(esi + 0xCC4);
    xmm0.f[0] = MEMF(ecx + 0x324); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3A69B4) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00123930; /* jp: parity */

loc_00123920:
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    MEMF(ecx + 0x324) = xmm0.f[0]; /* movss */

loc_00123930:
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x200);
    ecx = MEM32(eax);
    ebx++;
    edx = edx + 0x40;
    /* cmp ebx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (CMP_L(ebx, ecx)) goto loc_00123800; /* jl: less (signed <) */

loc_0012394C:
    ecx = MEM32(ebp + 0x14);

loc_0012394F:
    edx = MEM32(ebp + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    eax = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0x14;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_GE(edx & edx, 0)) ? 1 : 0); /* setge */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
