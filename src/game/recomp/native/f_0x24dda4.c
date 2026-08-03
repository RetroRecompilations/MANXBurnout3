#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024DDA4
 * Original: 0x0024DDA4 - 0x0024DDF7 (83 bytes, 32 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024DDA4(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024DDA4:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    /* test LO8(ebx), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(LO8(ebx), 2)) goto loc_0024DDD9; /* je: equal / zero */

loc_0024DDB1:
    PUSH32(esp, edi);
    PUSH32(esp, 0x24FC8C);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x7C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002276E9(); /* call 0x002276E9 */

loc_0024DDC4:
    if (TEST_Z(LO8(ebx), 1)) goto loc_0024DDD4; /* je: equal / zero */

loc_0024DDC9:
    PUSH32(esp, 0x8019);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0024EFFB(); /* call 0x0024EFFB */

loc_0024DDD4:
    eax = edi;
    POP32(esp, edi);
    goto loc_0024DDF2;

loc_0024DDD9:
    ecx = esi;
    PUSH32(esp, 0); sub_0024FC8C(); /* call 0x0024FC8C */

loc_0024DDE0:
    if (TEST_Z(LO8(ebx), 1)) goto loc_0024DDF0; /* je: equal / zero */

loc_0024DDE5:
    PUSH32(esp, 0x8019);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024EFFB(); /* call 0x0024EFFB */

loc_0024DDF0:
    eax = esi;

loc_0024DDF2:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
