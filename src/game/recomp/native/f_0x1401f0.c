#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001401F0
 * Original: 0x001401F0 - 0x00140477 (647 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001401F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001401F0:
    ecx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x4A1BE4);
    esp = esp - 0x48;
    eax = eax + ecx;
    PUSH32(esp, ebx);
    ecx = ecx + eax;
    MEM32(0x4A1BE0) = eax;
    eax = MEM32(0x4D5370);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x4A1BE4) = ecx;
    if (CMP_EQ(eax, ebx)) goto loc_00140254; /* je: equal / zero */

loc_0014022B:
    if (CMP_NE(MEM32(eax + 0x1B8), 0x4D4C28)) goto loc_00140254; /* jne: not equal / not zero */

loc_00140237:
    xmm0.f[0] = MEMF(0x73B570); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x73B2AC); /* subss */
    PUSH32(esp, ecx);
    edi = ebp;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001419A0(); /* call 0x001419A0 */

loc_00140254:
    eax = MEM32(ebp + 0x50);
    if (CMP_EQ(eax, ebx)) goto loc_0014025F; /* je: equal / zero */

loc_0014025B:
    eax--;
    MEM32(ebp + 0x50) = eax;

loc_0014025F:
    eax = MEM32(ebp + 0x54);
    if (CMP_EQ(eax, ebx)) goto loc_0014026A; /* je: equal / zero */

loc_00140266:
    eax--;
    MEM32(ebp + 0x54) = eax;

loc_0014026A:
    SET_LO8(eax, MEM8(ebp + 0x69));
    if (CMP_BE(LO8(eax), LO8(ebx))) goto loc_00140276; /* jbe: below or equal (unsigned <=) */

loc_00140271:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebp + 0x69) = LO8(eax);

loc_00140276:
    SET_LO8(eax, MEM8(ebp + 0x68));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001402A2; /* je: equal / zero */

loc_0014027D:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebp + 0x68) = LO8(eax);
    if ((LO8(eax) != 0)) goto loc_001402A2; /* jne: not equal / not zero */

loc_00140284:
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xA4F3B88Du);
    PUSH32(esp, 0xDAB40000u);
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_001402A2:
    SET_LO8(eax, MEM8(ebp + 0x6A));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001402AE; /* je: equal / zero */

loc_001402A9:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebp + 0x6A) = LO8(eax);

loc_001402AE:
    SET_LO8(eax, MEM8(ebp + 0x6B));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001402BA; /* je: equal / zero */

loc_001402B5:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebp + 0x6B) = LO8(eax);

loc_001402BA:
    SET_LO8(eax, MEM8(ebp + 0x6C));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001402C6; /* je: equal / zero */

loc_001402C1:
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(ebp + 0x6C) = LO8(eax);

loc_001402C6:
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_001402D1; /* je: equal / zero */

loc_001402CD:
    eax--;
    MEM32(ebp + 0x14) = eax;

loc_001402D1:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], MEMF(ebp + 0x1C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebp + 0x1C))) goto loc_001402F1; /* jbe: below or equal (unsigned <=) */

loc_001402DF:
    xmm0.f[0] = MEMF(ebp + 0x1C); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A69BC); /* addss */
    MEMF(ebp + 0x1C) = xmm0.f[0]; /* movss */

loc_001402F1:
    eax = MEM32(ebp + 0x48);
    if (CMP_EQ(eax, ebx)) goto loc_001403D3; /* je: equal / zero */

loc_001402FC:
    xmm0.f[0] = MEMF(0x3B16BC); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3B16C0); /* movss */
    eax--;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16B4); /* movss */
    MEM32(ebp + 0x48) = eax;
    eax = MEM32(ebp + 8);
    /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x1C); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x24) = ebx;
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    MEM8(esp + 0x50) = LO8(ebx);
    MEM8(esp + 0x51) = LO8(ebx);
    MEM8(esp + 0x52) = LO8(ebx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_0014039E; /* je: equal / zero */

loc_00140395:
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_0014039E:
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_001403AE; /* je: equal / zero */

loc_001403A5:
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_001403AE:
    if (CMP_NE(MEM32(ebp + 0x48), ebx)) goto loc_001403D3; /* jne: not equal / not zero */

loc_001403B3:
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (CMP_EQ(esi, ebx)) goto loc_001403C3; /* je: equal / zero */

loc_001403BB:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_001403C0:
    MEM32(ebp + 8) = ebx;

loc_001403C3:
    esi = MEM32(ebp + 0xC);
    if (CMP_EQ(esi, ebx)) goto loc_001403D2; /* je: equal / zero */

loc_001403CA:
    PUSH32(esp, 0); sub_001CCDA0(); /* call 0x001CCDA0 */

loc_001403CF:
    MEM32(ebp + 0xC) = ebx;

loc_001403D2:
    POP32(esp, esi);

loc_001403D3:
    MEM8(ebp + 0x10) = LO8(ebx);
    MEM8(ebp + 0x11) = LO8(ebx);
    MEM8(ebp + 0x12) = LO8(ebx);
    if (CMP_NE(MEM32(0x4D5370), 0x4D4008)) goto loc_0014046E; /* jne: not equal / not zero */

loc_001403EC:
    eax = MEM32(0x567174);
    if (CMP_EQ(eax, ebx)) goto loc_0014046E; /* je: equal / zero */

loc_001403F5:
    ecx = MEM32(eax + 8);
    /* cmp ecx, 0xF8506AFEu - flags set for next jcc */
    eax = MEM32(eax + 0xC);
    if (CMP_NE(ecx, 0xF8506AFEu)) goto loc_0014046E; /* jne: not equal / not zero */

loc_00140403:
    if (CMP_NE(eax, 0x94414018u)) goto loc_0014046E; /* jne: not equal / not zero */

loc_0014040A:
    eax = MEM32(ebp + 0x70);
    ecx = MEM32(0x5729A8);
    if (CMP_EQ(eax, ecx)) goto loc_0014046E; /* je: equal / zero */

loc_00140417:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00140428; /* jne: not equal / not zero */

loc_0014041C:
    POP32(esp, edi);
    MEM32(ebp + 0x70) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

loc_00140428:
    /* cmp ecx, eax - flags set for next jcc */
    eax = ebp;
    if (CMP_GE(ecx, eax)) goto loc_00140460; /* jge: greater or equal (signed >=) */

loc_0014042E:
    if (CMP_NE(ecx, ebx)) goto loc_00140449; /* jne: not equal / not zero */

loc_00140432:
    PUSH32(esp, 0); sub_00141610(); /* call 0x00141610 */

loc_00140437:
    edx = MEM32(0x5729A8);
    POP32(esp, edi);
    MEM32(ebp + 0x70) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

loc_00140449:
    PUSH32(esp, 0); sub_001416A0(); /* call 0x001416A0 */

loc_0014044E:
    edx = MEM32(0x5729A8);
    POP32(esp, edi);
    MEM32(ebp + 0x70) = edx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

loc_00140460:
    PUSH32(esp, 0); sub_00141670(); /* call 0x00141670 */

loc_00140465:
    edx = MEM32(0x5729A8);
    MEM32(ebp + 0x70) = edx;

loc_0014046E:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 8; return; /* ret 4 */

}
