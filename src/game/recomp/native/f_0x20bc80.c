#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020BC80
 * Original: 0x0020BC80 - 0x0020BC98 (24 bytes, 7 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BC80(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0020BC80:
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(eax + 0x28);
    MEMF(eax + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx | 0x80;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
