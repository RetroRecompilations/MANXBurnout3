#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225B60
 * Original: 0x00225B60 - 0x00225B76 (22 bytes, 9 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225B60:
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00225B75; /* je: equal / zero */

loc_00225B68:
    eax = MEM32(ecx + 4);
    if (TEST_Z(eax, eax)) goto loc_00225B75; /* je: equal / zero */

loc_00225B6F:
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00225B75:
    esp += 4; return; /* ret */

}
