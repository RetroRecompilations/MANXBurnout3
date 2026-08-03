#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00141840
 * Original: 0x00141840 - 0x00141861 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141840(void)
{

loc_00141840:
    eax = MEM32(eax + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5975A035);
    PUSH32(esp, 0xF95C0000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00141860:
    esp += 4; return; /* ret */

}
