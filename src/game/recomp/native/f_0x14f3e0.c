#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014F3E0
 * Original: 0x0014F3E0 - 0x0014F689 (681 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F3E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F3E0:
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = ecx;
    xmm1.f[0] = MEMF(esi + 0x6D0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    PUSH32(esp, edi);
    edi = eax;
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014F683; /* ja: above (unsigned >) */

loc_0014F3FA:
    SET_LO8(eax, MEM8(esi + 0x8C7));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014F682; /* jne: not equal / not zero */

loc_0014F40B:
    eax = MEM32(esi + 0x520);
    ecx = MEM32(esi + 0x524);
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    edx = edx + ecx;
    eax = eax << 0x10;
    eax = eax + edx;
    MEM32(esi + 0x520) = eax;
    eax = eax + ecx;
    MEM32(esi + 0x524) = eax;
    eax = MEM32(esi + 0x520);
    edx = 0; /* xor self */
    ecx = 0x14;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    xmm3.f[0] = MEMF(esi + 0x6D4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x6D0); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x6D0); /* subss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(esi + 0x8C7) = LO8(edx);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = MEMF(esi + 0x6DC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x6D8); /* subss */
    xmm4.f[0] = MEMF(esi + 0x6E4); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 0x6E0); /* subss */
    /* cmp MEM8(esi + 0x8DF), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x6D8); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x6E0); /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x34) = ebx;
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x5C) = 0xFFFFFFFFu;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM8(esp + 0x61) = LO8(ebx);
    MEM8(esp + 0x62) = LO8(ebx);
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    if (CMP_EQ(MEM8(esi + 0x8DF), LO8(ebx))) goto loc_0014F57B; /* je: equal / zero */

loc_0014F573:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */

loc_0014F57B:
    edx = MEM32(esi + 0x880);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = 0x39CB78;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014F595:
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014F5A5:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_0014F5C0; /* jge: greater or equal (signed >=) */

loc_0014F5BA:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014F5C0:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014F5D2:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F635; /* je: equal / zero */

loc_0014F5D6:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    ebp = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_0014F681; /* jle: less or equal (signed <=) */

loc_0014F5E8:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014F600; /* jne: not equal / not zero */

loc_0014F5EC:
    eax = MEM32(0x3EC414);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014F5FC:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F602; /* je: equal / zero */

loc_0014F600:
    SET_LO8(eax, 1);

loc_0014F602:
    ecx = MEM32(0x73A1C0);
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_0014F5E8; /* jl: less (signed <) */

loc_0014F60D:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014F681; /* je: equal / zero */

loc_0014F611:
    xmm0.f[0] = MEMF(0x3A1A00); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_0014F643;

loc_0014F635:
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */

loc_0014F643:
    edi = esp + 0x20;
    esi = 0x40B844;
    MEM8(esp + 0x64) = 0xC;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014F656:
    if (CMP_EQ(eax, ebx)) goto loc_0014F681; /* je: equal / zero */

loc_0014F65A:
    PUSH32(esp, 1);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3ED70A3D);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E9EB852);
    PUSH32(esp, 0x3F2147AE);
    PUSH32(esp, 0x3F2147AE);
    esi = eax;
    PUSH32(esp, 0); sub_001CD0D0(); /* call 0x001CD0D0 */

loc_0014F681:
    POP32(esp, ebp);

loc_0014F682:
    POP32(esp, ebx);

loc_0014F683:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
