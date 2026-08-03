#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010FB50
 * Original: 0x0010FB50 - 0x0010FB6B (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010FB50:
    SET_LO8(eax, MEM8(eax));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0010FB65; /* je: equal / zero */

loc_0010FB56:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010FB65; /* je: equal / zero */

loc_0010FB5A:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0010FB65; /* je: equal / zero */

loc_0010FB5E:
    if (CMP_EQ(LO8(eax), 4)) goto loc_0010FB65; /* je: equal / zero */

loc_0010FB62:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0010FB65:
    eax = 1;
    esp += 4; return; /* ret */

}
