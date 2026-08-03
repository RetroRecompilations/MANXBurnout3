#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D2879
 * Original: 0x001D2879 - 0x001D2919 (160 bytes, 59 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D2879(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001D2879:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (((int32_t)(esi & esi) >= 0)) goto loc_001D2901; /* jns: not sign (positive) */

loc_001D2884:
    if (TEST_NZ(esi, 0xF000000)) goto loc_001D2898; /* jne: not equal / not zero */

loc_001D288C:
    esi = esi & 0xFCFFFFFFu;
    esi = esi | 0xC000000;

loc_001D2898:
    ecx = esi;
    ecx = ecx >> 0x18;
    eax = esi;
    eax = eax >> 0x1C;
    ecx = ecx & 0xF;
    eax = eax & 3;
    /* cmp ecx, 1 - flags set for next jcc */
    PUSH32(esp, MEM32(eax * 4 + 0x3C02D8));
    if (CMP_NE(ecx, 1)) goto loc_001D28CA; /* jne: not equal / not zero */

loc_001D28B4:
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0xFFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001CFF4D(); /* call 0x001CFF4D */

loc_001D28C8:
    goto loc_001D28DA;

loc_001D28CA:
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_001CFF0A(); /* call 0x001CFF0A */

loc_001D28DA:
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_001D2912; /* je: equal / zero */

loc_001D28E0:
    if (TEST_Z(esi, 0x40000000)) goto loc_001D2912; /* je: equal / zero */

loc_001D28E8:
    ecx = MEM32(ebp + 8);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    goto loc_001D2912;

loc_001D2901:
    PUSH32(esp, MEM32(ebp + 8));
    esi = esi >> 0x18;
    esi = esi & 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D407C(); /* call 0x001D407C */

loc_001D2910:
    edx = eax;

loc_001D2912:
    eax = edx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
