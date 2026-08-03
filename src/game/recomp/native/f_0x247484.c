#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00247484
 * Original: 0x00247484 - 0x002474D7 (83 bytes, 28 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247484(void)
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

loc_00247484:
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_NE(MEM32(0x3C6A88), 0)) goto loc_002474B8; /* jne: not equal / not zero */

loc_00247490:
    PUSH32(esp, MEM32(ebp + 0x14));
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002473E6(); /* call 0x002473E6 */

loc_002474B3:
    esp = esp + 0x24;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002474B8:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_002474BD:
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(eax) = 0x21;
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_002474D0:
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
