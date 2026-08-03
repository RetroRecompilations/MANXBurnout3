#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002208D0
 * Original: 0x002208D0 - 0x002208F7 (39 bytes, 9 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002208D0(void)
{

loc_002208D0:
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0021C870(); /* call 0x0021C870 */

loc_002208DA:
    PUSH32(esp, 0x41CFE4);
    PUSH32(esp, 0x220830);
    PUSH32(esp, 0); sub_0021C680(); /* call 0x0021C680 */

loc_002208E9:
    esp = esp + 0xC;
    MEM32(0x41CFEC) = 0;
    esp += 4; return; /* ret */

}
