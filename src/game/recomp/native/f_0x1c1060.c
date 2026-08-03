#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1060
 * Original: 0x001C1060 - 0x001C124D (493 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C1060:
    xmm3.f[0] = xmm3.f[0] / MEMF(edi + 8); /* divss */
    SET_LO16(eax, MEM16(edx));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    goto loc_001C1070;

    /* nop */

loc_001C1070:
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_001C107C; /* je: equal / zero */

loc_001C1076:
    if (CMP_NE(LO16(eax), 0xA)) goto loc_001C1097; /* jne: not equal / not zero */

loc_001C107C:
    SET_LO16(eax, MEM16(edx + 2));
    edx = edx + 2;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_001C1070; /* jne: not equal / not zero */

loc_001C1088:
    eax = MEM32(esp + 8);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(ecx) = edx;
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001C1097:
    MEM32(ecx) = edx;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edx));
    PUSH32(esp, esi);
    eax = ecx;
    eax = eax & 0x7F;
    eax = MEM32(edi + eax * 4 + 0x20);
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C10BE; /* je: equal / zero */

loc_001C10AE:
    esi = MEM32(edi + 0x1C);

loc_001C10B1:
    if (CMP_EQ(eax, esi)) goto loc_001C10BE; /* je: equal / zero */

loc_001C10B5:
    eax = eax + 0x20;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C10B1; /* jne: not equal / not zero */

loc_001C10BE:
    SET_LO16(ecx, MEM16(edx + 2));
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x10); /* subss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    edx = edx + 2;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    esi = eax;
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_001C1188; /* je: equal / zero */

loc_001C10E1:
    if (CMP_EQ(LO16(ecx), 0xA)) goto loc_001C11CB; /* je: equal / zero */

loc_001C10EB:
    if (CMP_NE(LO16(ecx), 0x20)) goto loc_001C110F; /* jne: not equal / not zero */

loc_001C10F1:
    xmm1.f[0] = MEMF(esi + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    SET_LO8(ebx, 1);
    if ((xmm1.f[0] >= xmm3.f[0])) goto loc_001C11F6; /* jae: above or equal (unsigned >=) */

loc_001C110A:
    ebp = edx;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_001C110F:
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C1131; /* je: equal / zero */

loc_001C1117:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001C1131; /* jne: not equal / not zero */

loc_001C111B:
    xmm1.f[0] = MEMF(esi + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* comiss xmm3.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm3.f[0] <= xmm1.f[0])) goto loc_001C1131; /* jbe: below or equal (unsigned <=) */

loc_001C112E:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_001C1131:
    xmm1.f[0] = MEMF(esi + 0x18); /* movss */
    eax = ecx;
    eax = eax & 0x7F;
    eax = MEM32(edi + eax * 4 + 0x20);
    /* cmp MEM16(eax + 0x1C), LO16(ecx) - flags set for next jcc */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C115D; /* je: equal / zero */

loc_001C114C:
    esi = MEM32(edi + 0x1C);
    /* nop */

loc_001C1150:
    if (CMP_EQ(eax, esi)) goto loc_001C115D; /* je: equal / zero */

loc_001C1154:
    eax = eax + 0x20;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C1150; /* jne: not equal / not zero */

loc_001C115D:
    SET_LO8(ecx, MEM8(esp + 0x14));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = eax;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001C1174; /* je: equal / zero */

loc_001C1167:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001C1174; /* jne: not equal / not zero */

loc_001C116B:
    /* comiss xmm2.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm2.f[0] >= xmm3.f[0])) goto loc_001C120B; /* jae: above or equal (unsigned >=) */

loc_001C1174:
    SET_LO16(ecx, MEM16(edx + 2));
    edx = edx + 2;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_001C10E1; /* jne: not equal / not zero */

loc_001C1184:
    if (TEST_NZ(ebp, ebp)) goto loc_001C1194; /* jne: not equal / not zero */

loc_001C1188:
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C1231; /* je: equal / zero */

loc_001C1194:
    xmm1.f[0] = MEMF(esi + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm3.f[0])) goto loc_001C1231; /* jb: below (unsigned <) */

loc_001C11AB:
    if (TEST_NZ(ebp, ebp)) goto loc_001C11FA; /* jne: not equal / not zero */

loc_001C11AF:
    SET_LO8(eax, MEM8(esp + 0x14));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001C11C0; /* je: equal / zero */

loc_001C11B7:
    eax = MEM32(esp + 0x10);
    edx = edx + 0xFFFFFFFEu;
    MEM32(eax) = edx;

loc_001C11C0:
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001C11CB:
    xmm1.f[0] = MEMF(esi + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    /* comiss xmm1.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm3.f[0])) goto loc_001C11E2; /* jb: below (unsigned <) */

loc_001C11DE:
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_001C11FA; /* jne: not equal / not zero */

loc_001C11E2:
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    POP32(esp, esi);
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    MEM32(eax) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001C11F6:
    if (TEST_Z(ebp, ebp)) goto loc_001C1188; /* je: equal / zero */

loc_001C11FA:
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = ebp;
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001C120B:
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x18); /* subss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 8); /* addss */
    eax = MEM32(esp + 0x10);
    POP32(esp, ebp);
    edx = edx + 0xFFFFFFFEu;
    POP32(esp, esi);
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEM32(eax) = edx;
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001C1231:
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    xmm0.f[0] = MEMF(esi + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 8); /* addss */
    POP32(esp, ebp);
    POP32(esp, esi);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    POP32(esp, ebx);

}
