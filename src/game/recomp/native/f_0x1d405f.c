#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D405F
 * Original: 0x001D405F - 0x001D4076 (23 bytes, 6 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D405F(void)
{

loc_001D405F:
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_001D5E82(); /* call 0x001D5E82 */

loc_001D4070:
    eax = ZX8(LO8(eax));
    esp += 16; return; /* ret 12 */

}
