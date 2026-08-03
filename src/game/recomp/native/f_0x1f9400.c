#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9400
 * Original: 0x001F9400 - 0x001F940B (11 bytes, 3 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9400(void)
{

loc_001F9400:
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x234);
    esp += 4; return; /* ret */

}
