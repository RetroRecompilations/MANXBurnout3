#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00154370
 * Original: 0x00154370 - 0x001543AA (58 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154370(void)
{
    int _flags = 0; /* fallback flag var */

loc_00154370:
    ecx = MEM32(edi + 0x5EC);
    if (TEST_Z(ecx, ecx)) goto loc_00154390; /* je: equal / zero */

loc_0015437A:
    PUSH32(esp, 0); sub_001CB210(); /* call 0x001CB210 */

loc_0015437F:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154390; /* je: equal / zero */

loc_00154383:
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x5EC);
    PUSH32(esp, 0); sub_001CB1C0(); /* call 0x001CB1C0 */

loc_0015438F:
    POP32(esp, esi);

loc_00154390:
    eax = MEM32(edi + 0x618);
    eax = eax & 0xFFFFFFFBu;
    MEM32(edi + 0x5EC) = 0;
    MEM32(edi + 0x618) = eax;
    esp += 4; return; /* ret */

}
