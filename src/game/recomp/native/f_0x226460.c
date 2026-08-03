#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226460
 * Original: 0x00226460 - 0x00226471 (17 bytes, 6 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226460:
    eax = MEM32(esp + 4);
    /* cmp MEM32(eax), 0 - flags set for next jcc */
    eax = MEM32(esp + 8);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00226470; /* je: equal / zero */

loc_0022646D:
    eax = eax + 8;

loc_00226470:
    esp += 4; return; /* ret */

}
