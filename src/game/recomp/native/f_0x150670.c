#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00150670
 * Original: 0x00150670 - 0x001509ED (893 bytes, 188 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150670:
    esp = esp - 0x50;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    SET_LO8(eax, MEM8(ebp + 0x8DF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001509AF; /* jne: not equal / not zero */

loc_00150686:
    eax = MEM32(0x73A1C0);
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x64) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_0015096B; /* jle: less or equal (signed <=) */

loc_001506A4:
    ebx = 0x73C610;
    /* nop */

loc_001506B0:
    SET_LO8(eax, MEM8(ebx + -2886));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00150947; /* je: equal / zero */

loc_001506BE:
    edi = MEM32(esp + 0x10);
    eax = MEM32(ebx);
    edi++;
    /* cmp MEM8(eax + 0x212), 0 - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    SET_LO8(ecx, 1);
    if (CMP_EQ(MEM8(eax + 0x212), 0)) goto loc_001506D6; /* je: equal / zero */

loc_001506D4:
    SET_LO8(ecx, 0); /* xor self */

loc_001506D6:
    if (CMP_EQ(MEM8(eax + 0x8D3), 0)) goto loc_001506E1; /* je: equal / zero */

loc_001506DF:
    SET_LO8(ecx, 0); /* xor self */

loc_001506E1:
    if (CMP_EQ(MEM8(eax + 0x993), 0)) goto loc_001506EC; /* je: equal / zero */

loc_001506EA:
    SET_LO8(ecx, 0); /* xor self */

loc_001506EC:
    if (CMP_EQ(MEM8(eax + 0xA53), 0)) goto loc_001506F7; /* je: equal / zero */

loc_001506F5:
    SET_LO8(ecx, 0); /* xor self */

loc_001506F7:
    if (CMP_EQ(MEM8(eax + 0xB13), 0)) goto loc_00150702; /* je: equal / zero */

loc_00150700:
    SET_LO8(ecx, 0); /* xor self */

loc_00150702:
    eax = MEM32(ebp + 0x864);
    if (TEST_NZ(eax, eax)) goto loc_00150827; /* jne: not equal / not zero */

loc_00150710:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0015081F; /* je: equal / zero */

loc_00150718:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(ebp + 0x7CC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx + -9216); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx + -9212); /* movss */
    MEM8(esp + 0x5C) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    eax = MEM32(ebp + 0x854);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx + -9208); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x5D) = 1;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001507DB; /* jge: greater or equal (signed >=) */

loc_001507D5:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001507DB:
    edi = esp + 0x18;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    esi = 0x40B844;
    MEM8(esp + 0x5C) = 3;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_001507F2:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x864) = eax;
    if (TEST_Z(eax, eax)) goto loc_001509AC; /* je: equal / zero */

loc_00150800:
    MEM8(ebp + 0x8D9) = 0;
    edx = MEM32(eax + 0x14);
    SET_LO8(eax, MEM8(esp + 0x64));
    MEM32(ebp + 0x7D4) = edx;
    MEM8(ebp + 0x8D1) = LO8(eax);
    goto loc_00150947;

loc_0015081F:
    if (TEST_Z(eax, eax)) goto loc_00150947; /* je: equal / zero */

loc_00150827:
    esi = (uint32_t)(int32_t)SMEM8(ebp + 0x8D1);
    if (CMP_NE(esi, edx)) goto loc_00150947; /* jne: not equal / not zero */

loc_00150836:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001509B6; /* je: equal / zero */

loc_0015083E:
    SET_LO8(ecx, MEM8(ebp + 0x8D9));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0015085A; /* jne: not equal / not zero */

loc_00150848:
    xmm0.f[0] = MEMF(ebp + 0x7DC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x7CC); /* addss */
    goto loc_0015086A;

loc_0015085A:
    xmm0.f[0] = MEMF(ebp + 0x7E0); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x7CC); /* mulss */

loc_0015086A:
    /* comiss xmm0.f[0], MEMF(ebp + 0x7D8) - sets EFLAGS */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x7CC) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(ebp + 0x7D8))) goto loc_00150891; /* jbe: below or equal (unsigned <=) */

loc_0015087E:
    ecx = MEM32(ebp + 0x7D8);
    MEM8(ebp + 0x8D9) = 1;
    MEM32(ebp + 0x7CC) = ecx;

loc_00150891:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -9216); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -9212); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + -9208); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x7CC); /* movss */
    edi = esp + 0x18;
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x30) = 0;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    MEM8(esp + 0x5C) = 0;
    MEM8(esp + 0x5D) = 0;
    MEM8(esp + 0x5E) = 0;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_00150947:
    edx = MEM32(esp + 0x64);
    eax = MEM32(0x73A1C0);
    edx++;
    ebx = ebx + 0x27E0;
    /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x64) = edx;
    if (CMP_L(edx, eax)) goto loc_001506B0; /* jl: less (signed <) */

loc_00150963:
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001509AC; /* jne: not equal / not zero */

loc_0015096B:
    esi = MEM32(ebp + 0x864);
    if (TEST_Z(esi, esi)) goto loc_001509AC; /* je: equal / zero */

loc_00150975:
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00150980:
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_0015098B:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = 0;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    MEM32(ebp + 0x864) = 0;

loc_001509AC:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001509AF:
    POP32(esp, ebp);
    esp = esp + 0x50;
    esp += 8; return; /* ret 4 */

loc_001509B6:
    xmm0.f[0] = MEMF(ebp + 0x7CC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + 0x7E4); /* subss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(ebp + 0x7CC) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x8D9) = 0;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00150891; /* jbe: below or equal (unsigned <=) */

loc_001509E1:
    edi = ebp;
    PUSH32(esp, 0); sub_00150620(); /* call 0x00150620 */

loc_001509E8:
    goto loc_00150947;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
