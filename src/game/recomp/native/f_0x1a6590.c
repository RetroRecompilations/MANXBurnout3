#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A6590
 * Original: 0x001A6590 - 0x001A6609 (121 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A6590(void)
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

loc_001A6590:
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(0x649B2A);
    eax = MEM32(0x649B28);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x649B2C);
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    MEM32(0x649B28) = eax;
    MEM32(0x649B2C) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001A65C7; /* jge: greater or equal (signed >=) */

loc_001A65C1:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A65C7:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1.f[0] = MEMF(esp + 8); /* movss */

loc_001A65E0:
    if (CMP_EQ(eax, 0xB)) goto loc_001A65FA; /* je: equal / zero */

loc_001A65E5:
    ecx = MEM32(esi + edx * 4 + 0x10);
    xmm2.f[0] = MEMF(ecx + eax * 4); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] > xmm1.f[0])) goto loc_001A6605; /* ja: above (unsigned >) */

loc_001A65FA:
    eax++;
    if (CMP_L(eax, 6)) goto loc_001A65E0; /* jl: less (signed <) */

loc_001A6600:
    eax = 1;

loc_001A6605:
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
