#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00148520
 * Original: 0x00148520 - 0x001486C4 (420 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148520(void)
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

loc_00148520:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = 0; /* xor self */
    if (CMP_NE(edi, ebx)) goto loc_0014854C; /* jne: not equal / not zero */

loc_00148534:
    eax = 0x40B844;
    PUSH32(esp, 0); sub_001CD880(); /* call 0x001CD880 */

loc_0014853E:
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_0014854C:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    esi = MEM32(ebp + 8);
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    esi = esi + 0xB0;
    ecx = esi;
    edx = 0x40B830;
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x40) = ebx;
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x68) = 0xFFFFFFFFu;
    MEM8(esp + 0x6C) = LO8(ebx);
    MEM8(esp + 0x6D) = LO8(ebx);
    MEM8(esp + 0x6E) = LO8(ebx);
    PUSH32(esp, 0); sub_001CA270(); /* call 0x001CA270 */

loc_001485EA:
    edx = MEM32(eax + 8);
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm1.f[0] = MEMF(ebp + 0x14); /* movss */
    edx = edx + 0x3C;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    eax = MEM32(edi + 8);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x40) = edi;
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    ecx = MEM32(eax + 0x10);
    if (CMP_GE(ecx & ecx, 0)) goto loc_00148680; /* jge: greater or equal (signed >=) */

loc_0014867A:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00148680:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(0x752D80));
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEM8(esp + 0x6D) = 1;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM8(esp + 0x6C) = 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001486A8; /* je: equal / zero */

loc_0014869A:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7F34); /* mulss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */

loc_001486A8:
    edi = esp + 0x28;
    esi = 0x40B844;
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_001486B6:
    edx = MEM32(ebp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
