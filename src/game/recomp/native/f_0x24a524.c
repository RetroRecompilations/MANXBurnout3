#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A524
 * Original: 0x0024A524 - 0x0024A52C (8 bytes, 4 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A524(void)
{

loc_0024A524:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BEBE(); /* call 0x0024BEBE */

loc_0024A52A:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
