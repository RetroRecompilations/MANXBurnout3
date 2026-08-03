#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A2860
 * Original: 0x001A2860 - 0x001A28A6 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A2860(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A2860:
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    /* nop */

loc_001A2870:
    if (CMP_NE(edx, MEM32(eax * 8 + 0x4D2408))) goto loc_001A2882; /* jne: not equal / not zero */

loc_001A2879:
    if (CMP_EQ(ecx, MEM32(eax * 8 + 0x4D240C))) goto loc_001A288D; /* je: equal / zero */

loc_001A2882:
    eax++;
    if (CMP_L(eax, 0x80)) goto loc_001A2870; /* jl: less (signed <) */

loc_001A288A:
    esp += 20; return; /* ret 16 */

loc_001A288D:
    eax = MEM32(eax * 4 + 0x4D2A08);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + edx * 4 + 0x34420) = eax;
    esp += 20; return; /* ret 16 */

}
