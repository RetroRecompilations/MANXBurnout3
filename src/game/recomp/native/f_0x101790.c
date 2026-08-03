#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00101790
 * Original: 0x00101790 - 0x001019AB (539 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00101790:
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 0x6F0);
    SET_LO8(ecx, MEM8(eax + 0x1A24));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001019A5; /* je: equal / zero */

loc_001017AD:
    if (TEST_Z(MEM8(edi + 0x2C), 4)) goto loc_001019A5; /* je: equal / zero */

loc_001017B7:
    eax = MEM32(esi + 0x6F4);
    SET_LO8(ecx, MEM8(eax + 0x210));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001019A5; /* je: equal / zero */

loc_001017CB:
    ecx = ZX16(MEM16(edi + 0x26));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x5DC) = ecx;
    PUSH32(esp, 0); sub_00101120(); /* call 0x00101120 */

loc_001017DC:
    MEM32(esi + 0x4D70) = 0;
    MEM8(esi + 0x4D78) = 0;
    SET_LO8(eax, MEM8(edi + 0x2B));
    ebp = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00101808; /* jbe: below or equal (unsigned <=) */

loc_001017F6:
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, 0); sub_001014F0(); /* call 0x001014F0 */

loc_001017FF:
    edx = ZX8(MEM8(edi + 0x2B));
    ebp++;
    if (CMP_L(ebp, edx)) goto loc_001017F6; /* jl: less (signed <) */

loc_00101808:
    eax = MEM32(esi + 0x4D70);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0010194A; /* jle: less or equal (signed <=) */

loc_0010181E:
    edi = esi + 0x3C21;
    MEM32(esp + 0x10) = edi;
    goto loc_00101830;

    /* nop */

loc_00101830:
    eax = ZX8(MEM8(edi + -1));
    ecx = eax;
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_00101843; /* jns: not sign (positive) */

loc_0010183E:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_00101843:
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = eax;
    ecx = ecx >> 5;
    if (TEST_Z(MEM32(ecx * 4 + 0x649AC0), edx)) goto loc_00101872; /* je: equal / zero */

loc_00101858:
    edx = eax + eax * 2;
    edx = edx << 7;
    eax = MEM32(edx + 0x62611C);
    if (TEST_Z(eax, eax)) goto loc_00101872; /* je: equal / zero */

loc_00101868:
    if (CMP_NE(MEM8(eax), 4)) goto loc_00101872; /* jne: not equal / not zero */

loc_0010186D:
    eax = MEM32(eax + 0xC);
    goto loc_00101874;

loc_00101872:
    eax = 0; /* xor self */

loc_00101874:
    eax = MEM32(eax + 0x2424);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(eax, eax)) goto loc_00101929; /* je: equal / zero */

loc_00101886:
    ebp = MEM32(esi + 0x4D70);
    edx = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_001018FE; /* jle: less or equal (signed <=) */

loc_00101892:
    edi = esi + 0x3C20;
    goto loc_001018A0;

    /* nop */

loc_001018A0:
    eax = ZX8(MEM8(edi));
    ecx = eax;
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_001018B2; /* jns: not sign (positive) */

loc_001018AD:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001018B2:
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = eax;
    ecx = ecx >> 5;
    if (TEST_Z(MEM32(ecx * 4 + 0x649AC0), ebx)) goto loc_001018E1; /* je: equal / zero */

loc_001018C7:
    eax = eax + eax * 2;
    eax = eax << 7;
    eax = MEM32(eax + 0x62611C);
    if (TEST_Z(eax, eax)) goto loc_001018E1; /* je: equal / zero */

loc_001018D7:
    if (CMP_NE(MEM8(eax), 4)) goto loc_001018E1; /* jne: not equal / not zero */

loc_001018DC:
    eax = MEM32(eax + 0xC);
    goto loc_001018E3;

loc_001018E1:
    eax = 0; /* xor self */

loc_001018E3:
    if (CMP_EQ(MEM32(esp + 0x18), eax)) goto loc_001018FA; /* je: equal / zero */

loc_001018E9:
    eax = MEM32(esi + 0x4D70);
    edx++;
    edi = edi + 0xC0;
    if (CMP_L(edx, eax)) goto loc_001018A0; /* jl: less (signed <) */

loc_001018FA:
    edi = MEM32(esp + 0x10);

loc_001018FE:
    if (CMP_GE(edx, ebp)) goto loc_00101929; /* jge: greater or equal (signed >=) */

loc_00101902:
    if (CMP_EQ(MEM8(edi), 0)) goto loc_00101918; /* je: equal / zero */

loc_00101907:
    ecx = edx + edx * 2;
    ecx = ecx << 6;
    SET_LO8(eax, MEM8(ecx + esi + 0x3C21));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00101929; /* jne: not equal / not zero */

loc_00101918:
    edx = edx + edx * 2;
    edx = edx << 6;
    MEM8(edi) = 0;
    MEM8(edx + esi + 0x3C21) = 0;

loc_00101929:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x4D70);
    eax++;
    edi = edi + 0xC0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(eax, ecx)) goto loc_00101830; /* jl: less (signed <) */

loc_0010194A:
    SET_LO8(eax, MEM8(esi + 0x4D9D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001019A3; /* je: equal / zero */

loc_00101954:
    eax = ZX8(LO8(eax));
    ecx = eax;
    ecx = ecx & 0x8000001Fu;
    if (((int32_t)ecx >= 0)) goto loc_00101966; /* jns: not sign (positive) */

loc_00101961:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_00101966:
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = eax;
    ecx = ecx >> 5;
    if (TEST_Z(MEM32(ecx * 4 + 0x649AC0), edx)) goto loc_001019A3; /* je: equal / zero */

loc_0010197B:
    edx = eax + eax * 2;
    edx = edx << 7;
    ecx = MEM32(edx + 0x62611C);
    if (TEST_Z(ecx, ecx)) goto loc_001019A3; /* je: equal / zero */

loc_0010198B:
    if (CMP_NE(MEM8(ecx), 4)) goto loc_001019A3; /* jne: not equal / not zero */

loc_00101990:
    ebx = MEM32(ecx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64ACE8);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0010EC10(); /* call 0x0010EC10 */

loc_001019A3:
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001019A5:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
