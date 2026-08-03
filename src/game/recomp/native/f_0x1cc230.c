#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC230
 * Original: 0x001CC230 - 0x001CC260 (48 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC230(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CC230:
    if (CMP_L(LO8(eax), 0x41)) goto loc_001CC23F; /* jl: less (signed <) */

loc_001CC234:
    if (CMP_G(LO8(eax), 0x5A)) goto loc_001CC23F; /* jg: greater (signed >) */

loc_001CC238:
    SET_LO8(eax, LO8(eax) - 0x37);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001CC23F:
    if (CMP_L(LO8(eax), 0x61)) goto loc_001CC24E; /* jl: less (signed <) */

loc_001CC243:
    if (CMP_G(LO8(eax), 0x7A)) goto loc_001CC24E; /* jg: greater (signed >) */

loc_001CC247:
    SET_LO8(eax, LO8(eax) - 0x57);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001CC24E:
    if (CMP_L(LO8(eax), 0x30)) goto loc_001CC25D; /* jl: less (signed <) */

loc_001CC252:
    if (CMP_G(LO8(eax), 0x39)) goto loc_001CC25D; /* jg: greater (signed >) */

loc_001CC256:
    SET_LO8(eax, LO8(eax) - 0x30);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001CC25D:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}
