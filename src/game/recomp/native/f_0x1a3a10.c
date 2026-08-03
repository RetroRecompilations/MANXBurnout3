#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A3A10
 * Original: 0x001A3A10 - 0x001A3A7A (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3A10(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3A10:
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3636C);
    if (TEST_NZ(eax, eax)) goto loc_001A3A1F; /* jne: not equal / not zero */

loc_001A3A1D:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001A3A1F:
    SET_LO8(ecx, MEM8(eax + 0x44));
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_001A3A2B; /* jne: not equal / not zero */

loc_001A3A27:
    ecx = 0; /* xor self */
    goto loc_001A3A3A;

loc_001A3A2B:
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;

loc_001A3A3A:
    MEM32(esi + 0x3636C) = ecx;
    PUSH32(esp, 0); sub_001A0940(); /* call 0x001A0940 */

loc_001A3A45:
    SET_LO8(ecx, MEM8(eax + 0x49));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) >> 5);
    SET_LO16(edx, ZX8(LO8(edx)));
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0x8000001Fu;
    edx = ZX16(LO16(edx));
    edx = esi + edx * 4 + 0x36300;
    if (((int32_t)ecx >= 0)) goto loc_001A3A6B; /* jns: not sign (positive) */

loc_001A3A66:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001A3A6B:
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | esi;
    MEM8(eax + 0x4B) = MEM8(eax + 0x4B) | 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
