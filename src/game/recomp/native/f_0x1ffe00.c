#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FFE00
 * Original: 0x001FFE00 - 0x001FFE7F (127 bytes, 44 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FFE00(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001FFE00:
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = MEM32(esp + 4);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(eax + 8);
    /* fstp st(2) */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 8) = eax;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(1) */
    /* fld st(0) */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x3B16E0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fucompp  */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_001FFE7E; /* jnp: not parity */

loc_001FFE41:
    ecx = MEM32(edx);
    eax = ecx;
    eax = eax >> 0x17;
    eax = eax - 0x7F;
    ecx = ecx & 0x7FFFFF;
    /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(edx) = ecx;
    if (TEST_Z(LO8(eax), 1)) goto loc_001FFE5F; /* je: equal / zero */

loc_001FFE57:
    ecx = ecx | 0x800000;
    MEM32(edx) = ecx;

loc_001FFE5F:
    ecx = ZX16(MEM16(edx + 2));
    ecx = (uint32_t)(int32_t)SMEM16(ecx * 2 + 0x3C2040);
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) >> 1));
    eax = SX16(LO16(eax));
    eax = eax + 0x7F;
    ecx = ecx << 0x10;
    eax = eax << 0x17;
    ecx = ecx | eax;
    MEM32(edx) = ecx;

loc_001FFE7E:
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
