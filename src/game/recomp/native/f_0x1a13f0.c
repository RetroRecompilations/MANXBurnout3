#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A13F0
 * Original: 0x001A13F0 - 0x001A1DE3 (2547 bytes, 653 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A13F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_001A13F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x374F8);
    eax--;
    /* cmp eax, 0x17 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x17)) goto loc_001A1DDA; /* ja: above (unsigned >) */

loc_001A140C:
    eax = ZX8(MEM8(eax + 0x1A1DF8));
    { uint32_t _jt = MEM32(eax * 4 + 0x1A1DE4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001A141Au) goto loc_001A141A;
    if (_jt == 0x001A1466u) goto loc_001A1466;
    if (_jt == 0x001A1727u) goto loc_001A1727;
    if (_jt == 0x001A17F4u) goto loc_001A17F4;
    if (_jt == 0x001A1DDAu) goto loc_001A1DDA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001A141A:
    edi = 0x3FA024;
    ebx = esi + 0x343F0;

loc_001A1425:
    if (CMP_NE(MEM32(ebx), 0)) goto loc_001A144E; /* jne: not equal / not zero */

loc_001A142A:
    edx = MEM32(0x3FA644);
    if (CMP_NE(edx, 2)) goto loc_001A143D; /* jne: not equal / not zero */

loc_001A1435:
    ecx = edi + 0x4C0;
    goto loc_001A143F;

loc_001A143D:
    ecx = edi;

loc_001A143F:
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_001A1444:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx) = eax;
    if (TEST_Z(eax, eax)) goto loc_001A1D61; /* je: equal / zero */

loc_001A144E:
    edi = edi + 0x10;
    ebx = ebx + 4;
    if (CMP_L(edi, 0x3FA0E4)) goto loc_001A1425; /* jl: less (signed <) */

loc_001A145C:
    MEM32(esi + 0x374F8) = 2;

loc_001A1466:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001A171D; /* je: equal / zero */

loc_001A1470:
    edx = MEM32(eax + 0x58);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001A14B4; /* jle: less or equal (signed <=) */

loc_001A1479:
    eax = 0; /* xor self */
    goto loc_001A1480;

    /* nop */

loc_001A1480:
    edx = MEM32(esi);
    edx = MEM32(edx + 0x54);
    ebx = MEM32(eax + edx);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edi * 8 + 0x34390) = ebx;
    edx = MEM32(eax + edx + 4);
    MEM32(esi + edi * 8 + 0x34394) = edx;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;
    edx = MEM32(esi);
    edi = MEM32(edx + 0x58);
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edi)) goto loc_001A1480; /* jl: less (signed <) */

loc_001A14B4:
    eax = MEM32(esi);
    edx = MEM32(eax + 0x64);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001A14F5; /* jle: less or equal (signed <=) */

loc_001A14BF:
    eax = 0; /* xor self */

loc_001A14C1:
    edx = MEM32(esi);
    edx = MEM32(edx + 0x60);
    ebx = MEM32(eax + edx);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edi * 8 + 0x34390) = ebx;
    edx = MEM32(eax + edx + 4);
    MEM32(esi + edi * 8 + 0x34394) = edx;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;
    edx = MEM32(esi);
    edi = MEM32(edx + 0x64);
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edi)) goto loc_001A14C1; /* jl: less (signed <) */

loc_001A14F5:
    eax = MEM32(esi);
    edx = MEM32(eax + 0x70);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001A1536; /* jle: less or equal (signed <=) */

loc_001A1500:
    eax = 0; /* xor self */

loc_001A1502:
    edx = MEM32(esi);
    edx = MEM32(edx + 0x6C);
    ebx = MEM32(eax + edx);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edi * 8 + 0x34390) = ebx;
    edx = MEM32(eax + edx + 4);
    MEM32(esi + edi * 8 + 0x34394) = edx;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;
    edx = MEM32(esi);
    edi = MEM32(edx + 0x70);
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edi)) goto loc_001A1502; /* jl: less (signed <) */

