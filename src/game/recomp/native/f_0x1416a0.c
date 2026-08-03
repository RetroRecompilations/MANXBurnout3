#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001416A0
 * Original: 0x001416A0 - 0x001416C1 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001416A0(void)
{

loc_001416A0:
    eax = MEM32(eax + 0x7C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0xA6864CCEu);
    PUSH32(esp, 0x3DFE6C00);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_001416C0:
    esp += 4; return; /* ret */

}
