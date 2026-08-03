#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B332
 * Original: 0x0024B332 - 0x0024B369 (55 bytes, 22 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B332(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B332:
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0024B353; /* je: equal / zero */

loc_0024B33A:
    if (CMP_EQ(MEM32(esp + 0xC), 0)) goto loc_0024B353; /* je: equal / zero */

loc_0024B341:
    SET_LO8(eax, MEM8(eax));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0024B356; /* jne: not equal / not zero */

loc_0024B347:
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0024B353; /* je: equal / zero */

loc_0024B34F:
    MEM16(eax) = MEM16(eax) & 0;

loc_0024B353:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0024B356:
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0024B365; /* je: equal / zero */

loc_0024B35E:
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM16(ecx) = LO16(eax);

loc_0024B365:
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}
