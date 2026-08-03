#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CDBC0
 * Original: 0x001CDBC0 - 0x001CDFF4 (1076 bytes, 287 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDBC0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001CDBC0:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x4A1BF4;
    eax = eax + 0x2654;
    esi = 2;
    /* nop */

loc_001CDBE0:
    xmm2.f[0] = MEMF(eax); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDC48; /* jb: below (unsigned <) */

loc_001CDBE9:
    xmm2.f[0] = MEMF(eax + -4); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDC48; /* jbe: below or equal (unsigned <=) */

loc_001CDBF3:
    xmm3.f[0] = MEMF(eax); /* movss */
    edx = MEM32(eax + -8);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + -16); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + -12) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + -12); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + -8) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    goto loc_001CDC5A;

loc_001CDC48:
    edx = MEM32(eax + -8);
    if (TEST_Z(edx, edx)) goto loc_001CDC5A; /* je: equal / zero */

loc_001CDC4F:
    edi = MEM32(edx);
    MEM32(ecx + -12) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + -8) = edx;

loc_001CDC5A:
    xmm2.f[0] = MEMF(eax + 0x14); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDCC5; /* jb: below (unsigned <) */

loc_001CDC64:
    xmm2.f[0] = MEMF(eax + 0x10); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDCC5; /* jbe: below or equal (unsigned <=) */

loc_001CDC6E:
    xmm3.f[0] = MEMF(eax + 0x14); /* movss */
    edx = MEM32(eax + 0xC);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + -4) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 8); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0x14); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x14) = xmm2.f[0]; /* movss */
    goto loc_001CDCD6;

loc_001CDCC5:
    edx = MEM32(eax + 0xC);
    if (TEST_Z(edx, edx)) goto loc_001CDCD6; /* je: equal / zero */

loc_001CDCCC:
    edi = MEM32(edx);
    MEM32(ecx + -4) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx) = edx;

loc_001CDCD6:
    xmm2.f[0] = MEMF(eax + 0x28); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDD42; /* jb: below (unsigned <) */

loc_001CDCE0:
    xmm2.f[0] = MEMF(eax + 0x24); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDD42; /* jbe: below or equal (unsigned <=) */

loc_001CDCEA:
    xmm3.f[0] = MEMF(eax + 0x28); /* movss */
    edx = MEM32(eax + 0x20);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + 0x18); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 4) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 0x1C); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 8) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0x28); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm2.f[0]; /* movss */
    goto loc_001CDD54;

loc_001CDD42:
    edx = MEM32(eax + 0x20);
    if (TEST_Z(edx, edx)) goto loc_001CDD54; /* je: equal / zero */

loc_001CDD49:
    edi = MEM32(edx);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 8) = edx;

loc_001CDD54:
    xmm2.f[0] = MEMF(eax + 0x3C); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDDC0; /* jb: below (unsigned <) */

loc_001CDD5E:
    xmm2.f[0] = MEMF(eax + 0x38); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDDC0; /* jbe: below or equal (unsigned <=) */

loc_001CDD68:
    xmm3.f[0] = MEMF(eax + 0x3C); /* movss */
    edx = MEM32(eax + 0x34);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + 0x2C); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0xC) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 0x30); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x10) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0x3C); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x3C) = xmm2.f[0]; /* movss */
    goto loc_001CDDD2;

loc_001CDDC0:
    edx = MEM32(eax + 0x34);
    if (TEST_Z(edx, edx)) goto loc_001CDDD2; /* je: equal / zero */

loc_001CDDC7:
    edi = MEM32(edx);
    MEM32(ecx + 0xC) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x10) = edx;

loc_001CDDD2:
    xmm2.f[0] = MEMF(eax + 0x50); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDE3E; /* jb: below (unsigned <) */

loc_001CDDDC:
    xmm2.f[0] = MEMF(eax + 0x4C); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDE3E; /* jbe: below or equal (unsigned <=) */

