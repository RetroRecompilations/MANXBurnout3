#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00106720
 * Original: 0x00106720 - 0x00106892 (370 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106720(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00106720:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    edx = MEM32(ebp + 0xC);
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = MEM32(eax + 0x204);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    ecx = MEM32(ebp + 8);
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0xc9 */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    /* shufps xmm5, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* shufps xmm4, xmm3, 0xd2 */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x60), 16); /* movaps */
    /* mulps: xmm5.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(eax + 0x40), 16); /* movaps */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = esp;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    ecx = esp + 4;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = esp + 8;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* shufps xmm2, xmm2, 0xd2 */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xc9 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0xd2 */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(ebp + 0x10); /* movss */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] / MEMF(eax + 0x1F0); /* divss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    eax = MEM32(ebp + 0x14);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    edx = esp + 0xC;
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
