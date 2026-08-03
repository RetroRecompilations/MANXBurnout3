#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010F8D0
 * Original: 0x0010F8D0 - 0x0010FB1E (590 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010F8D0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010F8D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    edx = MEM32(ebp + 0x14);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = MEM32(ebp + 0x10);
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edx = MEM32(ebp + 8);
    memcpy(xmm3.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = MEM32(eax + 0x204);
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edx = MEM32(ebp + 0xC);
    memcpy(xmm4.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    /* subps: xmm4.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    /* shufps xmm2, xmm3, 0xc9 */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    /* shufps xmm6, xmm2, 0xc9 */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm0, xmm1, 0xd2 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    /* shufps xmm5, xmm0, 0xd2 */
    /* mulps: xmm6.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, (void *)XBOX_PTR(ecx + 0x60), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, (void *)XBOX_PTR(ecx + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp) = xmm2.f[0]; /* movss */
    edx = esp;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm5.f[0] *= xmm2.f[0] (packed 4xfloat) */
    edx = esp + 4;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm6.f[0] *= xmm2.f[0] (packed 4xfloat) */
    edx = esp + 8;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm7.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm7.b, 16); /* movaps */
    /* addps: xmm2.f[0] += xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    /* shufps xmm5, xmm3, 0xd2 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    /* shufps xmm6, xmm0, 0xd2 */
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    /* shufps xmm3, xmm4, 0xc9 */
    memcpy(xmm7.b, xmm3.b, 16); /* movaps */
    /* shufps xmm7, xmm3, 0xc9 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm7.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    edx = esp + 8;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0xc9 */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax + 0x60), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(eax + 0x50), 16); /* movaps */
    memcpy(xmm7.b, (void *)XBOX_PTR(eax + 0x40), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = esp + 4;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm6.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = esp;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm7.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    /* shufps xmm6, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm4.b, 16); /* movaps */
    /* shufps xmm3, xmm4, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* shufps xmm4, xmm3, 0xd2 */
    /* mulps: xmm6.f[0] *= xmm4.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    /* shufps xmm4, xmm2, 0xc9 */
    /* mulps: xmm2.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    /* shufps xmm0, xmm5, 0xd2 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(ebp + 0x18); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0xC); /* mulss */
    edx = esp + 8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(ecx + 0x1F0); /* divss */
    xmm3.f[0] = xmm3.f[0] / MEMF(eax + 0x1F0); /* divss */
    ecx = MEM32(ebp + 0x1C);
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 8); /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm3.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    eax = esp + 0xC;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx), xmm1.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
