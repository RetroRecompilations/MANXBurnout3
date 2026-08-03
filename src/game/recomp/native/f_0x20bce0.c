#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020BCE0
 * Original: 0x0020BCE0 - 0x0020BD15 (53 bytes, 15 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BCE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020BCE0:
    eax = MEM32(esp + 8);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x28);
    if (TEST_Z(eax, eax)) goto loc_0020BD02; /* je: equal / zero */

loc_0020BCEF:
    ecx = ecx | 0x800;
    MEM32(eax + 0x28) = ecx;
    ecx = ecx | 0x400;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

loc_0020BD02:
    ecx = ecx & 0xFFFFF7FFu;
    MEM32(eax + 0x28) = ecx;
    ecx = ecx | 0x400;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}
