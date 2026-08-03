#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00048760
 * Original: 0x00048760 - 0x00048797 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00048760(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00048760:
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    ecx = ecx << 0x10;
    esi = esi + edx;
    ecx = ecx + esi;
    MEM32(eax) = ecx;
    ecx = ecx + edx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(eax);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0004878E; /* jge: greater or equal (signed >=) */

loc_00048788:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0004878E:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
