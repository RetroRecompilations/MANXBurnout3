#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001807C0
 * Original: 0x001807C0 - 0x00180EC7 (1799 bytes, 464 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001807C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001807C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    eax = MEM32(ebp + 0x10);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = MEMF(0x3B1728); /* movss */
    ecx = eax + eax * 2;
    eax = MEM32(ebp + 0xC);
    ecx = ecx << 6;
    PUSH32(esp, ebx);
    ebx = ecx + eax + 0x820;
    SET_LO8(ecx, MEM8(eax + 0x215));
    SET_LO8(eax, MEM8(ebx + 0xB3));
    /* cmp LO8(ecx), 1 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(ecx), 1)) ? 1 : 0); /* sete */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ebx + 0xB0));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x78) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    edx = edx & 0xFF;
    edi = edx;
    esi = edi;
    esi = esi << 4;
    esi = esi + 0x3A3BF8;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x16) = LO8(ecx);
    MEM8(esp + 0x17) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001808BD; /* je: equal / zero */

loc_0018083E:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00180867; /* je: equal / zero */

loc_00180842:
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    ecx = MEM32(ecx + 0x4D0740);
    ecx = ecx & 0x20;
    edx = 0; /* xor self */
    ecx = ecx | edx;
    if ((ecx == 0)) goto loc_00180867; /* je: equal / zero */

loc_0018085B:
    ecx = MEM32(ebp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_001808BB; /* je: equal / zero */

loc_00180862:
    if (CMP_EQ(ecx, 1)) goto loc_001808BB; /* je: equal / zero */

loc_00180867:
    if (CMP_EQ(edi, 4)) goto loc_00180893; /* je: equal / zero */

loc_0018086C:
    if (CMP_EQ(edi, 0xE)) goto loc_00180893; /* je: equal / zero */

loc_00180871:
    if (CMP_NE(edi, 0xB)) goto loc_001808BD; /* jne: not equal / not zero */

loc_00180876:
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    ecx = ebx + 0x10;
    edx = edx + 0x3A370;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = 3;
    goto loc_001808AD;

loc_00180893:
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ebx + 0x20;
    PUSH32(esp, ecx);
    edx = ebx + 0x10;
    PUSH32(esp, edx);
    eax = eax + 0x3A370;
    PUSH32(esp, eax);
    edx = 2;

loc_001808AD:
    edi = ebx + 0x80;
    PUSH32(esp, 0); sub_0003B350(); /* call 0x0003B350 */

loc_001808B8:
    xmm1.f[0] = 0.0f; /* xorps self = zero */

loc_001808BB:
    SET_LO8(eax, 0); /* xor self */

loc_001808BD:
    SET_LO8(ecx, MEM8(ebx + 0xB3));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00180914; /* je: equal / zero */

loc_001808C7:
    ecx = MEM32(ebx + 0x78);
    ecx--;
    if (CMP_A(ecx, 5)) goto loc_00180914; /* ja: above (unsigned >) */

loc_001808D0:
    { uint32_t _jt = MEM32(ecx * 4 + 0x180EC8); /* switch: 6 entries, 3 targets */
    if (_jt == 0x001808D7u) goto loc_001808D7;
    if (_jt == 0x001808D9u) goto loc_001808D9;
    if (_jt == 0x001808E7u) goto loc_001808E7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001808D7:
    SET_LO8(eax, 0); /* xor self */

loc_001808D9:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_001808E7:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00180914; /* je: equal / zero */

loc_001808EB:
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = ebx + 0x20;
    PUSH32(esp, edx);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    ecx = ecx + 0x3A370;
    edi = ebx + 0x80;
    PUSH32(esp, ecx);
    edx = 1;
    PUSH32(esp, 0); sub_0003B350(); /* call 0x0003B350 */

loc_00180911:
    xmm1.f[0] = 0.0f; /* xorps self = zero */

loc_00180914:
    SET_LO8(eax, MEM8(esp + 0x17));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x20) = 0x1A;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00180954; /* je: equal / zero */

loc_00180924:
    if (CMP_BE(MEM32(ebp + 0x10), 1)) goto loc_00180932; /* jbe: below or equal (unsigned <=) */

loc_0018092A:
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xC);
    MEM32(esp + 0x20) = edx;

loc_00180932:
    xmm1.f[0] = MEMF(esi); /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00180960;

loc_00180954:
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_00180960:
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x6457C);
    esi = ebx + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001805B0(); /* call 0x001805B0 */

loc_00180975:
    edi = MEM32(ebp + 8);
    edx = MEM32(edi + 0x6457C);
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    esi = ebx + 0xA1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001805B0(); /* call 0x001805B0 */

loc_00180990:
    eax = MEM32(edi + 0x6457C);
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    esi = ebx + 0xA2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001805B0(); /* call 0x001805B0 */

loc_001809A8:
    eax = MEM32(esp + 0x2C);
    esp = esp + 0xC;
    if (CMP_NE(eax, 0x1A)) goto loc_001809D0; /* jne: not equal / not zero */

