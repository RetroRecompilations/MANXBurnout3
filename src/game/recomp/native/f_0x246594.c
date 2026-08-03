#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00246594
 * Original: 0x00246594 - 0x002465C7 (51 bytes, 23 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00246594(void)
{
    int _flags = 0; /* fallback flag var */

loc_00246594:
    if (TEST_Z(MEM8(ecx + 0xC), 0x40)) goto loc_002465A0; /* je: equal / zero */

loc_0024659A:
    if (CMP_EQ(MEM32(ecx + 8), 0)) goto loc_002465C4; /* je: equal / zero */

loc_002465A0:
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    if (((int32_t)MEM32(ecx + 4) < 0)) goto loc_002465B0; /* js: sign (negative) */

loc_002465A5:
    edx = MEM32(ecx);
    MEM8(edx) = LO8(eax);
    MEM32(ecx) = MEM32(ecx) + 1;
    eax = ZX8(LO8(eax));
    goto loc_002465BC;

loc_002465B0:
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_002465BA:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002465BC:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002465C4; /* jne: not equal / not zero */

loc_002465C1:
    MEM32(esi) = MEM32(esi) | eax;
    esp += 4; return; /* ret */

loc_002465C4:
    MEM32(esi) = MEM32(esi) + 1;
    esp += 4; return; /* ret */

}
