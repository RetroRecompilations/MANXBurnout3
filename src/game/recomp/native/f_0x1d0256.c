#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D0256
 * Original: 0x001D0256 - 0x001D0275 (31 bytes, 10 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D0256(void)
{
    uint32_t ebp;

loc_001D0256:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x200;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -512;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D01D8(); /* call 0x001D01D8 */

loc_001D0271:
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}
