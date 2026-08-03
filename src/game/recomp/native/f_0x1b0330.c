#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B0330
 * Original: 0x001B0330 - 0x001B041D (237 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B0330(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001B0330:
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm1.f[0], MEMF(esp) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(esp))) goto loc_001B0370; /* jb: below (unsigned <) */

loc_001B0350:
    /* comiss xmm3.f[0], MEMF(esp + 8) - sets EFLAGS */
    if ((xmm3.f[0] < MEMF(esp + 8))) goto loc_001B0417; /* jb: below (unsigned <) */

loc_001B035B:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm3.f[0])) goto loc_001B0417; /* jb: below (unsigned <) */

loc_001B036A:
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001B0370:
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    /* comiss xmm2.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(0x3B16E0))) goto loc_001B0393; /* jbe: below or equal (unsigned <=) */

loc_001B0385:
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    goto loc_001B039F;

loc_001B0393:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = MEMF(esp + 8); /* movss */

loc_001B039F:
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    /* comiss xmm1.f[0], MEMF(edx) - sets EFLAGS */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    if ((xmm1.f[0] < MEMF(edx))) goto loc_001B0417; /* jb: below (unsigned <) */

loc_001B03B4:
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm0.f[0])) goto loc_001B0417; /* jb: below (unsigned <) */

loc_001B03BD:
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    SET_LO8(eax, 1);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* maxss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0xC) ? xmm0.f[0] : MEMF(esp + 0xC)); /* minss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001B0417:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
