#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6370
 * Original: 0x001F6370 - 0x001F63A5 (53 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6370(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6370:
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x10812);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6340(); /* call 0x001F6340 */

loc_001F6380:
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001F6389:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001F63A1; /* je: equal / zero */

loc_001F6390:
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F6350(); /* call 0x001F6350 */

loc_001F639C:
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F63A1:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
