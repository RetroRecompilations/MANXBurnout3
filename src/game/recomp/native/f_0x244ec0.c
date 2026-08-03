#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244EC0
 * Original: 0x00244EC0 - 0x00245085 (453 bytes, 123 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244EC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244EC0:
    ecx = eax;
    PUSH32(esp, eax);
    /* wait - FPU sync */
    /* fnstcw word ptr [esp] - store FPU control word */
    if (CMP_EQ(MEM16(esp), 0x27F)) goto loc_00244ED4; /* je: equal / zero */

loc_00244ECF:
    PUSH32(esp, 0); sub_00249BE5(); /* call 0x00249BE5 */

loc_00244ED4:
    ecx = ecx & 0x7FF00000;
    edx = esp + 8;
    if (CMP_EQ(ecx, 0x7FF00000)) goto loc_00244F87; /* je: equal / zero */

loc_00244EEA:
    PUSH32(esp, 0); sub_00249C15(); /* call 0x00249C15 */

loc_00244EEF:
    if (CMP_EQ(ecx, 0x7FF00000)) goto loc_00244F83; /* je: equal / zero */

loc_00244EF5:
    if (TEST_Z(eax, 0x7FF00000)) goto loc_00244FF6; /* je: equal / zero */

loc_00244F00:
    SET_LO8(ecx, MEM8(esp + 0xF));
    SET_LO8(ecx, LO8(ecx) & 0x80);
    if ((LO8(ecx) != 0)) goto loc_00245060; /* jne: not equal / not zero */

loc_00244F0D:
    /* FPU: fyl2x  */
    PUSH32(esp, 0); sub_00249BD0(); /* call 0x00249BD0 */

loc_00244F14:
    if (CMP_NE(LO8(ecx), 1)) goto loc_00244F1B; /* jne: not equal / not zero */

loc_00244F19:
    fp_top() = -fp_top(); /* fchs */

loc_00244F1B:
    if (CMP_NE(MEM32(0x41D2A0), 0)) { sub_00249C6E(); return; } /* jne: not equal / not zero */

loc_00244F28:
    ecx = 0x3C612C;
    edx = 0x1D;
    g_seh_ebp = ebp; sub_00249CB9(); return; /* tail jmp 0x00249CB9 */

loc_00244F38:
    if (CMP_NE(MEM32(0x41D2A0), 0)) { sub_00249C6E(); return; } /* jne: not equal / not zero */

loc_00244F45:
    ecx = 0x3C612C;
    edx = 0x1D;
    PUSH32(esp, 0); sub_00249B7C(); /* call 0x00249B7C */

loc_00244F55:
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00244F57:
    edx = esp + 8;
    PUSH32(esp, 0); sub_00249C15(); /* call 0x00249C15 */

loc_00244F60:
    if (TEST_NZ(MEM8(esp + 0x16), 8)) goto loc_00244F6A; /* jne: not equal / not zero */

loc_00244F67:
    ecx++;
    goto loc_00244F9D;

loc_00244F6A:
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = 1;
    goto loc_00244F38;

loc_00244F73:
    if (TEST_NZ(MEM8(esp + 0xE), 8)) goto loc_00244F6A; /* jne: not equal / not zero */

loc_00244F7A:
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = 7;
    goto loc_00244F38;

loc_00244F83:
    ecx = 0; /* xor self */
    goto loc_00244F9D;

loc_00244F87:
    ecx = 0; /* xor self */
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 0x10);
    if ((eax != 0)) goto loc_00244F57; /* jne: not equal / not zero */

loc_00244F94:
    edx = esp + 8;
    PUSH32(esp, 0); sub_00249C15(); /* call 0x00249C15 */

loc_00244F9D:
    eax = MEM32(esp + 0xC);
    edx = eax;
    eax = eax & 0x7FF00000;
    edx = edx & 0xFFFFF;
    if (CMP_NE(eax, 0x7FF00000)) goto loc_00244FBB; /* jne: not equal / not zero */

loc_00244FB5:
    edx = edx | MEM32(esp + 8);
    if ((edx != 0)) goto loc_00244F73; /* jne: not equal / not zero */

loc_00244FBB:
    if (TEST_NZ(ecx, ecx)) goto loc_00244F7A; /* jne: not equal / not zero */

loc_00244FBF:
    esp = esp - 0x74;
    ecx = esp;
    PUSH32(esp, ecx);
    esp = esp - 0x10;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */
    /* FPU: fnsave dword ptr [ecx + 8] */
    PUSH32(esp, 0); sub_00249DC1(); /* call 0x00249DC1 */

loc_00244FD8:
    esp = esp + 0x10;
    POP32(esp, ecx);
    /* FPU: frstor dword ptr [ecx + 8] */
    fp_push(MEMD(ecx)); /* fld double */
    esp = esp + 0x74;
    if (TEST_Z(eax, eax)) { sub_00249C6E(); return; } /* je: equal / zero */

loc_00244FEC:
    eax = 1;
    goto loc_00244F38;

loc_00244FF6:
    eax = MEM32(esp + 0xC);
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_00244F00; /* jne: not equal / not zero */

loc_00245009:
    /* fstp st(0) */
    eax = MEM32(esp + 0x14);
    eax = eax & 0x7FFFFFFF;
    eax = eax | MEM32(esp + 0x10);
    if ((eax == 0)) goto loc_00245057; /* je: equal / zero */

loc_0024501A:
    PUSH32(esp, 0); sub_00245085(); /* call 0x00245085 */

loc_0024501F:
    SET_HI8(ecx, MEM8(esp + 0xF));
    SET_HI8(ecx, HI8(ecx) >> 7);
    if (TEST_Z(MEM32(esp + 0x17), 0x80)) goto loc_00245046; /* je: equal / zero */

loc_00245030:
    fp_push(MEMF(0x3C66B4)); /* fld */
    if (TEST_Z(HI8(ecx), LO8(ecx))) goto loc_0024503C; /* je: equal / zero */

loc_0024503A:
    fp_top() = -fp_top(); /* fchs */

loc_0024503C:
    eax = 2;
    goto loc_00244F38;

loc_00245046:
    fp_push(0.0); /* fldz */
    if (TEST_Z(HI8(ecx), LO8(ecx))) { sub_00249C6E(); return; } /* je: equal / zero */

loc_00245050:
    fp_top() = -fp_top(); /* fchs */
    g_seh_ebp = ebp; sub_00249C6E(); return; /* tail jmp 0x00249C6E */

loc_00245057:
    /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    g_seh_ebp = ebp; sub_00249C6E(); return; /* tail jmp 0x00249C6E */

loc_00245060:
    /* fld st(1) */
    PUSH32(esp, 0); sub_00245085(); /* call 0x00245085 */

loc_00245067:
    fp_top() = -fp_top(); /* fchs */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00244F0D; /* jne: not equal / not zero */

loc_00245071:
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(0x3C6710)); /* fld */
    eax = 1;
    goto loc_00244F38;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
