#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6630
 * Original: 0x001F6630 - 0x001F665B (43 bytes, 17 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6630(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F6630:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE500(); /* call 0x001FE500 */

loc_001F6636:
    SET_LO8(eax, MEM8(esi + 0x1B));
    esp = esp + 4;
    if (TEST_Z(LO8(eax), 1)) goto loc_001F664F; /* je: equal / zero */

loc_001F6640:
    PUSH32(esp, esi);
    PUSH32(esp, 0x764140);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001F664B:
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001F664F:
    if (TEST_NZ(LO8(eax), 4)) goto loc_001F665A; /* jne: not equal / not zero */

loc_001F6653:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F6659:
    POP32(esp, ecx);

loc_001F665A:
    esp += 4; return; /* ret */

}
