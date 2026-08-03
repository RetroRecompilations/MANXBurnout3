#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245085
 * Original: 0x00245085 - 0x002450AD (40 bytes, 21 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245085(void)
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

loc_00245085:
    /* fld st(0) */
    /* FPU: frndint  */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    SET_LO8(ecx, 0);
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp != 0) /* sahf */) goto loc_002450AA; /* jne: not equal / not zero */

loc_00245093:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(ecx, LO8(ecx) + 1);
    /* fld st(0) */
    /* FPU: frndint  */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    if ((_fpu_cmp != 0) /* sahf */) goto loc_002450A9; /* jne: not equal / not zero */

loc_002450A7:
    SET_LO8(ecx, LO8(ecx) + 1);

loc_002450A9:
    esp += 4; return; /* ret */

loc_002450AA:
    /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
