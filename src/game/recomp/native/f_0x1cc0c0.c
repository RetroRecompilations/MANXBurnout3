#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC0C0
 * Original: 0x001CC0C0 - 0x001CC10A (74 bytes, 23 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CC0C0:
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    if (TEST_Z(esi, esi)) goto loc_001CC108; /* je: equal / zero */

loc_001CC0C8:
    goto loc_001CC0D0;

    /* nop */

loc_001CC0D0:
    eax = MEM32(esi + 0x178);
    if (CMP_EQ(eax, 5)) goto loc_001CC0FB; /* je: equal / zero */

loc_001CC0DB:
    if (CMP_EQ(eax, 4)) goto loc_001CC0FB; /* je: equal / zero */

loc_001CC0E0:
    ecx = MEM32(esi + 0x174);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    MEM32(esi + 0x178) = 5;
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_001CC0F8:
    esp = esp + 8;

loc_001CC0FB:
    MEM8(esi + 0x19E) = 0;
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001CC0D0; /* jne: not equal / not zero */

loc_001CC108:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
