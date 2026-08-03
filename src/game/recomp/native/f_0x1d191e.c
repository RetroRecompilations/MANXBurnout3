#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D191E
 * Original: 0x001D191E - 0x001D192B (13 bytes, 3 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D191E(void)
{

loc_001D191E:
    eax = MEM32(0x28);
    eax = MEM32(eax + 0x12C);
    esp += 4; return; /* ret */

}
