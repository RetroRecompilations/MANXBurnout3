#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FC640
 * Original: 0x001FC640 - 0x001FC681 (65 bytes, 19 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC640(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FC640:
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(MEM8(esi + 0x62), 1)) goto loc_001FC64E; /* je: equal / zero */

loc_001FC649:
    PUSH32(esp, 0); sub_001FC070(); /* call 0x001FC070 */

loc_001FC64E:
    PUSH32(esp, 0); sub_001FC130(); /* call 0x001FC130 */

loc_001FC653:
    SET_LO8(edx, MEM8(esi + 0x62));
    ecx = MEM32(0x41B87C);
    eax = MEM32(0x41B878);
    SET_LO8(edx, LO8(edx) | 2);
    ecx++;
    eax++;
    MEM8(esi + 0x61) = 1;
    MEM8(esi + 0x62) = LO8(edx);
    MEM32(esi + 0x48) = 0;
    MEM32(0x41B87C) = ecx;
    MEM32(0x41B878) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
