#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001E0FD0
 * Original: 0x001E0FD0 - 0x001E0FF5 (37 bytes, 13 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E0FD0(void)
{

loc_001E0FD0:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0); sub_001E0E70(); /* call 0x001E0E70 */

loc_001E0FF1:
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
