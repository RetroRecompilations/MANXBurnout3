#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153390
 * Original: 0x00153390 - 0x001534F6 (358 bytes, 90 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153390(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153390:
    if (CMP_EQ(MEM32(esi + 0x554), 0xFFFFFFFFu)) goto loc_001534DF; /* je: equal / zero */

loc_0015339D:
    SET_LO8(edx, MEM8(esi + 0x564));
    SET_LO8(ecx, MEM8(esi + 0x538));
    SET_LO8(edx, LO8(edx) & 0xFE);
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esi + 0x564) = LO8(edx);
    SET_LO8(eax, LO8(edx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001534E0; /* je: equal / zero */

loc_001533BC:
    ecx = MEM32(esi + 0x53C);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0015345C; /* je: equal / zero */

loc_001533CB:
    edx = MEM32(esi + 0x544);
    if (CMP_NE(edx, 3)) goto loc_001533E4; /* jne: not equal / not zero */

loc_001533D6:
    eax = MEM32(ecx + 0x234);
    MEM32(esi + 0x550) = eax;
    goto loc_001533FB;

loc_001533E4:
    if (CMP_NE(edx, 1)) goto loc_001533F1; /* jne: not equal / not zero */

loc_001533E9:
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(esi + 0x564) = LO8(eax);

loc_001533F1:
    MEM32(esi + 0x550) = 0;

loc_001533FB:
    if (CMP_NE(MEM32(esi + 0x54C), 4)) goto loc_00153415; /* jne: not equal / not zero */

loc_00153404:
    eax = esi;
    MEM32(esi + 0x54C) = 5;
    PUSH32(esp, 0); sub_001530D0(); /* call 0x001530D0 */

loc_00153415:
    edi = MEM32(esi + 0x53C);
    eax = MEM32(edi + 0x24);
    if (CMP_EQ(eax, 0xB)) goto loc_00153432; /* je: equal / zero */

loc_00153423:
    if (CMP_EQ(eax, 0xA)) goto loc_00153432; /* je: equal / zero */

loc_00153428:
    if (CMP_EQ(eax, 8)) goto loc_00153432; /* je: equal / zero */

loc_0015342D:
    if (CMP_NE(eax, 9)) goto loc_00153456; /* jne: not equal / not zero */

loc_00153432:
    eax = MEM32(edi + 0x28);
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_00153456; /* jne: not equal / not zero */

loc_00153439:
    if (TEST_NZ(LO8(eax), 1)) goto loc_00153452; /* jne: not equal / not zero */

loc_0015343D:
    ecx = MEM32(edi + 0x248);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_0015344B:
    MEM32(edi + 0x24) = 0xA;

loc_00153452:
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & 0xFFFFFFFDu;

loc_00153456:
    MEM32(edi + 0x28) = MEM32(edi + 0x28) | 0x10;
    goto loc_0015346E;

loc_0015345C:
    SET_LO8(eax, LO8(eax) | 0x20);
    MEM32(esi + 0x550) = 0;
    MEM8(esi + 0x564) = LO8(eax);

loc_0015346E:
    edx = MEM32(0x3EC440);
    PUSH32(esp, edx);
    edi = esi + 0x4C4;
    PUSH32(esp, edi);
    MEM32(esi + 0x544) = 4;
    PUSH32(esp, 0); sub_00243BD0(); /* call 0x00243BD0 */

loc_0015348B:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001534DE; /* je: equal / zero */

loc_00153492:
    if (CMP_G(MEM32(esi + 0x554), 0x15)) goto loc_001534AC; /* jg: greater (signed >) */

loc_0015349B:
    eax = MEM32(0x3EC444);
    MEM32(esi + 0x55C) = 0;
    goto loc_001534BB;

loc_001534AC:
    eax = MEM32(0x3EC448);
    MEM32(esi + 0x55C) = 1;

loc_001534BB:
    ecx = MEM32(0x3EC44C);
    edx = MEM32(0x3EC43C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(0x3EC438);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3AF1A0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001534DB:
    esp = esp + 0x18;

loc_001534DE:
    POP32(esp, edi);

loc_001534DF:
    esp += 4; return; /* ret */

loc_001534E0:
    ecx = MEM32(esi + 0x98);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_001534EE:
    MEM32(esi + 0xCC) = MEM32(esi + 0xCC) | 0x12;
    esp += 4; return; /* ret */

}
