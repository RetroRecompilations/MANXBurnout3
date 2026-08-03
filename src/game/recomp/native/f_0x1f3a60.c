#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F3A60
 * Original: 0x001F3A60 - 0x001F3A84 (36 bytes, 9 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A60(void)
{

loc_001F3A60:
    PUSH32(esp, 0x1F3A30);
    PUSH32(esp, 0x1F39E0);
    PUSH32(esp, 0x1F3920);
    PUSH32(esp, 0x501);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_001F1190(); /* call 0x001F1190 */

loc_001F3A7B:
    esp = esp + 0x14;
    MEM32(0x41B3E8) = eax;
    esp += 4; return; /* ret */

}
