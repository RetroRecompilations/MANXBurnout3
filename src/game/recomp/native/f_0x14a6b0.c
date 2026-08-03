#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014A6B0
 * Original: 0x0014A6B0 - 0x0014A70B (91 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A6B0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0014A6B0:
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x520);
    edx = MEM32(eax + 0x524);
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    ecx = ecx << 0x10;
    esi = esi + edx;
    ecx = ecx + esi;
    MEM32(eax + 0x520) = ecx;
    ecx = ecx + edx;
    MEM32(eax + 0x524) = ecx;
    eax = MEM32(eax + 0x520);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0014A6F0; /* jge: greater or equal (signed >=) */

loc_0014A6EA:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0014A6F0:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
