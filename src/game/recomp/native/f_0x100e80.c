#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00100E80
 * Original: 0x00100E80 - 0x00100EF2 (114 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100E80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00100E80:
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x5DC);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00100EB6; /* je: equal / zero */

loc_00100E8E:
    SET_LO16(edx, LO16(ecx));
    SET_LO16(ecx, MEM16(esi + 0x26));
    if (CMP_AE(LO16(ecx), 0x5555)) goto loc_00100EA3; /* jae: above or equal (unsigned >=) */

loc_00100E9C:
    if (CMP_A(LO16(edx), 0xAAAA)) goto loc_00100EB6; /* ja: above (unsigned >) */

loc_00100EA3:
    if (CMP_AE(LO16(edx), 0x5555)) goto loc_00100EB1; /* jae: above or equal (unsigned >=) */

loc_00100EAA:
    if (CMP_A(LO16(ecx), 0xAAAA)) goto loc_00100EF0; /* ja: above (unsigned >) */

loc_00100EB1:
    if (CMP_BE(LO16(ecx), LO16(edx))) goto loc_00100EF0; /* jbe: below or equal (unsigned <=) */

loc_00100EB6:
    ecx = MEM32(eax + 0x3B6C);
    ecx = ecx + ecx * 8;
    ecx = ecx << 6;
    PUSH32(esp, edi);
    edi = ecx + eax + 0x176C;
    ecx = 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = MEM32(eax + 0x3B6C);
    edx++;
    ecx = edx;
    /* cmp ecx, 0x10 - flags set for next jcc */
    MEM32(eax + 0x3B6C) = edx;
    POP32(esp, edi);
    if (CMP_L(ecx, 0x10)) goto loc_00100EF0; /* jl: less (signed <) */

loc_00100EE6:
    MEM32(eax + 0x3B6C) = 0;

loc_00100EF0:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
