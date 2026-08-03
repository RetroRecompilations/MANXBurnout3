#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00249C15
 * Original: 0x00249C15 - 0x00249C58 (67 bytes, 21 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00249C15(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00249C15:
    eax = MEM32(edx + 4);
    eax = eax & 0x7FF00000;
    if (CMP_EQ(eax, 0x7FF00000)) goto loc_00249C27; /* je: equal / zero */

loc_00249C24:
    fp_push(MEMD(edx)); /* fld double */
    esp += 4; return; /* ret */

loc_00249C27:
    eax = MEM32(edx + 4);
    esp = esp - 0xA;
    eax = eax | 0x7FFF0000;
    MEM32(esp + 6) = eax;
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    eax = (eax << 0xB) | (ecx >> (32 - 0xB)); /* shld */
    ecx = ecx << 0xB;
    MEM32(esp + 4) = eax;
    MEM32(esp) = ecx;
    fp_push(MEMF(esp)); /* fld */
    esp = esp + 0xA;
    /* test eax, 0 - flags set for next jcc */
    eax = MEM32(edx + 4);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
