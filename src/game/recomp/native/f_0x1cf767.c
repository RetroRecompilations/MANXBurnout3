#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF767
 * Original: 0x001CF767 - 0x001CF79D (54 bytes, 20 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF767(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CF767:
    PUSH32(esp, esi);
    PUSH32(esp, 0x24830000);
    PUSH32(esp, 0x7C);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_001CF774:
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_001CF786; /* jne: not equal / not zero */

loc_001CF77A:
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001CF781:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CF786:
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    eax = esi + 8;
    PUSH32(esp, eax);
    MEM32(esi) = 2;
    PUSH32(esp, 0); sub_001D7018(); /* call 0x001D7018 */

loc_001CF799:
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
