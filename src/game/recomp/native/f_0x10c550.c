#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C550
 * Original: 0x0010C550 - 0x0010C567 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C550(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010C550:
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0010C561; /* je: equal / zero */

loc_0010C556:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010C561; /* je: equal / zero */

loc_0010C55A:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0010C561; /* je: equal / zero */

loc_0010C55E:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0010C561:
    eax = 1;
    esp += 4; return; /* ret */

}
