#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024540E
 * Original: 0x0024540E - 0x0024543C (46 bytes, 22 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024540E(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0024540E:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002453B1(); /* call 0x002453B1 */

loc_00245419:
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_00245423; /* je: equal / zero */

loc_0024541E:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00245423:
    if (TEST_Z(MEM8(esi + 0xD), 0x40)) goto loc_00245438; /* je: equal / zero */

loc_00245429:
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_0024A486(); /* call 0x0024A486 */

loc_00245431:
    POP32(esp, ecx);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00245438:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