loc_001A1536:
    eax = MEM32(esi);
    edx = MEM32(eax + 0x7C);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001A1577; /* jle: less or equal (signed <=) */

loc_001A1541:
    eax = 0; /* xor self */

loc_001A1543:
    edx = MEM32(esi);
    edx = MEM32(edx + 0x78);
    ebx = MEM32(eax + edx);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edi * 8 + 0x34390) = ebx;
    edx = MEM32(eax + edx + 4);
    MEM32(esi + edi * 8 + 0x34394) = edx;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;
    edx = MEM32(esi);
    edi = MEM32(edx + 0x7C);
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edi)) goto loc_001A1543; /* jl: less (signed <) */

loc_001A1577:
    eax = MEM32(esi);
    edx = MEM32(eax + 0x88);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001A15CA; /* jle: less or equal (signed <=) */

loc_001A1585:
    eax = 0; /* xor self */
    goto loc_001A1590;

    /* nop */

loc_001A1590:
    edx = MEM32(esi);
    edx = MEM32(edx + 0x84);
    ebx = MEM32(eax + edx);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edi * 8 + 0x34390) = ebx;
    edx = MEM32(eax + edx + 4);
    MEM32(esi + edi * 8 + 0x34394) = edx;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;
    edx = MEM32(esi);
    edi = MEM32(edx + 0x88);
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edi)) goto loc_001A1590; /* jl: less (signed <) */

loc_001A15CA:
    eax = MEM32(esi);
    edx = MEM32(eax + 0x94);
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_001A161A; /* jle: less or equal (signed <=) */

loc_001A15D8:
    eax = 0; /* xor self */
    /* nop */

loc_001A15E0:
    edx = MEM32(esi);
    edx = MEM32(edx + 0x90);
    ebx = MEM32(eax + edx);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edi * 8 + 0x34390) = ebx;
    edx = MEM32(eax + edx + 4);
    MEM32(esi + edi * 8 + 0x34394) = edx;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;
    edx = MEM32(esi);
    edi = MEM32(edx + 0x94);
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edi)) goto loc_001A15E0; /* jl: less (signed <) */

loc_001A161A:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 1)) goto loc_001A164D; /* je: equal / zero */

loc_001A1625:
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    if (CMP_A(eax & eax, 0)) goto loc_001A1632; /* ja: above (unsigned >) */

loc_001A162E:
    if (CMP_BE(ecx & ecx, 0)) goto loc_001A164D; /* jbe: below or equal (unsigned <=) */

loc_001A1632:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edx * 8 + 0x34390) = ecx;
    MEM32(esi + edx * 8 + 0x34394) = eax;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;

loc_001A164D:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 2)) goto loc_001A1681; /* je: equal / zero */

loc_001A1658:
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    if (CMP_A(eax & eax, 0)) goto loc_001A1666; /* ja: above (unsigned >) */

loc_001A1662:
    if (CMP_BE(ecx & ecx, 0)) goto loc_001A1681; /* jbe: below or equal (unsigned <=) */

loc_001A1666:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edx * 8 + 0x34390) = ecx;
    MEM32(esi + edx * 8 + 0x34394) = eax;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;

loc_001A1681:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 4)) goto loc_001A16B5; /* je: equal / zero */

loc_001A168C:
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    if (CMP_A(eax & eax, 0)) goto loc_001A169A; /* ja: above (unsigned >) */

loc_001A1696:
    if (CMP_BE(ecx & ecx, 0)) goto loc_001A16B5; /* jbe: below or equal (unsigned <=) */

loc_001A169A:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edx * 8 + 0x34390) = ecx;
    MEM32(esi + edx * 8 + 0x34394) = eax;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;

loc_001A16B5:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 8)) goto loc_001A16E9; /* je: equal / zero */

