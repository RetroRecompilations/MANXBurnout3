#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A3970
 * Original: 0x001A3970 - 0x001A3A06 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3970(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A3970:
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(0x5A3759));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = ebx;
    eax = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A3987; /* je: equal / zero */

loc_001A3980:
    PUSH32(esp, 0); sub_001A41F0(); /* call 0x001A41F0 */

loc_001A3985:
    goto loc_001A398C;

loc_001A3987:
    PUSH32(esp, 0); sub_001A41A0(); /* call 0x001A41A0 */

loc_001A398C:
    SET_LO8(eax, MEM8(ebx + 0x174));
    if (TEST_Z(LO8(eax), 4)) goto loc_001A399F; /* je: equal / zero */

loc_001A3996:
    if (CMP_NE(MEM8(ebx + 0x173), 8)) goto loc_001A39B5; /* jne: not equal / not zero */

loc_001A399F:
    if (TEST_NZ(LO8(eax), 2)) goto loc_001A39B5; /* jne: not equal / not zero */

loc_001A39A3:
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A39B5; /* je: equal / zero */

loc_001A39AB:
    eax = 0x64B310;
    PUSH32(esp, 0); sub_00111680(); /* call 0x00111680 */

loc_001A39B5:
    eax = 0; /* xor self */
    MEM32(ebx + 0x10C) = eax;
    MEM32(ebx + 0x110) = eax;
    SET_LO8(eax, MEM8(ebx + 0x177));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 5);
    SET_LO16(ecx, ZX8(LO8(ecx)));
    edx = ZX16(LO16(ecx));
    ecx = ZX8(LO8(eax));
    ecx = ecx & 0x8000001Fu;
    edx = esi + edx * 4 + 0x362E0;
    if (((int32_t)ecx >= 0)) goto loc_001A39EC; /* jns: not sign (positive) */

loc_001A39E7:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001A39EC:
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(edx);
    eax = ~eax;
    ecx = ecx & eax;
    MEM32(edx) = ecx;
    MEM8(ebx + 0x174) = MEM8(ebx + 0x174) & 0xFE;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
