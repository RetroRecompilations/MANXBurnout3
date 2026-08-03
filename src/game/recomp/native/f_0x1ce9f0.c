#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CE9F0
 * Original: 0x001CE9F0 - 0x001CEA7F (143 bytes, 54 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CE9F0:
    eax = MEM32(esi + 0x28);
    /* test LO8(eax), 1 - flags set for next jcc */
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = 0xB;
    if (TEST_Z(LO8(eax), 1)) goto loc_001CEA44; /* je: equal / zero */

loc_001CEA00:
    eax = eax | 2;
    /* cmp ecx, edi - flags set for next jcc */
    MEM32(esi + 0x28) = eax;
    if (CMP_EQ(ecx, edi)) goto loc_001CEA19; /* je: equal / zero */

loc_001CEA0A:
    if (CMP_EQ(ecx, 0xA)) goto loc_001CEA19; /* je: equal / zero */

loc_001CEA0F:
    if (CMP_EQ(ecx, 8)) goto loc_001CEA19; /* je: equal / zero */

loc_001CEA14:
    if (CMP_NE(ecx, 9)) goto loc_001CEA7A; /* jne: not equal / not zero */

loc_001CEA19:
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_001CEA7A; /* jne: not equal / not zero */

loc_001CEA1D:
    if (TEST_NZ(LO8(eax), 1)) goto loc_001CEA76; /* jne: not equal / not zero */

loc_001CEA21:
    eax = MEM32(esi + 0x248);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_001CEA2F:
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x24) = 0xA;
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001CEA44:
    eax = eax & 0xFFFFFFEFu;
    /* cmp ecx, edi - flags set for next jcc */
    MEM32(esi + 0x28) = eax;
    if (CMP_EQ(ecx, edi)) goto loc_001CEA5D; /* je: equal / zero */

loc_001CEA4E:
    if (CMP_EQ(ecx, 0xA)) goto loc_001CEA5D; /* je: equal / zero */

loc_001CEA53:
    if (CMP_EQ(ecx, 8)) goto loc_001CEA5D; /* je: equal / zero */

loc_001CEA58:
    if (CMP_NE(ecx, 9)) goto loc_001CEA7A; /* jne: not equal / not zero */

loc_001CEA5D:
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_001CEA7A; /* jne: not equal / not zero */

loc_001CEA61:
    if (TEST_NZ(LO8(eax), 1)) goto loc_001CEA76; /* jne: not equal / not zero */

loc_001CEA65:
    ecx = MEM32(esi + 0x248);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_001CEA73:
    MEM32(esi + 0x24) = edi;

loc_001CEA76:
    MEM32(esi + 0x28) = MEM32(esi + 0x28) & 0xFFFFFFFDu;

loc_001CEA7A:
    MEM32(esi + 0x24) = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
