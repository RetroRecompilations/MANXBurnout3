#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AFF70
 * Original: 0x001AFF70 - 0x001B02AF (831 bytes, 241 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AFF70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001AFF70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x254;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = esi;
    ecx = ebx;
    PUSH32(esp, 0); sub_001B0420(); /* call 0x001B0420 */

loc_001AFF8E:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B02A6; /* je: equal / zero */

loc_001AFF96:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    xmm1.f[0] = MEMF(esi + 0xC); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = esp + 0x14;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esi + 0xC); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    ecx = esp + 0x14;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* addps: xmm2.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A67D4); /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm2.b, 16); /* movaps */
    edx = esp + 0x14;
    xmm2.f[0] = MEMF(edx); /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    eax = esp + 0x14;
    xmm1.f[0] = MEMF(eax); /* movss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x10) - sets EFLAGS */
    /* shufps xmm2, xmm2, 0 */
    /* subps: xmm3.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm3.b, 16); /* movaps */
    if ((xmm0.f[0] < MEMF(ebx + 0x10))) goto loc_001B02A6; /* jb: below (unsigned <) */

loc_001B0039:
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(ebx + 0x14))) goto loc_001B02A6; /* jb: below (unsigned <) */

loc_001B0049:
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(ebx + 0x18))) goto loc_001B02A6; /* jb: below (unsigned <) */

loc_001B0059:
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x30) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x30))) goto loc_001B02A6; /* jb: below (unsigned <) */

loc_001B0068:
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x34) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x34))) goto loc_001B02A6; /* jb: below (unsigned <) */

loc_001B0078:
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x38) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + 0x38))) goto loc_001B02A6; /* jb: below (unsigned <) */

loc_001B0088:
    ecx = 0; /* xor self */
    /* cmp MEM16(ebx + 0x2A), LO16(ecx) - flags set for next jcc */
    MEM16(esp + 0x1C) = LO16(ecx);
    if (CMP_NE(MEM16(ebx + 0x2A), LO16(ecx))) goto loc_001B009E; /* jne: not equal / not zero */

loc_001B0095:
    SET_LO8(edx, MEM8(ebx + 0x28));
    MEM8(esp + 0x1F) = LO8(edx);
    goto loc_001B00A3;

loc_001B009E:
    MEM8(esp + 0x1F) = 0xFF;

loc_001B00A3:
    xmm0.f[0] = MEMF(esp + 0x50); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x10) - sets EFLAGS */
    eax = esp + 0x18;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x14) = 1;
    if ((xmm0.f[0] > MEMF(ebx + 0x10))) goto loc_001B00C3; /* ja: above (unsigned >) */

loc_001B00BF:
    MEM32(esp + 0x14) = ecx;

loc_001B00C3:
    xmm0.f[0] = MEMF(esp + 0x54); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x14) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebx + 0x14))) goto loc_001B00D6; /* jbe: below or equal (unsigned <=) */

loc_001B00CF:
    edi = 4;
    goto loc_001B00D8;

loc_001B00D6:
    edi = 0; /* xor self */

loc_001B00D8:
    xmm0.f[0] = MEMF(esp + 0x58); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebx + 0x18))) goto loc_001B00EB; /* jbe: below or equal (unsigned <=) */

loc_001B00E4:
    esi = 0x10;
    goto loc_001B00ED;

loc_001B00EB:
    esi = 0; /* xor self */

loc_001B00ED:
    xmm0.f[0] = MEMF(ebx); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x40) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x40))) goto loc_001B00FF; /* jbe: below or equal (unsigned <=) */

loc_001B00F8:
    edx = 2;
    goto loc_001B0101;

loc_001B00FF:
    edx = 0; /* xor self */

loc_001B0101:
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x44) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x44))) goto loc_001B0112; /* jbe: below or equal (unsigned <=) */

loc_001B010D:
    ecx = 8;

loc_001B0112:
    xmm0.f[0] = MEMF(ebx + 8); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x48) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x48))) goto loc_001B0125; /* jbe: below or equal (unsigned <=) */

loc_001B011E:
    eax = 0x20;
    goto loc_001B0127;

loc_001B0125:
    eax = 0; /* xor self */

loc_001B0127:
    eax = eax | ecx;
    ecx = MEM32(esp + 0x14);
    eax = eax | edx;
    eax = eax | esi;
    eax = eax | edi;
    eax = eax | ecx;
    MEM32(esp + 0x64) = eax;
    esi = esp + 0x68;
    /* nop */

loc_001B0140:
    eax = MEM32(esi + -8);
    SET_LO8(ecx, MEM8(eax + 7));
    edi = MEM32(esi + -4);
    esi = esi - 8;
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_001B01E2; /* jne: not equal / not zero */

loc_001B0155:
    eax = ZX16(MEM16(eax + 4));
    ebx = MEM32(esi + 4);
    ecx = MEM32(ebp + 8);
    eax = eax << 4;
    if (TEST_Z(ebx, ebx)) goto loc_001B01ED; /* je: equal / zero */