loc_001A16C0:
    ecx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x1C);
    if (CMP_A(eax & eax, 0)) goto loc_001A16CE; /* ja: above (unsigned >) */

loc_001A16CA:
    if (CMP_BE(ecx & ecx, 0)) goto loc_001A16E9; /* jbe: below or equal (unsigned <=) */

loc_001A16CE:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edx * 8 + 0x34390) = ecx;
    MEM32(esi + edx * 8 + 0x34394) = eax;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;

loc_001A16E9:
    eax = MEM32(esi);
    if (TEST_Z(MEM8(eax + 0xB5), 0x10)) goto loc_001A171D; /* je: equal / zero */

loc_001A16F4:
    ecx = MEM32(eax + 0x20);
    eax = MEM32(eax + 0x24);
    if (CMP_A(eax & eax, 0)) goto loc_001A1702; /* ja: above (unsigned >) */

loc_001A16FE:
    if (CMP_BE(ecx & ecx, 0)) goto loc_001A171D; /* jbe: below or equal (unsigned <=) */

loc_001A1702:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    MEM32(esi + edx * 8 + 0x34390) = ecx;
    MEM32(esi + edx * 8 + 0x34394) = eax;
    MEM8(esi + 0x34450) = MEM8(esi + 0x34450) + 1;

loc_001A171D:
    MEM32(esi + 0x374F8) = 3;

loc_001A1727:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A4260(); /* call 0x001A4260 */

loc_001A172D:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A1D61; /* je: equal / zero */

loc_001A1735:
    SET_LO8(eax, MEM8(esi + 0x34450));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001A17EA; /* jle: less or equal (signed <=) */

loc_001A174B:
    ebx = esi + 0x34390;
    edi = 0x4795F8;
    goto loc_001A1760;

    /* nop */
    /* nop */

loc_001A1760:
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    xmm1.f[0] = MEMF(0x3B174C); /* movss */
    xmm2.f[0] = MEMF(0x3A3408); /* movss */
    xmm3.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(edi + -16) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69B4); /* movss */
    eax = edi + -152;
    MEM8(eax) = 0;
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEMF(edi + -8) = xmm1.f[0]; /* movss */
    MEMF(edi + -4) = xmm2.f[0]; /* movss */
    MEMF(edi + -12) = xmm3.f[0]; /* movss */
    MEMF(edi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEMF(edi + 8) = xmm2.f[0]; /* movss */
    MEMF(edi + 0x10) = xmm3.f[0]; /* movss */
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00134AC0(); /* call 0x00134AC0 */

loc_001A17C9:
    eax = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x34450);
    eax++;
    ebx = ebx + 8;
    edi = edi + 0xB0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_001A1760; /* jl: less (signed <) */

loc_001A17EA:
    MEM32(esi + 0x374F8) = 4;

loc_001A17F4:
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    MEM32(esp + 0xC) = 0;
    edi = esi + 0x1282C;
    ebx = 0xFF;
    /* nop */

loc_001A1810:
    edx = edi + -92;
    PUSH32(esp, 0); sub_001A8C90(); /* call 0x001A8C90 */

