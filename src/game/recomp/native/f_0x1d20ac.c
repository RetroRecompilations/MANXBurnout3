#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D20AC
 * Original: 0x001D20AC - 0x001D20BD (17 bytes, 7 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D20AC(void)
{

loc_001D20AC:
    ecx = MEM32(esp + 4);
    /* TODO: rdtsc  */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    eax = 0; /* xor self */
    eax++;
    esp += 8; return; /* ret 4 */

}
