#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243F09
 * Original: 0x00243F09 - 0x00243F1F (22 bytes, 8 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243F09(void)
{

loc_00243F09:
    eax = MEM32(esp + 8);
    eax = eax & 0xFFF7FFFFu;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_00243ED7(); /* call 0x00243ED7 */

loc_00243F1C:
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
