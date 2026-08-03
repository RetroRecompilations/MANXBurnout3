#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017F290
 * Original: 0x0017F290 - 0x0017F352 (194 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F290(void)
{
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0017F290:
    esp = esp - 0xC;
    xmm0.f[0] = MEMF(0x60EA1C); /* movss */
    eax = MEM32(esi + 0x64584);
    xmm1.f[0] = MEMF(esi + 0x64578); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B19C0); /* mulss */
    MEMF(esi + 0x6457C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x6457C); /* divss */
    MEMF(esi + 0x64580) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A1248); /* movss */
    PUSH32(esp, ebx);
    eax++;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edi);
    MEM32(esi + 0x64584) = eax;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esi + 0x64578); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B19BC); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0x64570) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    edi = esi + 0x3A370;
    MEMF(esi + 0x64574) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0003B180(); /* call 0x0003B180 */

loc_0017F341:
    ebx = esi + 0x5B9B0;
    PUSH32(esp, 0); sub_00044D70(); /* call 0x00044D70 */

loc_0017F34C:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
