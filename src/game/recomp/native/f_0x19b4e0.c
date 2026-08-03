#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019B4E0
 * Original: 0x0019B4E0 - 0x0019B881 (929 bytes, 325 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019B4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0019B4E0:
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0019B4EC; /* je: equal / zero */

loc_0019B4E7:
    eax = eax + edi;
    MEM32(edi + 0x10) = eax;

loc_0019B4EC:
    eax = MEM32(edi + 8);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0019B542; /* je: equal / zero */

loc_0019B4F6:
    eax = eax + edi;
    ebx = 0; /* xor self */
    /* cmp MEM16(edi + 0xC), LO16(ebx) - flags set for next jcc */
    MEM32(edi + 8) = eax;
    if (CMP_LE(MEM16(edi + 0xC), LO16(ebx))) goto loc_0019B542; /* jle: less or equal (signed <=) */

loc_0019B503:
    esi = 0; /* xor self */

loc_0019B505:
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi;
    if (TEST_Z(ecx, ecx)) goto loc_0019B536; /* je: equal / zero */

loc_0019B512:
    SET_LO8(edx, MEM8(eax + 0x11));
    ecx = ecx + eax;
    MEM32(eax + 0xC) = ecx;
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(edx) & LO8(edx), 0)) goto loc_0019B536; /* jle: less or equal (signed <=) */

loc_0019B520:
    edx = MEM32(eax + 0xC);
    ebp = MEM32(edx + ecx * 4);
    edx = edx + ecx * 4;
    ebp = ebp + eax;
    MEM32(edx) = ebp;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_0019B520; /* jl: less (signed <) */

loc_0019B536:
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xC);
    ebx++;
    esi = esi + 0x28;
    if (CMP_L(ebx, eax)) goto loc_0019B505; /* jl: less (signed <) */

loc_0019B542:
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0019B577; /* je: equal / zero */

loc_0019B549:
    eax = eax + edi;
    esi = 0; /* xor self */
    /* cmp MEM16(edi + 0x16), LO16(esi) - flags set for next jcc */
    MEM32(edi + 0x18) = eax;
    if (CMP_LE(MEM16(edi + 0x16), LO16(esi))) goto loc_0019B577; /* jle: less or equal (signed <=) */

loc_0019B556:
    ecx = MEM32(edi + 0x18);
    ebx = MEM32(ecx + esi * 4);
    eax = ecx + esi * 4;
    ebx = ebx + edi;
    MEM32(eax) = ebx;
    edx = MEM32(edi + 0x18);
    ecx = MEM32(edx + esi * 4);
    PUSH32(esp, 0); sub_001C8E20(); /* call 0x001C8E20 */

loc_0019B56E:
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x16);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0019B556; /* jl: less (signed <) */

loc_0019B577:
    eax = MEM32(edi + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0019B5A4; /* je: equal / zero */

loc_0019B57E:
    eax = eax + edi;
    ebx = 0; /* xor self */
    /* cmp MEM16(edi + 0x1C), LO16(ebx) - flags set for next jcc */
    MEM32(edi + 0x24) = eax;
    if (CMP_LE(MEM16(edi + 0x1C), LO16(ebx))) goto loc_0019B5A4; /* jle: less or equal (signed <=) */

loc_0019B58B:
    goto loc_0019B590;

    /* nop */

loc_0019B590:
    ecx = MEM32(edi + 0x24);
    esi = ecx + ebx * 8;
    PUSH32(esp, 0); sub_0019B4A0(); /* call 0x0019B4A0 */

loc_0019B59B:
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x1C);
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_0019B590; /* jl: less (signed <) */

loc_0019B5A4:
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_0019B5D4; /* je: equal / zero */

loc_0019B5AB:
    eax = eax + edi;
    ebx = 0; /* xor self */
    /* cmp MEM16(edi + 0x20), LO16(ebx) - flags set for next jcc */
    MEM32(edi + 0x2C) = eax;
    if (CMP_LE(MEM16(edi + 0x20), LO16(ebx))) goto loc_0019B5D4; /* jle: less or equal (signed <=) */

