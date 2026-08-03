#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F0800
 * Original: 0x001F0800 - 0x001F0810 (16 bytes, 4 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0800(void)
{

loc_001F0800:
    PUSH32(esp, 0); sub_001F3A60(); /* call 0x001F3A60 */

loc_001F0805:
    PUSH32(esp, 0); sub_001F3870(); /* call 0x001F3870 */

loc_001F080A:
    eax = 1;
    esp += 4; return; /* ret */

}
