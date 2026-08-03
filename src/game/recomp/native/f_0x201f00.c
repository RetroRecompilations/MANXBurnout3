#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00201F00
 * Original: 0x00201F00 - 0x00201F20 (32 bytes, 11 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00201F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00201F00:
    eax = MEM32(esp + 0xC);
    if (TEST_Z(MEM8(eax), 1)) goto loc_00201F0C; /* je: equal / zero */

loc_00201F09:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00201F0C:
    eax = MEM32(esp + 4);
    MEM32(eax) = MEM32(eax) | 0x20;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x10) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}
