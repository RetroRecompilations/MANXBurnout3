#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C72F0
 * Original: 0x001C72F0 - 0x001C7426 (310 bytes, 80 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C72F0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001C72F0:
    eax = MEM32(0x35FB48);
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1A04);
    /* cmp edi, ecx - flags set for next jcc */
    MEM32(0x4A1B9C) = ecx;
    MEM32(0x4A1AD0) = 0xA;
    MEM32(0x4A1B5C) = ecx;
    MEM32(0x4A1B64) = ecx;
    MEM32(0x4A1B20) = 1;
    MEM8(0x4A1B98) = LO8(ecx);
    MEM32(0x4A1B60) = ecx;
    if (CMP_EQ(edi, ecx)) goto loc_001C735D; /* je: equal / zero */

loc_001C7339:
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_001C735B; /* jne: not equal / not zero */

loc_001C7342:
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_001C735B; /* jne: not equal / not zero */

loc_001C734E:
    eax = MEM32(edi + 0x14);
    if (CMP_EQ(eax, ecx)) goto loc_001C735B; /* je: equal / zero */

loc_001C7355:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034C860(); /* call 0x0034C860 */

loc_001C735B:
    MEM32(edi) = MEM32(edi) + 1;

loc_001C735D:
    esi = esp + 0x10;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_003521F0(); /* call 0x003521F0 */

loc_001C7368:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0034C8A0(); /* call 0x0034C8A0 */

loc_001C736E:
    eax = MEM32(0x35FB48);
    eax = eax + 0xEE0;
    edi = eax;
    eax = MEM32(edi);
    MEM32(0x4A1B7C) = eax;
    ecx = MEM32(edi + 4);
    MEM32(0x4A1B80) = ecx;
    edx = MEM32(edi + 8);
    /* test edx, edx - flags set for next jcc */
    MEM32(0x4A1B84) = edx;
    esi = MEM32(edi + 0xC);
    MEM32(0x4A1B88) = esi;
    ebx = MEM32(edi + 0x10);
    MEM32(0x4A1B8C) = ebx;
    edi = MEM32(edi + 0x14);
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(0x4A1B90) = edi;
    if (CMP_GE(edx & edx, 0)) goto loc_001C73C0; /* jge: greater or equal (signed >=) */

loc_001C73BA:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C73C0:
    /* test esi, esi - flags set for next jcc */
    /* FPU: fdivr dword ptr [0x3b1688] */
    MEM32(esp + 0xC) = esi;
    MEMF(0x4A1AE0) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_001C73DE; /* jge: greater or equal (signed >=) */

loc_001C73D8:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C73DE:
    /* test eax, eax - flags set for next jcc */
    /* FPU: fdivr dword ptr [0x3b17f8] */
    MEM32(esp + 0xC) = eax;
    MEMF(0x4A1AE4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001C73FC; /* jge: greater or equal (signed >=) */

loc_001C73F6:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C73FC:
    /* test ecx, ecx - flags set for next jcc */
    MEMF(0x4A1AF0) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001C7414; /* jge: greater or equal (signed >=) */

loc_001C740E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001C7414:
    MEMF(0x4A1AF4) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_001C6B30(); /* call 0x001C6B30 */

loc_001C741F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
