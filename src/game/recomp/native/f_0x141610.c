#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00141610
 * Original: 0x00141610 - 0x00141631 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141610(void)
{

loc_00141610:
    eax = MEM32(eax + 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3EB33333);
    PUSH32(esp, 0x709430F4);
    PUSH32(esp, 0x887C8000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00141630:
    esp += 4; return; /* ret */

}
