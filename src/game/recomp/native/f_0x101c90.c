#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00101C90
 * Original: 0x00101C90 - 0x00101E0B (379 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00101C90:
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x4A1D84);
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00101CA0; /* jne: not equal / not zero */

loc_00101C9E:
    eax = 0; /* xor self */

loc_00101CA0:
    eax = ZX16(LO16(eax));
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0); sub_00100950(); /* call 0x00100950 */

loc_00101CAB:
    SET_LO8(eax, MEM8(esi + 0x5D4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00101E09; /* je: equal / zero */

loc_00101CB9:
    SET_LO8(eax, MEM8(esi + 0x5D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00101E09; /* jne: not equal / not zero */

loc_00101CC7:
    eax = MEM32(esi + 0x6F4);
    if (TEST_Z(eax, eax)) goto loc_00101E09; /* je: equal / zero */

loc_00101CD5:
    if (CMP_EQ(MEM32(0x5A3760), 0xFFFFFFFFu)) goto loc_00101E09; /* je: equal / zero */

loc_00101CE2:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001010F0(); /* call 0x001010F0 */

loc_00101CE9:
    edx = MEM32(0x3EBDB8);
    edi = 0; /* xor self */
    SET_LO16(edi, LO16(eax));
    SET_LO16(edi, LO16(edi) - MEM16(esi + 0x5E0));
    edi = edi - edx;
    if (CMP_NE(LO16(edi), 0xFFFF)) goto loc_00101D06; /* jne: not equal / not zero */

loc_00101D04:
    edi = 0; /* xor self */

loc_00101D06:
    ecx = esi;
    PUSH32(esp, 0); sub_00100BB0(); /* call 0x00100BB0 */

loc_00101D0D:
    edx = edi;
    ebx = esi;
    PUSH32(esp, 0); sub_00100F00(); /* call 0x00100F00 */

loc_00101D16:
    edi = eax;
    ebx = 0; /* xor self */
    if (CMP_EQ(edi, ebx)) goto loc_00101D4B; /* je: equal / zero */

loc_00101D1E:
    eax = MEM32(esi + 0x5DC);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00101D37; /* je: equal / zero */

loc_00101D29:
    SET_LO16(ecx, LO16(eax));
    eax = edi;
    PUSH32(esp, 0); sub_000FFD20(); /* call 0x000FFD20 */

loc_00101D33:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00101D40; /* je: equal / zero */

loc_00101D37:
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_00101790(); /* call 0x00101790 */

loc_00101D40:
    eax = edi;
    ebx = esi;
    PUSH32(esp, 0); sub_00101080(); /* call 0x00101080 */

loc_00101D49:
    ebx = 0; /* xor self */

loc_00101D4B:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001019B0(); /* call 0x001019B0 */

loc_00101D51:
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0x4D84));
    if (CMP_EQ(LO16(ecx), 0xFFFF)) goto loc_00101E07; /* je: equal / zero */

loc_00101D65:
    eax = MEM32(0x4A1D84);
    /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    edx = 0x5555;
    if (CMP_EQ(LO16(eax), 0xFFFF)) eax = ebx; /* cmove */
    PUSH32(esp, 0); sub_000FBE60(); /* call 0x000FBE60 */

loc_00101D7B:
    /* cmp LO16(eax), 0xB4 - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x4D8C));
    if (CMP_BE(LO16(eax), 0xB4)) goto loc_00101DEB; /* jbe: below or equal (unsigned <=) */

loc_00101D87:
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_00101DB8; /* jne: not equal / not zero */

loc_00101D8B:
    eax = MEM32(esi + 0x6F0);
    MEM32(esi + 0x4D88) = ebx;
    MEM8(esi + 0x4D8C) = 1;
    ecx = MEM32(eax + 0x179C);
    POP32(esp, edi);
    MEM32(esi + 0x4D80) = ecx;
    POP32(esp, ebx);
    MEM32(eax + 0x179C) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00101DB8:
    ecx = MEM32(esi + 0x4D88);
    ecx++;
    eax = ecx;
    /* cmp eax, 0x1E - flags set for next jcc */
    MEM32(esi + 0x4D88) = ecx;
    if (CMP_LE(eax, 0x1E)) goto loc_00101DD8; /* jle: less or equal (signed <=) */

loc_00101DCC:
    edx = MEM32(esi + 0x6F0);
    MEM8(edx + 0x18F8) = LO8(ebx);

loc_00101DD8:
    if (CMP_LE(MEM32(esi + 0x4D88), 0x3C)) goto loc_00101E07; /* jle: less or equal (signed <=) */

loc_00101DE1:
    POP32(esp, edi);
    MEM32(esi + 0x4D88) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00101DEB:
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00101E07; /* je: equal / zero */

loc_00101DEF:
    eax = MEM32(esi + 0x6F0);
    ecx = MEM32(esi + 0x4D80);
    MEM8(esi + 0x4D8C) = LO8(ebx);
    MEM32(eax + 0x179C) = ecx;

loc_00101E07:
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00101E09:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
