#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0016A9F0
 * Original: 0x0016A9F0 - 0x0016AA42 (82 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0016A9F0:
    edx = MEM32(0x3F7290);
    ecx = ecx | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    if (CMP_NE(edx, ecx)) goto loc_0016AA04; /* jne: not equal / not zero */

loc_0016A9FF:
    MEM32(0x3F7290) = eax;

loc_0016AA04:
    if (CMP_NE(MEM32(0x3F72D8), ecx)) goto loc_0016AA11; /* jne: not equal / not zero */

loc_0016AA0C:
    MEM32(0x3F72D8) = eax;

loc_0016AA11:
    if (CMP_NE(MEM8(0x4A1E28), LO8(eax))) goto loc_0016AA34; /* jne: not equal / not zero */

loc_0016AA19:
    MEM32(0x47A13C) = 0x2B9D6F8;
    MEM32(0x47A138) = 0xFD462907u;
    MEM8(0x4A1E28) = 1;

loc_0016AA34:
    if (CMP_NE(MEM32(0x3F72C0), ecx)) goto loc_0016AA41; /* jne: not equal / not zero */

loc_0016AA3C:
    MEM32(0x3F72C0) = eax;

loc_0016AA41:
    esp += 4; return; /* ret */

}
