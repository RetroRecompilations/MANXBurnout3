#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153500
 * Original: 0x00153500 - 0x0015357D (125 bytes, 40 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153500(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153500:
    if (CMP_EQ(MEM32(eax + 0x554), 0xFFFFFFFFu)) goto loc_0015357C; /* je: equal / zero */

loc_00153509:
    SET_LO8(ecx, MEM8(eax + 0x564));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x538));
    edx = 1;
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(eax + 0x564) = LO8(ecx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00153565; /* je: equal / zero */

loc_00153528:
    if (CMP_NE(MEM32(eax + 0x544), 4)) goto loc_0015355A; /* jne: not equal / not zero */

loc_00153531:
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00153547; /* je: equal / zero */

loc_00153536:
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    POP32(esp, esi);
    MEM32(eax + 0x544) = edx;
    MEM8(eax + 0x564) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00153547:
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, ~LO8(ebx));
    esi = ZX8(LO8(ebx));
    esi = esi >> 4;
    esi = esi & 2;
    MEM32(eax + 0x544) = esi;

loc_0015355A:
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    POP32(esp, esi);
    MEM8(eax + 0x564) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00153565:
    MEM32(eax + 0xCC) = MEM32(eax + 0xCC) & 0xFFFFFFE9u;
    eax = MEM32(eax + 0x98);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_0015357A:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0015357C:
    esp += 4; return; /* ret */

}
