#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5DC0
 * Original: 0x001A5DC0 - 0x001A5E2C (108 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5DC0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001A5DC0:
    ecx = (uint32_t)(int32_t)SMEM16(0x649B2A);
    fp_push(MEMF(0x3B17E8)); /* fld float */
    eax = MEM32(0x649B28);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x649B2C);
    eax = eax + ecx;
    ecx = ecx + eax;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x649B2C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(0x649B28) = eax;
    edx = MEM32(edx + ecx * 4 + 0x10);
    ecx = MEM32(esp + 8);
    MEM32(esp + 4) = eax;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001A5E0D; /* jge: greater or equal (signed >=) */

loc_001A5E07:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001A5E0D:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
