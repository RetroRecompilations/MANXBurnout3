#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024BC68
 * Original: 0x0024BC68 - 0x0024BC71 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024BC68(void)
{

loc_0024BC68:
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00246EE4(); /* call 0x00246EE4 */

loc_0024BC6F:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
