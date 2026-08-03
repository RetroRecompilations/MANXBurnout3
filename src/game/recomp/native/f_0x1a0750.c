#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A0750
 * Original: 0x001A0750 - 0x001A0937 (487 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A0750:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x41));
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_001A0762; /* jne: not equal / not zero */

loc_001A075E:
    esi = 0; /* xor self */
    goto loc_001A076E;

loc_001A0762:
    esi = ZX8(LO8(eax));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    esi = esi + 0x60EC2C;

loc_001A076E:
    fp_push(MEMF(edi + 0x30)); /* fld float */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001A0776:
    ebp = eax;
    SET_LO8(eax, MEM8(esp + 0x28));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A0789; /* je: equal / zero */

loc_001A0784:
    ecx = ebp + 1;
    goto loc_001A0795;

loc_001A0789:
    /* cmp MEM8(edi + 0x48), 1 - flags set for next jcc */
    ecx = ebp + 1;
    if (CMP_A(MEM8(edi + 0x48), 1)) goto loc_001A0795; /* ja: above (unsigned >) */

loc_001A0792:
    ecx = ebp + 3;

loc_001A0795:
    esi = MEM32(esi);
    ebx = MEM32(esi + 0x10);
    edx = ZX16(LO16(ecx));
    if (CMP_L(edx, ebx)) goto loc_001A07A6; /* jl: less (signed <) */

loc_001A07A1:
    SET_LO16(ecx, LO16(ebx));
    SET_LO16(ecx, LO16(ecx) - 1);

loc_001A07A6:
    SET_LO8(edx, MEM8(esp + 0x24));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A07BB; /* je: equal / zero */

loc_001A07AE:
    edx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    edx--;
    edx = edx & 2;
    goto loc_001A07C6;

loc_001A07BB:
    edx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(eax), LO8(eax))) ? 1 : 0); /* sete */
    edx = edx + edx + 1;

loc_001A07C6:
    ecx = ZX16(LO16(ecx));
    eax = ZX16(LO16(ebp));
    /* cmp ecx, eax - flags set for next jcc */
    edi = edx;
    if (CMP_L(ecx, eax)) goto loc_001A086B; /* jl: less (signed <) */

loc_001A07D6:
    ebp = MEM32(esi + 8);
    eax = ecx + ecx * 8;
    esi = ebp + eax * 2;

loc_001A07E0:
    eax = ebx + -1;
    /* cmp ecx, eax - flags set for next jcc */
    edx = ZX16(LO16(ecx));
    SET_LO8(eax, (CMP_GE(ecx, eax)) ? 1 : 0); /* setge */
    if (CMP_GE(edx, ebx)) goto loc_001A085A; /* jge: greater or equal (signed >=) */

loc_001A07EF:
    if (TEST_S(edx, edx)) goto loc_001A085A; /* jl: less (signed <) */

loc_001A07F3:
    edx = edx + edx * 8;
    edx = ebp + edx * 2;
    if (CMP_EQ(MEM8(edx + edi + 0xC), 0xFF)) goto loc_001A085A; /* je: equal / zero */

loc_001A0801:
    SET_LO8(edx, MEM8(esp + 0x28));
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, MEM8(esi + edi + 0xC));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A0855; /* je: equal / zero */

loc_001A080D:
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_001A085A; /* je: equal / zero */

loc_001A0812:
    SET_LO16(esi, MEM16(esi + edi * 2));
    eax = ZX8(LO8(edx));
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;
    /* test LO16(esi), LO16(esi) - flags set for next jcc */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x1C);
    if (TEST_NZ(LO16(esi), LO16(esi))) goto loc_001A0875; /* jne: not equal / not zero */

loc_001A0830:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x18);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    POP32(esp, ebp);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_001A0855:
    if (CMP_NE(LO8(edx), 0xFF)) goto loc_001A089E; /* jne: not equal / not zero */

loc_001A085A:
    eax = ZX16(MEM16(esp + 0x10));
    ecx--;
    esi = esi - 0x12;
    if (CMP_GE(ecx, eax)) goto loc_001A07E0; /* jge: greater or equal (signed >=) */

loc_001A086B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_001A0875:
    edx = ZX16(LO16(esi));
    POP32(esp, edi);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B168C); /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_001A089E:
    SET_LO16(esi, MEM16(esi + edi * 2));
    edi = MEM32(esp + 0x18);
    edx = ZX8(LO8(edx));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    edx = edx + 0x60EC2C;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(edi) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A0912; /* je: equal / zero */

loc_001A08B8:
    ebx = MEM32(esp + 0x10);
    edx = ecx;
    edx = edx - ebx;
    edx--;
    if (CMP_BE(LO16(edx), 4)) goto loc_001A08CC; /* jbe: below or equal (unsigned <=) */

loc_001A08C7:
    edx = 4;

loc_001A08CC:
    eax = ZX16(LO16(edx));
    ecx = ecx - eax;
    /* cmp LO16(esi), LO16(edx) - flags set for next jcc */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x20);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    if (CMP_BE(LO16(esi), LO16(edx))) goto loc_001A08FD; /* jbe: below or equal (unsigned <=) */

loc_001A08E2:
    edx = ZX16(LO16(esi));
    POP32(esp, edi);
    edx = edx - eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    POP32(esp, ebp);
    MEMF(eax) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_001A08FD:
    ecx = MEM32(esp + 0x1C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_001A0912:
    edx = MEM32(esp + 0x20);
    POP32(esp, edi);
    eax = ZX16(LO16(esi));
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x18);
    POP32(esp, esi);
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    POP32(esp, ebp);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
