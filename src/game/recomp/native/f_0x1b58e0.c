#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B58E0
 * Original: 0x001B58E0 - 0x001B5A7E (414 bytes, 162 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B58E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    uint64_t mm0, mm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B58E0:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D20AC(); /* call 0x001D20AC */

loc_001B58F0:
    SET_LO8(eax, MEM8(esi + 0x34));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B5968; /* jne: not equal / not zero */

loc_001B58FB:
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x28);
    edx = edx + ecx;
    eax = edx;
    /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_001B594A; /* jle: less or equal (signed <=) */

loc_001B590C:
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x10);
    eax = eax - ecx;
    ecx = edi;
    ecx = ecx - edx - _cf; /* sbb */
    edx = MEM32(esi + 0x14);
    ebx = ebx + eax;
    edx = edx + ecx + _cf; /* adc */
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x10) = ebx;
    eax = MEM32(esi + 0x2C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001B593F:
    ebp = ebx;
    ebx = MEM32(esi + 0x14);
    ebp = ebp - eax;
    ebx = ebx - edx - _cf; /* sbb */
    goto loc_001B596E;

loc_001B594A:
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x28) = eax;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001B5968:
    ebp = ebp | 0xFFFFFFFFu;
    ebx = ebx | 0xFFFFFFFFu;

loc_001B596E:
    ecx = MEM32(esi + 0x1C);
    /* cmp ebx, ecx - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi + 0x18);
    MEM32(esi + 0xC) = edi;
    edi = MEM32(esp + 0x18);
    MEM32(esi + 8) = eax;
    if (CMP_L(ebx, ecx)) goto loc_001B59B4; /* jl: less (signed <) */

loc_001B5986:
    if (CMP_G(ebx, ecx)) goto loc_001B598C; /* jg: greater (signed >) */

loc_001B5988:
    if (CMP_BE(ebp, edx)) goto loc_001B59B4; /* jbe: below or equal (unsigned <=) */

loc_001B598C:
    eax = MEM32(esi + 0x20);
    edi = eax;
    edi = edi - edx;
    edx = MEM32(esi + 0x24);
    edx = edx - ecx - _cf; /* sbb */
    ecx = MEM32(esi + 0x24);
    edi = edi + ebp;
    edx = edx + ebx + _cf; /* adc */
    PUSH32(esp, ecx);
    edi = edi - 1;
    PUSH32(esp, eax);
    edx = edx - 0 - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002445E0(); /* call 0x002445E0 */

loc_001B59AE:
    edi = eax;
    edi = edi + MEM32(esp + 0x18);

loc_001B59B4:
    eax = MEM32(esp + 0x1C);
    if (CMP_LE(edi, eax)) goto loc_001B59FA; /* jle: less or equal (signed <=) */

loc_001B59BC:
    /* cmp MEM32(esi), 2 - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(MEM32(esi), 2)) goto loc_001B59FA; /* je: equal / zero */

loc_001B59C3:
    SET_LO8(ecx, MEM8(esi + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B5A04; /* jne: not equal / not zero */

loc_001B59CA:
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001B59E0:
    ecx = MEM32(esi + 0x10);
    ecx = ecx - ebp;
    ebp = MEM32(esi + 0x14);
    MEM32(esi + 0x10) = ecx;
    ebp = ebp - ebx - _cf; /* sbb */
    ecx = ecx + eax;
    MEM32(esi + 0x14) = ebp;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + edx + _cf; /* adc */
    MEM32(esi + 0x10) = ecx;
    eax = edi;

loc_001B59FA:
    SET_LO8(ecx, MEM8(esi + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B5A04; /* jne: not equal / not zero */

loc_001B5A01:
    MEM32(esi + 0x28) = edi;

loc_001B5A04:
    /* cmp MEM32(esi), 0 - flags set for next jcc */
    edx = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(esi), 0)) goto loc_001B5A0F; /* jne: not equal / not zero */

loc_001B5A0D:
    edi = edx;

loc_001B5A0F:
    ecx = MEM32(esi + 0x30);
    if (CMP_LE(ecx & ecx, 0)) goto loc_001B5A6C; /* jle: less or equal (signed <=) */

loc_001B5A16:
    if (CMP_NE(edi, edx)) goto loc_001B5A6C; /* jne: not equal / not zero */

loc_001B5A1A:
    eax = eax - edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0xC) = ecx;
    mm0 = MEM32(esp + 0xC); /* movd */
    mm1 = MEM32(esp + 0x18); /* movd */
    /* pcmpgtd mm0, mm1 (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [esp + 0xc] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0x1C) = mm0; /* movd */
    /* emms - empty MMX state */
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x30) = eax;
    edi = edi + eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001B5A5C:
    ecx = MEM32(esi + 0x10);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x14);
    eax = eax + edx + _cf; /* adc */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = eax;

loc_001B5A6C:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x30) = 0;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}
