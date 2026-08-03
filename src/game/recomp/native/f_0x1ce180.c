#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE180
 * Original: 0x001CE180 - 0x001CE1AF (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE180(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE180:
    ecx = MEM32(esi + 0x4D8);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001CE1AE; /* jle: less or equal (signed <=) */

loc_001CE18C:
    edx = esi;
    edi = edi;

loc_001CE190:
    if (CMP_EQ(edx, edi)) goto loc_001CE1A0; /* je: equal / zero */

loc_001CE194:
    eax++;
    edx = edx + 0x26C;
    if (CMP_L(eax, ecx)) goto loc_001CE190; /* jl: less (signed <) */

loc_001CE19F:
    esp += 4; return; /* ret */

loc_001CE1A0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x26C);
    MEM8(eax + esi + 0x268) = 0;

loc_001CE1AE:
    esp += 4; return; /* ret */

}
