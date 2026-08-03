#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1480
 * Original: 0x001C1480 - 0x001C152B (171 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1480(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001C1480:
    xmm0.f[0] = MEMF(0x3B1820); /* movss */
    ecx = 0x30;
    PUSH32(esp, esi);
    esi = ecx;

loc_001C1490:
    eax = esi;
    eax = eax & 0x7F;
    eax = MEM32(edi + eax * 4 + 0x20);
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C14B5; /* je: equal / zero */

loc_001C149F:
    edx = MEM32(edi + 0x1C);

loc_001C14A2:
    if (CMP_EQ(eax, edx)) goto loc_001C14AF; /* je: equal / zero */

loc_001C14A6:
    eax = eax + 0x20;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C14A2; /* jne: not equal / not zero */

loc_001C14AF:
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C14C2; /* jne: not equal / not zero */

loc_001C14B5:
    xmm1.f[0] = MEMF(eax + 0x18); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001C14C2; /* jbe: below or equal (unsigned <=) */

loc_001C14BF:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_001C14C2:
    ecx++;
    esi++;
    if (CMP_BE(LO16(ecx), 0x39)) goto loc_001C1490; /* jbe: below or equal (unsigned <=) */

loc_001C14CA:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001C1529; /* ja: above (unsigned >) */

loc_001C14D2:
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    ecx = 0x30;
    esi = ecx;

loc_001C14E1:
    edx = esi;
    edx = edx & 0x7F;
    eax = MEM32(edi + edx * 4 + 0x20);
    if (CMP_EQ(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C1506; /* je: equal / zero */

loc_001C14F0:
    edx = MEM32(edi + 0x1C);

loc_001C14F3:
    if (CMP_EQ(eax, edx)) goto loc_001C1500; /* je: equal / zero */

loc_001C14F7:
    eax = eax + 0x20;
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C14F3; /* jne: not equal / not zero */

loc_001C1500:
    if (CMP_NE(MEM16(eax + 0x1C), LO16(ecx))) goto loc_001C1521; /* jne: not equal / not zero */

loc_001C1506:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x18); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm2.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */

loc_001C1521:
    ecx++;
    esi++;
    if (CMP_BE(LO16(ecx), 0x39)) goto loc_001C14E1; /* jbe: below or equal (unsigned <=) */

loc_001C1529:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
