#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C570
 * Original: 0x0010C570 - 0x0010C587 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C570(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010C570:
    SET_LO8(ecx, MEM8(eax + 0x19));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0010C584; /* je: equal / zero */

loc_0010C577:
    SET_LO8(ecx, MEM8(eax + 0x18));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0010C584; /* je: equal / zero */

loc_0010C57E:
    eax = 1;
    esp += 4; return; /* ret */

loc_0010C584:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
