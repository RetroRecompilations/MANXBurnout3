#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002476D8
 * Original: 0x002476D8 - 0x002476FC (36 bytes, 16 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002476D8(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002476D8:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 4] - store FPU control word */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    ecx = ecx & MEM32(ebp + 0xC);
    eax = ~eax;
    eax = eax & MEM32(ebp + -4);
    eax = eax | ecx;
    MEM32(ebp + 0xC) = eax;
    /* fldcw word ptr [ebp + 0xc] - load FPU control word */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
