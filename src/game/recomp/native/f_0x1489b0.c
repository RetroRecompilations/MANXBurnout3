#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001489B0
 * Original: 0x001489B0 - 0x00148C01 (593 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001489B0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001489B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x12C);
    ecx = MEM32(eax);
    xmm0.f[0] = MEMF(ecx + 0xC4); /* movss */
    xmm3.f[0] = MEMF(0x3B1A78); /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = edx + edx * 2;
    edx = edx << 4;
    esi = MEM32(edx + 0x64B38C);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ecx + 0x177));
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax);
    xmm0.f[0] = MEMF(ecx + 0xC4); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x12C);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm1.f[0] = MEMF(eax + 0x104); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xF4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0x10C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + 0xF8) = xmm1.f[0]; /* movss */
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFE);
    edx = edx + edi;
    xmm0.f[0] = MEMF(edx * 4 + 0x647C34); /* movss */
    edx = MEM32(eax);
    MEMF(eax + 0xDC) = xmm0.f[0]; /* movss */
    edi = MEM32(esi + 0x204);
    xmm1.f[0] = MEMF(edx + 0xC4); /* movss */
    edi = edi + 0x30;
    ebx = MEM32(edi);
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(edi + 4);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(edi + 8);
    edi = MEM32(edi + 0xC);
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0xA0), 16); /* movaps */
    MEM32(esp + 0x2C) = edi;
    edi = esp + 0x1C;
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    MEM32(esp + 0x28) = ebx;
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* divps: xmm2.f[0] /= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x90), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    esi = esp + 0x1C;
    MEMF(esi) = xmm0.f[0]; /* movss */
    esi = esp + 0x18;
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm6.f[0] = MEMF(eax + 0xDC); /* movss */
    xmm1.f[0] = MEMF(ebp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x18;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEMF(eax + 0xFC) = xmm0.f[0]; /* movss */
    ecx = ecx + ecx * 2;
    ecx = ecx << 4;
    edx = MEM32(ecx + 0x64B38C);
    xmm5.f[0] = MEMF(edx + 0xBC); /* movss */
    xmm5.f[0] = xmm5.f[0] * MEMF(0x38994C); /* mulss */
    edx = eax + 0x50;
    MEMF(esp + 0x1C) = xmm6.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001432A0(); /* call 0x001432A0 */

loc_00148BB8:
    ecx = MEM32(ebp + 8);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x14) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x10);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, eax);
    esi = edx;
    PUSH32(esp, 0); sub_00143190(); /* call 0x00143190 */

loc_00148BF1:
    ecx = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
