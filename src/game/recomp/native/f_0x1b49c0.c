#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B49C0
 * Original: 0x001B49C0 - 0x001B4A27 (103 bytes, 27 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B49C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B49C0:
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x148);
    if (TEST_Z(eax, eax)) goto loc_001B49E9; /* je: equal / zero */

loc_001B49D3:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001B49D9:
    ecx = MEM32(esi + 0xBFC);
    MEM32(ecx + 0x148) = 0;

loc_001B49E9:
    edx = MEM32(esi + 0xBFC);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001B49F7:
    if (TEST_Z(eax, eax)) goto loc_001B4A12; /* je: equal / zero */

loc_001B49FB:
    ecx = MEM32(esi + 0xBFC);
    MEM32(ecx + 0x130) = 5;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B4A12:
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B4A17:
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x134) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
