#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FFD20
 * Original: 0x000FFD20 - 0x000FFD4B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFD20(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FFD20:
    SET_LO16(eax, MEM16(eax + 0x26));
    if (CMP_AE(LO16(eax), 0x5555)) goto loc_000FFD34; /* jae: above or equal (unsigned >=) */

loc_000FFD2A:
    if (CMP_BE(LO16(ecx), 0xAAAA)) goto loc_000FFD34; /* jbe: below or equal (unsigned <=) */

loc_000FFD31:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000FFD34:
    if (CMP_AE(LO16(ecx), 0x5555)) goto loc_000FFD44; /* jae: above or equal (unsigned >=) */

loc_000FFD3B:
    if (CMP_BE(LO16(eax), 0xAAAA)) goto loc_000FFD44; /* jbe: below or equal (unsigned <=) */

loc_000FFD41:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_000FFD44:
    /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    SET_LO8(eax, (CMP_A(LO16(eax), LO16(ecx))) ? 1 : 0); /* seta */
    esp += 4; return; /* ret */

}
