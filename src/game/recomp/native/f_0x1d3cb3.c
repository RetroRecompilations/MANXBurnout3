#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D3CB3
 * Original: 0x001D3CB3 - 0x001D3CBB (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3CB3(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001D3CB3:
    PUSH32(esp, 0); sub_002447BF(); /* call 0x002447BF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001D3CB8:
    esp += 16; return; /* ret 12 */

}
