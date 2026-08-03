#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014DDF0
 * Original: 0x0014DDF0 - 0x0014E50D (1821 bytes, 335 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014DDF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014DDF0:
    xmm1.f[0] = MEMF(0x3B1698); /* movss */
    esp = esp - 0x5C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ebp + 0x2B0);
    ecx = MEM32(eax + 0xCC4);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x2B8);
    edx = MEM32(ecx + 0x1024);
    ecx = MEM32(edx + 8);
    eax = eax + eax * 4;
    eax = eax << 4;
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    edx = MEM32(eax + ecx);
    ecx = MEM32(eax + ecx + 4);
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0014E505; /* ja: above (unsigned >) */

loc_0014DE35:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x8CA));
    eax = 0; /* xor self */
    if (CMP_NE(LO8(ebx), LO8(eax))) goto loc_0014E504; /* jne: not equal / not zero */

loc_0014DE46:
    xmm2.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B16B8); /* movss */
    MEM32(esp + 0x38) = eax;
    MEM8(esp + 0x64) = LO8(eax);
    MEM8(esp + 0x65) = LO8(eax);
    MEM8(esp + 0x66) = LO8(eax);
    MEM8(esi + 0x8CA) = 4;
    eax = MEM32(ebp + 0x204);
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B16B4); /* movss */
    eax = eax + 0x30;
    /* cmp ecx, 0x5BBA30EB - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    xmm2.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    if (CMP_A(ecx, 0x5BBA30EB)) goto loc_0014E245; /* ja: above (unsigned >) */

loc_0014DF13:
    if (CMP_B(ecx, 0x5BBA30EB)) goto loc_0014DF21; /* jb: below (unsigned <) */

loc_0014DF15:
    if (CMP_A(edx, 0x90C68000u)) goto loc_0014E245; /* ja: above (unsigned >) */

loc_0014DF21:
    if (CMP_NE(edx, 0x90C68000u)) goto loc_0014DF35; /* jne: not equal / not zero */

loc_0014DF29:
    if (CMP_EQ(ecx, 0x5BBA30EB)) goto loc_0014E1BF; /* je: equal / zero */

loc_0014DF35:
    if (CMP_A(ecx, 0x5970064F)) goto loc_0014E121; /* ja: above (unsigned >) */

loc_0014DF41:
    if (CMP_B(ecx, 0x5970064F)) goto loc_0014DF4F; /* jb: below (unsigned <) */

loc_0014DF43:
    if (CMP_A(edx, 0xC9FA8000u)) goto loc_0014E121; /* ja: above (unsigned >) */

loc_0014DF4F:
    if (CMP_NE(edx, 0xC9FA8000u)) goto loc_0014DF63; /* jne: not equal / not zero */

loc_0014DF57:
    if (CMP_EQ(ecx, 0x5970064F)) goto loc_0014E09B; /* je: equal / zero */

loc_0014DF63:
    if (CMP_NE(edx, 0xB1000000u)) goto loc_0014DF77; /* jne: not equal / not zero */

loc_0014DF6B:
    if (CMP_EQ(ecx, 0x537E8FD3)) goto loc_0014E015; /* je: equal / zero */

loc_0014DF77:
    if (CMP_NE(edx, 0xE8000000u)) goto loc_0014E421; /* jne: not equal / not zero */

loc_0014DF83:
    if (CMP_NE(ecx, 0x55784E69)) goto loc_0014E421; /* jne: not equal / not zero */

loc_0014DF8F:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CD20);
    ecx = MEM32(edx * 8 + 0x39CD24);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x754); /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x750); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x754); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x758); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x75C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x75C); /* addss */
    goto loc_0014E41B;

loc_0014E015:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CC98);
    ecx = MEM32(edx * 8 + 0x39CC9C);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x734); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x730); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x734); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x738); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x73C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x73C); /* addss */
    goto loc_0014E41B;

loc_0014E09B:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CF40);
    ecx = MEM32(edx * 8 + 0x39CF44);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x784); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x780); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x784); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x788); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x78C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x78C); /* addss */
    goto loc_0014E41B;

loc_0014E121:
    if (CMP_NE(edx, 0x817A5C00u)) goto loc_0014E421; /* jne: not equal / not zero */

