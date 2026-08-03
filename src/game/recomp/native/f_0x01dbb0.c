#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001DBB0
 * Original: 0x0001DBB0 - 0x0001DE47 (663 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001DBB0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0001DBB0:
    edx = 0; /* xor self */
    MEM32(0x44D12C) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    ecx = esi + 0x48;

loc_0001DBC1:
    if (CMP_AE(edx, MEM32(ecx))) goto loc_0001DBCC; /* jae: above or equal (unsigned >=) */

loc_0001DBC5:
    MEM32(0x44D12C) = eax;
    edx = MEM32(ecx);

loc_0001DBCC:
    eax++;
    ecx = ecx + 4;
    if (CMP_L(eax, 0x43)) goto loc_0001DBC1; /* jl: less (signed <) */

loc_0001DBD5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEM32(0x44D130) = 0xFFFFFFFFu;
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D138) = 0xFFFFFFFFu;
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    ecx = 2;
    eax = esi + 0x2A0;
    /* nop */

loc_0001DC10:
    xmm2.f[0] = MEMF(eax + -148); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DC31; /* jbe: below or equal (unsigned <=) */

loc_0001DC1D:
    edx = ecx + -2;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DC31:
    xmm2.f[0] = MEMF(eax); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DC4E; /* jbe: below or equal (unsigned <=) */

loc_0001DC3A:
    edx = ecx + -2;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DC4E:
    xmm2.f[0] = MEMF(eax + -144); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DC6F; /* jbe: below or equal (unsigned <=) */

loc_0001DC5B:
    edx = ecx + -1;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DC6F:
    xmm2.f[0] = MEMF(eax + 4); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DC8D; /* jbe: below or equal (unsigned <=) */

loc_0001DC79:
    edx = ecx + -1;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DC8D:
    xmm2.f[0] = MEMF(eax + -140); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DCAB; /* jbe: below or equal (unsigned <=) */

loc_0001DC9A:
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = ecx;

loc_0001DCAB:
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DCC6; /* jbe: below or equal (unsigned <=) */

loc_0001DCB5:
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = ecx;

loc_0001DCC6:
    xmm2.f[0] = MEMF(eax + -136); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DCE7; /* jbe: below or equal (unsigned <=) */

loc_0001DCD3:
    edx = ecx + 1;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DCE7:
    xmm2.f[0] = MEMF(eax + 0xC); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DD05; /* jbe: below or equal (unsigned <=) */

loc_0001DCF1:
    edx = ecx + 1;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DD05:
    xmm2.f[0] = MEMF(eax + -132); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DD26; /* jbe: below or equal (unsigned <=) */

loc_0001DD12:
    edx = ecx + 2;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DD26:
    xmm2.f[0] = MEMF(eax + 0x10); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DD44; /* jbe: below or equal (unsigned <=) */

loc_0001DD30:
    edx = ecx + 2;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DD44:
    xmm2.f[0] = MEMF(eax + -128); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DD62; /* jbe: below or equal (unsigned <=) */

loc_0001DD4E:
    edx = ecx + 3;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DD62:
    xmm2.f[0] = MEMF(eax + 0x14); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DD80; /* jbe: below or equal (unsigned <=) */

loc_0001DD6C:
    edx = ecx + 3;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DD80:
    xmm2.f[0] = MEMF(eax + -124); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DD9E; /* jbe: below or equal (unsigned <=) */

loc_0001DD8A:
    edx = ecx + 4;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DD9E:
    xmm2.f[0] = MEMF(eax + 0x18); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DDBC; /* jbe: below or equal (unsigned <=) */

loc_0001DDA8:
    edx = ecx + 4;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DDBC:
    xmm2.f[0] = MEMF(eax + -120); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DDDA; /* jbe: below or equal (unsigned <=) */

loc_0001DDC6:
    edx = ecx + 5;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DDDA:
    xmm2.f[0] = MEMF(eax + 0x1C); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DDF8; /* jbe: below or equal (unsigned <=) */

loc_0001DDE4:
    edx = ecx + 5;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DDF8:
    xmm2.f[0] = MEMF(eax + -116); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0001DE16; /* jbe: below or equal (unsigned <=) */

loc_0001DE02:
    edx = ecx + 6;
    memcpy(xmm1.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D134) = xmm1.f[0]; /* movss */
    MEM32(0x44D130) = edx;

loc_0001DE16:
    xmm2.f[0] = MEMF(eax + 0x20); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0001DE34; /* jbe: below or equal (unsigned <=) */

loc_0001DE20:
    edx = ecx + 6;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    MEMF(0x44D13C) = xmm0.f[0]; /* movss */
    MEM32(0x44D138) = edx;

loc_0001DE34:
    ecx = ecx + 9;
    edx = ecx + -2;
    eax = eax + 0x24;
    if (CMP_L(edx, 0x24)) goto loc_0001DC10; /* jl: less (signed <) */

loc_0001DE46:
    esp += 4; return; /* ret */

}
