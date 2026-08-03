#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD760
 * Original: 0x001DD760 - 0x001DD765 (5 bytes, 1 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD760(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD760:
    g_seh_ebp = ebp; sub_001DBCC0(); return; /* tail jmp 0x001DBCC0 */

}
