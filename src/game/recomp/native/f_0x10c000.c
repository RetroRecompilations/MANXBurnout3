#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C000
 * Original: 0x0010C000 - 0x0010C0C1 (193 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010C000:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 8;
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0xC); /* subss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 8));
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2.f[0] = MEMF(esp + 8); /* movss */
    SET_LO8(ecx, 1);
    SET_LO8(eax, 0); /* xor self */
    if (CMP_BE(LO8(ebx), LO8(ecx))) goto loc_0010C0BB; /* jbe: below or equal (unsigned <=) */

loc_0010C05C:
    edx = edx + 0x10;
    /* nop */

loc_0010C060:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    edi = esp + 0xC;
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 0xC); /* subss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0010C0B2; /* jbe: below or equal (unsigned <=) */

loc_0010C0AD:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    SET_LO8(eax, LO8(ecx));

loc_0010C0B2:
    SET_LO8(ecx, LO8(ecx) + 1);
    edx = edx + 0x10;
    if (CMP_B(LO8(ecx), LO8(ebx))) goto loc_0010C060; /* jb: below (unsigned <) */

loc_0010C0BB:
    POP32(esp, edi);
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
