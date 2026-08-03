#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D4099
 * Original: 0x001D4099 - 0x001D40B7 (30 bytes, 9 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D4099(void)
{
    int _cf = 0; /* carry flag */

loc_001D4099:
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(0x754D94));
    PUSH32(esp, 0); sub_001D5E82(); /* call 0x001D5E82 */

loc_001D40AA:
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ~eax;
    eax = eax & MEM32(esp + 4);
    esp += 8; return; /* ret 4 */

}
