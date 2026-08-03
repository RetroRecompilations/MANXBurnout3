#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD310
 * Original: 0x001DD310 - 0x001DD329 (25 bytes, 8 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD310(void)
{

loc_001DD310:
    eax = MEM32(esp + 4);
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C0A24);
    PUSH32(esp, 0); sub_001E18B0(); /* call 0x001E18B0 */

loc_001DD325:
    esp = esp + 8;
    esp += 4; return; /* ret */

}
