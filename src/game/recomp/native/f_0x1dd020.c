#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD020
 * Original: 0x001DD020 - 0x001DD057 (55 bytes, 19 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD020(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DD020:
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x98);
    /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(eax + 0xA0) = edi;
    if (TEST_Z(esi, esi)) goto loc_001DD054; /* je: equal / zero */

loc_001DD03A:
    /* nop */

loc_001DD040:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001DD020(); /* call 0x001DD020 */

loc_001DD047:
    esi = MEM32(esi + 0x9C);
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001DD040; /* jne: not equal / not zero */

loc_001DD054:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
