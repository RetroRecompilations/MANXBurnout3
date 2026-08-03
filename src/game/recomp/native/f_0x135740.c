#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00135740
 * Original: 0x00135740 - 0x001357D1 (145 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135740(void)
{
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00135740:
    esp = esp - 0xC;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp) ? xmm0.f[0] : MEMF(esp)); /* minss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x39CC00); /* mulss */
    MEMF(esi + 0x4798) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3EC424); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 0x4794) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x479C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001357C5:
    MEM8(esi + 0x6B64) = LO8(eax);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
