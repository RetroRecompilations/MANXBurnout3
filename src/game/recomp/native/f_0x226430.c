#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226430
 * Original: 0x00226430 - 0x00226452 (34 bytes, 13 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226430(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226430:
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0022644D; /* je: equal / zero */

loc_00226439:
    ecx = MEM32(eax + 4);
    /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_00226451; /* je: equal / zero */

loc_00226444:
    if (CMP_L(eax, 8)) goto loc_00226451; /* jl: less (signed <) */

loc_00226449:
    eax = eax - 8;
    esp += 4; return; /* ret */

loc_0022644D:
    eax = MEM32(esp + 8);

loc_00226451:
    esp += 4; return; /* ret */

}
