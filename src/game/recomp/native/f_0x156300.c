#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00156300
 * Original: 0x00156300 - 0x001563FB (251 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156300(void)
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

loc_00156300:
    esp = esp - 0x48;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3B16BC); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF1C); /* movss */
    PUSH32(esp, 1);
    ebx = 0x39D670;
    eax = 0x40B7F4;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x50) = 0xFFFFFFFFu;
    MEM8(esp + 0x56) = LO8(ecx);
    MEM8(esp + 0x55) = LO8(ecx);
    MEM8(esp + 0x54) = 0xA;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C9E50(); /* call 0x001C9E50 */

loc_001563B7:
    fp_push(MEMF(0x5A8A40)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push((double)SMEM32(eax + 0x10)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001563DE; /* jge: greater or equal (signed >=) */

loc_001563D8:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001563DE:
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    edi = esp + 0xC;
    esi = 0x40B844;
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001CD8D0(); /* call 0x001CD8D0 */

loc_001563F2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
