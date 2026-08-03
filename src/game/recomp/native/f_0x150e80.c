#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00150E80
 * Original: 0x00150E80 - 0x001512B5 (1077 bytes, 253 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150E80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150E80:
    eax = MEM32(0x73A1C0);
    esp = esp - 0x1C;
    /* cmp eax, 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    if (CMP_G(eax, 1)) goto loc_001512AE; /* jg: greater (signed >) */

loc_00150E96:
    SET_LO8(eax, MEM8(ebp + 0x8E2));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 6;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00150F13; /* je: equal / zero */

loc_00150EAA:
    esi = MEM32(ebp + 0x888);
    if (CMP_EQ(esi, ebx)) goto loc_00150F29; /* je: equal / zero */

loc_00150EB4:
    if (CMP_EQ(MEM32(esi + 0x170), edi)) goto loc_00150EE6; /* je: equal / zero */

loc_00150EBC:
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F9310(); /* call 0x001F9310 */

loc_00150ECA:
    ecx = MEM32(esi + 0x16C);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_00150ED8:
    esp = esp + 0x10;
    MEM32(esi + 0x170) = edi;
    PUSH32(esp, 0); sub_001CBA60(); /* call 0x001CBA60 */

loc_00150EE6:
    MEM8(esi + 0x195) = LO8(ebx);
    edx = MEM32(ebp + 0x888);
    eax = MEM32(ebp + 0x83C);
    MEM32(edx + 0x15C) = eax;
    ecx = MEM32(ebp + 0x888);
    MEM8(ecx + 0x18C) = 2;
    MEM8(ebp + 0x8E2) = LO8(ebx);
    goto loc_00150F29;

loc_00150F13:
    eax = MEM32(ebp + 0x888);
    if (CMP_EQ(eax, ebx)) goto loc_00150F29; /* je: equal / zero */

loc_00150F1D:
    edx = MEM32(ebp + 0x83C);
    MEM32(eax + 0x15C) = edx;

loc_00150F29:
    ecx = MEM32(ebp + 0x884);
    if (CMP_EQ(ecx, ebx)) goto loc_001512AB; /* je: equal / zero */

loc_00150F37:
    if (CMP_EQ(MEM8(esp + 0x34), LO8(ebx))) goto loc_001510AC; /* je: equal / zero */

loc_00150F41:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00150F4B:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00150FCD; /* jne: not equal / not zero */

loc_00150F4F:
    if (CMP_EQ(MEM32(0x60EA18), 1)) goto loc_00150F93; /* je: equal / zero */

loc_00150F58:
    eax = MEM32(ebp + 0x884);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x15C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x834); /* movss */
    ecx = MEM32(ebp + 0x884);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC418); /* mulss */
    MEMF(ecx + 0x160) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x8DF) = 1;
    goto loc_00151151;

loc_00150F93:
    xmm0.f[0] = MEMF(ebp + 0x834); /* movss */
    edx = MEM32(ebp + 0x884);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC418); /* mulss */
    MEMF(edx + 0x15C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + 0x884);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x160) = xmm0.f[0]; /* movss */
    MEM8(ebp + 0x8DF) = LO8(ebx);
    goto loc_00151151;

loc_00150FCD:
    xmm0.f[0] = MEMF(ebp + 0x8A8); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16B4) - sets EFLAGS */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    if ((xmm0.f[0] <= MEMF(0x3B16B4))) goto loc_00150FF3; /* jbe: below or equal (unsigned <=) */

loc_00150FE1:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(ebp + 0x8A4) = xmm0.f[0]; /* movss */
    goto loc_00151043;

loc_00150FF3:
    xmm0.f[0] = MEMF(ebp + 0x8A4); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00151010; /* jbe: below or equal (unsigned <=) */

loc_00151000:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A7ED8); /* subss */
    MEMF(ebp + 0x8A4) = xmm0.f[0]; /* movss */

loc_00151010:
    /* comiss xmm1.f[0], MEMF(ebp + 0x8A4) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(ebp + 0x8A4))) goto loc_00151043; /* jb: below (unsigned <) */

loc_00151019:
    if (CMP_EQ(MEM8(ebp + 0x8DC), LO8(ebx))) goto loc_00151043; /* je: equal / zero */

loc_00151021:
    esi = MEM32(ebp + 0x884);
    MEMF(ebp + 0x8A4) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CB900(); /* call 0x001CB900 */

loc_00151034:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEM8(ebp + 0x8E0) = LO8(ebx);
    MEM8(ebp + 0x8DC) = LO8(ebx);

loc_00151043:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x8A4); /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x30) ? xmm0.f[0] : MEMF(esp + 0x30)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x34) ? xmm0.f[0] : MEMF(esp + 0x34)); /* minss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x838); /* movss */
    ecx = MEM32(ebp + 0x884);
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(ecx + 0x15C) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x884);
    MEMF(edx + 0x160) = xmm1.f[0]; /* movss */
    goto loc_00151151;

loc_001510AC:
    if (CMP_NE(MEM32(ecx + 0x170), edi)) goto loc_00151151; /* jne: not equal / not zero */

