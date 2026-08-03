#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB1C0
 * Original: 0x001CB1C0 - 0x001CB203 (67 bytes, 25 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB1C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CB1C0:
    eax = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB1CB:
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CB1D6:
    eax = MEM32(esi + 0x20);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001CB1F6; /* je: equal / zero */

loc_001CB1E0:
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCE0(); /* call 0x0020BCE0 */

loc_001CB1E8:
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BEB0(); /* call 0x0020BEB0 */

loc_001CB1F3:
    esp = esp + 0x10;

loc_001CB1F6:
    SET_LO8(eax, MEM8(esi + 0x31));
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x2E) = 0;
    MEM8(esi + 0x31) = LO8(eax);
    esp += 4; return; /* ret */

}
