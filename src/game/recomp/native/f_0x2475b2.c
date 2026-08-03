#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002475B2
 * Original: 0x002475B2 - 0x0024760D (91 bytes, 37 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002475B2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002475B2:
    PUSH32(esp, ebp);
    ebp = esp;
    edx = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + 0xC), 0x7FF00000)) goto loc_002475CA; /* jne: not equal / not zero */

loc_002475C0:
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_002475DC; /* jne: not equal / not zero */

loc_002475C5:
    eax = 0; /* xor self */
    eax++;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002475CA:
    if (CMP_NE(MEM32(ebp + 0xC), 0xFFF00000u)) goto loc_002475DC; /* jne: not equal / not zero */

loc_002475D3:
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_002475DC; /* jne: not equal / not zero */

loc_002475D8:
    PUSH32(esp, 2);
    goto loc_00247606;

loc_002475DC:
    ecx = MEM32(ebp + 0xE);
    eax = 0x7FF8;
    ecx = ecx & eax;
    if (CMP_NE(LO16(ecx), LO16(eax))) goto loc_002475EF; /* jne: not equal / not zero */

loc_002475EB:
    PUSH32(esp, 3);
    goto loc_00247606;

loc_002475EF:
    if (CMP_NE(LO16(ecx), 0x7FF0)) goto loc_00247609; /* jne: not equal / not zero */

loc_002475F6:
    if (TEST_NZ(MEM32(ebp + 0xC), 0x7FFFF)) goto loc_00247604; /* jne: not equal / not zero */

loc_002475FF:
    if (CMP_EQ(MEM32(ebp + 8), edx)) goto loc_00247609; /* je: equal / zero */

loc_00247604:
    PUSH32(esp, 4);

loc_00247606:
    POP32(esp, eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00247609:
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
