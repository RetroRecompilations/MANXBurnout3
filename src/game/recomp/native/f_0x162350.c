#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00162350
 * Original: 0x00162350 - 0x00162434 (228 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162350(void)
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

loc_00162350:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x30;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm2.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm3.f[0] = MEMF(0x3B172C); /* movss */
    if ((xmm2.f[0] < MEMF(esp + 0xC))) goto loc_001623A5; /* jb: below (unsigned <) */

loc_0016239D:
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    goto loc_001623B2;

loc_001623A5:
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */

loc_001623B2:
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm2.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm2.f[0] < MEMF(esp + 0xC))) goto loc_001623D7; /* jb: below (unsigned <) */

loc_001623CF:
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    goto loc_001623E4;

loc_001623D7:
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */

loc_001623E4:
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* comiss xmm2.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm2.f[0] < MEMF(esp + 0xC))) goto loc_00162409; /* jb: below (unsigned <) */

loc_00162401:
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    goto loc_00162413;

loc_00162409:
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_00162413:
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
