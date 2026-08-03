#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155E10
 * Original: 0x00155E10 - 0x00155F61 (337 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155E10(void)
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

loc_00155E10:
    fp_push(MEMD(0x3B1910)); /* fld double */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00155E3D; /* jbe: below or equal (unsigned <=) */

loc_00155E20:
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00155E3B:
    goto loc_00155E42;

loc_00155E3D:
    eax = 0xFFFFD8F0u;

loc_00155E42:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0xC) = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00155E72; /* jbe: below or equal (unsigned <=) */

loc_00155E55:
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00155E70:
    goto loc_00155E77;

loc_00155E72:
    eax = 0xFFFFD8F0u;

loc_00155E77:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x14) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00155EA7; /* jbe: below or equal (unsigned <=) */

loc_00155E8A:
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00155EA5:
    goto loc_00155EAC;

loc_00155EA7:
    eax = 0xFFFFD8F0u;

loc_00155EAC:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x1C) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00155EDC; /* jbe: below or equal (unsigned <=) */

loc_00155EBF:
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00155EDA:
    goto loc_00155EE1;

loc_00155EDC:
    eax = 0xFFFFD8F0u;

loc_00155EE1:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x24) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00155F11; /* jbe: below or equal (unsigned <=) */

loc_00155EF4:
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00155F0F:
    goto loc_00155F16;

loc_00155F11:
    eax = 0xFFFFD8F0u;

loc_00155F16:
    fp_push(MEMD(0x3B1910)); /* fld double */
    MEM32(esi + 0x2C) = eax;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00155F46; /* jbe: below or equal (unsigned <=) */

loc_00155F29:
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fldlg2  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fyl2x  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_00155F44:
    goto loc_00155F4B;

loc_00155F46:
    eax = 0xFFFFD8F0u;

loc_00155F4B:
    ecx = MEM32(esi + 0x90);
    MEM32(esi + 0x34) = eax;
    eax = esi + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F5756(); /* call 0x002F5756 */

loc_00155F5E:
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
