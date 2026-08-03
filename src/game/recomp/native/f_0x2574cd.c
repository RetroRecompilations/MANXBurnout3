#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002574CD
 * Original: 0x002574CD - 0x0025757B (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002574CD(void)
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

loc_002574CD:
    PUSH32(esp, edx);
    /* wait - FPU sync */
    /* fnstcw word ptr [esp] - store FPU control word */
    if (_flags /* je: equal / zero */) goto loc_00257541;

loc_002574D4:
    if (CMP_EQ(MEM16(esp), 0x27F)) goto loc_002574E1; /* je: equal / zero */

loc_002574DC:
    PUSH32(esp, 0); sub_00249BE5(); /* call 0x00249BE5 */

loc_002574E1:
    if (CMP_AE(eax, 0x3FF00000)) goto loc_00257515; /* jae: above or equal (unsigned >=) */

loc_002574E8:
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fpatan  */

loc_002574F8:
    if (CMP_NE(MEM32(0x41D2A0), 0)) { sub_00249C6E(); return; } /* jne: not equal / not zero */

loc_00257505:
    edx = 0xD;
    ecx = 0x41A7A8;
    g_seh_ebp = ebp; sub_00249C7B(); return; /* tail jmp 0x00249C7B */

loc_00257515:
    if (CMP_A(MEM32(0x41D2A0), 0)) goto loc_0025754F; /* ja: above (unsigned >) */

loc_00257517:
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_0025754F; /* jne: not equal / not zero */

loc_00257528:
    ecx = ecx & 0x80000000u;
    /* fstp st(0) */
    if ((ecx == 0)) goto loc_00257536; /* je: equal / zero */

loc_00257532:
    /* FPU: fldpi  */
    goto loc_002574F8;

loc_00257536:
    fp_push(0.0); /* fldz */
    goto loc_002574F8;

loc_0025753A:
    PUSH32(esp, 0); sub_00249BFC(); /* call 0x00249BFC */

loc_0025753F:
    goto loc_0025755C;

loc_00257541:
    if (TEST_NZ(eax, 0xFFFFF)) goto loc_0025753A; /* jne: not equal / not zero */

loc_00257548:
    if (CMP_NE(MEM32(esp + 8), 0)) goto loc_0025753A; /* jne: not equal / not zero */

loc_0025754F:
    /* fstp st(0) */
    fp_push(MEMF(0x3C6710)); /* fld */
    eax = 1;

loc_0025755C:
    if (CMP_NE(MEM32(0x41D2A0), 0)) { sub_00249C6E(); return; } /* jne: not equal / not zero */

loc_00257569:
    edx = 0xD;
    ecx = 0x41A7A8;
    PUSH32(esp, 0); sub_00249B93(); /* call 0x00249B93 */

loc_00257579:
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
