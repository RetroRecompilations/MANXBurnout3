#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00114610
 * Original: 0x00114610 - 0x00114729 (281 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00114610(void)
{
    int _flags = 0; /* fallback flag var */

loc_00114610:
    SET_LO8(ecx, MEM8(edi));
    if (CMP_NE(LO8(ecx), 3)) goto loc_0011461B; /* jne: not equal / not zero */

loc_00114617:
    if (CMP_EQ(MEM8(esi), LO8(ecx))) goto loc_00114624; /* je: equal / zero */

loc_0011461B:
    if (CMP_NE(LO8(ecx), 5)) goto loc_00114627; /* jne: not equal / not zero */

loc_00114620:
    if (CMP_NE(MEM8(esi), LO8(ecx))) goto loc_00114627; /* jne: not equal / not zero */

loc_00114624:
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00114627:
    /* cmp LO8(ecx), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(eax, 4);
    if (CMP_EQ(LO8(ecx), 2)) goto loc_00114646; /* je: equal / zero */

loc_0011462F:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00114646; /* je: equal / zero */

loc_00114633:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00114646; /* je: equal / zero */

loc_00114638:
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_00114646; /* je: equal / zero */

loc_0011463C:
    if (CMP_EQ(LO8(ecx), 6)) goto loc_00114646; /* je: equal / zero */

loc_00114641:
    if (CMP_NE(LO8(ecx), 7)) goto loc_00114680; /* jne: not equal / not zero */

loc_00114646:
    edx = MEM32(edi + 0xC);
    if (CMP_NE(MEM8(edx + 0x20E), 1)) goto loc_00114680; /* jne: not equal / not zero */

loc_00114652:
    SET_LO8(edx, MEM8(esi));
    if (CMP_EQ(LO8(edx), 2)) goto loc_00114670; /* je: equal / zero */

loc_00114659:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00114670; /* je: equal / zero */

loc_0011465D:
    if (CMP_EQ(LO8(edx), 1)) goto loc_00114670; /* je: equal / zero */

loc_00114662:
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_00114670; /* je: equal / zero */

loc_00114666:
    if (CMP_EQ(LO8(edx), 6)) goto loc_00114670; /* je: equal / zero */

loc_0011466B:
    if (CMP_NE(LO8(edx), 7)) goto loc_00114680; /* jne: not equal / not zero */

loc_00114670:
    edx = MEM32(esi + 0xC);
    if (CMP_NE(MEM8(edx + 0x20E), 1)) goto loc_00114680; /* jne: not equal / not zero */

loc_0011467C:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00114680:
    if (CMP_EQ(LO8(ecx), 2)) goto loc_00114692; /* je: equal / zero */

loc_00114685:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00114692; /* je: equal / zero */

loc_00114689:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00114692; /* je: equal / zero */

loc_0011468E:
    if (CMP_NE(LO8(ecx), LO8(eax))) goto loc_0011469D; /* jne: not equal / not zero */

loc_00114692:
    edx = MEM32(edi + 0xC);
    if (TEST_NZ(MEM8(edx + 0x1353), LO8(eax))) goto loc_0011467C; /* jne: not equal / not zero */

loc_0011469D:
    SET_LO8(edx, MEM8(esi));
    if (CMP_EQ(LO8(edx), 2)) goto loc_001146B1; /* je: equal / zero */

loc_001146A4:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001146B1; /* je: equal / zero */

loc_001146A8:
    if (CMP_EQ(LO8(edx), 1)) goto loc_001146B1; /* je: equal / zero */

loc_001146AD:
    if (CMP_NE(LO8(edx), LO8(eax))) goto loc_001146BC; /* jne: not equal / not zero */

loc_001146B1:
    ebx = MEM32(esi + 0xC);
    if (TEST_NZ(MEM8(ebx + 0x1353), LO8(eax))) goto loc_0011467C; /* jne: not equal / not zero */

loc_001146BC:
    if (CMP_NE(LO8(ecx), 5)) goto loc_001146C6; /* jne: not equal / not zero */

loc_001146C1:
    if (CMP_EQ(LO8(edx), 3)) goto loc_0011467C; /* je: equal / zero */

loc_001146C6:
    if (CMP_NE(LO8(edx), 5)) goto loc_001146D0; /* jne: not equal / not zero */

loc_001146CB:
    if (CMP_EQ(LO8(ecx), 3)) goto loc_0011467C; /* je: equal / zero */

loc_001146D0:
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    if (CMP_EQ(LO8(ecx), 2)) goto loc_001146EF; /* je: equal / zero */

loc_001146D8:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001146EF; /* je: equal / zero */

loc_001146DC:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_001146EF; /* je: equal / zero */

loc_001146E1:
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_001146EF; /* je: equal / zero */

loc_001146E5:
    if (CMP_EQ(LO8(ecx), 6)) goto loc_001146EF; /* je: equal / zero */

loc_001146EA:
    if (CMP_NE(LO8(ecx), 7)) goto loc_001146FA; /* jne: not equal / not zero */

loc_001146EF:
    ecx = MEM32(edi + 0xC);
    if (CMP_EQ(MEM8(ecx + 0x216), LO8(ebx))) goto loc_0011467C; /* je: equal / zero */

loc_001146FA:
    if (CMP_EQ(LO8(edx), 2)) goto loc_00114716; /* je: equal / zero */

loc_001146FF:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00114716; /* je: equal / zero */

loc_00114703:
    if (CMP_EQ(LO8(edx), 1)) goto loc_00114716; /* je: equal / zero */

loc_00114708:
    if (CMP_EQ(LO8(edx), LO8(eax))) goto loc_00114716; /* je: equal / zero */

loc_0011470C:
    if (CMP_EQ(LO8(edx), 6)) goto loc_00114716; /* je: equal / zero */

loc_00114711:
    if (CMP_NE(LO8(edx), 7)) goto loc_00114725; /* jne: not equal / not zero */

loc_00114716:
    edx = MEM32(esi + 0xC);
    if (CMP_EQ(MEM8(edx + 0x216), LO8(ebx))) goto loc_0011467C; /* je: equal / zero */

loc_00114725:
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
