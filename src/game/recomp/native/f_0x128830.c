#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128830
 * Original: 0x00128830 - 0x00128860 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128830(void)
{
    int _flags = 0; /* fallback flag var */

loc_00128830:
    edx = MEM32(esi + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0012885F; /* jle: less or equal (signed <=) */

loc_0012883D:
    edx = edx + 0xAC4;

loc_00128843:
    if (CMP_EQ(edi, MEM32(edx))) goto loc_00128850; /* je: equal / zero */

loc_00128847:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_00128843; /* jl: less (signed <) */

loc_0012884F:
    esp += 4; return; /* ret */

loc_00128850:
    if (TEST_S(eax, eax)) goto loc_0012885F; /* jl: less (signed <) */

loc_00128854:
    ecx = MEM32(esi + 0x14);
    MEM8(ecx + eax + 0x101C) = 1;

loc_0012885F:
    esp += 4; return; /* ret */

}
