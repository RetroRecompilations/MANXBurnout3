#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00019900
 * Original: 0x00019900 - 0x00019A0C (268 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00019900(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00019900:
    /* cmp MEM16(eax + 2), 0 - flags set for next jcc */
    MEM16(eax) = 0;
    if (CMP_EQ(MEM16(eax + 2), 0)) goto loc_000199D9; /* je: equal / zero */

loc_00019910:
    /* comiss xmm1.f[0], MEMF(0x3A7ED8) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3A7ED8))) goto loc_000199CB; /* jbe: below or equal (unsigned <=) */

loc_0001991D:
    if (TEST_Z(ecx, ecx)) goto loc_00019A04; /* je: equal / zero */

loc_00019925:
    xmm0.f[0] = MEMF(0x3B16E8); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_0001993F; /* jb: below (unsigned <) */

loc_00019932:
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    goto loc_00019994;

loc_0001993F:
    /* comiss xmm1.f[0], MEMF(0x3A69C0) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(0x3A69C0))) goto loc_00019966; /* jb: below (unsigned <) */

loc_00019948:
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1698); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    goto loc_00019999;

loc_00019966:
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B17F0); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1688); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3B168C); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */

loc_00019994:
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00019999:
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm2.f[0], MEMF(eax + 8) - sets EFLAGS */
    if ((xmm2.f[0] <= MEMF(eax + 8))) goto loc_00019A04; /* jbe: below or equal (unsigned <=) */

loc_000199A2:
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A69B4); /* addss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    MEM16(eax) = 1;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00019A04; /* jbe: below or equal (unsigned <=) */

loc_000199BE:
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000199CB:
    MEM16(eax + 2) = 0;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_000199D9:
    xmm0.f[0] = MEMF(0x384148); /* movss */
    /* comiss xmm0.f[0], MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(eax + 4))) goto loc_00019A04; /* jbe: below or equal (unsigned <=) */

loc_000199E7:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00019A04; /* jb: below (unsigned <) */

loc_000199EC:
    xmm0.f[0] = MEMF(0x384150); /* movss */
    MEM16(eax) = 1;
    MEM16(eax + 2) = 1;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */

loc_00019A04:
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}
