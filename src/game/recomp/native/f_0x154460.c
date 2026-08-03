#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00154460
 * Original: 0x00154460 - 0x001544B2 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00154460:
    eax = MEM32(esi + 0x618);
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00154476; /* je: equal / zero */

loc_0015446A:
    eax = eax | 0x20;
    MEM32(esi + 0x618) = eax;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00154476:
    eax = MEM32(esi + 0x5E4);
    if (TEST_Z(eax, eax)) goto loc_001544AF; /* je: equal / zero */

loc_00154480:
    PUSH32(esp, ebx);
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_0015448B:
    eax = MEM32(esi + 0x618);
    eax = eax & 0xFFFFFFDFu;
    MEM32(esi + 0x5E4) = 0;
    MEM32(esi + 0x5E8) = 0;
    MEM32(esi + 0x618) = eax;
    POP32(esp, ebx);

loc_001544AF:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
