#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CED90
 * Original: 0x001CED90 - 0x001CEDA3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED90(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CED90:
    eax = MEM32(eax + 0x24);
    if (CMP_EQ(eax, 0xB)) goto loc_001CEDA0; /* je: equal / zero */

loc_001CED98:
    if (CMP_EQ(eax, 0xA)) goto loc_001CEDA0; /* je: equal / zero */

loc_001CED9D:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001CEDA0:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
