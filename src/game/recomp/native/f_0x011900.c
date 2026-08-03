#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00011900
 * Original: 0x00011900 - 0x00011AE6 (486 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011900(void)
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

loc_00011900:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A1248); /* mulss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    PUSH32(esp, edi);
    eax = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00011931:
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    ecx = esp + 0x20;
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0x80000000u;
    esi = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* xorps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    edx = esp + 0x18;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    eax = esp + 0x14;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm4.f[0] = MEMF(eax); /* movss */
    /* shufps xmm4, xmm4, 0 */
    /* addps: xmm5.f[0] += xmm4.f[0] (packed 4xfloat) */
    xmm4.f[0] = MEMF(esp + 0x44); /* movss */
    /* mulps: xmm5.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm5.b, 16); /* movaps */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    xmm5.f[0] = MEMF(esp + 0x40); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm4.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    ecx = esp + 0x18;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    xmm4.f[0] = MEMF(esp + 0x34); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm3.b, 16); /* movaps */
    xmm3.f[0] = MEMF(esp + 0x48); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    memcpy(xmm2.b, xmm3.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x44); /* movss */
    memcpy(xmm5.b, xmm4.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x58) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x28); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    edi = ebx;
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    ecx = 0x10;
    esi = esp + 0x50;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x68) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
