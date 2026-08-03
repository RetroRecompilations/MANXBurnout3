#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CED70
 * Original: 0x001CED70 - 0x001CED82 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED70(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CED70:
    eax = MEM32(eax + 0x24);
    if (CMP_G(eax, 9)) goto loc_001CED7F; /* jg: greater (signed >) */

loc_001CED78:
    if (TEST_Z(eax, eax)) goto loc_001CED7F; /* je: equal / zero */

loc_001CED7C:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001CED7F:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
