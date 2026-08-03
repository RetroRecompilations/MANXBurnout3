#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225A80
 * Original: 0x00225A80 - 0x00225AA9 (41 bytes, 12 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00225A80:
    ecx = MEM32(esp + 4);
    eax = eax | 0xFFFFFFFFu;
    if (TEST_Z(ecx, ecx)) goto loc_00225AA8; /* je: equal / zero */

loc_00225A8B:
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    MEM32(ecx + 0x4630) = eax;
    MEM32(ecx + 0x462C) = edx;
    PUSH32(esp, 0); sub_002259F0(); /* call 0x002259F0 */

loc_00225AA5:
    esp = esp + 4;

loc_00225AA8:
    esp += 4; return; /* ret */

}