loc_001510B8:
    /* cmp MEM8(ebp + 0x8DE), LO8(ebx) - flags set for next jcc */
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    if (CMP_NE(MEM8(ebp + 0x8DE), LO8(ebx))) goto loc_001510F9; /* jne: not equal / not zero */

loc_001510C8:
    MEMF(ebp + 0x8B0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1684); /* addss */
    MEMF(ebp + 0x8B4) = xmm0.f[0]; /* movss */
    /* cmp MEM32(0x60EA18), 1 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(0x60EA18), 1)) ? 1 : 0); /* setne */
    MEM8(ebp + 0x8C0) = LO8(eax);
    MEM8(ebp + 0x8DE) = 1;
    goto loc_00151151;

loc_001510F9:
    /* comiss xmm0.f[0], MEMF(ebp + 0x8B4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ebp + 0x8B4))) goto loc_00151117; /* jbe: below or equal (unsigned <=) */

loc_00151102:
    esi = ecx;
    PUSH32(esp, 0); sub_001CB900(); /* call 0x001CB900 */

loc_00151109:
    MEM8(ebp + 0x8DE) = LO8(ebx);
    MEM8(ebp + 0x8DC) = LO8(ebx);
    goto loc_00151151;

loc_00151117:
    xmm1.f[0] = MEMF(ebp + 0x8B4); /* movss */
    eax = ZX8(MEM8(ebp + 0x8C0));
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = MEMF(ebp + 0x834); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC418); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CB9E0(); /* call 0x001CB9E0 */

loc_00151151:
    esi = MEM32(ebp + 0x884);
    eax = MEM32(esi + 0x170);
    if (CMP_EQ(eax, 1)) goto loc_00151278; /* je: equal / zero */

loc_00151166:
    ecx = eax;
    if (CMP_EQ(ecx, 4)) goto loc_00151278; /* je: equal / zero */

loc_00151171:
    if (CMP_EQ(ecx, ebx)) goto loc_00151278; /* je: equal / zero */

loc_00151179:
    if (CMP_NE(eax, edi)) goto loc_001512AB; /* jne: not equal / not zero */

loc_00151181:
    if (CMP_EQ(MEM8(ebp + 0x8DB), LO8(ebx))) goto loc_001512AB; /* je: equal / zero */

loc_0015118D:
    SET_LO8(ecx, MEM8(ebp + 0x891));
    eax = ZX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebp + 0x891) = LO8(ecx);
    if (TEST_NZ(edx, edx)) goto loc_00151239; /* jne: not equal / not zero */

loc_001511AE:
    if (CMP_NE(MEM8(0x73A198), LO8(ebx))) goto loc_00151239; /* jne: not equal / not zero */

loc_001511BA:
    if (CMP_NE(MEM8(0x73A199), LO8(ebx))) goto loc_00151239; /* jne: not equal / not zero */

loc_001511C2:
    SET_LO8(eax, MEM8(ebp + 0x892));
    esi = ZX8(LO8(eax));
    esi = esi & 0x80000001u;
    if (((int32_t)esi >= 0)) goto loc_001511D8; /* jns: not sign (positive) */

loc_001511D3:
    esi--;
    esi = esi | 0xFFFFFFFEu;
    esi++;

loc_001511D8:
    esi++;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ebp + 0x892) = LO8(eax);
    edi = ebp + 0x4B0;
    eax = edi;
    PUSH32(esp, 0); sub_001513E0(); /* call 0x001513E0 */

loc_001511EE:
    PUSH32(esp, esi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x3AEBE0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001511FE:
    eax = esp + 0x24;
    esp = esp + 0xC;
    ecx = eax;

loc_00151207:
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_00151207; /* jne: not equal / not zero */

loc_0015120E:
    eax = eax - ecx;
    esi = ecx;
    edi--;

loc_00151213:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00151213; /* jne: not equal / not zero */

loc_0015121B:
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x8DB) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_00151239:
    SET_LO8(ecx, MEM8(ebp + 0x890));
    eax = ZX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx++;
    PUSH32(esp, edx);
    edx = ebp + 0x4B0;
    SET_LO8(ecx, LO8(ecx) + 1);
    PUSH32(esp, 0x3AED84);
    PUSH32(esp, edx);
    MEM8(ebp + 0x890) = LO8(ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00151265:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x8DB) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_00151278:
    if (CMP_NE(MEM8(ebp + 0x8DB), LO8(ebx))) goto loc_001512AB; /* jne: not equal / not zero */

loc_00151280:
    if (CMP_EQ(eax, 1)) goto loc_00151293; /* je: equal / zero */

loc_00151285:
    ecx = 0x40E0D4;
    PUSH32(esp, 0); sub_001CC110(); /* call 0x001CC110 */

loc_0015128F:
    if (TEST_NZ(eax, eax)) goto loc_001512AB; /* jne: not equal / not zero */

loc_00151293:
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = ebp + 0x4B0;
    edi = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_001CB6C0(); /* call 0x001CB6C0 */

loc_001512A5:
    MEM8(ebp + 0x8DB) = LO8(eax);

loc_001512AB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001512AE:
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}
