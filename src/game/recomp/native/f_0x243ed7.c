#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243ED7
 * Original: 0x00243ED7 - 0x00243F09 (50 bytes, 22 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243ED7(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00243ED7:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 4] - store FPU control word */
    ebx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_00243DB7(); /* call 0x00243DB7 */

loc_00243EE8:
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    eax = ~eax;
    ebx = ebx & eax;
    eax = MEM32(ebp + 8);
    eax = eax & MEM32(ebp + 0xC);
    ebx = ebx | eax;
    PUSH32(esp, 0); sub_00243E49(); /* call 0x00243E49 */

loc_00243EFE:
    MEM32(ebp + 0xC) = eax;
    /* fldcw word ptr [ebp + 0xc] - load FPU control word */
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
