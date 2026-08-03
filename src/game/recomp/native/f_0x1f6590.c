#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6590
 * Original: 0x001F6590 - 0x001F65A0 (16 bytes, 4 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6590(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6590:
    ecx = MEM32(esp + 4);
    ecx = ecx + 0xC;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_001FE140(); return; /* tail jmp 0x001FE140 */

}
