#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00141670
 * Original: 0x00141670 - 0x00141691 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141670(void)
{

loc_00141670:
    eax = MEM32(eax + 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0xA6864CCEu);
    PUSH32(esp, 0x3352D480);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00141690:
    esp += 4; return; /* ret */

}
