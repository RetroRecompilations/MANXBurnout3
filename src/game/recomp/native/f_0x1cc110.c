#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC110
 * Original: 0x001CC110 - 0x001CC130 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC110(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CC110:
    ecx = MEM32(ecx + 0x18);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_001CC12F; /* je: equal / zero */

loc_001CC119:
    edx = 1;
    edi = edi;

loc_001CC120:
    if (CMP_NE(MEM32(ecx + 0x178), edx)) goto loc_001CC129; /* jne: not equal / not zero */

loc_001CC128:
    eax++;

loc_001CC129:
    ecx = MEM32(ecx);
    if (TEST_NZ(ecx, ecx)) goto loc_001CC120; /* jne: not equal / not zero */

loc_001CC12F:
    esp += 4; return; /* ret */

}
