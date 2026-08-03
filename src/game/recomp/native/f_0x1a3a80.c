#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A3A80
 * Original: 0x001A3A80 - 0x001A3AD5 (85 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3A80:
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_001A0940(); /* call 0x001A0940 */

loc_001A3A88:
    ecx = MEM32(esi + 0x3636C);
    SET_LO8(edx, MEM8(ecx + 0x49));
    MEM8(eax + 0x44) = LO8(edx);
    MEM32(esi + 0x3636C) = eax;
    SET_LO8(ecx, MEM8(eax + 0x49));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 5);
    SET_LO16(edx, ZX8(LO8(edx)));
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0x8000001Fu;
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4 + 0x36300;
    if (((int32_t)ecx >= 0)) goto loc_001A3AC0; /* jns: not sign (positive) */

loc_001A3ABB:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001A3AC0:
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx);
    esi = ~esi;
    ecx = ecx & esi;
    MEM32(edx) = ecx;
    MEM8(eax + 0x4B) = MEM8(eax + 0x4B) & 0xF7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
