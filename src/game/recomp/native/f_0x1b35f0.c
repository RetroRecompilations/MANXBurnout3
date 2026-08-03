#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B35F0
 * Original: 0x001B35F0 - 0x001B35F8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B35F0(void)
{

loc_001B35F0:
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    esp += 4; return; /* ret */

}
