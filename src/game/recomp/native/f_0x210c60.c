#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00210C60
 * Original: 0x00210C60 - 0x00210C7D (29 bytes, 8 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00210C60:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x17A8);
    if (CMP_NE(ecx, MEM32(esp + 8))) goto loc_00210C77; /* jne: not equal / not zero */

loc_00210C70:
    eax = MEM32(eax + 0x17AC);
    esp += 4; return; /* ret */

loc_00210C77:
    eax = 4;
    esp += 4; return; /* ret */

}
