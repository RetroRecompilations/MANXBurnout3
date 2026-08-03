#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DFA20
 * Original: 0x001DFA20 - 0x001DFACE (174 bytes, 39 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DFA20(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001DFA20:
    esp = esp - 8;
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x41ABB4);
    SET_LO8(eax, 0); /* xor self */
    MEMF(edi + 0x7594AC) = xmm0.f[0]; /* movss */
    esi = 1;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEM8(edi + 0x7592AC) = LO8(eax);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEM8(edi + 0x7593AC) = LO8(eax);
    MEM32(esp + 8) = esi;

loc_001DFA62:
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0); sub_00244E9C(); /* call 0x00244E9C */

loc_001DFA79:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001DFA8A:
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM8(edi + esi + 0x7592AC) = LO8(eax);
    PUSH32(esp, 0); sub_00244E9C(); /* call 0x00244E9C */

loc_001DFA9E:
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001DFAAF:
    MEM8(edi + esi + 0x7593AC) = LO8(eax);
    esi++;
    /* cmp esi, 0x100 - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (CMP_L(esi, 0x100)) goto loc_001DFA62; /* jl: less (signed <) */

loc_001DFAC3:
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
