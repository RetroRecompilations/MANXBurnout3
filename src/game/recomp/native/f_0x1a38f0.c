#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A38F0
 * Original: 0x001A38F0 - 0x001A3969 (121 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A38F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A38F0:
    eax = MEM32(edx + 0x36364);
    if (TEST_NZ(eax, eax)) goto loc_001A38FB; /* jne: not equal / not zero */

loc_001A38FA:
    esp += 4; return; /* ret */

loc_001A38FB:
    ecx = MEM32(eax + 0x108);
    MEM32(edx + 0x36364) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x177));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ecx));
    PUSH32(esp, esi);
    SET_LO8(ebx, LO8(ebx) >> 5);
    SET_LO16(esi, ZX8(LO8(ebx)));
    ecx = ZX8(LO8(ecx));
    ecx = ecx & 0x8000001Fu;
    esi = ZX16(LO16(esi));
    MEM32(eax + 0x108) = 0;
    esi = edx + esi * 4 + 0x362E0;
    if (((int32_t)ecx >= 0)) goto loc_001A393C; /* jns: not sign (positive) */

loc_001A3937:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001A393C:
    ebx = 1;
    ebx = ebx << LO8(ecx);
    MEM32(esi) = MEM32(esi) | ebx;
    MEM8(edx + 0x363AC) = MEM8(edx + 0x363AC) + 1;
    MEM8(eax + 0x174) = MEM8(eax + 0x174) | 1;
    ecx = MEM32(edx + 0x36364);
    /* test ecx, ecx - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(ecx, ecx)) goto loc_001A3968; /* jne: not equal / not zero */

loc_001A395E:
    MEM32(edx + 0x36368) = 0;

loc_001A3968:
    esp += 4; return; /* ret */

}
