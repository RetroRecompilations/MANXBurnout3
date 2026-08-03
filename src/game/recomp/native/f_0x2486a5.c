#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002486A5
 * Original: 0x002486A5 - 0x002486AE (9 bytes, 4 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002486A5(void)
{

loc_002486A5:
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_002485FC(); /* call 0x002485FC */

loc_002486AC:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
