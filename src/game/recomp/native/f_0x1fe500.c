#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FE500
 * Original: 0x001FE500 - 0x001FE54B (75 bytes, 28 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FE500(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FE500:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001FE528; /* je: equal / zero */

loc_001FE50B:
    if (TEST_Z(MEM8(esi + 8), 1)) goto loc_001FE528; /* je: equal / zero */

loc_001FE511:
    PUSH32(esp, eax);
    PUSH32(esp, 0x41C530);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001FE51C:
    eax = MEM32(esi + 8);
    esp = esp + 8;
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi + 8) = eax;

loc_001FE528:
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_001FE547; /* je: equal / zero */

loc_001FE52F:
    if (TEST_Z(MEM8(esi + 8), 2)) goto loc_001FE547; /* je: equal / zero */

loc_001FE535:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FE53B:
    eax = MEM32(esi + 8);
    esp = esp + 4;
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 8) = eax;

loc_001FE547:
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
