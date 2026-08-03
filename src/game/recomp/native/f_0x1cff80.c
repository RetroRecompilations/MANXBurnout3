#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CFF80
 * Original: 0x001CFF80 - 0x001CFF88 (8 bytes, 3 insns)
 * Category: rw_driver_xbox
 * Source: driver/xbox/xbcache.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CFF80(void)
{

loc_001CFF80:
    eax = MEM32(0x36B828);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}
