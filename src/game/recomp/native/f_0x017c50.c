#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00017C50
 * Original: 0x00017C50 - 0x00017EBA (618 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00017C50(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00017C50:
    ecx = SX8(LO8(ecx));
    eax = (uint32_t)(int32_t)SMEM8(ecx + edx + 0xB39);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_NE(MEM8(eax + edx + 0xB3D), LO8(ebx))) goto loc_00017C6B; /* jne: not equal / not zero */

loc_00017C67:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00017C6B:
    eax = MEM32(0x4D5370);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_00017CD1; /* je: equal / zero */

loc_00017C75:
    if (CMP_EQ(eax, 0x4D4008)) goto loc_00017CD1; /* je: equal / zero */

loc_00017C7C:
    if (CMP_LE(MEM32(0x73A1C0), ecx)) goto loc_00017CC9; /* jle: less or equal (signed <=) */

loc_00017C84:
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27E0);
    eax = eax + 0x73A1D0;
    if ((eax == 0)) goto loc_00017CAD; /* je: equal / zero */

loc_00017C93:
    if (CMP_NE(MEM8(eax + 0x27D8), 0)) goto loc_00017CA5; /* jne: not equal / not zero */

loc_00017C9C:
    if (CMP_NE(MEM32(eax + 0x134C), 3)) goto loc_00017CAD; /* jne: not equal / not zero */

loc_00017CA5:
    MEM8(ecx + edx + 0xB7D) = 1;

loc_00017CAD:
    if (CMP_NE(MEM8(0x752D80), 0)) goto loc_00017CC9; /* jne: not equal / not zero */

loc_00017CB6:
    if (CMP_NE(MEM8(0x752D33), 0)) goto loc_00017CC9; /* jne: not equal / not zero */

loc_00017CBF:
    esi = MEM32(eax + 0x134C);
    if (TEST_NZ(esi, esi)) goto loc_00017CD1; /* jne: not equal / not zero */

loc_00017CC9:
    MEM8(ecx + edx + 0xB7D) = 1;

loc_00017CD1:
    /* cmp MEM8(ecx + edx + 0xB7D), 0 - flags set for next jcc */
    eax = ecx + edx + 0xB7D;
    POP32(esp, esi);
    if (CMP_EQ(MEM8(ecx + edx + 0xB7D), 0)) goto loc_00017D2C; /* je: equal / zero */

loc_00017CE3:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edx + ecx * 4 + 0xB44) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 0xB4C) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 0xB5C) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 0xB64) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 0xB54) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 0xB6C) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 0xB74) = xmm0.f[0]; /* movss */
    MEM8(eax) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00017D2C:
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xB5C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00017D83; /* jbe: below or equal (unsigned <=) */

loc_00017D3D:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x4AE1FC); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edx + ecx * 4 + 0xB5C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00017D5E; /* jb: below (unsigned <) */

loc_00017D53:
    MEMF(edx + ecx * 4 + 0xB44) = xmm1.f[0]; /* movss */
    goto loc_00017D81;

loc_00017D5E:
    xmm2.f[0] = MEMF(edx + ecx * 4 + 0xB44); /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    /* ucomiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00017D83; /* jnp: not parity */

loc_00017D78:
    MEMF(edx + ecx * 4 + 0xB44) = xmm0.f[0]; /* movss */

loc_00017D81:
    SET_LO8(ebx, 1);

loc_00017D83:
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xB64); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00017E8F; /* jbe: below or equal (unsigned <=) */

loc_00017D95:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x4AE1FC); /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(edx + ecx * 4 + 0xB64) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00017DDF; /* jb: below (unsigned <) */

loc_00017DAB:
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xB54); /* movss */
    /* ucomiss xmm0.f[0], MEMF(edx + ecx * 4 + 0xB4C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00017DD2; /* jnp: not parity */

loc_00017DC2:
    eax = MEM32(edx + ecx * 4 + 0xB54);
    MEM32(edx + ecx * 4 + 0xB4C) = eax;
    SET_LO8(ebx, 1);

loc_00017DD2:
    SET_LO8(eax, LO8(ebx));
    MEMF(edx + ecx * 4 + 0xB6C) = xmm1.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00017DDF:
    /* comiss xmm0.f[0], MEMF(edx + ecx * 4 + 0xB74) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + ecx * 4 + 0xB74))) goto loc_00017E18; /* jbe: below or equal (unsigned <=) */

loc_00017DE9:
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xB4C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(edx + ecx * 4 + 0xB6C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00017EB6; /* jnp: not parity */

loc_00017E04:
    eax = MEM32(edx + ecx * 4 + 0xB6C);
    SET_LO8(ebx, 1);
    MEM32(edx + ecx * 4 + 0xB4C) = eax;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00017E18:
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xB6C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1900); /* mulss */
    /* comiss xmm0.f[0], MEMF(edx + ecx * 4 + 0xB54) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + ecx * 4 + 0xB54))) goto loc_00017E5D; /* jbe: below or equal (unsigned <=) */

loc_00017E33:
    xmm1.f[0] = MEMF(edx + ecx * 4 + 0xB4C); /* movss */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00017EB6; /* jnp: not parity */

loc_00017E45:
    SET_LO8(ebx, 1);
    SET_LO8(eax, LO8(ebx));
    MEMF(edx + ecx * 4 + 0xB4C) = xmm0.f[0]; /* movss */
    MEMF(edx + ecx * 4 + 0xB6C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00017E5D:
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xB4C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(edx + ecx * 4 + 0xB54) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00017EB6; /* jnp: not parity */

loc_00017E74:
    eax = MEM32(edx + ecx * 4 + 0xB54);
    SET_LO8(ebx, 1);
    MEM32(edx + ecx * 4 + 0xB4C) = eax;
    MEM32(edx + ecx * 4 + 0xB6C) = eax;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00017E8F:
    xmm0.f[0] = MEMF(edx + ecx * 4 + 0xB54); /* movss */
    /* ucomiss xmm0.f[0], MEMF(edx + ecx * 4 + 0xB4C) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00017EB6; /* jnp: not parity */

loc_00017EA6:
    eax = MEM32(edx + ecx * 4 + 0xB54);
    MEM32(edx + ecx * 4 + 0xB4C) = eax;
    SET_LO8(ebx, 1);

loc_00017EB6:
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
