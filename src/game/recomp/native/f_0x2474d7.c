#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002474D7
 * Original: 0x002474D7 - 0x00247577 (160 bytes, 56 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002474D7(void)
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

loc_002474D7:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x70;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_002471A4(); /* call 0x002471A4 */

loc_002474EF:
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0024751A; /* jne: not equal / not zero */

loc_002474F6:
    MEM32(esp + 0x40) = MEM32(esp + 0x40) & 0xFFFFFFFEu;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x20;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00246F00(); /* call 0x00246F00 */

loc_00247517:
    esp = esp + 0x18;

loc_0024751A:
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_002473B9(); /* call 0x002473B9 */

loc_00247522:
    esp = esp + 4;
    if (CMP_NE(MEM32(0x3C6A88), 0)) goto loc_00247559; /* jne: not equal / not zero */

loc_0024752E:
    if (TEST_Z(eax, eax)) goto loc_00247559; /* je: equal / zero */

loc_00247532:
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002473E6(); /* call 0x002473E6 */

loc_00247554:
    esp = esp + 0x24;
    goto loc_00247573;

loc_00247559:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00247391(); /* call 0x00247391 */

loc_0024755F:
    MEM32(esp) = 0xFFFF;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_0024756E:
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00247573:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
