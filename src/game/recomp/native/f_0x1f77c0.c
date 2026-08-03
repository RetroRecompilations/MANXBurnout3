#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F77C0
 * Original: 0x001F77C0 - 0x001F77F2 (50 bytes, 11 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77C0(void)
{

loc_001F77C0:
    eax = MEM32(esp + 4);
    eax = eax + 0x28;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    ecx = MEM32(0x41B550);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0x41B550;
    edx = MEM32(0x41B550);
    MEM32(edx + 4) = eax;
    MEM32(0x41B550) = eax;
    esp += 4; return; /* ret */

}
