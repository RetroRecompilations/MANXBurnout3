#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014EEA0
 * Original: 0x0014EEA0 - 0x0014F121 (641 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EEA0(void)
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

loc_0014EEA0:
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = ecx;
    xmm1.f[0] = MEMF(esi + 0x6A0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    PUSH32(esp, edi);
    edi = eax;
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014F11B; /* ja: above (unsigned >) */

loc_0014EEBA:
    SET_LO8(eax, MEM8(esi + 0x8C8));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014F11A; /* jne: not equal / not zero */

loc_0014EECB:
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
    xmm3.f[0] = MEMF(esi + 0x6A4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x6A0); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(esi + 0x6A0); /* subss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(esi + 0x8C8) = LO8(edx);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = MEMF(esi + 0x6AC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x6A8); /* subss */
    xmm4.f[0] = MEMF(esi + 0x6B4); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(esi + 0x6B0); /* subss */
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
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x6A8); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esi + 0x6B0); /* addss */
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
    if (CMP_EQ(MEM8(esi + 0x8DF), LO8(ebx))) goto loc_0014F03B; /* je: equal / zero */

loc_0014F033:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */

loc_0014F03B:
    edx = MEM32(esi + 0x880);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = 0x39CB68;
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_0014F055:
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014F065:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_0014F080; /* jge: greater or equal (signed >=) */

loc_0014F07A:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014F080:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEM8(esp + 0x64) = 3;
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014F097:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F0FD; /* je: equal / zero */

loc_0014F09B:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    ebp = 0; /* xor self */
    if (CMP_LE(ecx, ebx)) goto loc_0014F119; /* jle: less or equal (signed <=) */

loc_0014F0A9:
    /* nop */

loc_0014F0B0:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0014F0C8; /* jne: not equal / not zero */

loc_0014F0B4:
    eax = MEM32(0x3EC414);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014F0C4:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014F0CA; /* je: equal / zero */

loc_0014F0C8:
    SET_LO8(eax, 1);

loc_0014F0CA:
    ecx = MEM32(0x73A1C0);
    ebp++;
    if (CMP_L(ebp, ecx)) goto loc_0014F0B0; /* jl: less (signed <) */

loc_0014F0D5:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0014F119; /* je: equal / zero */

loc_0014F0D9:
    xmm0.f[0] = MEMF(0x3B16D8); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_0014F10B;

loc_0014F0FD:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */

loc_0014F10B:
    edi = esp + 0x20;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014F119:
    POP32(esp, ebp);

loc_0014F11A:
    POP32(esp, ebx);

loc_0014F11B:
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
