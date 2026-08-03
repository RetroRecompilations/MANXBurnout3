#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4F00
 * Original: 0x001B4F00 - 0x001B4FB5 (181 bytes, 48 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4F00(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B4F00:
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0xBFC);
    eax = MEM32(eax + 0x130);
    if (CMP_EQ(eax, 8)) goto loc_001B4F17; /* je: equal / zero */

loc_001B4F12:
    if (CMP_NE(eax, 7)) goto loc_001B4F52; /* jne: not equal / not zero */

loc_001B4F17:
    ecx = MEM32(esp + 8);
    eax = MEM32(esi + 0xBFC);
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = eax + 0x138;
    MEM32(esp + 8) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D1998(); /* call 0x001D1998 */

loc_001B4F3E:
    if (TEST_NZ(eax, eax)) goto loc_001B4F7F; /* jne: not equal / not zero */

loc_001B4F42:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4F47:
    if (CMP_EQ(eax, 0x3E5)) goto loc_001B4FA5; /* je: equal / zero */

loc_001B4F4E:
    if (TEST_Z(eax, eax)) goto loc_001B4FA5; /* je: equal / zero */

loc_001B4F52:
    ecx = MEM32(esi + 0xBFC);
    eax = 0xD;
    MEM32(ecx + 0x130) = eax;
    edx = MEM32(esi + 0xBFC);
    MEM32(edx + 0x134) = eax;
    ecx = MEM32(esi + 0xBFC);
    eax = MEM32(ecx + 0x130);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001B4F7F:
    eax = MEM32(esp);
    ecx = MEM32(esi + 0xBFC);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D120E(); /* call 0x001D120E */

loc_001B4F95:
    eax = MEM32(esi + 0xBFC);
    MEM32(eax + 0x130) = 0;

loc_001B4FA5:
    ecx = MEM32(esi + 0xBFC);
    eax = MEM32(ecx + 0x130);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
