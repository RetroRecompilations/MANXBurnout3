#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024A9BF
 * Original: 0x0024A9BF - 0x0024A9EA (43 bytes, 17 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024A9BF(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024A9BF:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    if (TEST_Z(LO8(eax), 0x83)) goto loc_0024A9E8; /* je: equal / zero */

loc_0024A9CB:
    if (TEST_Z(LO8(eax), 8)) goto loc_0024A9E8; /* je: equal / zero */

loc_0024A9CF:
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_002440A5(); /* call 0x002440A5 */

loc_0024A9D7:
    MEM16(esi + 0xC) = MEM16(esi + 0xC) & 0xFBF7;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;

loc_0024A9E8:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
