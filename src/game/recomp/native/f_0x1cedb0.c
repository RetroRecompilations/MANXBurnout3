#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CEDB0
 * Original: 0x001CEDB0 - 0x001CEF07 (343 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEDB0(void)
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

loc_001CEDB0:
    fp_push(MEMD(0x3B1910)); /* fld double */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001CEDDD; /* jbe: below or equal (unsigned <=) */

loc_001CEDC0:
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CEDDB:
    goto loc_001CEDE2;

loc_001CEDDD:
    eax = 0xFFFFD8F0u;

loc_001CEDE2:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x58) = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001CEE12; /* jbe: below or equal (unsigned <=) */

loc_001CEDF5:
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CEE10:
    goto loc_001CEE17;

loc_001CEE12:
    eax = 0xFFFFD8F0u;

loc_001CEE17:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x60) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001CEE47; /* jbe: below or equal (unsigned <=) */

loc_001CEE2A:
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CEE45:
    goto loc_001CEE4C;

loc_001CEE47:
    eax = 0xFFFFD8F0u;

loc_001CEE4C:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x68) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001CEE7C; /* jbe: below or equal (unsigned <=) */

loc_001CEE5F:
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CEE7A:
    goto loc_001CEE81;

loc_001CEE7C:
    eax = 0xFFFFD8F0u;

loc_001CEE81:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x70) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001CEEB1; /* jbe: below or equal (unsigned <=) */

loc_001CEE94:
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CEEAF:
    goto loc_001CEEB6;

loc_001CEEB1:
    eax = 0xFFFFD8F0u;

loc_001CEEB6:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x78) = eax;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001CEEE6; /* jbe: below or equal (unsigned <=) */

loc_001CEEC9:
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CEEE4:
    goto loc_001CEEEB;

loc_001CEEE6:
    eax = 0xFFFFD8F0u;

loc_001CEEEB:
    ecx = MEM32(esi + 0x248);
    MEM32(esi + 0x80) = eax;
    eax = esi + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F5756(); /* call 0x002F5756 */

loc_001CEF04:
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
