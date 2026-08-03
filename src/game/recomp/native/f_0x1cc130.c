#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC130
 * Original: 0x001CC130 - 0x001CC22D (253 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC130:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esp + 0x14));
    ebx = eax;
    SET_LO8(eax, MEM8(edi + esi));
    if (CMP_L(LO8(eax), 0x41)) goto loc_001CC14D; /* jl: less (signed <) */

loc_001CC145:
    if (CMP_G(LO8(eax), 0x5A)) goto loc_001CC14D; /* jg: greater (signed >) */

loc_001CC149:
    SET_LO8(eax, LO8(eax) - 0x37);
    goto loc_001CC16B;

loc_001CC14D:
    if (CMP_L(LO8(eax), 0x61)) goto loc_001CC159; /* jl: less (signed <) */

loc_001CC151:
    if (CMP_G(LO8(eax), 0x7A)) goto loc_001CC159; /* jg: greater (signed >) */

loc_001CC155:
    SET_LO8(eax, LO8(eax) - 0x57);
    goto loc_001CC16B;

loc_001CC159:
    if (CMP_L(LO8(eax), 0x30)) goto loc_001CC1EF; /* jl: less (signed <) */

loc_001CC161:
    if (CMP_G(LO8(eax), 0x39)) goto loc_001CC1EF; /* jg: greater (signed >) */

loc_001CC169:
    SET_LO8(eax, LO8(eax) - 0x30);

loc_001CC16B:
    SET_LO8(edx, LO8(eax));
    eax = ZX8(MEM8(esp + 0x18));
    SET_LO8(ecx, MEM8(eax + esi));
    if (CMP_L(LO8(ecx), 0x41)) goto loc_001CC184; /* jl: less (signed <) */

loc_001CC17A:
    if (CMP_G(LO8(ecx), 0x5A)) goto loc_001CC184; /* jg: greater (signed >) */

loc_001CC17F:
    SET_LO8(ecx, LO8(ecx) - 0x37);
    goto loc_001CC1A0;

loc_001CC184:
    if (CMP_L(LO8(ecx), 0x61)) goto loc_001CC193; /* jl: less (signed <) */

loc_001CC189:
    if (CMP_G(LO8(ecx), 0x7A)) goto loc_001CC193; /* jg: greater (signed >) */

loc_001CC18E:
    SET_LO8(ecx, LO8(ecx) - 0x57);
    goto loc_001CC1A0;

loc_001CC193:
    if (CMP_L(LO8(ecx), 0x30)) goto loc_001CC1F3; /* jl: less (signed <) */

loc_001CC198:
    if (CMP_G(LO8(ecx), 0x39)) goto loc_001CC1F3; /* jg: greater (signed >) */

loc_001CC19D:
    SET_LO8(ecx, LO8(ecx) - 0x30);

loc_001CC1A0:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001CC1A6; /* jne: not equal / not zero */

loc_001CC1A4:
    SET_LO8(ecx, 1);

loc_001CC1A6:
    if (CMP_BE(LO8(edx), LO8(ecx))) goto loc_001CC1AC; /* jbe: below or equal (unsigned <=) */

loc_001CC1AA:
    ebx = 0; /* xor self */

loc_001CC1AC:
    eax = ebx;
    eax--;
    if ((eax == 0)) goto loc_001CC1E3; /* je: equal / zero */

loc_001CC1B1:
    eax--;
    if ((eax != 0)) goto loc_001CC1F3; /* jne: not equal / not zero */

loc_001CC1B4:
    edx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + edx;
    edx = MEM32(0x4A1BE4);
    eax = eax + edx;
    edx = edx + eax;
    MEM32(0x4A1BE4) = edx;
    ecx = ZX8(LO8(ecx));
    edx = 0; /* xor self */
    MEM32(0x4A1BE0) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    goto loc_001CC1F3;

loc_001CC1E3:
    eax = ZX8(LO8(edx));
    eax++;
    ecx = ZX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_001CC1F3;

loc_001CC1EF:
    SET_LO8(edx, MEM8(esp + 0x14));

loc_001CC1F3:
    eax = ebp;
    ecx = esi;
    eax = eax - esi;
    /* nop */

loc_001CC200:
    SET_LO8(ebx, MEM8(ecx));
    MEM8(eax + ecx) = LO8(ebx);
    ecx++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001CC200; /* jne: not equal / not zero */

loc_001CC20A:
    if (CMP_B(LO8(edx), 0xA)) goto loc_001CC223; /* jb: below (unsigned <) */

loc_001CC20F:
    if (CMP_AE(LO8(edx), 0x24)) goto loc_001CC21E; /* jae: above or equal (unsigned >=) */

loc_001CC214:
    SET_LO8(edx, LO8(edx) + 0x37);
    MEM8(edi + ebp) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001CC21E:
    if (CMP_A(LO8(edx), 0xA)) goto loc_001CC229; /* ja: above (unsigned >) */

loc_001CC223:
    SET_LO8(edx, LO8(edx) + 0x30);
    MEM8(edi + ebp) = LO8(edx);

loc_001CC229:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
