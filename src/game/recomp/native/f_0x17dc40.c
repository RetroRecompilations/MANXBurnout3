#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DC40
 * Original: 0x0017DC40 - 0x0017DC92 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DC40(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0017DC40:
    if (TEST_NZ(LO8(eax), 1)) goto loc_0017DC55; /* jne: not equal / not zero */

loc_0017DC44:
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x4FA));
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0017DC79; /* je: equal / zero */

loc_0017DC50:
    if (TEST_Z(LO8(ecx), 1)) goto loc_0017DC5B; /* je: equal / zero */

loc_0017DC55:
    eax = 4;
    esp += 4; return; /* ret */

loc_0017DC5B:
    if (TEST_Z(LO8(eax), 4)) goto loc_0017DC64; /* je: equal / zero */

loc_0017DC5F:
    if (TEST_NZ(LO8(ecx), 4)) goto loc_0017DC7D; /* jne: not equal / not zero */

loc_0017DC64:
    if (TEST_Z(LO8(eax), 2)) goto loc_0017DC73; /* je: equal / zero */

loc_0017DC68:
    if (TEST_Z(LO8(ecx), 2)) goto loc_0017DC73; /* je: equal / zero */

loc_0017DC6D:
    eax = 5;
    esp += 4; return; /* ret */

loc_0017DC73:
    eax = 9;
    esp += 4; return; /* ret */

loc_0017DC79:
    if (TEST_Z(LO8(eax), 4)) goto loc_0017DC83; /* je: equal / zero */

loc_0017DC7D:
    eax = 6;
    esp += 4; return; /* ret */

loc_0017DC83:
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(eax, LO8(eax) - 2);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 4;
    eax = eax + 5;
    esp += 4; return; /* ret */

}
