#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00242C70
 * Original: 0x00242C70 - 0x00242C81 (17 bytes, 6 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00242C70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00242C70:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    if (CMP_EQ(MEM32(eax + 0x18), ecx)) goto loc_00242C80; /* je: equal / zero */

loc_00242C7D:
    MEM32(eax + 0x18) = ecx;

loc_00242C80:
    esp += 4; return; /* ret */

}
