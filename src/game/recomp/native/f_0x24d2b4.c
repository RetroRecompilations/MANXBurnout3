#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024D2B4
 * Original: 0x0024D2B4 - 0x0024D2C0 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024D2B4(void)
{

loc_0024D2B4:
    PUSH32(esp, MEM32(0x41D5CC));
    PUSH32(esp, 0); sub_001D1781(); /* call 0x001D1781 */

loc_0024D2BF:
    esp += 4; return; /* ret */

}
