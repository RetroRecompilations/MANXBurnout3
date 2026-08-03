#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002215B0
 * Original: 0x002215B0 - 0x002215C8 (24 bytes, 7 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002215B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002215B0:
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    /* cmp ecx, 1 - flags set for next jcc */
    ecx = MEM32(esp + 4);
    SET_LO8(eax, (CMP_EQ(ecx, 1)) ? 1 : 0); /* sete */
    MEM16(ecx + 0x8C) = LO16(eax);
    esp += 4; return; /* ret */

}