loc_0019B5B8:
    goto loc_0019B5C0;

    /* nop */

loc_0019B5C0:
    eax = MEM32(edi + 0x2C);
    esi = eax + ebx * 8;
    PUSH32(esp, 0); sub_0019B4A0(); /* call 0x0019B4A0 */

loc_0019B5CB:
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x20);
    ebx++;
    if (CMP_L(ebx, ecx)) goto loc_0019B5C0; /* jl: less (signed <) */

loc_0019B5D4:
    eax = MEM32(edi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0019B604; /* je: equal / zero */

loc_0019B5DB:
    eax = eax + edi;
    ebx = 0; /* xor self */
    /* cmp MEM16(edi + 0x22), LO16(ebx) - flags set for next jcc */
    MEM32(edi + 0x30) = eax;
    if (CMP_LE(MEM16(edi + 0x22), LO16(ebx))) goto loc_0019B604; /* jle: less or equal (signed <=) */

loc_0019B5E8:
    goto loc_0019B5F0;

    /* nop */

loc_0019B5F0:
    edx = MEM32(edi + 0x30);
    esi = edx + ebx * 8;
    PUSH32(esp, 0); sub_0019B4A0(); /* call 0x0019B4A0 */

loc_0019B5FB:
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x22);
    ebx++;
    if (CMP_L(ebx, eax)) goto loc_0019B5F0; /* jl: less (signed <) */

loc_0019B604:
    eax = MEM32(edi + 0x28);
    if (TEST_Z(eax, eax)) goto loc_0019B634; /* je: equal / zero */

loc_0019B60B:
    eax = eax + edi;
    ebx = 0; /* xor self */
    /* cmp MEM16(edi + 0x1E), LO16(ebx) - flags set for next jcc */
    MEM32(edi + 0x28) = eax;
    if (CMP_LE(MEM16(edi + 0x1E), LO16(ebx))) goto loc_0019B634; /* jle: less or equal (signed <=) */

loc_0019B618:
    goto loc_0019B620;

    /* nop */

loc_0019B620:
    ecx = MEM32(edi + 0x28);
    esi = ecx + ebx * 8;
    PUSH32(esp, 0); sub_0019B4A0(); /* call 0x0019B4A0 */

loc_0019B62B:
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x1E);
    ebx++;
    if (CMP_L(ebx, edx)) goto loc_0019B620; /* jl: less (signed <) */

loc_0019B634:
    eax = MEM32(edi + 0x38);
    /* test eax, eax - flags set for next jcc */
    SET_LO8(ebx, 1);
    if (TEST_Z(eax, eax)) goto loc_0019B6F7; /* je: equal / zero */

loc_0019B641:
    eax = eax + edi;
    esi = 0; /* xor self */
    /* cmp MEM16(edi + 0x34), LO16(esi) - flags set for next jcc */
    MEM32(edi + 0x38) = eax;
    if (CMP_LE(MEM16(edi + 0x34), LO16(esi))) goto loc_0019B6F7; /* jle: less or equal (signed <=) */

loc_0019B652:
    edx = 0; /* xor self */

loc_0019B654:
    eax = MEM32(edi + 0x38);
    ebp = MEM32(eax + edx + 0x20);
    ecx = MEM32(eax + edx + 0x24);
    eax = eax + edx + 0x20;
    ebp = ebp & 0x70000;
    ecx = ecx + eax;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0019B679; /* je: equal / zero */

loc_0019B673:
    ecx = ecx & 0xFFFFFFF;

loc_0019B679:
    ebp = MEM32(eax + 0x10);
    ebp = ebp + eax;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ebp;
    ecx = MEM32(edi + 0x38);
    eax = ecx + edx;
    if (TEST_Z(MEM8(eax + 0x62), LO8(ebx))) goto loc_0019B6B4; /* je: equal / zero */

