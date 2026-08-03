#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F68D0
 * Original: 0x001F68D0 - 0x001F68E4 (20 bytes, 6 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F68D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F68D0:
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 0x30), 2)) goto loc_001F68E3; /* je: equal / zero */

loc_001F68DA:
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001FEDC0(); return; /* tail jmp 0x001FEDC0 */

loc_001F68E3:
    esp += 4; return; /* ret */

}
