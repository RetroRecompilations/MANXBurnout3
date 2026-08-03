#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE000
 * Original: 0x001CE000 - 0x001CE048 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE000(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001CE000:
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    esi = esi + 0x10;
    ecx = 7;
    edi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ZX8(MEM8(esp + 0x18));
    MEM32(esp + 8) = ecx;
    edx = MEM32(esp + 0x14);
    /* test edx, edx - flags set for next jcc */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    /* FPU: fdivr dword ptr [0x3b16b0] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001CE03B; /* jge: greater or equal (signed >=) */

loc_001CE035:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001CE03B:
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001CE042:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
