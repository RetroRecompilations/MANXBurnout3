#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155720
 * Original: 0x00155720 - 0x001558FF (479 bytes, 118 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155720(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00155720:
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esp + 0xA) = ecx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0xE) = ecx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x12) = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x1A) = ecx;
    ebx = 0; /* xor self */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ebx;
    ecx = 0x12;
    edi = esp + 0x3C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = 0x10;
    MEM16(esp + 0x1A) = LO16(eax);
    MEM32(esp + 0x24) = eax;
    edi = esi + 0x90;
    PUSH32(esp, edi);
    eax = esp + 0x24;
    edx = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebx;
    MEM16(esp + 0x14) = 1;
    MEM16(esp + 0x16) = 2;
    MEM32(esp + 0x18) = 0xAC44;
    MEM16(esp + 0x20) = 4;
    MEM32(esp + 0x1C) = 0x2B110;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = 0x155CA0;
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0); sub_002F7479(); /* call 0x002F7479 */

loc_001557BD:
    ecx = esi + 0x48;
    PUSH32(esp, ecx);
    MEM32(ecx) = 6;
    ecx = MEM32(edi);
    eax = esi + 8;
    PUSH32(esp, ecx);
    MEM32(eax) = ebx;
    MEM32(esi + 0x10) = 1;
    MEM32(esi + 0x18) = 4;
    MEM32(esi + 0x20) = 5;
    MEM32(esi + 0x28) = 2;
    MEM32(esi + 0x30) = 3;
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0); sub_002F6110(); /* call 0x002F6110 */

loc_001557FA:
    PUSH32(esp, 0x3E0F5C29);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F547AE1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_00155E10(); /* call 0x00155E10 */

loc_0015580F:
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F5751(); /* call 0x002F5751 */

loc_00155818:
    eax = MEM32(0x3FA690);
    if (CMP_L(eax, ebx)) goto loc_0015582D; /* jl: less (signed <) */

loc_00155821:
    if (CMP_EQ(eax, MEM32(0x3FA644))) goto loc_0015582D; /* je: equal / zero */

loc_00155829:
    eax = 0; /* xor self */
    goto loc_00155848;

loc_0015582D:
    if (CMP_EQ(MEM32(0x3FA68C), ebx)) goto loc_00155839; /* je: equal / zero */

loc_00155835:
    eax = 0; /* xor self */
    goto loc_00155848;

loc_00155839:
    eax = MEM32(0x3FA698);
    MEM32(0x3FA68C) = 0xFFFFFFFFu;

loc_00155848:
    MEM32(esi + 0xA0) = eax;
    eax = MEM32(0x3FA694);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    MEM32(esi + 0xBC) = eax;
    PUSH32(esp, 0); sub_001D0275(); /* call 0x001D0275 */

loc_00155863:
    edi = eax;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00155892; /* je: equal / zero */

loc_0015586A:
    /* nop */

loc_00155870:
    ecx = MEM32(esi + 0xB8);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx++;
    PUSH32(esp, edi);
    MEM32(esi + 0xB8) = ecx;
    PUSH32(esp, 0); sub_001D0256(); /* call 0x001D0256 */

loc_00155888:
    if (TEST_NZ(eax, eax)) goto loc_00155870; /* jne: not equal / not zero */

loc_0015588C:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D0DE6(); /* call 0x001D0DE6 */

loc_00155892:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edi = esi + 0x50;
    ecx = 0x10;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0x98) = 0xFFFFFFFFu;
    MEM32(esi + 0xC0) = 6;
    MEM32(esi + 0xA8) = 1;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x47A084) = 0x2B9D6F8;
    MEM32(0x47A080) = 0xFD462907u;
    POP32(esp, ebx);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}
