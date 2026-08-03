#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A8E80
 * Original: 0x001A8E80 - 0x001A8EDD (93 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A8E80:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x114);
    SET_LO8(ebx, MEM8(eax + 0x4B));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 0x4C));
    SET_LO8(ebx, LO8(ebx) >> 2);
    SET_LO8(ebx, LO8(ebx) & 1);
    MEM8(esp + 8) = LO8(ebx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi + 0x160;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esi + 0x11C;
    PUSH32(esp, edx);
    ecx = esi + 0x118;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A0750(); /* call 0x001A0750 */

loc_001A8EBD:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A8ED9; /* je: equal / zero */

loc_001A8EC1:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_001A8ED9; /* je: equal / zero */

loc_001A8EC5:
    edx = MEM32(esi + 0x114);
    MEM8(edx + 0x48) = 0;
    esi = MEM32(esi + 0x114);
    MEM8(esi + 0x4B) = MEM8(esi + 0x4B) & 0xFB;

loc_001A8ED9:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
