#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00143190
 * Original: 0x00143190 - 0x00143293 (259 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143190(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00143190:
    /* comiss xmm0.f[0], MEMF(esi + 0xC) - sets EFLAGS */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    if ((xmm0.f[0] <= MEMF(esi + 0xC))) goto loc_001431A3; /* jbe: below or equal (unsigned <=) */

loc_0014319E:
    xmm4.f[0] = 0.0f; /* xorps self = zero */
    goto loc_001431AF;

loc_001431A3:
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0xC); /* divss */
    memcpy(xmm4.b, xmm5.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */

loc_001431AF:
    eax = MEM32(esi + 0x24);
    edx = 0; /* xor self */
    /* cmp eax, 4 - flags set for next jcc */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    if (CMP_L(eax, 4)) goto loc_001431EC; /* jl: less (signed <) */

loc_001431BC:
    ecx = eax + -4;
    ecx = ecx >> 2;
    ecx++;
    edx = ecx * 4;
    /* nop */

loc_001431D0:
    ecx--;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    if ((ecx != 0)) goto loc_001431D0; /* jne: not equal / not zero */

loc_001431EC:
    if (CMP_GE(edx, eax)) goto loc_001431FF; /* jge: greater or equal (signed >=) */

loc_001431F0:
    eax = eax - edx;

loc_001431F2:
    eax--;
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    if ((eax != 0)) goto loc_001431F2; /* jne: not equal / not zero */

loc_001431FF:
    eax = MEM32(esi + 0x28);
    edx = 0; /* xor self */
    /* cmp eax, 4 - flags set for next jcc */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    if (CMP_L(eax, 4)) goto loc_00143239; /* jl: less (signed <) */

loc_0014320C:
    ecx = eax + -4;
    ecx = ecx >> 2;
    ecx++;
    edx = ecx * 4;
    /* nop */

loc_00143220:
    ecx--;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if ((ecx != 0)) goto loc_00143220; /* jne: not equal / not zero */

loc_00143239:
    if (CMP_GE(edx, eax)) goto loc_0014324D; /* jge: greater or equal (signed >=) */

loc_0014323D:
    eax = eax - edx;
    /* nop */

loc_00143240:
    eax--;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    if ((eax != 0)) goto loc_00143240; /* jne: not equal / not zero */

loc_0014324D:
    xmm0.f[0] = MEMF(esi + 8); /* movss */
    xmm3.f[0] = MEMF(esp + 4); /* movss */
    xmm3.f[0] = xmm3.f[0] / MEMF(esi + 0x10); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x20); /* mulss */
    xmm1.f[0] = MEMF(esi + 0x18); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(esi + 0x1C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    esp += 8; return; /* ret 4 */

}
