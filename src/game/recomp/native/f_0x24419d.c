#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024419D
 * Original: 0x0024419D - 0x002441AF (18 bytes, 6 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024419D(void)
{

loc_0024419D:
    PUSH32(esp, MEM32(0x41D49C));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_00244171(); /* call 0x00244171 */

loc_002441AC:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
