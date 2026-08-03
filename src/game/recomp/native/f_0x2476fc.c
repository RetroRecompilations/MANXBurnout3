#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002476FC
 * Original: 0x002476FC - 0x00247752 (86 bytes, 37 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002476FC(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002476FC:
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    if (TEST_Z(LO8(ecx), 1)) goto loc_00247712; /* je: equal / zero */

loc_00247707:
    fp_push(MEMF(0x3C64D0)); /* fld */
    MEM32(esp + 0xC) = (int32_t)fp_top(); /* fistp */
    /* wait - FPU sync */

loc_00247712:
    if (TEST_Z(LO8(ecx), 8)) goto loc_00247727; /* je: equal / zero */

loc_00247717:
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */
    fp_push(MEMF(0x3C64D0)); /* fld */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */
    /* wait - FPU sync */
    /* fnstsw ax - store FPU status word */

loc_00247727:
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00247736; /* je: equal / zero */

loc_0024772C:
    fp_push(MEMF(0x3C64DC)); /* fld */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */

loc_00247736:
    if (TEST_Z(LO8(ecx), 4)) goto loc_00247744; /* je: equal / zero */

loc_0024773B:
    fp_push(0.0); /* fldz */
    fp_push(1.0); /* fld1 */
    /* FPU: fdivrp st(1) */
    /* fstp st(0) */
    /* wait - FPU sync */

loc_00247744:
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_0024774F; /* je: equal / zero */

loc_00247749:
    /* FPU: fldpi  */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    /* wait - FPU sync */

loc_0024774F:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