loc_001CDDE6:
    xmm3.f[0] = MEMF(eax + 0x50); /* movss */
    edx = MEM32(eax + 0x48);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + 0x40); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x14) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 0x44); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x18) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0x50); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x50) = xmm2.f[0]; /* movss */
    goto loc_001CDE50;

loc_001CDE3E:
    edx = MEM32(eax + 0x48);
    if (TEST_Z(edx, edx)) goto loc_001CDE50; /* je: equal / zero */

loc_001CDE45:
    edi = MEM32(edx);
    MEM32(ecx + 0x14) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x18) = edx;

loc_001CDE50:
    xmm2.f[0] = MEMF(eax + 0x64); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDEBC; /* jb: below (unsigned <) */

loc_001CDE5A:
    xmm2.f[0] = MEMF(eax + 0x60); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDEBC; /* jbe: below or equal (unsigned <=) */

loc_001CDE64:
    xmm3.f[0] = MEMF(eax + 0x64); /* movss */
    edx = MEM32(eax + 0x5C);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + 0x54); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x1C) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 0x58); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x20) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0x64); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x64) = xmm2.f[0]; /* movss */
    goto loc_001CDECE;

loc_001CDEBC:
    edx = MEM32(eax + 0x5C);
    if (TEST_Z(edx, edx)) goto loc_001CDECE; /* je: equal / zero */

loc_001CDEC3:
    edi = MEM32(edx);
    MEM32(ecx + 0x1C) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x20) = edx;

loc_001CDECE:
    xmm2.f[0] = MEMF(eax + 0x78); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDF3A; /* jb: below (unsigned <) */

loc_001CDED8:
    xmm2.f[0] = MEMF(eax + 0x74); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDF3A; /* jbe: below or equal (unsigned <=) */

loc_001CDEE2:
    xmm3.f[0] = MEMF(eax + 0x78); /* movss */
    edx = MEM32(eax + 0x70);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + 0x68); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x24) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 0x6C); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x28) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0x78); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x78) = xmm2.f[0]; /* movss */
    goto loc_001CDF4C;

loc_001CDF3A:
    edx = MEM32(eax + 0x70);
    if (TEST_Z(edx, edx)) goto loc_001CDF4C; /* je: equal / zero */

loc_001CDF41:
    edi = MEM32(edx);
    MEM32(ecx + 0x24) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x28) = edx;

loc_001CDF4C:
    xmm2.f[0] = MEMF(eax + 0x8C); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] < xmm4.f[0])) goto loc_001CDFCD; /* jb: below (unsigned <) */

loc_001CDF59:
    xmm2.f[0] = MEMF(eax + 0x88); /* movss */
    /* comiss xmm2.f[0], xmm4.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm4.f[0])) goto loc_001CDFCD; /* jbe: below or equal (unsigned <=) */

loc_001CDF66:
    xmm3.f[0] = MEMF(eax + 0x8C); /* movss */
    edx = MEM32(eax + 0x84);
    xmm5.f[0] = MEMF(edx); /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3.f[0] = MEMF(eax + 0x7C); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x2C) = xmm5.f[0]; /* movss */
    xmm3.f[0] = MEMF(eax + 0x80); /* movss */
    xmm5.f[0] = MEMF(edx + 4); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx + 0x30) = xmm5.f[0]; /* movss */
    xmm2.f[0] = MEMF(eax + 0x8C); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax + 0x8C) = xmm2.f[0]; /* movss */
    goto loc_001CDFE2;

loc_001CDFCD:
    edx = MEM32(eax + 0x84);
    if (TEST_Z(edx, edx)) goto loc_001CDFE2; /* je: equal / zero */

loc_001CDFD7:
    edi = MEM32(edx);
    MEM32(ecx + 0x2C) = edi;
    edx = MEM32(edx + 4);
    MEM32(ecx + 0x30) = edx;

loc_001CDFE2:
    ecx = ecx + 0x40;
    eax = eax + 0xA0;
    esi--;
    if ((esi != 0)) goto loc_001CDBE0; /* jne: not equal / not zero */

loc_001CDFF1:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
