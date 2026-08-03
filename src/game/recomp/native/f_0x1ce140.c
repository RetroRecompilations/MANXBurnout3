#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE140
 * Original: 0x001CE140 - 0x001CE175 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE140(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE140:
    edx = MEM32(esi + 0x4D8);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001CE162; /* jle: less or equal (signed <=) */

loc_001CE14C:
    ecx = esi + 0x268;

loc_001CE152:
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_001CE165; /* je: equal / zero */

loc_001CE157:
    eax++;
    ecx = ecx + 0x26C;
    if (CMP_L(eax, edx)) goto loc_001CE152; /* jl: less (signed <) */

loc_001CE162:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_001CE165:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x26C);
    eax = eax + esi;
    MEM8(eax + 0x268) = 1;
    esp += 4; return; /* ret */

}
