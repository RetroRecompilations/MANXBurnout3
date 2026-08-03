#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00142990
 * Original: 0x00142990 - 0x00142B00 (368 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142990(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00142990:
    esp = esp - 0x48;
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16B4); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    eax = MEM32(ebp);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ebx = 0; /* xor self */
    MEM32(esp + 0x20) = ebx;
    MEM8(esp + 0x4D) = LO8(ebx);
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    MEM8(esp + 0x4C) = LO8(ebx);
    MEM8(esp + 0x4E) = LO8(ebx);
    eax = MEM32(eax + 0x204);
    xmm1.f[0] = MEMF(eax + 0x30); /* movss */
    eax = eax + 0x30;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    eax = MEM32(ebp + 0x48);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A795C); /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B1694); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEM8(esp + 0x4D) = 1;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x10);
    fp_push((double)SMEM32(ecx + 0x10)); /* fild */
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(edx & edx, 0)) goto loc_00142A93; /* jge: greater or equal (signed >=) */

loc_00142A8D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00142A93:
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = esp + 0x10;
    esi = 0x40B844;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00142AA7:
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x48);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00142AC4; /* jge: greater or equal (signed >=) */

loc_00142ABE:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00142AC4:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = esp + 0x10;
    esi = 0x40B844;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_00142ADC:
    ecx = MEM32(ebp + 0x4C);
    /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 0x50) = eax;
    if (CMP_EQ(ecx, ebx)) goto loc_00142AEC; /* je: equal / zero */

loc_00142AE6:
    edx = MEM32(ecx + 0x14);
    MEM32(ebp + 0x54) = edx;

loc_00142AEC:
    if (CMP_EQ(eax, ebx)) goto loc_00142AF6; /* je: equal / zero */

loc_00142AF0:
    eax = MEM32(eax + 0x14);
    MEM32(ebp + 0x58) = eax;

loc_00142AF6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
