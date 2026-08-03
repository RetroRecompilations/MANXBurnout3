#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245508
 * Original: 0x00245508 - 0x00245511 (9 bytes, 4 insns)
 * Category: rw_plcore
 * Source: src/plcore/batkbin.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245508(void)
{

loc_00245508:
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_002485FC(); /* call 0x002485FC */

loc_0024550F:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
