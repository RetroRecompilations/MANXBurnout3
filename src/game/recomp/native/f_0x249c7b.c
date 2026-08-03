#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00249C7B
 * Original: 0x00249C7B - 0x00249CA5 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249C7B(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00249C7B:
    SET_LO16(eax, MEM16(esp));
    if (CMP_EQ(LO16(eax), 0x27F)) goto loc_00249CA3; /* je: equal / zero */

loc_00249C85:
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_00249CA0; /* je: equal / zero */

loc_00249C8B:
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_00249CA0; /* je: equal / zero */

loc_00249C94:
    eax = 8;
    PUSH32(esp, 0); sub_00249B93(); /* call 0x00249B93 */

loc_00249C9E:
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00249CA0:
    /* fldcw word ptr [esp] - load FPU control word */

loc_00249CA3:
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
