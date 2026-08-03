#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000172D0
 * Original: 0x000172D0 - 0x000172EC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000172D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000172D0:
    SET_LO8(ecx, MEM8(eax + 0x2E21C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000172E6; /* je: equal / zero */

loc_000172DA:
    SET_LO8(eax, MEM8(0x4A4B90));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000172E6; /* je: equal / zero */

loc_000172E3:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_000172E6:
    eax = 1;
    esp += 4; return; /* ret */

}
