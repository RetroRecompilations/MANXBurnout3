#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D2238
 * Original: 0x001D2238 - 0x001D2240 (8 bytes, 3 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2238(void)
{

loc_001D2238:
    eax = MEM32(0x36B8C0);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}
