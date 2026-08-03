#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001AF70
 * Original: 0x0001AF70 - 0x0001B2A2 (818 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001AF70(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0001AF70:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(0x4D532C);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x320);
    PUSH32(esp, ebx);
    eax = edx + 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(ecx));
    esi = eax + 0x10;
    ebx = 0; /* xor self */
    /* cmp eax, esi - flags set for next jcc */
    MEM16(eax) = LO16(edi);
    if (CMP_AE(eax, esi)) goto loc_0001AFB6; /* jae: above or equal (unsigned >=) */

loc_0001AF9B:
    goto loc_0001AFA0;

    /* nop */

loc_0001AFA0:
    if (CMP_EQ(MEM16(ecx), LO16(ebx))) goto loc_0001AFB9; /* je: equal / zero */

loc_0001AFA5:
    SET_LO16(edi, MEM16(ecx + 2));
    ecx = ecx + 2;
    eax = eax + 2;
    /* cmp eax, esi - flags set for next jcc */
    MEM16(eax) = LO16(edi);
    if (CMP_B(eax, esi)) goto loc_0001AFA0; /* jb: below (unsigned <) */

loc_0001AFB6:
    MEM16(esi) = LO16(ebx);

loc_0001AFB9:
    eax = MEM32(0x4D532C);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x690);
    SET_LO16(edi, MEM16(ecx));
    eax = edx + 0x1A;
    esi = eax + 0x10;
    /* cmp eax, esi - flags set for next jcc */
    MEM16(eax) = LO16(edi);
    if (CMP_AE(eax, esi)) goto loc_0001AFED; /* jae: above or equal (unsigned >=) */

loc_0001AFD7:
    if (CMP_EQ(MEM16(ecx), LO16(ebx))) goto loc_0001AFF0; /* je: equal / zero */

loc_0001AFDC:
    SET_LO16(edi, MEM16(ecx + 2));
    ecx = ecx + 2;
    eax = eax + 2;
    /* cmp eax, esi - flags set for next jcc */
    MEM16(eax) = LO16(edi);
    if (CMP_B(eax, esi)) goto loc_0001AFD7; /* jb: below (unsigned <) */

loc_0001AFED:
    MEM16(esi) = LO16(ebx);

loc_0001AFF0:
    eax = MEM32(0x4D532C);
    ecx = MEM32(eax + 0xC);
    ecx = MEM32(ecx + 0x694);
    SET_LO16(edi, MEM16(ecx));
    eax = edx + 0x2C;
    esi = eax + 0x10;
    /* cmp eax, esi - flags set for next jcc */
    MEM16(eax) = LO16(edi);
    if (CMP_AE(eax, esi)) goto loc_0001B026; /* jae: above or equal (unsigned >=) */

loc_0001B00E:
    edi = edi;

loc_0001B010:
    if (CMP_EQ(MEM16(ecx), LO16(ebx))) goto loc_0001B029; /* je: equal / zero */

loc_0001B015:
    SET_LO16(edi, MEM16(ecx + 2));
    ecx = ecx + 2;
    eax = eax + 2;
    /* cmp eax, esi - flags set for next jcc */
    MEM16(eax) = LO16(edi);
    if (CMP_B(eax, esi)) goto loc_0001B010; /* jb: below (unsigned <) */

loc_0001B026:
    MEM16(esi) = LO16(ebx);

