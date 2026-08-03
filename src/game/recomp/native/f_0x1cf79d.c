#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF79D
 * Original: 0x001CF79D - 0x001CF7B7 (26 bytes, 8 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF79D(void)
{

loc_001CF79D:
    PUSH32(esp, MEM32(esp + 0xC));
    eax = MEM32(esp + 8);
    PUSH32(esp, MEM32(esp + 0xC));
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D7012(); /* call 0x001D7012 */

loc_001CF7B2:
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}
