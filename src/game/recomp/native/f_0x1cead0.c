#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CEAD0
 * Original: 0x001CEAD0 - 0x001CEB02 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEAD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CEAD0:
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    ecx = ecx + 0xA0;
    esi = 8;
    edx = 0x8000000Au;

loc_001CEAE3:
    if (CMP_EQ(MEM32(ecx + -4), edx)) goto loc_001CEAE9; /* je: equal / zero */

loc_001CEAE8:
    eax++;

loc_001CEAE9:
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_001CEAEE; /* je: equal / zero */

loc_001CEAED:
    eax++;

loc_001CEAEE:
    if (CMP_EQ(MEM32(ecx + 4), edx)) goto loc_001CEAF4; /* je: equal / zero */

loc_001CEAF3:
    eax++;

loc_001CEAF4:
    if (CMP_EQ(MEM32(ecx + 8), edx)) goto loc_001CEAFA; /* je: equal / zero */

loc_001CEAF9:
    eax++;

loc_001CEAFA:
    ecx = ecx + 0x10;
    esi--;
    if ((esi != 0)) goto loc_001CEAE3; /* jne: not equal / not zero */

loc_001CEB00:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
