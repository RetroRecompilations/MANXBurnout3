#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FB140
 * Original: 0x001FB140 - 0x001FB197 (87 bytes, 29 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB140(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001FB140:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_001FB152; /* je: equal / zero */

loc_001FB14B:
    MEM32(eax + 0x64) = 0;

loc_001FB152:
    ecx = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_001FB17E; /* je: equal / zero */

loc_001FB15A:
    /* test MEM8(eax + 0x8A), 0x20 - flags set for next jcc */
    MEM32(eax + 0x64) = ecx;
    if (TEST_NZ(MEM8(eax + 0x8A), 0x20)) goto loc_001FB17E; /* jne: not equal / not zero */

loc_001FB166:
    ecx = MEM32(ecx + 0x2C);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001FB17B; /* jge: greater or equal (signed >=) */

loc_001FB175:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001FB17B:
    MEMF(eax + 0x78) = (float)fp_top(); fp_popp(); /* fstp */

loc_001FB17E:
    ecx = MEM32(eax + 0x60);
    if (TEST_Z(ecx, ecx)) goto loc_001FB196; /* je: equal / zero */

loc_001FB185:
    edx = MEM32(eax + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FB193:
    esp = esp + 0x10;

loc_001FB196:
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
