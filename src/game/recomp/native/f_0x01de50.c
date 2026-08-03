#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001DE50
 * Original: 0x0001DE50 - 0x0001DFB7 (359 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DE50(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0001DE50:
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x200);
    if (CMP_NE(ecx, MEM32(esi + 0x208))) goto loc_0001DE6B; /* jne: not equal / not zero */

loc_0001DE5F:
    MEM32(0x44D140) = 0x32;
    goto loc_0001DEA5;

loc_0001DE6B:
    eax = MEM32(esi + 0x208);
    fp_push((double)SMEM32(esi + 0x208)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0001DE81; /* jge: greater or equal (signed >=) */

loc_0001DE7B:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0001DE81:
    eax = eax + ecx;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0001DE93; /* jge: greater or equal (signed >=) */

loc_0001DE8D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0001DE93:
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_0001DEA0:
    MEM32(0x44D140) = eax;

loc_0001DEA5:
    MEM32(0x44D14C) = 0;
    eax = MEM32(esi + 0x154);
    MEM32(0x44D14C) = eax;
    eax = eax + MEM32(esi + 0x158);
    MEM32(0x44D14C) = eax;
    eax = eax + MEM32(esi + 0x15C);
    MEM32(0x44D14C) = eax;
    eax = eax + MEM32(esi + 0x160);
    MEM32(0x44D14C) = eax;
    eax = eax + MEM32(esi + 0x164);
    MEM32(0x44D14C) = eax;
    eax = eax + MEM32(esi + 0x168);
    MEM32(0x44D14C) = eax;
    eax = eax + MEM32(esi + 0x16C);
    MEM32(0x44D14C) = eax;
    eax = eax - MEM32(esi + 0x200);
    MEM32(0x44D14C) = eax;
    if (CMP_NE(eax, MEM32(esi + 0x204))) goto loc_0001DF1B; /* jne: not equal / not zero */

loc_0001DF0F:
    MEM32(0x44D144) = 0x32;
    goto loc_0001DF55;

loc_0001DF1B:
    ecx = MEM32(esi + 0x204);
    fp_push((double)SMEM32(esi + 0x204)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0001DF31; /* jge: greater or equal (signed >=) */

loc_0001DF2B:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0001DF31:
    ecx = ecx + eax;
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_0001DF43; /* jge: greater or equal (signed >=) */

loc_0001DF3D:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0001DF43:
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_0001DF50:
    MEM32(0x44D144) = eax;

loc_0001DF55:
    MEM32(0x44D148) = 0;
    eax = esi + 0x434;
    ecx = 4;
    /* nop */

loc_0001DF70:
    SET_LO8(edx, MEM8(eax + -1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001DF7D; /* je: equal / zero */

loc_0001DF77:
    MEM32(0x44D148) = MEM32(0x44D148) + 1;

loc_0001DF7D:
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0001DF88; /* je: equal / zero */

loc_0001DF82:
    MEM32(0x44D148) = MEM32(0x44D148) + 1;

loc_0001DF88:
    SET_LO8(edx, MEM8(eax + 1));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001DF95; /* je: equal / zero */

loc_0001DF8F:
    MEM32(0x44D148) = MEM32(0x44D148) + 1;

loc_0001DF95:
    SET_LO8(edx, MEM8(eax + 2));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001DFA2; /* je: equal / zero */

loc_0001DF9C:
    MEM32(0x44D148) = MEM32(0x44D148) + 1;

loc_0001DFA2:
    SET_LO8(edx, MEM8(eax + 3));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0001DFAF; /* je: equal / zero */

loc_0001DFA9:
    MEM32(0x44D148) = MEM32(0x44D148) + 1;

loc_0001DFAF:
    eax = eax + 5;
    ecx--;
    if ((ecx != 0)) goto loc_0001DF70; /* jne: not equal / not zero */

loc_0001DFB5:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
