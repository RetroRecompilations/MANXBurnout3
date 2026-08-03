#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001AF980
 * Original: 0x001AF980 - 0x001AFC86 (774 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001AF980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001AF980:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x358;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEMF(eax + 0x50) = xmm0.f[0]; /* movss */
    ecx = MEM32(edi);
    edx = MEM32(edi + 0x10);
    eax = MEM32(ebx + 0x10);
    xmm3.f[0] = MEMF(ebx); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    esi = 0; /* xor self */
    MEM32(esp + 0x24) = edx;
    ecx = esp + 0x28;
    edx = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_001B0330(); /* call 0x001B0330 */

loc_001AF9E3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AFC7C; /* je: equal / zero */

loc_001AF9EB:
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 0x14);
    edx = MEM32(ebx + 0x14);
    xmm3.f[0] = MEMF(ebx + 4); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    edx = esp + 0x2C;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_001B0330(); /* call 0x001B0330 */

loc_001AFA1A:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AFC7C; /* je: equal / zero */

loc_001AFA22:
    edx = MEM32(edi + 8);
    ecx = MEM32(ebx + 0x18);
    eax = MEM32(edi + 0x18);
    xmm3.f[0] = MEMF(ebx + 8); /* movss */
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    edx = esp + 0x2C;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_001B0330(); /* call 0x001B0330 */

loc_001AFA51:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001AFC7C; /* je: equal / zero */

loc_001AFA59:
    /* cmp MEM16(edi + 0x2A), LO16(esi) - flags set for next jcc */
    MEM16(esp + 0x2C) = LO16(esi);
    if (CMP_NE(MEM16(edi + 0x2A), LO16(esi))) goto loc_001AFA6D; /* jne: not equal / not zero */

loc_001AFA64:
    SET_LO8(ecx, MEM8(edi + 0x28));
    MEM8(esp + 0x2F) = LO8(ecx);
    goto loc_001AFA72;

loc_001AFA6D:
    MEM8(esp + 0x2F) = 0xFF;

loc_001AFA72:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x30;
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00162350(); /* call 0x00162350 */

loc_001AFA91:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm4.f[0] = MEMF(0x3B169C); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    edx = esp + 0x28;
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEM32(esp + 0x60) = edx;
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    esi = esp + 0x6C;
    goto loc_001AFAD7;

loc_001AFACF:
    xmm4.f[0] = MEMF(0x3B169C); /* movss */

loc_001AFAD7:
    eax = MEM32(esi + -12);
    SET_LO8(ecx, MEM8(eax + 7));
    esi = esi - 0xC;
    if (CMP_NE(LO8(ecx), 0xFF)) goto loc_001AFC20; /* jne: not equal / not zero */

loc_001AFAE9:
    ebx = MEM32(edi + 0x20);
    /* nop */

loc_001AFAF0:
    ecx = MEM32(esi);
    eax = ZX16(MEM16(ecx + 4));
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    xmm1.f[0] = MEMF(esi + 4); /* movss */
    eax = eax << 4;
    ecx = ZX8(MEM8(eax + ebx + 6));
    eax = eax + ebx;
    ecx = ecx << 2;
    xmm2.f[0] = MEMF(esp + ecx + 0x40); /* movss */
    /* comiss xmm2.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    xmm3.f[0] = MEMF(esp + ecx + 0x50); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    if ((xmm2.f[0] <= MEMF(0x3B16E0))) goto loc_001AFB99; /* jbe: below or equal (unsigned <=) */

loc_001AFB32:
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    edx = eax + 8;
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_001AFB46; /* jbe: below or equal (unsigned <=) */

loc_001AFB3F:
    MEM32(esi) = eax;
    goto loc_001AFC11;

loc_001AFB46:
    /* comiss xmm1.f[0], MEMF(eax) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(eax))) goto loc_001AFB52; /* jbe: below or equal (unsigned <=) */

loc_001AFB4B:
    MEM32(esi) = edx;
    goto loc_001AFC11;

