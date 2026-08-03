#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9220
 * Original: 0x001F9220 - 0x001F9309 (233 bytes, 87 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9220(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001F9220:
    eax = MEM32(0x76411C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001F922F:
    esi = MEM32(esp + 0xC);
    ecx = esi + 0x154;
    PUSH32(esp, ecx);
    edx = esi + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00200C70(); /* call 0x00200C70 */

loc_001F9246:
    esp = esp + 8;
    edi = eax;
    /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    if (TEST_NZ(edi, edi)) goto loc_001F926A; /* jne: not equal / not zero */

loc_001F9253:
    eax = MEM32(esp + 0x18);
    MEM32(eax + 8) = edi;
    MEM32(eax) = edi;
    eax = MEM32(0x76411C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F9267:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F926A:
    ecx = MEM32(0x76411C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F9276:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x100);
    edx = MEM32(eax + 0xC);
    ecx = ecx + 0x5C;
    edx--;
    if ((edx == 0)) goto loc_001F9294; /* je: equal / zero */

loc_001F9289:
    edx--;
    if ((edx != 0)) goto loc_001F92C9; /* jne: not equal / not zero */

loc_001F928C:
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;
    goto loc_001F92C9;

loc_001F9294:
    edx = MEM32(edi + 8);
    fp_push((double)SMEM32(edi + 8)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001F92A4; /* jge: greater or equal (signed >=) */

loc_001F929E:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F92A4:
    edx = MEM32(esi + 0xF8);
    edx = MEM32(edx + 0x18);
    edx = MEM32(edx + 0x14);
    edx = MEM32(edx);
    /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001F92C4; /* jge: greater or equal (signed >=) */

loc_001F92BE:
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001F92C4:
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_001F92C9:
    edx = MEM32(eax + 4);
    edx--;
    if ((edx == 0)) goto loc_001F92F2; /* je: equal / zero */

loc_001F92CF:
    edx--;
    if ((edx == 0)) goto loc_001F92DC; /* je: equal / zero */

loc_001F92D2:
    edx--;
    if ((edx != 0)) goto loc_001F9306; /* jne: not equal / not zero */

loc_001F92D5:
    ecx = MEM32(edi);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F92DC:
    edx = MEM32(ecx + 0x12C);
    ecx = MEM32(edi);
    edx = MEM32(edx + 0x10);
    ecx = ecx << 5;
    ecx = MEM32(ecx + edx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F92F2:
    edx = MEM32(ecx + 0x12C);
    ecx = MEM32(edi);
    edx = MEM32(edx + 0x10);
    ecx = ecx << 5;
    ecx = MEM32(edx + ecx + 4);
    MEM32(eax) = ecx;

loc_001F9306:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
