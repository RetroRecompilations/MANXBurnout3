#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155BB0
 * Original: 0x00155BB0 - 0x00155BF2 (66 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155BB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00155BB0:
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x9C);
    if (TEST_NZ(eax, eax)) goto loc_00155BCC; /* jne: not equal / not zero */

loc_00155BBD:
    eax = 0x4115E8;
    PUSH32(esp, 0); sub_00153660(); /* call 0x00153660 */

loc_00155BC7:
    PUSH32(esp, 0); sub_00155D60(); /* call 0x00155D60 */

loc_00155BCC:
    eax = MEM32(esi + 0x94);
    if (TEST_NZ(eax, eax)) goto loc_00155BDB; /* jne: not equal / not zero */

loc_00155BD6:
    PUSH32(esp, 0); sub_00155DB0(); /* call 0x00155DB0 */

loc_00155BDB:
    MEM32(esi + 0xC4) = MEM32(esi + 0xC4) & 0xFFFFFFE9u;
    eax = MEM32(esi + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_00155BF0:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