loc_001A1818:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM8(edi + -46) = LO8(ebx);
    MEM16(edi + -48) = 0xFFFF;
    MEM8(edi + -45) = LO8(ebx);
    MEMF(edi + -88) = xmm0.f[0]; /* movss */
    MEMF(edi + -84) = xmm0.f[0]; /* movss */
    MEMF(edi + -80) = xmm0.f[0]; /* movss */
    MEMF(edi + -76) = xmm0.f[0]; /* movss */
    MEMF(edi + -72) = xmm4.f[0]; /* movss */
    MEMF(edi + -68) = xmm0.f[0]; /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    eax = 0xFFFF;
    MEM16(edi + -60) = LO16(eax);
    MEM16(edi + -58) = LO16(eax);
    MEM16(edi + -56) = LO16(eax);
    MEM16(edi + -54) = LO16(eax);
    ecx = 0; /* xor self */
    MEM32(edi + -52) = ecx;
    MEM16(edi + -12) = LO16(eax);
    MEM16(edi + -10) = LO16(eax);
    MEM16(edi + -8) = LO16(eax);
    MEM16(edi + -6) = LO16(eax);
    eax = MEM32(esp + 0xC);
    MEM8(edi + 2) = LO8(ebx);
    MEM16(edi) = 0xFFFF;
    MEM8(edi + 3) = LO8(ebx);
    MEM32(edi + -4) = ecx;
    MEMF(edi + -44) = xmm0.f[0]; /* movss */
    MEMF(edi + -40) = xmm0.f[0]; /* movss */
    MEMF(edi + -36) = xmm0.f[0]; /* movss */
    MEMF(edi + -32) = xmm0.f[0]; /* movss */
    MEMF(edi + -28) = xmm0.f[0]; /* movss */
    MEMF(edi + -24) = xmm4.f[0]; /* movss */
    MEMF(edi + -20) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x11B) = LO8(eax);
    eax++;
    edi = edi + 0x180;
    /* cmp eax, 0xFE - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, 0xFE)) goto loc_001A1810; /* jl: less (signed <) */

loc_001A18C4:
    xmm1.f[0] = MEMF(0x3B1694); /* movss */
    xmm2.f[0] = MEMF(0x3B16E4); /* movss */
    xmm3.f[0] = MEMF(0x3B16C0); /* movss */
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    eax = esi + 0x2F450;
    SET_LO8(edx, 0xE2);
    edi = 0xFFFF;
    /* nop */

loc_001A18F0:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm4.b, 16); /* movaps */
    MEM8(eax + -20277) = MEM8(eax + -20277) & LO8(edx);
    MEM8(eax + -20282) = 0;
    MEM32(eax + -20296) = 0;
    MEM8(eax + -20281) = LO8(ebx);
    MEM8(eax + -20287) = LO8(ebx);
    MEM8(eax + -20284) = LO8(ebx);
    MEM8(eax + -20283) = LO8(ebx);
    MEMF(eax + -20308) = xmm0.f[0]; /* movss */
    MEMF(eax + -20352) = xmm0.f[0]; /* movss */
    MEMF(eax + -20348) = xmm0.f[0]; /* movss */
    MEMF(eax + -20304) = xmm0.f[0]; /* movss */
    MEMF(eax + -20300) = xmm0.f[0]; /* movss */
    MEMF(eax + -20320) = xmm0.f[0]; /* movss */
    MEMF(eax + -20324) = xmm0.f[0]; /* movss */
    MEMF(eax + -20344) = xmm1.f[0]; /* movss */
    MEMF(eax + -20340) = xmm2.f[0]; /* movss */
    MEM8(eax + -20278) = LO8(ebx);
    MEMF(eax + -20312) = xmm0.f[0]; /* movss */
    MEMF(eax + -20336) = xmm3.f[0]; /* movss */
    MEMF(eax + -20332) = xmm1.f[0]; /* movss */
    MEM8(eax + -20275) = 0;
    MEMF(eax + -20328) = xmm0.f[0]; /* movss */
    MEM8(eax + -20288) = LO8(ebx);
    MEMF(eax + -20316) = xmm0.f[0]; /* movss */
    MEM8(eax + -20276) = 0;
    MEM8(eax + -20280) = 0;
    MEM8(eax + -20286) = LO8(ebx);
    MEM8(eax + -20285) = LO8(ebx);
    MEM16(eax + -20292) = LO16(edi);
    MEM16(eax + -20290) = LO16(edi);
    MEM8(eax + -20279) = LO8(ebx);
    MEM8(eax + -20279) = LO8(ecx);
    ecx++;
    eax = eax + 0x50;
    if (CMP_L(ecx, 0xFE)) goto loc_001A18F0; /* jl: less (signed <) */

