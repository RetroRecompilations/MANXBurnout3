#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024BEB5
 * Original: 0x0024BEB5 - 0x0024BEBE (9 bytes, 4 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BEB5(void)
{

loc_0024BEB5:
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_002485FC(); /* call 0x002485FC */

loc_0024BEBC:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
