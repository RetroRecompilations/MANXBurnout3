#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5840
 * Original: 0x001F5840 - 0x001F5866 (38 bytes, 10 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5840(void)
{

loc_001F5840:
    /* Paired with the portable begin-frame boundary in sub_001F5810.
     * Preserve the retail frame counter/active flag without submitting an
     * Xbox push buffer alongside the native DXVK command stream. */
    eax = MEM32(0x41B418);
    eax++;
    MEM32(0x41B41C) = 0;
    MEM32(0x41B418) = eax;
    esp += 4; return; /* ret */

}
