#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024386D
 * Original: 0x0024386D - 0x00243872 (5 bytes, 1 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024386D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0024386D:
    g_seh_ebp = ebp; sub_002440A5(); return; /* tail jmp 0x002440A5 */

}
