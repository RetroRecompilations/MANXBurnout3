#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024E13C
 * Original: 0x0024E13C - 0x0024E15C (32 bytes, 11 insns)
 * Category: rw_core
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024E13C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024E13C:
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0024DDF7(); /* call 0x0024DDF7 */

loc_0024E144:
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0024E156; /* je: equal / zero */

loc_0024E14B:
    PUSH32(esp, 0x801A);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0024EFFB(); /* call 0x0024EFFB */

loc_0024E156:
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
