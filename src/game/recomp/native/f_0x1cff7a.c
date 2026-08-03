#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CFF7A
 * Original: 0x001CFF7A - 0x001CFF80 (6 bytes, 1 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF7A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CFF7A:
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x36B820)); return; /* indirect tail jmp */

}
