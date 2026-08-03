#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153230
 * Original: 0x00153230 - 0x001532C2 (146 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153230(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153230:
    if (CMP_EQ(MEM32(eax + 0x554), 0xFFFFFFFFu)) goto loc_001532C1; /* je: equal / zero */

loc_0015323D:
    SET_LO8(ecx, MEM8(eax + 0x538));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0015328A; /* je: equal / zero */

loc_00153247:
    ecx = MEM32(eax + 0x544);
    if (CMP_NE(ecx, 4)) goto loc_0015327A; /* jne: not equal / not zero */

loc_00153252:
    SET_LO8(ecx, MEM8(eax + 0x564));
    if (TEST_Z(LO8(ecx), 0x10)) goto loc_00153268; /* je: equal / zero */

loc_0015325D:
    MEM32(eax + 0x544) = 1;
    esp += 4; return; /* ret */

loc_00153268:
    SET_LO8(ecx, ~LO8(ecx));
    ecx = ZX8(LO8(ecx));
    ecx = ecx >> 4;
    ecx = ecx & 2;
    MEM32(eax + 0x544) = ecx;
    esp += 4; return; /* ret */

loc_0015327A:
    if (CMP_NE(ecx, 6)) goto loc_001532C1; /* jne: not equal / not zero */

loc_0015327F:
    MEM32(eax + 0x544) = 0;
    esp += 4; return; /* ret */

loc_0015328A:
    PUSH32(esp, esi);
    esi = eax + 8;
    if (TEST_NZ(MEM8(esi + 0xC4), 2)) goto loc_0015329C; /* jne: not equal / not zero */

loc_00153297:
    PUSH32(esp, 0); sub_00155DB0(); /* call 0x00155DB0 */

loc_0015329C:
    eax = MEM32(esi + 0xC4);
    edx = MEM32(esi + 0x90);
    PUSH32(esp, 1);
    eax = eax | 4;
    PUSH32(esp, edx);
    MEM32(esi + 0xC4) = eax;
    PUSH32(esp, 0); sub_002F575B(); /* call 0x002F575B */

loc_001532B9:
    MEM32(esi + 0xC4) = MEM32(esi + 0xC4) | 0x12;
    POP32(esp, esi);

loc_001532C1:
    esp += 4; return; /* ret */

}
