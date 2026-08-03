#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018250
 * Original: 0x00018250 - 0x0001827B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018250(void)
{
    int _flags = 0; /* fallback flag var */

loc_00018250:
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0xB7C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001826B; /* je: equal / zero */

loc_0001825D:
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001B57A0(); /* call 0x001B57A0 */

loc_00018264:
    MEM8(edi + 0xB7C) = 0;

loc_0001826B:
    MEM16(edi + 0xB7D) = 0x101;
    PUSH32(esp, 0); sub_00021B40(); /* call 0x00021B40 */

loc_00018279:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
