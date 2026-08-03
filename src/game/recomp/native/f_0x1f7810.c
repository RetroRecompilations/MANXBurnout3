#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F7810
 * Original: 0x001F7810 - 0x001F7838 (40 bytes, 13 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7810(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F7810:
    eax = MEM32(0x41B550);
    if (CMP_EQ(eax, 0x41B550)) goto loc_001F7837; /* je: equal / zero */

loc_001F781C:
    edx = MEM32(esp + 4);
    ecx = edx + 0x28;

loc_001F7823:
    if (CMP_EQ(eax, ecx)) goto loc_001F7831; /* je: equal / zero */

loc_001F7827:
    eax = MEM32(eax);
    if (CMP_NE(eax, 0x41B550)) goto loc_001F7823; /* jne: not equal / not zero */

loc_001F7830:
    esp += 4; return; /* ret */

loc_001F7831:
    MEM32(0x41B55C) = edx;

loc_001F7837:
    esp += 4; return; /* ret */

}
