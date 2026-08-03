#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00150480
 * Original: 0x00150480 - 0x0015061F (415 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150480(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00150480:
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x8DF));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00150618; /* jne: not equal / not zero */

loc_00150494:
    xmm1.f[0] = MEMF(esi + 0x680); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_00150618; /* ja: above (unsigned >) */

loc_001504A5:
    SET_LO8(eax, MEM8(esi + 0x8D0));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00150618; /* jne: not equal / not zero */

loc_001504B3:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x680); /* subss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esi + 0x684); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 0x680); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEM8(esi + 0x8D0) = 5;
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 8) ? xmm0.f[0] : MEMF(esp + 8)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x68C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x688); /* subss */
    SET_LO8(eax, MEM8(esp + 0x60));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x688); /* addss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0015053F; /* je: equal / zero */

loc_00150535:
    xmm3.f[0] = MEMF(esi + 0x698); /* movss */
    goto loc_00150547;

loc_0015053F:
    xmm3.f[0] = MEMF(esi + 0x69C); /* movss */

loc_00150547:
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(esi + 0x694); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x690); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x690); /* addss */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_00150618; /* ja: above (unsigned >) */

loc_0015057E:
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_001CD180(); /* call 0x001CD180 */

loc_00150587:
    xmm0.f[0] = MEMF(edx); /* movss */
    eax = MEM32(esi + 0x880);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 8); /* movss */
    PUSH32(esp, eax);
    eax = 0x39CBE0;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C99D0(); /* call 0x001C99D0 */

loc_001505C6:
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x3DCCCCCD);
    eax = esi;
    PUSH32(esp, 0); sub_0014A6B0(); /* call 0x0014A6B0 */

loc_001505D6:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    fp_push((double)SMEM32(edx + 0x10)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001505F1; /* jge: greater or equal (signed >=) */

loc_001505EB:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001505F1:
    SET_LO8(eax, MEM8(esi + 0x8DF));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00150618; /* jne: not equal / not zero */

loc_00150603:
    PUSH32(esp, edi);
    edi = esp + 0x18;
    esi = 0x40B844;
    MEM8(esp + 0x5C) = 3;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00150617:
    POP32(esp, edi);

loc_00150618:
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
