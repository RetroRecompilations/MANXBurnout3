#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE980
 * Original: 0x001CE980 - 0x001CE9E7 (103 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE980(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE980:
    eax = MEM32(esi + 0x24);
    if (CMP_EQ(eax, 0xB)) goto loc_001CE997; /* je: equal / zero */

loc_001CE988:
    if (CMP_EQ(eax, 0xA)) goto loc_001CE997; /* je: equal / zero */

loc_001CE98D:
    if (CMP_EQ(eax, 8)) goto loc_001CE997; /* je: equal / zero */

loc_001CE992:
    if (CMP_NE(eax, 9)) goto loc_001CE9E4; /* jne: not equal / not zero */

loc_001CE997:
    eax = MEM32(esi + 0x28);
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_001CE9E4; /* jne: not equal / not zero */

loc_001CE99E:
    if (TEST_NZ(LO8(eax), 1)) goto loc_001CE9E0; /* jne: not equal / not zero */

loc_001CE9A2:
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CE9CB; /* je: equal / zero */

loc_001CE9AA:
    eax = MEM32(esi + 0x248);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_001CE9B8:
    eax = MEM32(esi + 0x28);
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0x24) = 0xA;
    MEM32(esi + 0x28) = eax;
    esp += 8; return; /* ret 4 */

loc_001CE9CB:
    ecx = MEM32(esi + 0x248);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_001CE9D9:
    MEM32(esi + 0x24) = 0xB;

loc_001CE9E0:
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0xFFFFFFFDu;

loc_001CE9E4:
    esp += 8; return; /* ret 4 */

}
