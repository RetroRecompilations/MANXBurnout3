#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBDF0
 * Original: 0x001FBDF0 - 0x001FBE55 (101 bytes, 31 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBDF0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001FBDF0:
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FC930(); /* call 0x001FC930 */

loc_001FBDF7:
    esi = eax;
    PUSH32(esp, 0); sub_001FC950(); /* call 0x001FC950 */

loc_001FBDFE:
    edx = MEM32(0x41B884);
    ecx = esi;
    ecx = ecx - edx;
    if (CMP_AE(esi, edx)) goto loc_001FBE0D; /* jae: above or equal (unsigned >=) */

loc_001FBE0C:
    ecx--;

loc_001FBE0D:
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001FBE1F; /* jge: greater or equal (signed >=) */

loc_001FBE19:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FBE1F:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001FBE31; /* jge: greater or equal (signed >=) */

loc_001FBE2B:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FBE31:
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001FBE3E:
    ecx = MEM32(0x41B880);
    ecx = ecx + eax;
    MEM32(0x41B884) = esi;
    MEM32(0x41B880) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
