#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FC930
 * Original: 0x001FC930 - 0x001FC948 (24 bytes, 10 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC930(void)
{

loc_001FC930:
    esp = esp - 8;
    PUSH32(esp, ebx);
    /* TODO: rdtsc  */
    ebx = esp + 4;
    MEM32(ebx) = eax;
    MEM32(ebx + 4) = edx;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
