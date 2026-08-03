#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002473E6
 * Original: 0x002473E6 - 0x00247484 (158 bytes, 56 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002473E6(void)
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

loc_002473E6:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = 0; /* xor self */

loc_002473EE:
    ecx = MEM32(eax * 8 + 0x3C63C0);
    if (CMP_EQ(ecx, MEM32(ebp + 0xC))) goto loc_0024745E; /* je: equal / zero */

loc_002473FA:
    eax++;
    if (CMP_L(eax, 0x1D)) goto loc_002473EE; /* jl: less (signed <) */

loc_00247400:
    eax = 0; /* xor self */

loc_00247402:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    if (TEST_Z(eax, eax)) goto loc_00247467; /* je: equal / zero */

loc_00247409:
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x28));
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_00247441:
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024B2C3(); /* call 0x0024B2C3 */

loc_0024744A:
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_00247458; /* jne: not equal / not zero */

loc_00247451:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00247391(); /* call 0x00247391 */

loc_00247457:
    POP32(esp, ecx);

loc_00247458:
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0024745E:
    eax = MEM32(eax * 8 + 0x3C63C4);
    goto loc_00247402;

loc_00247467:
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0); sub_002476D8(); /* call 0x002476D8 */

loc_00247474:
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00247391(); /* call 0x00247391 */

loc_0024747C:
    fp_push(MEMD(ebp + 0x20)); /* fld double */
    esp = esp + 0xC;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
