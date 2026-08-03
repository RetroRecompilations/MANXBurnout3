#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001289B0
 * Original: 0x001289B0 - 0x00128A13 (99 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001289B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001289B0:
    ecx = edx;
    ecx = ecx - 2;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if ((ecx == 0)) goto loc_001289F4; /* je: equal / zero */

loc_001289BC:
    ecx--;
    if ((ecx == 0)) goto loc_001289EF; /* je: equal / zero */

loc_001289BF:
    ecx = MEM32(edx * 4 + 0x3EBFAC);
    edx = MEM32(esi + 0x18);
    ecx = ecx << 6;
    ecx = ecx + edx + 0xA0;
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001289EF:
    esi = esi + 0x60;
    goto loc_001289F7;

loc_001289F4:
    esi = esi + 0x50;

loc_001289F7:
    ecx = MEM32(esi);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
