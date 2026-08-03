#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002EA40
 * Original: 0x0002EA40 - 0x0002EB50 (272 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EA40(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0002EA40:
    esp = esp - 0xC;
    xmm2.f[0] = MEMF(0x4AE200); /* movss */
    eax = MEM32(ecx + 0x34);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */
    PUSH32(esp, esi);
    eax = eax + 0x20;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 4) ? xmm0.f[0] : MEMF(esp + 4)); /* maxss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x3C); /* movss */
    MEMF(ecx + 0x38) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    esi = 0; /* xor self */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_0002EAA4; /* jb: below (unsigned <) */

loc_0002EA9B:
    MEM32(ecx + 0x40) = esi;
    MEM32(ecx + 0x44) = esi;
    MEM32(ecx + 0x48) = esi;

loc_0002EAA4:
    edx = MEM32(ecx + 0x40);
    if (CMP_EQ(edx, MEM32(eax + 8))) goto loc_0002EB1C; /* je: equal / zero */

loc_0002EAAC:
    /* cmp edx, esi - flags set for next jcc */
    xmm0.f[0] = MEMF(eax + 0x10); /* movss */
    if (CMP_NE(edx, esi)) goto loc_0002EADA; /* jne: not equal / not zero */

loc_0002EAB5:
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0002EB4B; /* jbe: below or equal (unsigned <=) */

loc_0002EAC7:
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 0xC) = esi;
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0002EADA:
    xmm1.f[0] = MEMF(0x4D6100); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0002EAFF; /* jbe: below or equal (unsigned <=) */

loc_0002EAE7:
    xmm0.f[0] = MEMF(eax + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0002EAFF; /* jbe: below or equal (unsigned <=) */

loc_0002EAFA:
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */

loc_0002EAFF:
    /* comiss xmm1.f[0], MEMF(eax + 0x10) - sets EFLAGS */
    if ((xmm1.f[0] < MEMF(eax + 0x10))) goto loc_0002EB4B; /* jb: below (unsigned <) */

loc_0002EB05:
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x48);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0002EB1C:
    if (CMP_EQ(edx, esi)) goto loc_0002EB4B; /* je: equal / zero */

loc_0002EB20:
    /* comiss xmm1.f[0], MEMF(eax + 0x10) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(eax + 0x10))) goto loc_0002EB2B; /* jbe: below or equal (unsigned <=) */

loc_0002EB26:
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */

loc_0002EB2B:
    xmm0.f[0] = MEMF(eax + 0x10); /* movss */
    xmm1.f[0] = MEMF(0x4D60E0); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0002EB4B; /* jbe: below or equal (unsigned <=) */

loc_0002EB46:
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */

loc_0002EB4B:
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
