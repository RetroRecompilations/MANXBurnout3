#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF962
 * Original: 0x001CF962 - 0x001CF979 (23 bytes, 6 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF962(void)
{

loc_001CF962:
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0024468A(); /* call 0x0024468A */

loc_001CF973:
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}