loc_0019B68F:
    ebp = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x38);
    eax = eax + 0x34;
    ebp = ebp & 0x70000;
    ecx = ecx + eax;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0019B6AE; /* je: equal / zero */

loc_0019B6A8:
    ecx = ecx & 0xFFFFFFF;

loc_0019B6AE:
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + eax;

loc_0019B6B4:
    eax = MEM32(edi + 0x38);
    SET_LO8(ecx, MEM8(eax + edx + 0x62));
    eax = eax + edx;
    if (TEST_Z(LO8(ecx), 2)) goto loc_0019B6E7; /* je: equal / zero */

loc_0019B6C2:
    ebp = MEM32(eax + 0x48);
    ecx = MEM32(eax + 0x4C);
    eax = eax + 0x48;
    ebp = ebp & 0x70000;
    ecx = ecx + eax;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0019B6E1; /* je: equal / zero */

loc_0019B6DB:
    ecx = ecx & 0xFFFFFFF;

loc_0019B6E1:
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + eax;

loc_0019B6E7:
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    esi++;
    edx = edx + 0x70;
    if (CMP_L(esi, ecx)) goto loc_0019B654; /* jl: less (signed <) */

loc_0019B6F7:
    eax = MEM32(edi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0019B7B8; /* je: equal / zero */

loc_0019B702:
    eax = eax + edi;
    esi = 0; /* xor self */
    /* cmp MEM16(edi + 0x36), LO16(esi) - flags set for next jcc */
    MEM32(edi + 0x3C) = eax;
    if (CMP_LE(MEM16(edi + 0x36), LO16(esi))) goto loc_0019B7B8; /* jle: less or equal (signed <=) */

loc_0019B713:
    edx = 0; /* xor self */

loc_0019B715:
    eax = MEM32(edi + 0x3C);
    ebp = MEM32(edx + eax + 0x20);
    ecx = MEM32(edx + eax + 0x24);
    eax = edx + eax + 0x20;
    ebp = ebp & 0x70000;
    ecx = ecx + eax;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0019B73A; /* je: equal / zero */

loc_0019B734:
    ecx = ecx & 0xFFFFFFF;

loc_0019B73A:
    ebp = MEM32(eax + 0x10);
    ebp = ebp + eax;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ebp;
    ecx = MEM32(edi + 0x3C);
    eax = edx + ecx;
    if (TEST_Z(MEM8(eax + 0x62), LO8(ebx))) goto loc_0019B775; /* je: equal / zero */

loc_0019B750:
    ebp = MEM32(eax + 0x34);
    ecx = MEM32(eax + 0x38);
    eax = eax + 0x34;
    ebp = ebp & 0x70000;
    ecx = ecx + eax;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0019B76F; /* je: equal / zero */

loc_0019B769:
    ecx = ecx & 0xFFFFFFF;

loc_0019B76F:
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + eax;

loc_0019B775:
    eax = MEM32(edi + 0x3C);
    SET_LO8(ecx, MEM8(eax + edx + 0x62));
    eax = eax + edx;
    if (TEST_Z(LO8(ecx), 2)) goto loc_0019B7A8; /* je: equal / zero */

loc_0019B783:
    ebp = MEM32(eax + 0x48);
    ecx = MEM32(eax + 0x4C);
    eax = eax + 0x48;
    ebp = ebp & 0x70000;
    ecx = ecx + eax;
    if (CMP_EQ(ebp, 0x20000)) goto loc_0019B7A2; /* je: equal / zero */

loc_0019B79C:
    ecx = ecx & 0xFFFFFFF;

loc_0019B7A2:
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + eax;

loc_0019B7A8:
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    esi++;
    edx = edx + 0x70;
    if (CMP_L(esi, ecx)) goto loc_0019B715; /* jl: less (signed <) */

loc_0019B7B8:
    eax = MEM32(edi + 0x4C);
    if (TEST_Z(eax, eax)) goto loc_0019B7EA; /* je: equal / zero */

loc_0019B7BF:
    eax = eax + edi;
    edx = 0; /* xor self */
    /* cmp MEM16(edi + 0x54), LO16(edx) - flags set for next jcc */
    MEM32(edi + 0x4C) = eax;
    if (CMP_LE(MEM16(edi + 0x54), LO16(edx))) goto loc_0019B7EA; /* jle: less or equal (signed <=) */

loc_0019B7CC:
    /* nop */

loc_0019B7D0:
    eax = MEM32(edi + 0x4C);
    ecx = MEM32(eax + edx * 4);
    /* test ecx, ecx - flags set for next jcc */
    eax = eax + edx * 4;
    if (TEST_Z(ecx, ecx)) goto loc_0019B7E1; /* je: equal / zero */

loc_0019B7DD:
    ecx = ecx + edi;
    MEM32(eax) = ecx;

loc_0019B7E1:
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x54);
    edx++;
    if (CMP_L(edx, ecx)) goto loc_0019B7D0; /* jl: less (signed <) */