loc_001A1A18:
    eax = esi;
    PUSH32(esp, 0); sub_001A3EA0(); /* call 0x001A3EA0 */

loc_001A1A1F:
    edx = MEM32(0x73A164);
    eax = MEM32(edx + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(esi + 0x36340) = eax;
    eax = MEM32(esi);
    /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x363AB) = 0xFE;
    if (TEST_Z(eax, eax)) goto loc_001A1D6A; /* je: equal / zero */

loc_001A1A44:
    if (TEST_Z(MEM8(eax + 0xB4), 1)) goto loc_001A1AA0; /* je: equal / zero */

loc_001A1A4D:
    eax = MEM32(0x4D5370);
    if (TEST_Z(eax, eax)) goto loc_001A1A97; /* je: equal / zero */

loc_001A1A56:
    edi = MEM32(eax + 0x1B8);
    if (TEST_Z(edi, edi)) goto loc_001A1A97; /* je: equal / zero */

loc_001A1A60:
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x90), _icall_esp); /* indirect call */
    }

loc_001A1A6A:
    if (CMP_EQ(eax, 6)) goto loc_001A1A97; /* je: equal / zero */

loc_001A1A6F:
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_001A1A79:
    if (CMP_EQ(eax, 3)) goto loc_001A1A97; /* je: equal / zero */

loc_001A1A7E:
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x94), _icall_esp); /* indirect call */
    }

loc_001A1A88:
    if (CMP_EQ(eax, 4)) goto loc_001A1A97; /* je: equal / zero */

loc_001A1A8D:
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x94), _icall_esp); /* indirect call */
    }

loc_001A1A97:
    MEM8(esi + 0x363B7) = 1;
    goto loc_001A1AA7;

loc_001A1AA0:
    MEM8(esi + 0x363B7) = 0;

loc_001A1AA7:
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0xB4));
    SET_LO8(ecx, LO8(ecx) >> 1);
    SET_LO8(ecx, LO8(ecx) & 1);
    MEM8(esi + 0x363BA) = LO8(ecx);
    if (TEST_Z(MEM8(eax + 0xB4), 4)) goto loc_001A1AFE; /* je: equal / zero */

loc_001A1AC3:
    MEM8(esi + 0x363B8) = 1;
    edx = esi + 0x114;
    edi = ebx;

loc_001A1AD2:
    eax = 0; /* xor self */
    ecx = edx + -224;
    /* nop */

loc_001A1AE0:
    MEM8(eax + edx) = 0;
    MEM32(ecx) = 0;
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 4)) goto loc_001A1AE0; /* jl: less (signed <) */

loc_001A1AF3:
    edx = edx + 0x118;
    edi--;
    if ((edi != 0)) goto loc_001A1AD2; /* jne: not equal / not zero */

loc_001A1AFC:
    goto loc_001A1B05;

loc_001A1AFE:
    MEM8(esi + 0x363B8) = 0;

loc_001A1B05:
    /* cmp MEM32(0x4D5370), 0x4D4798 - flags set for next jcc */
    SET_LO8(edx, (CMP_EQ(MEM32(0x4D5370), 0x4D4798)) ? 1 : 0); /* sete */
    MEM8(esi + 0x363B9) = LO8(edx);
    MEM8(esi + 0x363BE) = 0;
    PUSH32(esp, 0); sub_001A2770(); /* call 0x001A2770 */

loc_001A1B24:
    MEM8(esi + 0x363BD) = 1;
    MEM8(esi + 0x363B2) = 0;
    MEM8(esi + 0x363B3) = 0;
    /* nop */

loc_001A1B40:
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001A3AE0(); /* call 0x001A3AE0 */

