#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001ED1A0
 * Original: 0x001ED1A0 - 0x001ED1C7 (39 bytes, 14 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ED1A0(void)
{

loc_001ED1A0:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C0DC0);
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001ED1C3:
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
