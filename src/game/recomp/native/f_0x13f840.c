#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013F840
 * Original: 0x0013F840 - 0x0013F9BD (381 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013F840:
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi);
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + 0xC) = LO8(eax);
    ecx = 0; /* xor self */

loc_0013F854:
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(esi, ebx)) goto loc_0013F868; /* je: equal / zero */

loc_0013F85F:
    ebx = SX8(LO8(eax));
    MEM8(esp + ebx + 0x18) = LO8(edx);
    SET_LO8(eax, LO8(eax) + 1);

loc_0013F868:
    SET_LO8(edx, LO8(edx) + 1);
    ecx++;
    if (CMP_L(LO8(edx), 0xC)) goto loc_0013F854; /* jl: less (signed <) */

loc_0013F870:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xC) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F9B6; /* je: equal / zero */

loc_0013F87C:
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    edx = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(esp + 0x14) = 0x4A1BE8;
    esi = 0x40DE90;
    edi = edi + 0x3CB0;
    MEM32(esp + 0x18) = 0xF;
    goto loc_0013F8B0;

loc_0013F8A4:
    SET_LO8(eax, MEM8(esp + 0x10));
    goto loc_0013F8B0;

    /* nop */

loc_0013F8B0:
    SET_LO8(ebx, 0); /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x11) = 0;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x13) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0013F958; /* jle: less or equal (signed <=) */

loc_0013F8C9:
    ebp = esp + 0x1C;
    /* nop */

loc_0013F8D0:
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    eax = eax + edx;
    ecx = eax + eax * 2;
    ecx = ecx << 2;
    SET_LO8(eax, MEM8(ecx + 0x4191B8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013F918; /* je: equal / zero */

loc_0013F8E9:
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x11);
    eax = (uint32_t)(int32_t)SMEM8(esp + eax + 0x1C);
    xmm1.f[0] = MEMF(ecx + 0x4191B4); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    eax = eax + edx;
    eax = eax + eax * 2;
    /* comiss xmm1.f[0], MEMF(eax * 4 + 0x4191B4) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(eax * 4 + 0x4191B4))) goto loc_0013F911; /* jbe: below or equal (unsigned <=) */

loc_0013F90D:
    MEM8(esp + 0x11) = LO8(ebx);

loc_0013F911:
    MEM8(esp + 0x13) = 1;
    goto loc_0013F940;

loc_0013F918:
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x12);
    eax = (uint32_t)(int32_t)SMEM8(esp + eax + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    eax = eax + edx;
    eax = eax + eax * 2;
    xmm1.f[0] = MEMF(eax * 4 + 0x4191B4); /* movss */
    /* comiss xmm1.f[0], MEMF(ecx + 0x4191B4) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(ecx + 0x4191B4))) goto loc_0013F940; /* jbe: below or equal (unsigned <=) */

loc_0013F93C:
    MEM8(esp + 0x12) = LO8(ebx);

loc_0013F940:
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) + 1);
    ebp++;
    if (CMP_L(LO8(ebx), LO8(eax))) goto loc_0013F8D0; /* jl: less (signed <) */

loc_0013F94B:
    SET_LO8(eax, MEM8(esp + 0x13));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x11);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013F95D; /* jne: not equal / not zero */

loc_0013F958:
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x12);

loc_0013F95D:
    eax = (uint32_t)(int32_t)SMEM8(esp + ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    eax = eax + edx;
    eax = eax + eax * 2;
    ecx = MEM32(eax * 4 + 0x4191B0);
    MEM32(edi) = ecx;
    eax = MEM32(eax * 4 + 0x4191B4);
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    MEM32(esi + -8) = ecx;
    ecx = MEM32(eax + 4);
    eax = eax + 8;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi) = edi;
    MEM32(esi + -4) = ecx;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    edx++;
    edi = edi + 8;
    esi = esi + 0x14;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_0013F8A4; /* jne: not equal / not zero */

loc_0013F9B5:
    POP32(esp, ebp);

loc_0013F9B6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