loc_001A1B48:
    SET_LO8(eax, MEM8(esi + 0x363BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001A1B40; /* jne: not equal / not zero */

loc_001A1B52:
    eax = MEM32(esi);
    SET_LO8(eax, MEM8(eax + 0x30));
    edx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x363B0) = LO8(eax);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A1BCA; /* jbe: below or equal (unsigned <=) */

loc_001A1B63:
    edi = 0; /* xor self */
    eax = esi + 0x116FC;
    goto loc_001A1B70;

    /* nop */

loc_001A1B70:
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x2C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = ecx + edi;
    MEM32(eax + -16) = ecx;
    MEM8(eax + 4) = 0;
    MEM32(eax) = 0xFFFFFFFFu;
    MEM8(eax + 5) = LO8(ebx);
    MEM8(eax + 6) = LO8(ebx);
    MEM8(eax + 7) = LO8(ebx);
    MEM8(eax + 8) = LO8(ebx);
    MEMF(eax + -12) = xmm0.f[0]; /* movss */
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEM8(eax + 9) = 0;
    MEM8(eax + 0xA) = 0;
    MEM8(eax + 0xB) = 0;
    /* cmp MEM32(ecx + 0x50), 4 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(ecx + 0x50), 4)) ? 1 : 0); /* sete */
    MEM8(eax + 0xC) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x363B0));
    edx++;
    edi = edi + 0x58;
    eax = eax + 0x20;
    if (CMP_L(edx, ecx)) goto loc_001A1B70; /* jl: less (signed <) */

loc_001A1BCA:
    edx = MEM32(esi);
    SET_LO8(eax, MEM8(edx + 0x40));
    ebx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x363AD) = LO8(eax);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A1C4F; /* jbe: below or equal (unsigned <=) */

loc_001A1BDB:
    MEM32(esp + 0xC) = ebx;
    edi = esi + 0x44;

loc_001A1BE2:
    eax = MEM32(esi);
    edx = MEM32(eax + 0x3C);
    edx = edx + MEM32(esp + 0xC);
    eax = edi + -64;
    PUSH32(esp, 0); sub_001A5680(); /* call 0x001A5680 */

loc_001A1BF3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A1D61; /* je: equal / zero */

loc_001A1BFB:
    edx = MEM32(edi);
    eax = MEM32(edx + 8);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001A1C32; /* jle: less or equal (signed <=) */

loc_001A1C06:
    eax = MEM32(edi);
    edx = MEM32(eax);
    eax = MEM32(edx + ecx * 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;
    edx = ZX8(MEM8(eax + 0x48));
    MEM8(edx + eax + 6) = LO8(ebx);
    edx = ZX8(MEM8(eax + 0x48));
    MEM8(edx + eax + 0x1E) = LO8(ecx);
    MEM8(eax + 0x48) = MEM8(eax + 0x48) + 1;
    eax = MEM32(edi);
    edx = MEM32(eax + 8);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_001A1C06; /* jl: less (signed <) */

loc_001A1C32:
    edx = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(esi + 0x363AD));
    ebx++;
    edx = edx + 0x10;
    edi = edi + 0x118;
    /* cmp ebx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    if (CMP_L(ebx, ecx)) goto loc_001A1BE2; /* jl: less (signed <) */

loc_001A1C4F:
    edx = MEM32(esi);
    SET_LO8(eax, MEM8(edx + 0x48));
    ecx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x363AE) = LO8(eax);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A1C94; /* jbe: below or equal (unsigned <=) */

loc_001A1C60:
    edx = esi + 0x123D0;

loc_001A1C66:
    eax = MEM32(esi);
    eax = MEM32(eax + 0x44);
    eax = eax + ecx * 8;
    MEM32(edx) = eax;
    eax = MEM32(eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x60EC2C;
    edi = ZX8(MEM8(eax + 0x49));
    MEM8(edi + eax + 0x36) = LO8(ecx);
    MEM8(eax + 0x49) = MEM8(eax + 0x49) + 1;
    eax = ZX8(MEM8(esi + 0x363AE));
    ecx++;
    edx = edx + 8;
    if (CMP_L(ecx, eax)) goto loc_001A1C66; /* jl: less (signed <) */

loc_001A1C94:
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx + 0x38));
    edx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x363AF) = LO8(eax);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A1CE7; /* jbe: below or equal (unsigned <=) */