loc_001AFB52:
    xmm3.f[0] = MEMF(esp + ecx + 0x30); /* movss */
    ecx = MEM32(esi + 4);
    xmm2.f[0] = MEMF(esi + 8); /* movss */
    esi = esi + 0xC;
    /* comiss xmm0.f[0], MEMF(eax) - sets EFLAGS */
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(eax))) goto loc_001AFB8B; /* jbe: below or equal (unsigned <=) */

loc_001AFB72:
    xmm5.f[0] = MEMF(eax); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 8) = xmm5.f[0]; /* movss */

loc_001AFB8B:
    xmm0.f[0] = MEMF(edx); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEM32(esi + -12) = edx;
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001AFC11; /* jbe: below or equal (unsigned <=) */

loc_001AFB97:
    goto loc_001AFBFB;

loc_001AFB99:
    /* comiss xmm0.f[0], MEMF(eax) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax))) goto loc_001AFBA5; /* jbe: below or equal (unsigned <=) */

loc_001AFB9E:
    eax = eax + 8;
    MEM32(esi) = eax;
    goto loc_001AFC11;

loc_001AFBA5:
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    edx = eax + 8;
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_001AFBB6; /* jbe: below or equal (unsigned <=) */

loc_001AFBB2:
    MEM32(esi) = eax;
    goto loc_001AFC11;

loc_001AFBB6:
    xmm3.f[0] = MEMF(esp + ecx + 0x30); /* movss */
    ecx = MEM32(esi + 4);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm2.f[0] = MEMF(esi + 8); /* movss */
    esi = esi + 0xC;
    /* comiss xmm5.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(esi) = edx;
    MEM32(esi + 4) = ecx;
    MEMF(esi + 8) = xmm2.f[0]; /* movss */
    if ((xmm5.f[0] <= xmm0.f[0])) goto loc_001AFBEF; /* jbe: below or equal (unsigned <=) */

loc_001AFBDA:
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(esi + 8) = xmm5.f[0]; /* movss */

loc_001AFBEF:
    /* comiss xmm1.f[0], MEMF(eax) - sets EFLAGS */
    MEM32(esi + -12) = eax;
    if ((xmm1.f[0] <= MEMF(eax))) goto loc_001AFC11; /* jbe: below or equal (unsigned <=) */

loc_001AFBF7:
    xmm0.f[0] = MEMF(eax); /* movss */

loc_001AFBFB:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + -8); /* addss */
    MEMF(esi + -8) = xmm0.f[0]; /* movss */

loc_001AFC11:
    edx = MEM32(esi);
    if (CMP_EQ(MEM8(edx + 7), 0xFF)) goto loc_001AFAF0; /* je: equal / zero */

loc_001AFC1D:
    ebx = MEM32(ebp + 8);

loc_001AFC20:
    ecx = MEM32(edi + 0x2C);
    /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi);
    SET_LO16(eax, MEM16(eax + 4));
    if (TEST_Z(ecx, ecx)) goto loc_001AFC44; /* je: equal / zero */

loc_001AFC2D:
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(edi + 0x24);
    eax = ZX16(LO16(eax));
    PUSH32(esp, ecx);
    eax = eax << 4;
    eax = eax + edx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001B24A0(); /* call 0x001B24A0 */

loc_001AFC42:
    goto loc_001AFC59;

loc_001AFC44:
    edx = MEM32(ebp + 0xC);
    ecx = ZX16(LO16(eax));
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x24);
    ecx = ecx << 4;
    ecx = ecx + edx;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001B1370(); /* call 0x001B1370 */

loc_001AFC59:
    ecx = MEM32(esp + 0x1C);
    ecx = ecx | eax;
    eax = esp + 0x68;
    esp = esp + 8;
    /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_A(esi, eax)) goto loc_001AFACF; /* ja: above (unsigned >) */

loc_001AFC72:
    eax = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_001AFC7C:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
