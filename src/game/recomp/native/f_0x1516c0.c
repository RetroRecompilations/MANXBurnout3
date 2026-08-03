#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001516C0
 * Original: 0x001516C0 - 0x001518EA (554 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001516C0(void)
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

loc_001516C0:
    ecx = MEM32(0x73A1C0);
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(eax, 0); /* xor self */
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001518E1; /* jle: less or equal (signed <=) */

loc_001516DE:
    PUSH32(esp, edi);
    edi = MEM32(0x3EC414);

loc_001516E5:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001516FA; /* jne: not equal / not zero */

loc_001516E9:
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_001516F6:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001516FC; /* je: equal / zero */

loc_001516FA:
    SET_LO8(eax, 1);

loc_001516FC:
    ecx = MEM32(0x73A1C0);
    esi++;
    if (CMP_L(esi, ecx)) goto loc_001516E5; /* jl: less (signed <) */

loc_00151707:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001518E0; /* je: equal / zero */

loc_0015170F:
    /* test ecx, ecx - flags set for next jcc */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 4); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEM32(esp + 0x28) = 0;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    MEM8(esp + 0x54) = 0;
    MEM8(esp + 0x55) = 0;
    MEM8(esp + 0x56) = 0;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00151810; /* jle: less or equal (signed <=) */

loc_001517BA:
    eax = 0x73BACA;
    /* nop */

loc_001517C0:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001517C9; /* jne: not equal / not zero */

loc_001517C4:
    if (CMP_EQ(MEM8(eax), 0)) goto loc_001517CB; /* je: equal / zero */

loc_001517C9:
    SET_LO8(ebx, 1);

loc_001517CB:
    eax = eax + 0x27E0;
    ecx--;
    if ((ecx != 0)) goto loc_001517C0; /* jne: not equal / not zero */

loc_001517D3:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00151810; /* je: equal / zero */

loc_001517D7:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A55F8); /* addss */
    eax = MEM32(esp + 0x5C);
    MEMF(0x40E12C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    eax = 0x39CBA0;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00151806:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_0015182F;

loc_00151810:
    edx = MEM32(esp + 0x5C);
    eax = MEM32(edx + 0x880);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = 0x39CBA8;
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_00151827:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */

loc_0015182F:
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1D30); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A2928); /* movss */
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00151868; /* jge: greater or equal (signed >=) */

loc_00151862:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00151868:
    edi = esp + 0x10;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    esi = 0x40B844;
    MEM8(esp + 0x54) = 2;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0015187F:
    /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, 0x10);
    if (TEST_Z(eax, eax)) goto loc_0015188D; /* je: equal / zero */

loc_00151885:
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | LO8(ebx);
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_0015188D:
    SET_LO8(eax, MEM8(0x40B314));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001518BE; /* jne: not equal / not zero */

loc_00151896:
    edi = esp + 0x10;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_001518A4:
    if (TEST_Z(eax, eax)) goto loc_001518BE; /* je: equal / zero */

loc_001518A8:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x37) = MEM8(eax + 0x37) | LO8(ebx);
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_001518BE:
    esi = MEM32(esp + 0x5C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x47C35000);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_0014D5F0(); /* call 0x0014D5F0 */

loc_001518D1:
    PUSH32(esp, 1);
    PUSH32(esp, 0x47C35000);
    PUSH32(esp, ebp);
    eax = esi;
    PUSH32(esp, 0); sub_0014F130(); /* call 0x0014F130 */

loc_001518E0:
    POP32(esp, edi);

loc_001518E1:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