loc_0019B7EA:
    eax = MEM32(edi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_0019B84D; /* je: equal / zero */

loc_0019B7F1:
    eax = eax + edi;
    edx = 0; /* xor self */
    /* cmp MEM16(edi + 0x54), LO16(edx) - flags set for next jcc */
    MEM32(edi + 0x50) = eax;
    if (CMP_LE(MEM16(edi + 0x54), LO16(edx))) goto loc_0019B84D; /* jle: less or equal (signed <=) */

loc_0019B7FE:
    edi = edi;

loc_0019B800:
    eax = MEM32(edi + 0x50);
    ecx = MEM32(eax + edx * 4);
    /* test ecx, ecx - flags set for next jcc */
    eax = eax + edx * 4;
    if (TEST_Z(ecx, ecx)) goto loc_0019B844; /* je: equal / zero */

loc_0019B80D:
    ecx = ecx + edi;
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    if (CMP_LE(MEM16(edi + 0x36), LO16(eax))) goto loc_0019B844; /* jle: less or equal (signed <=) */

loc_0019B819:
    /* nop */

loc_0019B820:
    ecx = MEM32(edi + 0x50);
    esi = MEM32(ecx + edx * 4);
    /* cmp MEM32(esi + eax * 4), 0 - flags set for next jcc */
    ecx = ecx + edx * 4;
    if (CMP_EQ(MEM32(esi + eax * 4), 0)) goto loc_0019B83B; /* je: equal / zero */

loc_0019B82F:
    ecx = esi;
    esi = MEM32(ecx + eax * 4);
    ecx = ecx + eax * 4;
    esi = esi + edi;
    MEM32(ecx) = esi;

loc_0019B83B:
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x36);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_0019B820; /* jl: less (signed <) */

loc_0019B844:
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x54);
    edx++;
    if (CMP_L(edx, eax)) goto loc_0019B800; /* jl: less (signed <) */

loc_0019B84D:
    eax = MEM32(edi + 0x44);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0019B85C; /* je: equal / zero */

loc_0019B857:
    eax = eax + edi;
    MEM32(edi + 0x44) = eax;

loc_0019B85C:
    eax = MEM32(edi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_0019B868; /* je: equal / zero */

loc_0019B863:
    eax = eax + edi;
    MEM32(edi + 0x48) = eax;

loc_0019B868:
    eax = MEM32(edi + 0x58);
    if (TEST_Z(eax, eax)) goto loc_0019B874; /* je: equal / zero */

loc_0019B86F:
    eax = eax + edi;
    MEM32(edi + 0x58) = eax;

loc_0019B874:
    eax = MEM32(edi + 0x5C);
    if (TEST_Z(eax, eax)) goto loc_0019B880; /* je: equal / zero */

loc_0019B87B:
    eax = eax + edi;
    MEM32(edi + 0x5C) = eax;

loc_0019B880:
    esp += 4; return; /* ret */

}
