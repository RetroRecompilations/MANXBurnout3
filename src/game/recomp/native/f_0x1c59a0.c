#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C59A0
 * Original: 0x001C59A0 - 0x001C5E61 (1217 bytes, 273 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C59A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001C59A0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x61));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C5E50; /* jne: not equal / not zero */

loc_001C59BD:
    ecx = MEM32(eax + 0x40);
    ecx = ecx << 5;
    ecx = ecx + eax;
    MEM32(esp + 0x34) = ecx;
    if ((ecx == 0)) goto loc_001C5E50; /* je: equal / zero */

loc_001C59CF:
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x18); /* cvtsi2ss */
    eax = MEM32(0x4A1B9C);
    /* test eax, eax - flags set for next jcc */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x1C); /* cvtsi2ss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    if (CMP_BE(eax & eax, 0)) goto loc_001C5A05; /* jbe: below or equal (unsigned <=) */

loc_001C59FD:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C5A02:
    xmm1.f[0] = 0.0f; /* xorps self = zero */

loc_001C5A05:
    /* cmp MEM8(0x4A1B98), 1 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(0x4A1AF8) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AFC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(MEM8(0x4A1B98), 1)) goto loc_001C5A71; /* je: equal / zero */

loc_001C5A26:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C5A37; /* jbe: below or equal (unsigned <=) */

loc_001C5A2F:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C5A34:
    xmm1.f[0] = 0.0f; /* xorps self = zero */

loc_001C5A37:
    eax = MEM32(0x75DDBC);
    if (TEST_NZ(eax, eax)) goto loc_001C5A60; /* jne: not equal / not zero */

loc_001C5A40:
    eax = MEM32(0x75DB60);
    MEM32(eax * 4 + 0x75DE20) = 0x8F;
    eax++;
    MEM32(0x75DDBC) = 1;
    MEM32(0x75DB60) = eax;

loc_001C5A60:
    MEM32(0x75D6DC) = 1;
    MEM8(0x4A1B98) = 1;

loc_001C5A71:
    SET_LO8(eax, MEM8(edi + 0x14));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(ebp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C5B6C; /* je: equal / zero */

loc_001C5A7F:
    xmm0.f[0] = MEMF(edi + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm2.f[0] = MEMF(esi); /* movss */
    xmm3.f[0] = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0xC); /* mulss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = eax;
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    edx = MEM32(esp + 0x28);
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esi + 8); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi); /* addss */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    xmm3.f[0] = MEMF(esi + 0xC); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 4); /* addss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = ecx;
    xmm3.f[0] = MEMF(esp + 0x20); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEM32(esp + 0x64) = eax;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    edx = esp + 0x50;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = esi + 0x10;
    eax = esp + 0x68;
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C75C0(); /* call 0x001C75C0 */

loc_001C5B66:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 8;

loc_001C5B6C:
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi); /* divss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(edi + 4); /* divss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x4C) = ecx;
    xmm2.f[0] = MEMF(esp + 0x4C); /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x38) = edx;
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    ebx = esi + 0x10;
    MEM32(esp + 0x3C) = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* minss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x20) ? xmm0.f[0] : MEMF(esp + 0x20)); /* minss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm3.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x50);
    xmm0.f[0] = MEMF(esi); /* movss */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x48) = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x48); /* addss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    MEM32(esp + 0x4C) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x4C); /* addss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x50);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x50);
    xmm1.f[0] = MEMF(esp + 0x2C); /* movss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x48) = ecx;
    xmm2.f[0] = MEMF(esp + 0x48); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x38); /* addss */
    MEMF(esp + 0x50) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x4C) = edx;
    xmm2.f[0] = MEMF(esp + 0x4C); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x3C); /* addss */
    MEMF(esp + 0x54) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x54);
    MEM32(esp + 0x40) = eax;
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x5C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x58); /* mulss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x54);
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(0x4A1B9C);
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x50);
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x78) = edx;
    if (CMP_BE(eax & eax, 0)) goto loc_001C5DA4; /* jbe: below or equal (unsigned <=) */

loc_001C5D49:
    if (TEST_NZ(MEM8(0x35D6A8), 0x10)) goto loc_001C5D63; /* jne: not equal / not zero */

loc_001C5D52:
    ecx = 8;
    esi = 0x4A1AE0;
    edi = 0x3609D8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001C5D63:
    PUSH32(esp, 8);
    edx = 0x4A1AE0;
    ecx = 0xBE;
    PUSH32(esp, 0); sub_0034F9A0(); /* call 0x0034F9A0 */

loc_001C5D74:
    eax = MEM32(0x4A1AD0);
    ecx = MEM32(0x4A1B9C);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x752F78);
    edx = eax + eax * 2;
    eax = MEM32(edx * 4 + 0x3A7C28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D7D50(); /* call 0x001D7D50 */

loc_001C5D97:
    esp = esp + 0x10;
    MEM32(0x4A1B9C) = 0;

loc_001C5DA4:
    PUSH32(esp, 0); sub_001C6F30(); /* call 0x001C6F30 */

loc_001C5DA9:
    ecx = MEM32(esp + 0x34);
    MEM32(0x75DB70) = ecx;
    PUSH32(esp, 0); sub_001C6B30(); /* call 0x001C6B30 */

loc_001C5DB8:
    edx = esp + 0x70;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esp + 0x44;
    ecx = ebx;
    PUSH32(esp, 0); sub_001C7430(); /* call 0x001C7430 */

loc_001C5DCF:
    eax = MEM32(0x4A1B9C);
    esp = esp + 0xC;
    if (CMP_BE(eax & eax, 0)) goto loc_001C5DE0; /* jbe: below or equal (unsigned <=) */

loc_001C5DDB:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C5DE0:
    SET_LO8(eax, MEM8(0x4A1B98));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    MEMF(0x4A1AF8) = xmm0.f[0]; /* movss */
    MEMF(0x4A1AFC) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C5E5A; /* je: equal / zero */

loc_001C5E01:
    eax = MEM32(0x4A1B9C);
    if (CMP_BE(eax & eax, 0)) goto loc_001C5E0F; /* jbe: below or equal (unsigned <=) */

loc_001C5E0A:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_001C5E0F:
    eax = MEM32(0x75DDBC);
    if (TEST_NZ(eax, eax)) goto loc_001C5E38; /* jne: not equal / not zero */

loc_001C5E18:
    eax = MEM32(0x75DB60);
    MEM32(eax * 4 + 0x75DE20) = 0x8F;
    eax++;
    MEM32(0x75DDBC) = 1;
    MEM32(0x75DB60) = eax;

loc_001C5E38:
    MEM32(0x75D6DC) = 0;
    MEM8(0x4A1B98) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001C5E50:
    MEM32(0x75DB70) = 0;

loc_001C5E5A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
