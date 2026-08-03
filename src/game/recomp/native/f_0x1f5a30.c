#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5A30
 * Original: 0x001F5A30 - 0x001F5A55 (37 bytes, 14 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5A30:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001F5A4A; /* je: equal / zero */

loc_001F5A3B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F5A41:
    esp = esp + 4;
    MEM32(esi) = 0;

loc_001F5A4A:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F5A50:
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
