#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243872
 * Original: 0x00243872 - 0x00243880 (14 bytes, 6 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243872(void)
{

loc_00243872:
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_00244171(); /* call 0x00244171 */

loc_0024387D:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
