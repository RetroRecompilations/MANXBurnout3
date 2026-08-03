#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FB1A0
 * Original: 0x001FB1A0 - 0x001FB1C1 (33 bytes, 13 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB1A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FB1A0:
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x68) = ecx;
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_001FB1C0; /* je: equal / zero */

loc_001FB1B2:
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FB1BD:
    esp = esp + 0x10;

loc_001FB1C0:
    esp += 4; return; /* ret */

}
