#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001204C0
 * Original: 0x001204C0 - 0x001205D4 (276 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001204C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001204C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm1.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(esp + 0xC))) goto loc_001204EE; /* jb: below (unsigned <) */

loc_001204EB:
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_001204EE:
    ecx = MEM32(esi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FFC80(); /* call 0x000FFC80 */

loc_0012051B:
    SET_LO8(eax, MEM8(esi + 0x1169));
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0012055D; /* jle: less or equal (signed <=) */

loc_0012052F:
    eax = esi + 0x87C;
    goto loc_00120540;

    /* nop */
    edi = edi;

loc_00120540:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + -12); /* divss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    ecx++;
    eax = eax + 0xC0;
    if (CMP_L(ecx, edx)) goto loc_00120540; /* jl: less (signed <) */

loc_0012055D:
    xmm0.f[0] = MEMF(esi + 0x1490); /* movss */
    eax = MEM32(esi + 0x9F0);
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x148C); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    xmm2.f[0] = MEMF(esi + 0xBC); /* movss */
    PUSH32(esp, eax);
    ecx = esi + 0x1448;
    MEMF(esi + 0x149C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00121B50(); /* call 0x00121B50 */

loc_00120597:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEM32(esi + 0x14C8) = eax;
    MEMF(esi + 0x14D0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14D4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x14A0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x14A4) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
