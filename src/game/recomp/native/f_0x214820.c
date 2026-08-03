#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214820
 * Original: 0x00214820 - 0x0021483D (29 bytes, 12 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214820(void)
{
    int _flags = 0; /* fallback flag var */

loc_00214820:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x54);
    if (TEST_Z(eax, eax)) goto loc_00214832; /* je: equal / zero */

loc_0021482C:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA8B(); /* call 0x0031AA8B */

loc_00214832:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_00214838:
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
