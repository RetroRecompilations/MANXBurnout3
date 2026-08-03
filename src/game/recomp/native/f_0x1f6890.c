#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6890
 * Original: 0x001F6890 - 0x001F68C1 (49 bytes, 16 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6890(void)
{

loc_001F6890:
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 0x2C) = 1;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    esp += 4; return; /* ret */

}
