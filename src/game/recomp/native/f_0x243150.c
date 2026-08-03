#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243150
 * Original: 0x00243150 - 0x00243168 (24 bytes, 10 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243150(void)
{

loc_00243150:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00339344(); /* call 0x00339344 */

loc_0024315D:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_00243163:
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
