#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F63F0
 * Original: 0x001F63F0 - 0x001F646D (125 bytes, 44 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F63F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F63F0:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_001F6402; /* je: equal / zero */

loc_001F63FC:
    MEM8(esi + 0x1B) = 4;
    goto loc_001F6423;

loc_001F6402:
    PUSH32(esp, 0x30808);
    PUSH32(esp, 0x764140);
    PUSH32(esp, 0); sub_001FE900(); /* call 0x001FE900 */

loc_001F6411:
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_001F641F; /* jne: not equal / not zero */

loc_001F641A:
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F641F:
    MEM8(esi + 0x1B) = 1;

loc_001F6423:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE3D0(); /* call 0x001FE3D0 */

loc_001F6429:
    eax = esi + 0x1C;
    MEM32(eax) = ebx;
    MEM32(esi + 0x20) = ebx;
    ecx = MEM32(0x764168);
    MEM32(eax) = ecx;
    MEM32(esi + 0x20) = 0x764168;
    edx = MEM32(0x764168);
    MEM32(edx + 4) = eax;
    MEM32(0x764168) = eax;
    eax = esi + 0xC;
    esp = esp + 4;
    MEM32(esi + 0x10) = eax;
    MEM32(eax) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM8(esi + 0x1A) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
