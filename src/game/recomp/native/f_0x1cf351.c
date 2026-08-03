#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF351
 * Original: 0x001CF351 - 0x001CF3E4 (147 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF351(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001CF351:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = ebp + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    MEM32(ebp + -16) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    fp_push(MEMF(ebp + -8)); /* fld float */
    /* FPU: fsincos  */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = ecx;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    /* FPU: fdivr st(1) */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* FPU: fdivr dword ptr [ebp + 0x14] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(1.0); /* fld1 */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
