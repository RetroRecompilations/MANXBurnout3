#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001509F0
 * Original: 0x001509F0 - 0x00150AE5 (245 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001509F0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001509F0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(ebx, MEM8(esi + 0x8DF));
    edx = 0; /* xor self */
    /* cmp LO8(ebx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(LO8(ebx), LO8(edx))) goto loc_00150ADF; /* jne: not equal / not zero */

loc_00150A0B:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEM32(edi + 0x18) = edx;
    MEMF(edi + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEM8(edi + 0x45) = LO8(edx);
    MEM8(edi + 0x44) = LO8(edx);
    MEM8(edi + 0x46) = LO8(edx);
    MEMF(edi + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(edi + 0xC) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x10) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x24) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x34) = xmm1.f[0]; /* movss */
    MEM32(edi + 0x40) = 0xFFFFFFFFu;
    esi = MEM32(eax);
    edx = edi;
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x45) = 1;
    MEM32(edi + 0x18) = ecx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00150AB8; /* jge: greater or equal (signed >=) */

loc_00150AB2:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00150AB8:
    eax = MEM32(esp + 0x20);
    MEMF(edi + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esi = 0x40B844;
    MEM8(edi + 0x44) = 3;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00150AD9:
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;

loc_00150ADF:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
