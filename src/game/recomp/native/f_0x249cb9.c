#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00249CB9
 * Original: 0x00249CB9 - 0x00249D5C (163 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249CB9(void)
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

loc_00249CB9:
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fst */
    eax = MEM32(esp + 4);
    esp = esp + 8;
    eax = eax & 0x7FF00000;
    if ((eax == 0)) goto loc_00249D0A; /* je: equal / zero */

loc_00249CCD:
    if (CMP_EQ(eax, 0x7FF00000)) goto loc_00249D33; /* je: equal / zero */

loc_00249CD4:
    SET_LO16(eax, MEM16(esp));
    if (CMP_EQ(LO16(eax), 0x27F)) goto loc_00249D08; /* je: equal / zero */

loc_00249CDE:
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) != 0)) goto loc_00249D05; /* jne: not equal / not zero */

loc_00249CE4:
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_00249D05; /* je: equal / zero */

loc_00249CED:
    eax = 8;

loc_00249CF2:
    if (CMP_EQ(edx, 0x1D)) goto loc_00249CFE; /* je: equal / zero */

loc_00249CF7:
    PUSH32(esp, 0); sub_00249B93(); /* call 0x00249B93 */

loc_00249CFC:
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00249CFE:
    PUSH32(esp, 0); sub_00249B7C(); /* call 0x00249B7C */

loc_00249D03:
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00249D05:
    /* fldcw word ptr [esp] - load FPU control word */

loc_00249D08:
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00249D0A:
    fp_push(MEMD(0x3747E0)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fscale  */
    /* fstp st(1) */
    /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x3747d0] */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    eax = 4;
    if ((_fpu_cmp >= 0) /* sahf */) goto loc_00249CF2; /* jae: above or equal (unsigned >=) */

loc_00249D2B:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00249CF2;

loc_00249D33:
    fp_push(MEMD(0x3747D8)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fscale  */
    /* fstp st(1) */
    /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x3747c8] */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    /* sahf - store AH to flags */
    eax = 3;
    if ((_fpu_cmp <= 0) /* sahf */) goto loc_00249CF2; /* jbe: below or equal (unsigned <=) */

loc_00249D54:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00249CF2;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