loc_001809B4:
    SET_LO8(ecx, MEM8(ebx + 0xA1));
    SET_LO8(edx, MEM8(ebx + 0xA0));
    SET_LO8(eax, MEM8(ebx + 0xA2));
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    if ((LO8(ecx) == 0)) goto loc_00180EBE; /* je: equal / zero */

loc_001809D0:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x30), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* subps: xmm2.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(edi + 0x64580); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    edx = esp + 0x1C;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x80) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A2928) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm3.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(0x3A2928))) goto loc_00180A94; /* jbe: below or equal (unsigned <=) */

loc_00180A5D:
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00180A94:
    /* cmp MEM32(ebp + 0x10), 2 - flags set for next jcc */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    if (CMP_B(MEM32(ebp + 0x10), 2)) goto loc_00180BCB; /* jb: below (unsigned <) */

loc_00180AAC:
    xmm5.f[0] = MEMF(ebx + 0x5C); /* movss */
    edx = MEM32(ebp + 0xC);
    xmm5.f[0] = xmm5.f[0] * MEMF(ebx + 0x50); /* mulss */
    eax = MEM32(edx + 0xCC0);
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    xmm7.f[0] = MEMF(0x3A69B4); /* movss */
    /* cmp MEM32(ebx + 0x78), 1 - flags set for next jcc */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    ecx = esp + 0x24;
    xmm6.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm6, xmm6, 0 */
    /* mulps: xmm4.f[0] *= xmm6.f[0] (packed 4xfloat) */
    ecx = esp + 0x24;
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm6.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm6, xmm6, 0 */
    /* mulps: xmm4.f[0] *= xmm6.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm3.b, 16); /* movaps */
    if (CMP_NE(MEM32(ebx + 0x78), 1)) goto loc_00180B51; /* jne: not equal / not zero */

loc_00180B03:
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x6457C); /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    edx = esp + 0x24;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x24;
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(edi + 0x6457C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_00180B51:
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    /* shufps xmm4, xmm3, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x80) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    ecx = esp + 0x24;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edi + 0x6457C); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x24); /* mulss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00180BCB; /* jbe: below or equal (unsigned <=) */

loc_00180BA5:
    xmm3.f[0] = MEMF(0x3B1688); /* movss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    /* comiss xmm1.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm4.f[0])) goto loc_00180BC1; /* jbe: below or equal (unsigned <=) */

loc_00180BB9:
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    goto loc_00180BCB;

loc_00180BC1:
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_00180BCB:
    xmm1.f[0] = MEMF(0x3B16D0); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_00180EBE; /* ja: above (unsigned >) */

loc_00180BDC:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    esi = MEM32(ebp + 0x14);
    /* test esi, esi - flags set for next jcc */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    if (TEST_Z(esi, esi)) goto loc_00180C33; /* je: equal / zero */

loc_00180BFC:
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x88;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00180C0E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x90;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00180C28:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */

loc_00180C33:
    SET_LO8(eax, MEM8(ebx + 0xA0));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(esp + 0x1C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00180D4E; /* je: equal / zero */

loc_00180C45:
    edx = MEM32(ebp + 0x1C);
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ecx = ZX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16AC); /* mulss */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00180C67; /* je: equal / zero */

loc_00180C5B:
    SET_LO8(eax, MEM8(esp + 0x16));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00180C67; /* je: equal / zero */

loc_00180C63:
    SET_LO8(eax, 1);
    goto loc_00180C69;

loc_00180C67:
    SET_LO8(eax, 0); /* xor self */

loc_00180C69:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x24) ? xmm0.f[0] : MEMF(esp + 0x24)); /* minss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1730); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3A55F8); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    ecx = ebx + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, esi);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00180CE6:
    SET_LO8(eax, MEM8(esp + 0x16));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00180D4E; /* je: equal / zero */

loc_00180CEE:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x28) ? xmm0.f[0] : MEMF(esp + 0x28)); /* minss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebx + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = 1;
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00180D4E:
    SET_LO8(eax, MEM8(ebx + 0xA1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00180DE9; /* je: equal / zero */

loc_00180D5C:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = ZX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16AC); /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x2C) ? xmm0.f[0] : MEMF(esp + 0x2C)); /* minss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(esp + 0x24);
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1730); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3A55F8); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0);
    edx = ebx + 0xA5;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, esi);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = 3;
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00180DE9:
    SET_LO8(eax, MEM8(ebx + 0xA2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00180E84; /* je: equal / zero */

loc_00180DF7:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    edx = ZX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B16AC); /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x2C) ? xmm0.f[0] : MEMF(esp + 0x2C)); /* minss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(esp + 0x24);
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1730); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3A55F8); /* addss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x18); /* mulss */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, 0);
    ecx = ebx + 0xA6;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, esi);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = 4;
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00180E84:
    eax = MEM32(esp + 0x20);
    if (CMP_EQ(eax, 0x1A)) goto loc_00180EBE; /* je: equal / zero */

loc_00180E8D:
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    ebx = ebx + 0xA7;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00180EBE:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}
