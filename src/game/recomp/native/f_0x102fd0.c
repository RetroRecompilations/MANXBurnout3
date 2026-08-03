#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00102FD0
 * Original: 0x00102FD0 - 0x0010314B (379 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102FD0(void)
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

loc_00102FD0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    xmm0.f[0] = MEMF(0x5A3964); /* movss */
    xmm1.f[0] = MEMF(0x39BF24); /* movss */
    edx = ZX8(MEM8(ebp + 8));
    eax = ZX8(LO8(eax));
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    ecx = ZX8(LO8(ecx));
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    eax = esp + 0x38;
    MEMF(esp) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0); sub_000486E0(); /* call 0x000486E0 */

loc_00103034:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fsin  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm6.f[0] = MEMF(esp + 0x34); /* movss */
    eax = MEM32(esp + 0x20);
    xmm4.f[0] = MEMF(esp + 0x30); /* movss */
    xmm2.f[0] = MEMF(esp + 0x3C); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = ecx;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    xmm3.f[0] = MEMF(esp + 0x10); /* movss */
    eax = MEM32(esp + 0x2C);
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x38); /* movss */
    memcpy(xmm5.b, xmm1.b, 16); /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm4.f[0]; /* mulss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esi + 0x14) = xmm7.f[0]; /* movss */
    memcpy(xmm7.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esi + 0x18) = xmm7.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm2.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
