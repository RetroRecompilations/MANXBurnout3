#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245561
 * Original: 0x00245561 - 0x0024556A (9 bytes, 4 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245561(void)
{

loc_00245561:
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0024543C(); /* call 0x0024543C */

loc_00245568:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
