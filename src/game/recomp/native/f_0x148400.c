#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00148400
 * Original: 0x00148400 - 0x00148516 (278 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148400(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00148400:
    ecx = MEM32(eax + 0xCC);
    edx = 0; /* xor self */
    esp = esp - 0x48;
    if (CMP_EQ(ecx, edx)) goto loc_00148510; /* je: equal / zero */

loc_00148413:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xB0); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xB4); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xB8); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xF4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x50); /* mulss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x40) = 0xFFFFFFFFu;
    MEM8(esp + 0x44) = LO8(edx);
    MEM8(esp + 0x45) = LO8(edx);
    MEM8(esp + 0x46) = LO8(edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x50) = ecx;
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001484D9; /* jge: greater or equal (signed >=) */

loc_001484D3:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001484D9:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ecx, MEM8(0x752D80));
    /* cmp LO8(ecx), LO8(edx) - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_001484FF; /* je: equal / zero */

loc_001484F1:
    xmm0.f[0] = MEMF(0x3A2808); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_001484FF:
    eax = MEM32(eax + 0xC0);
    PUSH32(esp, edi);
    edi = esp + 4;
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_0014850F:
    POP32(esp, edi);

loc_00148510:
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
