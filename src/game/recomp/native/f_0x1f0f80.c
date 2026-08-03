#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F0F80
 * Original: 0x001F0F80 - 0x001F0FA2 (34 bytes, 12 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0F80(void)
{

loc_001F0F80:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C0E7C);
    PUSH32(esp, 0); sub_0024D5A0(); /* call 0x0024D5A0 */

loc_001F0F9E:
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
