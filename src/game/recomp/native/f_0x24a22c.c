#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A22C
 * Original: 0x0024A22C - 0x0024A234 (8 bytes, 4 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A22C(void)
{

loc_0024A22C:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0024BEBE(); /* call 0x0024BEBE */

loc_0024A232:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
