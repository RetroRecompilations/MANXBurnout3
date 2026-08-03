#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00020CE0
 * Original: 0x00020CE0 - 0x00020D3E (94 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020CE0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00020CE0:
    PUSH32(esp, ecx);
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00020D36; /* je: equal / zero */

loc_00020CEB:
    xmm1.f[0] = MEMF(0x384A80); /* movss */
    ecx = 0; /* xor self */
    edx = eax + 0x44;

loc_00020CF8:
    if (TEST_S(ecx, ecx)) goto loc_00020D11; /* jl: less (signed <) */

loc_00020CFC:
    if (CMP_GE(ecx, 0x1C)) goto loc_00020D11; /* jge: greater or equal (signed >=) */

loc_00020D01:
    xmm0.f[0] = MEMF(edx); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEM32(esp) = 1;
    if ((xmm0.f[0] > xmm1.f[0])) goto loc_00020D18; /* ja: above (unsigned >) */

loc_00020D11:
    MEM32(esp) = 0;

loc_00020D18:
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3B16E0)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00020D3A; /* jp: parity */

loc_00020D2D:
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, 0x1C)) goto loc_00020CF8; /* jl: less (signed <) */

loc_00020D36:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00020D3A:
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
