#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001417E0
 * Original: 0x001417E0 - 0x0014180C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001417E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001417E0:
    SET_LO8(eax, MEM8(esi + 0x69));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014180B; /* jne: not equal / not zero */

loc_001417E7:
    eax = MEM32(esi + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x59515DBE);
    PUSH32(esp, 0xAC000000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00141807:
    MEM8(esi + 0x69) = 1;

loc_0014180B:
    esp += 4; return; /* ret */

}
