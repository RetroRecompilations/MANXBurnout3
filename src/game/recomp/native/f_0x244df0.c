#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244DF0
 * Original: 0x00244DF0 - 0x00244E65 (117 bytes, 37 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00244DF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    esp = esp & 0xFFFFFFF0u;
    /* fld st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(esp + 0x10) = (int32_t)fp_top(); /* fistp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00244E4F; /* je: equal / zero */

loc_00244E13:
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    if (((int32_t)(edx & edx) >= 0)) goto loc_00244E37; /* jns: not sign (positive) */

loc_00244E19:
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp);
    ecx = ecx ^ 0x80000000u;
    ecx = ecx + 0x7FFFFFFF;
    eax = eax + 0 + _cf; /* adc */
    edx = MEM32(esp + 0x14);
    edx = edx + 0 + _cf; /* adc */
    goto loc_00244E63;

loc_00244E37:
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp);
    ecx = ecx + 0x7FFFFFFF;
    eax = eax - 0 - _cf; /* sbb */
    edx = MEM32(esp + 0x14);
    edx = edx - 0 - _cf; /* sbb */
    goto loc_00244E63;

loc_00244E4F:
    edx = MEM32(esp + 0x14);
    if (TEST_NZ(edx, 0x7FFFFFFF)) goto loc_00244E13; /* jne: not equal / not zero */

loc_00244E5B:
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */

loc_00244E63:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
