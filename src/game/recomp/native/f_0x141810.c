#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00141810
 * Original: 0x00141810 - 0x0014183C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141810(void)
{
    int _flags = 0; /* fallback flag var */

loc_00141810:
    SET_LO8(eax, MEM8(esi + 0x69));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0014183B; /* jne: not equal / not zero */

loc_00141817:
    eax = MEM32(esi + 0x78);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x769034D7);
    PUSH32(esp, 0xF95C0000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_00141837:
    MEM8(esi + 0x69) = 1;

loc_0014183B:
    esp += 4; return; /* ret */

}
