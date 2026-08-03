#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010A490
 * Original: 0x0010A490 - 0x0010A8D1 (1089 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A490(void)
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

loc_0010A490:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xEC;
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1E0); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x1D0); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1E4); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x1D4); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x1E8); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x1D8); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    xmm2.f[0] = MEMF(esp + 0x14); /* movss */
    xmm5.f[0] = MEMF(0x3B1684); /* movss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    ebx = MEM32(esi + 0x204);
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x168); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm6.b, xmm4.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm6.f[0]; /* movss */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] + xmm2.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] * MEMF(edi + 0x168); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x168); /* mulss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm6.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x20), 16); /* movaps */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    eax = esp + 0x60;
    MEMF(esp + 0x58) = xmm4.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00108F90(); /* call 0x00108F90 */

loc_0010A623:
    eax = esp + 0x60;
    PUSH32(esp, eax);
    edx = esp + 0x34;
    eax = esp + 0xC4;
    PUSH32(esp, 0); sub_00109040(); /* call 0x00109040 */

loc_0010A638:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    eax = esp + 0xC4;
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00109040(); /* call 0x00109040 */

loc_0010A66A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ebp + 0x10);
    memcpy(xmm1.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    edx = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    eax = MEM32(ebp + 0xC);
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm7.b, (void *)XBOX_PTR(esi + 0x40), 16); /* movaps */
    ecx = esp + 0x10;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(edi + 0xA0), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    /* shufps xmm2, xmm3, 0xc9 */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    /* shufps xmm6, xmm2, 0xc9 */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm0, xmm1, 0xd2 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xd2 */
    /* mulps: xmm6.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, (void *)XBOX_PTR(esi + 0x60), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, (void *)XBOX_PTR(esi + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    eax = esp + 0xC;
    xmm2.f[0] = MEMF(eax); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm4.f[0] *= xmm2.f[0] (packed 4xfloat) */
    ecx = esp + 0x18;
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm6.f[0] *= xmm2.f[0] (packed 4xfloat) */
    edx = esp + 0x14;
    xmm2.f[0] = MEMF(edx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm7.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm7.b, 16); /* movaps */
    /* addps: xmm2.f[0] += xmm6.f[0] (packed 4xfloat) */
    /* addps: xmm2.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* shufps xmm4, xmm3, 0xd2 */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    /* shufps xmm3, xmm5, 0xc9 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    memcpy(xmm7.b, xmm3.b, 16); /* movaps */
    /* shufps xmm6, xmm0, 0xd2 */
    /* shufps xmm7, xmm3, 0xc9 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm7.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm7.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm3.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    /* shufps xmm2, xmm2, 0xc9 */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm6.b, xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm7.b, xmm3.b, 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 0x14;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* addps: xmm3.f[0] += xmm7.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm6.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    /* shufps xmm6, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    /* shufps xmm3, xmm5, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    /* shufps xmm5, xmm3, 0xd2 */
    /* mulps: xmm6.f[0] *= xmm5.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    /* shufps xmm5, xmm2, 0xc9 */
    /* mulps: xmm2.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    /* shufps xmm0, xmm4, 0xd2 */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    edx = MEM32(ebp + 0x18);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = MEMF(ebp + 0x14); /* movss */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] / MEMF(esi + 0x1F0); /* divss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 0x168); /* divss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0xC); /* addss */
    xmm2.f[0] = xmm2.f[0] / xmm3.f[0]; /* divss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    ecx = esp + 0xC;
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(edx), xmm1.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
