#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C180
 * Original: 0x0021C180 - 0x0021C18E (14 bytes, 7 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C180(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C180:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0021C18B; /* je: equal / zero */

loc_0021C188:
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0021C18B:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
