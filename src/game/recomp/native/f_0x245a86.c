#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00245A86
 * Original: 0x00245A86 - 0x00245A8E (8 bytes, 4 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00245A86(void)
{

loc_00245A86:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002451BC(); /* call 0x002451BC */

loc_00245A8C:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
