#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002440F4
 * Original: 0x002440F4 - 0x002440FD (9 bytes, 4 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002440F4(void)
{

loc_002440F4:
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_002485FC(); /* call 0x002485FC */

loc_002440FB:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
