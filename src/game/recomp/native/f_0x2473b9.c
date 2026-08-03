#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002473B9
 * Original: 0x002473B9 - 0x002473E6 (45 bytes, 23 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002473B9(void)
{
    int _flags = 0; /* fallback flag var */

loc_002473B9:
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(LO8(eax), 0x20)) goto loc_002473C5; /* je: equal / zero */

loc_002473C1:
    PUSH32(esp, 5);
    goto loc_002473DB;

loc_002473C5:
    if (TEST_Z(LO8(eax), 8)) goto loc_002473CD; /* je: equal / zero */

loc_002473C9:
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

loc_002473CD:
    if (TEST_Z(LO8(eax), 4)) goto loc_002473D5; /* je: equal / zero */

loc_002473D1:
    PUSH32(esp, 2);
    goto loc_002473DB;

loc_002473D5:
    if (TEST_Z(LO8(eax), 1)) goto loc_002473DD; /* je: equal / zero */

loc_002473D9:
    PUSH32(esp, 3);

loc_002473DB:
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_002473DD:
    eax = ZX8(LO8(eax));
    eax = eax & 2;
    eax = eax << 1;
    esp += 4; return; /* ret */

}
