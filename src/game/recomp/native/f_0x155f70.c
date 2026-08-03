#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155F70
 * Original: 0x00155F70 - 0x00155FCE (94 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155F70:
    fp_push(MEMD(0x3B1910)); /* fld double */
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00155FB2; /* jbe: below or equal (unsigned <=) */

loc_00155F80:
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00155F9B:
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x90);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002F574C(); return; /* tail jmp 0x002F574C */

loc_00155FB2:
    eax = 0xFFFFD8F0u;
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x90);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002F574C(); return; /* tail jmp 0x002F574C */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
