#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5120
 * Original: 0x001B5120 - 0x001B5171 (81 bytes, 23 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5120(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001B5120:
    SET_LO8(eax, MEM8(esi + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B516E; /* je: equal / zero */

loc_001B5127:
    eax = MEM32(esi + 0xD0);
    /* cmp eax, 0x3E5 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0xD0;
    if (CMP_EQ(eax, 0x3E5)) goto loc_001B516D; /* je: equal / zero */

loc_001B513B:
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esi + 0x11C);
    ecx = MEM32(esi + 0x118);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax << 5;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + ecx + 4);
    PUSH32(esp, 0); sub_00244DF0(); /* call 0x00244DF0 */

loc_001B515E:
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM16(esi + 0x114) = LO16(eax);
    PUSH32(esp, 0); sub_00363CF9(); /* call 0x00363CF9 */

loc_001B516C:
    POP32(esp, ebx);

loc_001B516D:
    POP32(esp, edi);

loc_001B516E:
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
