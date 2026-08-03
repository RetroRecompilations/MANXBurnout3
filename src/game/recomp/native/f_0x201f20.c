#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00201F20
 * Original: 0x00201F20 - 0x00201F76 (86 bytes, 35 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201F20(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00201F20:
    ecx = MEM32(esp + 0xC);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00201F3D; /* je: equal / zero */

loc_00201F29:
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(eax + ecx * 4 + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(eax);
    ecx = ecx | 0x10;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_00201F3D:
    edx = MEM32(esp + 8);
    ecx = MEM32(edx + 4);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00201F6E; /* jle: less or equal (signed <=) */

loc_00201F4A:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x18;

loc_00201F53:
    edi = MEM32(esp + 0x18);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, edi)) goto loc_00201F53; /* jl: less (signed <) */

loc_00201F64:
    eax = MEM32(esi);
    eax = eax | 0x10;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00201F6E:
    eax = MEM32(esp + 4);
    MEM32(eax) = MEM32(eax) | 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