loc_0001B029:
    MEM32(edx + 0x40) = ebx;
    MEM32(edx + 0x44) = ebx;
    eax = 0; /* xor self */
    edi = edx + 0x48;
    ecx = 0x43;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx + 0x154) = ebx;
    MEM32(edx + 0x158) = ebx;
    MEM32(edx + 0x15C) = ebx;
    MEM32(edx + 0x160) = ebx;
    MEM32(edx + 0x164) = ebx;
    MEM32(edx + 0x168) = ebx;
    MEM32(edx + 0x16C) = ebx;
    MEM32(edx + 0x170) = eax;
    MEM32(edx + 0x174) = eax;
    MEM32(edx + 0x178) = eax;
    MEM32(edx + 0x17C) = eax;
    MEM32(edx + 0x180) = eax;
    MEM32(edx + 0x184) = eax;
    MEM32(edx + 0x188) = eax;
    MEM32(edx + 0x18C) = eax;
    MEM32(edx + 0x190) = eax;
    MEM32(edx + 0x194) = eax;
    MEM32(edx + 0x198) = eax;
    MEM32(edx + 0x19C) = eax;
    MEM32(edx + 0x1A0) = eax;
    MEM32(edx + 0x1A4) = eax;
    MEM32(edx + 0x1A8) = eax;
    MEM32(edx + 0x1AC) = eax;
    MEM32(edx + 0x1B0) = eax;
    MEM32(edx + 0x1B4) = eax;
    MEM32(edx + 0x1B8) = eax;
    MEM32(edx + 0x1BC) = eax;
    MEM32(edx + 0x1C0) = eax;
    MEM32(edx + 0x1C4) = eax;
    MEM32(edx + 0x1C8) = eax;
    MEM32(edx + 0x1CC) = eax;
    MEM32(edx + 0x1D0) = eax;
    MEM32(edx + 0x1D4) = eax;
    MEM32(edx + 0x1D8) = eax;
    MEM32(edx + 0x1DC) = eax;
    MEM32(edx + 0x1E0) = eax;
    MEM32(edx + 0x1E4) = eax;
    MEM32(edx + 0x1E8) = eax;
    MEM32(edx + 0x1EC) = eax;
    MEM32(edx + 0x1F0) = eax;
    MEM32(edx + 0x1F4) = eax;
    MEM32(edx + 0x1F8) = eax;
    MEM32(edx + 0x1FC) = eax;
    MEM32(edx + 0x200) = ebx;
    MEM32(edx + 0x204) = ebx;
    MEM32(edx + 0x208) = ebx;
    eax = edx + 0x2A0;
    ecx = 0x24;
    /* nop */

loc_0001B160:
    MEMF(eax + -148) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = eax + 4;
    ecx--;
    if ((ecx != 0)) goto loc_0001B160; /* jne: not equal / not zero */

loc_0001B172:
    MEM32(edx + 0x29C) = ebx;
    MEM32(edx + 0x330) = ebx;
    MEM32(edx + 0x334) = ebx;
    MEM32(edx + 0x338) = ebx;
    MEM32(edx + 0x33C) = ebx;
    MEM32(edx + 0x340) = ebx;
    MEM32(edx + 0x348) = ebx;
    MEM32(edx + 0x34C) = ebx;
    MEM32(edx + 0x354) = ebx;
    MEM32(edx + 0x358) = ebx;
    MEM32(edx + 0x35C) = ebx;
    MEM32(edx + 0x360) = ebx;
    MEM32(edx + 0x364) = ebx;
    MEM32(edx + 0x368) = ebx;
    MEM32(edx + 0x378) = ebx;
    MEM32(edx + 0x37C) = ebx;
    MEM32(edx + 0x344) = ebx;
    MEM32(edx + 0x350) = ebx;
    MEM32(edx + 0x370) = ebx;
    MEM32(edx + 0x374) = ebx;
    MEM32(edx + 0x36C) = ebx;
    eax = eax | 0xFFFFFFFFu;
    edi = edx + 0x386;
    ecx = 0x12;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    eax = eax | 0xFFFFFFFFu;
    edi = edx + 0x3CF;
    ecx = 0x19;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0; /* xor self */
    MEM32(edx + 0x433) = ecx;
    MEM32(edx + 0x437) = ecx;
    MEM32(edx + 0x43B) = ecx;
    MEM32(edx + 0x43F) = ecx;
    MEM32(edx + 0x443) = ecx;
    eax = 0; /* xor self */
    MEM32(edx + 0x447) = eax;
    MEM32(edx + 0x44B) = eax;
    MEM16(edx + 0x44F) = LO16(eax);
    edi = edx + 0x451;
    ecx = 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM8(edi) = LO8(eax); edi++; /* stosb */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(edx + 0x384) = LO8(ebx);
    MEM32(edx + 0x380) = 0xFFFFFFFFu;
    MEM8(edx + 0x49B) = LO8(eax);
    MEM8(edx + 0x494) = 0xFF;
    MEM8(edx + 0x495) = 0xFF;
    MEM8(edx + 0x496) = 0xFF;
    MEM8(edx + 0x497) = 0xFF;
    MEM8(edx + 0x498) = 0xFF;
    MEM8(edx + 0x499) = 0xFF;
    MEM8(edx + 0x49A) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
