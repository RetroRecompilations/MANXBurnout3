#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00127080
 * Original: 0x00127080 - 0x001270C8 (72 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00127080:
    SET_LO8(eax, MEM8(ecx + 0x215));
    if (CMP_EQ(LO8(eax), 4)) goto loc_001270B2; /* je: equal / zero */

loc_0012708A:
    if (CMP_EQ(LO8(eax), 5)) goto loc_001270B2; /* je: equal / zero */

loc_0012708E:
    if (CMP_EQ(LO8(eax), 1)) goto loc_0012709F; /* je: equal / zero */

loc_00127092:
    if (CMP_EQ(LO8(eax), 2)) goto loc_0012709F; /* je: equal / zero */

loc_00127096:
    if (CMP_EQ(LO8(eax), 3)) goto loc_0012709F; /* je: equal / zero */

loc_0012709A:
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0012709F:
    ecx = MEM32(ecx + 0x13F4);
    eax = MEM32(ecx + 0x1970);
    edx = MEM32(ecx + 0x1974);
    esp += 4; return; /* ret */

loc_001270B2:
    edx = ZX8(MEM8(ecx + 0x242A));
    eax = MEM32(edx * 8 + 0x647B70);
    edx = MEM32(edx * 8 + 0x647B74);
    esp += 4; return; /* ret */

}
