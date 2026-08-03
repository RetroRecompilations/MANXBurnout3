#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00249B93
 * Original: 0x00249B93 - 0x00249BCF (60 bytes, 23 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249B93(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00249B93:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp + 0xFFFFFFE0u;
    MEM32(ebp + -32) = eax;
    MEMD(ebp + -8) = fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = ecx;
    eax = ebp + 8;
    ecx = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0024BC71(); /* call 0x0024BC71 */

loc_00249BBC:
    esp = esp + 0xC;
    fp_push(MEMD(ebp + -8)); /* fld double */
    if (CMP_EQ(MEM16(ebp + 8), 0x27F)) goto loc_00249BCD; /* je: equal / zero */

loc_00249BCA:
    /* fldcw word ptr [ebp + 8] - load FPU control word */

loc_00249BCD:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
