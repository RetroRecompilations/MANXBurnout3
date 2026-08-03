#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014D5F0
 * Original: 0x0014D5F0 - 0x0014D89D (685 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014D5F0(void)
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

loc_0014D5F0:
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x8DF));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014D895; /* jne: not equal / not zero */

loc_0014D607:
    edx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_0014D895; /* jle: less or equal (signed <=) */

loc_0014D617:
    ecx = 0x73BACA;
    /* nop */

loc_0014D620:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014D62C; /* jne: not equal / not zero */

loc_0014D624:
    if (CMP_NE(MEM8(ecx), LO8(ebx))) goto loc_0014D62C; /* jne: not equal / not zero */

loc_0014D628:
    SET_LO8(eax, 0); /* xor self */
    goto loc_0014D62E;

loc_0014D62C:
    SET_LO8(eax, 1);

loc_0014D62E:
    ecx = ecx + 0x27E0;
    edx--;
    if ((edx != 0)) goto loc_0014D620; /* jne: not equal / not zero */

loc_0014D637:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014D895; /* je: equal / zero */

loc_0014D63F:
    if (CMP_NE(MEM8(esi + 0x8CB), LO8(ebx))) goto loc_0014D895; /* jne: not equal / not zero */

loc_0014D64B:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    eax = MEM32(esp + 0x6C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x8CB) = 0x1E;
    xmm1.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x70); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x598); /* subss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x5A4); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x598); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    MEM8(esp + 0x68) = LO8(ebx);
    MEM8(esp + 0x69) = LO8(ebx);
    MEM8(esp + 0x6A) = LO8(ebx);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = MEMF(esi + 0x5BC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5B0); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5B0); /* addss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x5D4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x5C8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x5C8); /* addss */
    eax = 0x4A71A0;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014D7AE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D81B; /* je: equal / zero */

loc_0014D7B2:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_0014D894; /* jle: less or equal (signed <=) */

loc_0014D7C4:
    PUSH32(esp, ebp);
    ebp = MEM32(0x3EC414);
    goto loc_0014D7D0;

    /* nop */

loc_0014D7D0:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014D7E7; /* jne: not equal / not zero */

loc_0014D7D4:
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014D7E3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014D7E9; /* je: equal / zero */

loc_0014D7E7:
    SET_LO8(eax, 1);

loc_0014D7E9:
    ecx = MEM32(0x73A1C0);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0014D7D0; /* jl: less (signed <) */

loc_0014D7F4:
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014D894; /* je: equal / zero */

loc_0014D7FD:
    xmm0.f[0] = MEMF(0x3B1770); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    goto loc_0014D82F;

loc_0014D81B:
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x74); /* movss */

loc_0014D82F:
    ecx = MEM32(esi + 0x880);
    PUSH32(esp, 1);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ecx);
    eax = 0x39CB88;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014D856:
    MEM32(esp + 0x3C) = eax;
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014D86D; /* jge: greater or equal (signed >=) */

loc_0014D867:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014D86D:
    SET_LO8(eax, MEM8(esp + 0x78));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), LO8(ebx))) ? 1 : 0); /* sete */
    edi = esp + 0x24;
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    esi = 0x40B844;
    ecx = ecx + ecx + 1;
    MEM8(esp + 0x68) = LO8(ecx);
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014D894:
    POP32(esp, edi);

loc_0014D895:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
