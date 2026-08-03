#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010BE70
 * Original: 0x0010BE70 - 0x0010BFFC (396 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010BE70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xCC;
    xmm0.f[0] = MEMF(0x3A2928); /* movss */
    MEM32(edi) = 0xFFFFFFFFu;
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    edx = ZX8(LO8(edx));
    /* shufps xmm0, xmm0, 0 */
    ecx = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, ebx);
    /* addps: xmm3.f[0] += xmm1.f[0] (packed 4xfloat) */
    if (CMP_LE(edx & edx, 0)) goto loc_0010BF93; /* jle: less or equal (signed <=) */

loc_0010BEB6:
    eax = MEM32(ebp + 8);
    xmm4.f[0] = MEMF(0x3B188C); /* movss */
    eax = eax + 0xC;

loc_0010BEC4:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + -12), 16); /* movaps */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ebx = esp + 0x1C;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], MEMF(eax) - sets EFLAGS */
    MEMF(esp + ecx * 4 + 0x30) = xmm1.f[0]; /* movss */
    if ((xmm1.f[0] < MEMF(eax))) goto loc_0010BF82; /* jb: below (unsigned <) */

loc_0010BF01:
    MEM32(edi) = ecx;
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + -12), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    /* shufps xmm5, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    ebx = esp + 0x18;
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], MEMF(eax) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(eax))) goto loc_0010BF99; /* jae: above or equal (unsigned >=) */

loc_0010BF36:
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_0010BF82; /* jbe: below or equal (unsigned <=) */

loc_0010BF55:
    xmm2.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    ebx = esp + 0x14;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx); /* movss */
    /* subps: xmm3.f[0] -= xmm0.f[0] (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */

loc_0010BF82:
    ecx++;
    eax = eax + 0x10;
    if (CMP_L(ecx, edx)) goto loc_0010BEC4; /* jl: less (signed <) */

loc_0010BF8E:
    if (CMP_GE(MEM32(edi), 0)) goto loc_0010BFA6; /* jge: greater or equal (signed >=) */

loc_0010BF93:
    MEM32(edi) = 0;

loc_0010BF99:
    xmm0.f[0] = MEMF(0x3B194C); /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010BFA6:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = MEMF(0x3B194C); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = esp + 0x14;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010BFF7; /* jbe: below or equal (unsigned <=) */

loc_0010BFF4:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0010BFF7:
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