loc_0014E12D:
    if (CMP_NE(ecx, 0x5B568999)) goto loc_0014E421; /* jne: not equal / not zero */

loc_0014E139:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CFC8);
    ecx = MEM32(edx * 8 + 0x39CFCC);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x794); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x790); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x794); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x798); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x79C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x79C); /* addss */
    goto loc_0014E41B;

loc_0014E1BF:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CC10);
    ecx = MEM32(edx * 8 + 0x39CC14);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x744); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x740); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x744); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x748); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x74C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x74C); /* addss */
    goto loc_0014E41B;

loc_0014E245:
    if (CMP_NE(edx, 0xD92C4000u)) goto loc_0014E259; /* jne: not equal / not zero */

loc_0014E24D:
    if (CMP_EQ(ecx, 0x76716724)) goto loc_0014E39A; /* je: equal / zero */

loc_0014E259:
    if (CMP_NE(edx, 0xD9535000u)) goto loc_0014E26D; /* jne: not equal / not zero */

loc_0014E261:
    if (CMP_EQ(ecx, 0x76716724)) goto loc_0014E314; /* je: equal / zero */

loc_0014E26D:
    if (CMP_NE(edx, 0xB8000000u)) goto loc_0014E421; /* jne: not equal / not zero */

loc_0014E279:
    if (CMP_NE(ecx, 0x8FB24F74u)) goto loc_0014E421; /* jne: not equal / not zero */

loc_0014E285:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CDA8);
    ecx = MEM32(edx * 8 + 0x39CDAC);
    xmm3.f[0] = MEMF(esi + 0x7A4); /* movss */
    /* comiss xmm3.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    if ((xmm3.f[0] >= xmm0.f[0])) goto loc_0014E504; /* jae: above or equal (unsigned >=) */

loc_0014E2B3:
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x7A0); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x7A8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x7AC); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x7AC); /* addss */
    goto loc_0014E41B;

loc_0014E314:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CEB8);
    ecx = MEM32(edx * 8 + 0x39CEBC);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x774); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x770); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x774); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x778); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x77C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x77C); /* addss */
    goto loc_0014E41B;

loc_0014E39A:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x8C1);
    eax = MEM32(edx * 8 + 0x39CE30);
    ecx = MEM32(edx * 8 + 0x39CE34);
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x764); /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x760); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x764); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x6C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x6C) ? xmm0.f[0] : MEMF(esp + 0x6C)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x768); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x76C); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x76C); /* addss */

loc_0014E41B:
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */

loc_0014E421:
    PUSH32(esp, 1);
    ebx = esp + 0x1C;
    eax = 0x40B7F4;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_0014E437:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x38) = eax;
    if (TEST_Z(eax, eax)) goto loc_0014E504; /* je: equal / zero */

loc_0014E443:
    edx = MEM32(eax + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_GE(eax & eax, 0)) goto loc_0014E457; /* jge: greater or equal (signed >=) */

loc_0014E451:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014E457:
    PUSH32(esp, 0x3DCCCCCD);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_0014E467:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = 0x4A71A0;
    MEM8(esp + 0x68) = 3;
    MEMF(esp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0014E47E:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014E4E7; /* je: equal / zero */

loc_0014E482:
    ecx = MEM32(0x73A1C0);
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0014E503; /* jle: less or equal (signed <=) */

loc_0014E490:
    ebx = MEM32(0x3EC414);

loc_0014E496:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014E4B2; /* jne: not equal / not zero */

loc_0014E49A:
    eax = MEM32(ebp + 0x204);
    eax = eax + 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_001518F0(); /* call 0x001518F0 */

loc_0014E4AE:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014E4B4; /* je: equal / zero */

loc_0014E4B2:
    SET_LO8(eax, 1);

loc_0014E4B4:
    ecx = MEM32(0x73A1C0);
    edi++;
    if (CMP_L(edi, ecx)) goto loc_0014E496; /* jl: less (signed <) */

loc_0014E4BF:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0014E503; /* je: equal / zero */

loc_0014E4C3:
    xmm0.f[0] = MEMF(0x3B16D8); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    goto loc_0014E4F5;

loc_0014E4E7:
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */

loc_0014E4F5:
    edi = esp + 0x24;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_0014E503:
    POP32(esp, edi);

loc_0014E504:
    POP32(esp, ebx);

loc_0014E505:
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
