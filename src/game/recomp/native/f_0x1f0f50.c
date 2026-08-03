#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F0F50
 * Original: 0x001F0F50 - 0x001F0F77 (39 bytes, 14 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F0F50(void)
{

loc_001F0F50:
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
    PUSH32(esp, 0x3C0E7C);
    PUSH32(esp, 0); sub_001E18F0(); /* call 0x001E18F0 */

loc_001F0F73:
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
