#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214C50
 * Original: 0x00214C50 - 0x00214C8A (58 bytes, 17 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C50(void)
{

loc_00214C50:
    esp = esp - 0x10;
    eax = MEM32(esp + 0x14);
    MEM8(esp + 7) = LO8(eax);
    eax = eax >> 8;
    MEM8(esp + 6) = LO8(eax);
    eax = eax >> 8;
    MEM8(esp + 5) = LO8(eax);
    eax = eax >> 8;
    PUSH32(esp, 0x14);
    MEM8(esp + 8) = LO8(eax);
    eax = esp + 4;
    PUSH32(esp, 0x41CD40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214AB0(); /* call 0x00214AB0 */

loc_00214C81:
    eax = 0x41CD40;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}
