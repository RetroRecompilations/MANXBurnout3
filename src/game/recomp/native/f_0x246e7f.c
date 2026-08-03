#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00246E7F
 * Original: 0x00246E7F - 0x00246E8B (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246E7F(void)
{

loc_00246E7F:
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00246DBB(); /* call 0x00246DBB */

loc_00246E88:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
