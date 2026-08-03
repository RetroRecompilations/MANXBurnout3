#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152400
 * Original: 0x00152400 - 0x00152691 (657 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152400(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00152400:
    xmm0.f[0] = MEMF(edx * 4 + 0x40F7A0); /* movss */
    esp = esp - 0x68;
    /* comiss xmm0.f[0], MEMF(esi + 0x2C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esi + 0x2C))) goto loc_0015265A; /* ja: above (unsigned >) */

loc_00152416:
    xmm0.f[0] = MEMF(edx * 4 + 0x40F7B0); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x2C) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esi + 0x2C))) goto loc_0015265A; /* ja: above (unsigned >) */

loc_00152429:
    eax = MEM32(esi + 0x38);
    if (CMP_LE(eax & eax, 0)) goto loc_0015265A; /* jle: less or equal (signed <=) */

loc_00152434:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_0015243D:
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm1.f[0] = MEMF(edx * 4 + 0x40F798); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx * 4 + 0x40F7A0); /* subss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x2C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx * 4 + 0x40F7A0); /* subss */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x1C);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = eax;
    MEMF(esp) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x2C); /* movss */
    xmm1.f[0] = MEMF(edx * 4 + 0x40F7A8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx * 4 + 0x40F7B0); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx * 4 + 0x40F7B0); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    /* test edx, edx - flags set for next jcc */
    xmm0.f[0] = MEMF(edx * 4 + 0x40F7B8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx * 4 + 0x40F7C0); /* subss */
    xmm1.f[0] = MEMF(edx * 4 + 0x40F7C8); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx * 4 + 0x40F7D0); /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm4.f[0] = (float)(int32_t)MEM32(esi + 0x38); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edx * 4 + 0x40F7C0); /* addss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B17BC); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edx * 4 + 0x40F7D0); /* addss */
    if (TEST_NZ(edx, edx)) goto loc_0015257B; /* jne: not equal / not zero */

loc_0015256B:
    ecx = MEM32(esi + 0x20);
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    /* test ecx, ecx - flags set for next jcc */
    goto loc_00152589;

loc_0015257B:
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    /* test eax, eax - flags set for next jcc */

loc_00152589:
    if (CMP_GE(eax & eax, 0)) goto loc_00152591; /* jge: greater or equal (signed >=) */

loc_0015258B:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00152591:
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5.f[0] = MEMF(esp + 0x44); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x28); /* movss */
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x28); /* subss */
    PUSH32(esp, edi);
    MEMF(esp + 0x48) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx * 4 + 0x40F7D8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = MEMF(edx * 4 + 0x40F7E0); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    eax = MEM32(esi + edx * 4 + 0x10);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x40); /* mulss */
    edi = esp + 0x24;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_00152655:
    POP32(esp, edi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

loc_0015265A:
    eax = MEM32(esi + edx * 4 + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0015268D; /* je: equal / zero */

loc_00152662:
    SET_LO8(ecx, MEM8(eax + 0x37));
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    SET_LO8(ecx, LO8(ecx) | 4);
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM8(eax + 0x37) = LO8(ecx);
    MEM32(esi + edx * 4 + 0x10) = 0;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */

loc_0015268D:
    esp = esp + 0x68;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
