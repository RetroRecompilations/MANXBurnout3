#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5AA0
 * Original: 0x001F5AA0 - 0x001F5ACD (45 bytes, 19 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5AA0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F5A00(); /* call 0x001F5A00 */

loc_001F5AAB:
    PUSH32(esp, 0x10812);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001F5AB6:
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001F5AC9; /* je: equal / zero */

loc_001F5ABD:
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F5A60(); /* call 0x001F5A60 */

loc_001F5AC4:
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5AC9:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
