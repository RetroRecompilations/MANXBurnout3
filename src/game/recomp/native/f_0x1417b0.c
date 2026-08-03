#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001417B0
 * Original: 0x001417B0 - 0x001417D1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001417B0(void)
{

loc_001417B0:
    eax = MEM32(eax + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xB929D77Bu);
    PUSH32(esp, 0x9C000000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_001417D0:
    esp += 4; return; /* ret */

}
