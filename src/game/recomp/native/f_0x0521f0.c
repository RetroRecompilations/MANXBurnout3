#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000521F0
 * Original: 0x000521F0 - 0x00052617 (1063 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000521F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_000521F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x34);
    eax = MEM32(ecx + 0x7C);
    MEM32(ebx + 0xD4) = eax;
    edx = MEM32(ecx + 0x7C);
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 2;
    if (TEST_Z(edx, edx)) goto loc_000522DA; /* je: equal / zero */

loc_0005221E:
    xmm0.f[0] = MEMF(ebx + 0x38); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B172C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000522DA; /* jnp: not parity */

loc_00052234:
    esi = MEM32(ecx + 0x70);
    MEM32(esp + 0x1C) = esi;
    eax = 3;
    edx = edx + 0xC;

loc_00052243:
    xmm0.f[0] = MEMF(edx + -4); /* movss */
    edx = edx - 4;
    eax--;
    /* comiss xmm0.f[0], MEMF(ebx + 0x38) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(ebx + 0x38))) goto loc_0005225B; /* jb: below (unsigned <) */

loc_00052252:
    if (CMP_G(eax, esi)) goto loc_00052261; /* jg: greater (signed >) */

loc_00052256:
    if (CMP_EQ(esi, 4)) goto loc_00052261; /* je: equal / zero */

loc_0005225B:
    if (TEST_NZ(eax, eax)) goto loc_00052243; /* jne: not equal / not zero */

loc_0005225F:
    goto loc_0005228F;

loc_00052261:
    edx = MEM32(ecx + 0x7C);
    edx = MEM32(edx + eax * 4);
    MEM32(ebx + 0x3C) = edx;
    ecx = MEM32(ecx + 0x7C);
    xmm0.f[0] = MEMF(ecx + eax * 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x38); /* subss */
    PUSH32(esp, ecx);
    edi = 0x411560;
    MEM32(esp + 0x20) = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00141950(); /* call 0x00141950 */

loc_0005228B:
    esi = MEM32(esp + 0x1C);

loc_0005228F:
    eax = MEM32(0x4115D4);
    if (CMP_L(esi, eax)) goto loc_000522A5; /* jl: less (signed <) */

loc_00052298:
    if (CMP_NE(esi, 4)) goto loc_000522DA; /* jne: not equal / not zero */

loc_0005229D:
    if (TEST_NZ(eax, eax)) goto loc_000522D2; /* jne: not equal / not zero */

loc_000522A1:
    esi = MEM32(esp + 0x1C);

loc_000522A5:
    eax = MEM32(0x4115D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5370D087);
    PUSH32(esp, 0xC0000000u);
    MEM32(0x4115D4) = esi;
    PUSH32(esp, 0); sub_00141010(); /* call 0x00141010 */

loc_000522CD:
    if (CMP_NE(esi, 4)) goto loc_000522DA; /* jne: not equal / not zero */

loc_000522D2:
    MEM32(esp + 0x1C) = 0;

loc_000522DA:
    esi = MEM32(ebx + 0x34);
    eax = MEM32(esi + 0x7C);
    if (TEST_Z(eax, eax)) goto loc_00052300; /* je: equal / zero */

loc_000522E4:
    if (CMP_EQ(MEM32(esp + 0x1C), 4)) goto loc_00052300; /* je: equal / zero */

loc_000522EB:
    if (CMP_EQ(MEM32(esi + 0x70), 2)) goto loc_00052300; /* je: equal / zero */

loc_000522F1:
    xmm0.f[0] = MEMF(ebx + 0x3C); /* movss */
    MEM8(esp + 0x1B) = 0;
    goto loc_000523E8;

loc_00052300:
    edx = MEM32(0x73A194);
    eax = MEM32(0x73A190);
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00158640(); /* call 0x00158640 */

loc_0005231D:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x230);
    esp = esp + 8;
    eax = eax + 0x44D680;
    if ((eax == 0)) goto loc_00052332; /* je: equal / zero */

loc_0005232D:
    xmm5.f[0] = MEMF(eax + 0x18); /* movss */

loc_00052332:
    xmm1.f[0] = MEMF(esi + 0x3C); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000523BF; /* jnp: not parity */

loc_00052344:
    /* ucomiss xmm1.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000523BF; /* jnp: not parity */

loc_00052351:
    xmm3.f[0] = MEMF(0x3B1838); /* movss */
    xmm4.f[0] = MEMF(0x3B17E8); /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A2928); /* mulss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A7ED8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */

loc_000523BF:
    MEMF(esp + 0x20) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x20) ? xmm0.f[0] : MEMF(esp + 0x20)); /* minss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x30); /* movss */
    MEM8(esp + 0x1B) = 1;

loc_000523E8:
    eax = ebx + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00052620(); /* call 0x00052620 */

loc_000523F4:
    eax = MEM32(ebx + 0x30);
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x388E90); /* subss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x28) = 0x54FA20;
    MEM32(esp + 0x20) = 0x54FA50;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x28);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x30); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x58);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x3FA00000);
    PUSH32(esp, 0x41F00000);
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x70);
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x54FA50);
    ecx = esp + 0x40;
    MEM32(esp + 0x64) = edx;
    edx = MEM32(ebx + 0x2C);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54F898); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x388F08); /* subss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebx + 0x80;
    ecx = esp + 0x40;
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_000524DB:
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00052565; /* je: equal / zero */

loc_000524E7:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edx = MEM32(0x54F8D8);
    eax = MEM32(0x4D532C);
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x3C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1688); /* subss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x28);
    PUSH32(esp, 0x54FA30);
    PUSH32(esp, 0x54FA30);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x1F9C);
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0005255C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00052565:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebx + ecx * 4 + 0xC0);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x28);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1FE0); /* movss */
    PUSH32(esp, edx);
    edx = esp + 0x40;
    ecx = esp + 0x38;
    edi = esp + 0x58;
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_0005260E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