loc_001A1CA5:
    edi = 0xFFFEE82Cu;
    eax = esi + 0x117D4;
    edi = edi - esi;

loc_001A1CB2:
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x34);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = ecx + edi;
    ecx = ecx + eax;
    MEM8(eax + 0xC) = 2;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax + -8) = ecx;
    ecx = MEM32(eax + -4);
    ecx = MEM32(ecx);
    MEM32(eax + 4) = ecx;
    ecx = ZX8(MEM8(esi + 0x363AF));
    edx++;
    eax = eax + 0x18;
    if (CMP_L(edx, ecx)) goto loc_001A1CB2; /* jl: less (signed <) */

loc_001A1CE7:
    SET_LO8(eax, MEM8(esi + 0x363AF));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A1D86; /* jbe: below or equal (unsigned <=) */

loc_001A1CFD:
    edi = esi + 0x117CC;

loc_001A1D03:
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x14));
    ebx = 0; /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_001A1D48; /* jbe: below or equal (unsigned <=) */

loc_001A1D0E:
    edi = edi;

loc_001A1D10:
    ecx = ZX8(MEM8(eax + ebx + 0x10));
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x1F;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 5);
    ecx = ecx & 0x8000001Fu;
    eax = esi + eax * 4 + 0x36320;
    if (((int32_t)ecx >= 0)) goto loc_001A1D34; /* jns: not sign (positive) */

loc_001A1D2F:
    ecx--;
    ecx = ecx | 0xFFFFFFE0u;
    ecx++;

loc_001A1D34:
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    eax = MEM32(edi);
    ecx = ZX8(MEM8(eax + 0x14));
    ebx++;
    if (CMP_L(ebx, ecx)) goto loc_001A1D10; /* jl: less (signed <) */

loc_001A1D48:
    eax = MEM32(esp + 0xC);
    edx = ZX8(MEM8(esi + 0x363AF));
    eax++;
    edi = edi + 0x18;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, edx)) goto loc_001A1D03; /* jl: less (signed <) */

loc_001A1D5F:
    goto loc_001A1D86;

loc_001A1D61:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A1D6A:
    MEM8(esi + 0x363B0) = 0;
    MEM8(esi + 0x363AD) = 0;
    MEM8(esi + 0x363AE) = 0;
    MEM8(esi + 0x363AF) = 0;

loc_001A1D86:
    ecx = MEM32(0x73A194);
    edx = MEM32(0x73A190);
    eax = 0; /* xor self */

loc_001A1D94:
    edi = MEM32(eax * 8 + 0x39EBC0);
    if (CMP_NE(edi, edx)) goto loc_001A1DAA; /* jne: not equal / not zero */

loc_001A1D9F:
    edi = MEM32(eax * 8 + 0x39EBC4);
    if (CMP_EQ(edi, ecx)) goto loc_001A1DB3; /* je: equal / zero */

loc_001A1DAA:
    eax++;
    if (CMP_L(eax, 0x24)) goto loc_001A1D94; /* jl: less (signed <) */

loc_001A1DB0:
    eax = eax | 0xFFFFFFFFu;

loc_001A1DB3:
    SET_LO8(ecx, MEM8(eax + eax * 2 + 0x39EE90));
    MEM8(esi + 0x363B4) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + eax * 2 + 0x39EE91));
    MEM8(esi + 0x363B5) = LO8(edx);
    SET_LO8(eax, MEM8(eax + eax * 2 + 0x39EE92));
    MEM8(esi + 0x363B6) = LO8(eax);

loc_001A1DDA:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