loc_001B016A:
    edx = MEM32(ecx + 0x20);
    SET_LO8(ecx, MEM8(eax + edx + 6));
    eax = eax + edx;
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    ecx = ZX8(LO8(ecx));
    /* comiss xmm0.f[0], MEMF(esp + ecx * 4 + 0x20) - sets EFLAGS */
    edx = eax + 8;
    if ((xmm0.f[0] <= MEMF(esp + ecx * 4 + 0x20))) goto loc_001B0189; /* jbe: below or equal (unsigned <=) */

loc_001B0185:
    MEM32(esi) = eax;
    goto loc_001B01D0;

loc_001B0189:
    xmm0.f[0] = MEMF(eax); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + ecx * 4 + 0x30) - sets EFLAGS */
    MEM32(esi) = edx;
    if ((xmm0.f[0] < MEMF(esp + ecx * 4 + 0x30))) goto loc_001B01D0; /* jb: below (unsigned <) */

loc_001B0196:
    xmm0.f[0] = MEMF(edx); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + ecx * 4 + 0x50) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esp + ecx * 4 + 0x50))) goto loc_001B01AF; /* jb: below (unsigned <) */

loc_001B01A1:
    edx = 1;
    edx = edx << LO8(ecx);
    edx = ~edx;
    edx = edx & ebx;
    MEM32(esi + 4) = edx;

loc_001B01AF:
    xmm0.f[0] = MEMF(esp + ecx * 4 + 0x40); /* movss */
    esi = esi + 8;
    /* comiss xmm0.f[0], MEMF(eax) - sets EFLAGS */
    MEM32(esi) = eax;
    MEM32(esi + 4) = edi;
    if ((xmm0.f[0] < MEMF(eax))) goto loc_001B01D0; /* jb: below (unsigned <) */

loc_001B01C2:
    eax = 2;
    eax = eax << LO8(ecx);
    eax = ~eax;
    eax = eax & edi;
    MEM32(esi + 4) = eax;

loc_001B01D0:
    eax = MEM32(esi);
    /* cmp MEM8(eax + 7), 0xFF - flags set for next jcc */
    edi = MEM32(esi + 4);
    if (CMP_EQ(MEM8(eax + 7), 0xFF)) goto loc_001B0155; /* je: equal / zero */

loc_001B01DF:
    ebx = MEM32(ebp + 8);

loc_001B01E2:
    SET_LO16(eax, MEM16(eax + 4));
    ecx = 1;
    goto loc_001B0247;

loc_001B01ED:
    edi = MEM32(ecx + 0x20);
    SET_LO8(ecx, MEM8(eax + edi + 7));
    eax = eax + edi;
    /* cmp LO8(ecx), 0xFF - flags set for next jcc */
    edx = eax;
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_001B0212; /* jne: not equal / not zero */

loc_001B01FD:
    /* nop */

loc_001B0200:
    edx = ZX16(MEM16(edx + 4));
    edx = edx << 4;
    SET_LO8(ecx, MEM8(edx + edi + 7));
    edx = edx + edi;
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_001B0200; /* je: equal / zero */

loc_001B0212:
    ecx = eax + 8;
    if (CMP_NE(MEM8(ecx + 7), 0xFF)) goto loc_001B0231; /* jne: not equal / not zero */

loc_001B021B:
    goto loc_001B0220;

    /* nop */

loc_001B0220:
    eax = ZX16(MEM16(ecx + 4));
    eax = eax << 4;
    ecx = eax + edi + 8;
    if (CMP_EQ(MEM8(ecx + 7), 0xFF)) goto loc_001B0220; /* je: equal / zero */

loc_001B0231:
    ecx = ZX16(MEM16(ecx + 4));
    ebx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 4));
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    ecx++;
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_001B029A; /* jbe: below or equal (unsigned <=) */

loc_001B0247:
    ecx = ZX16(LO16(ecx));
    edi = eax;
    MEM32(esp + 0x14) = ecx;

loc_001B0250:
    eax = MEM32(ebx + 0x2C);
    edx = MEM32(ebp + 0x14);
    /* test eax, eax - flags set for next jcc */
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    if (TEST_Z(eax, eax)) goto loc_001B0278; /* je: equal / zero */

loc_001B025F:
    eax = MEM32(ebx + 0x24);
    ecx = ZX16(LO16(edi));
    ecx = ecx << 4;
    ecx = ecx + eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001B2940(); /* call 0x001B2940 */

loc_001B0273:
    esp = esp + 0xC;
    goto loc_001B028E;

loc_001B0278:
    ecx = MEM32(ebx + 0x24);
    eax = ZX16(LO16(edi));
    eax = eax << 4;
    eax = eax + ecx;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_001B1D40(); /* call 0x001B1D40 */

loc_001B028B:
    esp = esp + 8;

loc_001B028E:
    eax = MEM32(esp + 0x14);
    edi++;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001B0250; /* jne: not equal / not zero */

loc_001B029A:
    ecx = esp + 0x60;
    if (CMP_A(esi, ecx)) goto loc_001B0140; /* ja: above (unsigned >) */

loc_001B02A6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
