#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A03F0
 * Original: 0x001A03F0 - 0x001A05FF (527 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A03F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A03F0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x649B7C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000114E0(); /* call 0x000114E0 */

loc_001A040C:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A5600); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    esp = esp + 8;
    MEM8(esi + 0x46) = LO8(eax);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(ebp + 0x47));
    MEM8(esi + 0x41) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x4B));
    SET_LO8(ecx, LO8(ecx) | 0x10);
    /* test edi, edi - flags set for next jcc */
    MEM8(esi + 0x4B) = LO8(ecx);
    if (CMP_LE(edi & edi, 0)) goto loc_001A0496; /* jle: less or equal (signed <=) */

loc_001A047B:
    edx = MEM32(ebp);
    eax = MEM32(edx + 4);
    xmm0.f[0] = MEMF(eax + edi * 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + edi * 8 + -8); /* subss */
    eax = eax + edi * 8;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    goto loc_001A04A2;

loc_001A0496:
    ecx = MEM32(ebp);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + edi * 8);
    MEM32(esi + 0x20) = eax;

loc_001A04A2:
    xmm0.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5958); /* mulss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    ecx = ZX16(MEM16(ebp + 4));
    ecx = ecx + edi;
    SET_LO8(eax, MEM8(ecx + ebx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001A05AF; /* je: equal / zero */

loc_001A04C4:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    xmm0.f[0] = MEMF(eax + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x30) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esi + 0x30))) goto loc_001A0536; /* jb: below (unsigned <) */

loc_001A04DD:
    SET_LO8(ecx, MEM8(eax + 0x45));
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    MEM8(esi + 0x45) = LO8(ecx);
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001A04FD; /* je: equal / zero */

loc_001A04E8:
    SET_LO8(edx, MEM8(esi + 0x49));
    ecx = ZX8(LO8(ecx));
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    MEM8(ecx + 0x44) = LO8(edx);

loc_001A04FD:
    /* test edi, edi - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x49));
    SET_LO8(edx, MEM8(esi + 0x49));
    MEM8(esi + 0x44) = LO8(ecx);
    MEM8(eax + 0x45) = LO8(edx);
    if (TEST_S(edi, edi)) goto loc_001A05F6; /* jl: less (signed <) */

loc_001A0511:
    ecx = ZX16(MEM16(ebp + 4));
    ecx = ecx + edi;
    SET_LO8(edx, MEM8(ecx + ebx));
    ecx = ecx + ebx;
    if (CMP_NE(LO8(edx), MEM8(eax + 0x49))) goto loc_001A05F6; /* jne: not equal / not zero */

loc_001A0525:
    edi--;
    SET_LO8(edx, MEM8(esi + 0x49));
    MEM8(ecx) = LO8(edx);
    if (((int32_t)edi >= 0)) goto loc_001A0511; /* jns: not sign (positive) */

loc_001A052D:
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001A0536:
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 0x30) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 0x30))) goto loc_001A0561; /* jbe: below or equal (unsigned <=) */

loc_001A0541:
    SET_LO8(eax, MEM8(eax + 0x44));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_001A05AF; /* je: equal / zero */

loc_001A0548:
    xmm0.f[0] = MEMF(esi + 0x30); /* movss */
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    /* comiss xmm0.f[0], MEMF(eax + 0x30) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(eax + 0x30))) goto loc_001A0541; /* ja: above (unsigned >) */

loc_001A0561:
    SET_LO8(edx, MEM8(eax + 0x45));
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_001A0596; /* je: equal / zero */

loc_001A0569:
    ecx = ZX8(LO8(edx));
    ecx = ecx + ecx * 4;
    MEM8(esi + 0x45) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x49));
    ecx = ecx << 4;
    ecx = ecx + 0x63DCB0;
    MEM8(ecx + 0x44) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x49));
    SET_LO8(edx, MEM8(esi + 0x49));
    POP32(esp, edi);
    MEM8(esi + 0x44) = LO8(ecx);
    POP32(esp, ebp);
    MEM8(eax + 0x45) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001A0596:
    SET_LO8(edx, MEM8(esi + 0x49));
    MEM8(esi + 0x45) = 0xFF;
    SET_LO8(ecx, MEM8(eax + 0x49));
    POP32(esp, edi);
    MEM8(esi + 0x44) = LO8(ecx);
    POP32(esp, ebp);
    MEM8(eax + 0x45) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001A05AF:
    SET_LO8(ecx, MEM8(ebp + 0x46));
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    edx = edi;
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001A05D0; /* je: equal / zero */

loc_001A05B9:
    eax = ZX8(LO8(ecx));
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM8(esi + 0x45) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x49));
    eax = eax + 0x63DCB0;
    MEM8(eax + 0x44) = LO8(ecx);

loc_001A05D0:
    /* test edi, edi - flags set for next jcc */
    SET_LO8(eax, MEM8(esi + 0x49));
    MEM8(ebp + 0x46) = LO8(eax);
    if (TEST_S(edi, edi)) goto loc_001A05F6; /* jl: less (signed <) */

loc_001A05DA:
    /* nop */

loc_001A05E0:
    ecx = ZX16(MEM16(ebp + 4));
    ecx = ecx + edx;
    eax = ecx + ebx;
    if (CMP_NE(MEM8(eax), 0xFF)) goto loc_001A05F6; /* jne: not equal / not zero */

loc_001A05EE:
    edx--;
    SET_LO8(ecx, MEM8(esi + 0x49));
    MEM8(eax) = LO8(ecx);
    if (((int32_t)edx >= 0)) goto loc_001A05E0; /* jns: not sign (positive) */

loc_001A05F6:
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}
