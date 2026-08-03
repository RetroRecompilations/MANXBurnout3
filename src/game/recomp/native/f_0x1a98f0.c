#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A98F0
 * Original: 0x001A98F0 - 0x001A9921 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A98F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A98F0:
    eax = eax + 0x1984;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx));
    edx = eax + 0x1E;
    /* cmp eax, edx - flags set for next jcc */
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edx)) goto loc_001A991A; /* jae: above or equal (unsigned >=) */

loc_001A9903:
    if (CMP_EQ(MEM16(ecx), 0)) goto loc_001A991F; /* je: equal / zero */

loc_001A9909:
    SET_LO16(esi, MEM16(ecx + 2));
    ecx = ecx + 2;
    eax = eax + 2;
    /* cmp eax, edx - flags set for next jcc */
    MEM16(eax) = LO16(esi);
    if (CMP_B(eax, edx)) goto loc_001A9903; /* jb: below (unsigned <) */

loc_001A991A:
    MEM16(edx) = 0;

loc_001A991F:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
