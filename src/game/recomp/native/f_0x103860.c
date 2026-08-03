#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00103860
 * Original: 0x00103860 - 0x0010394B (235 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103860(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00103860:
    xmm0.f[0] = MEMF(0x3B170C); /* movss */
    xmm1.f[0] = MEMF(0x3B1A7C); /* movss */
    MEMF(0x5A38E0) = xmm1.f[0]; /* movss */
    MEMF(0x5A38E4) = xmm1.f[0]; /* movss */
    MEMF(0x5A38E8) = xmm1.f[0]; /* movss */
    MEMF(0x5A3910) = xmm1.f[0]; /* movss */
    MEMF(0x5A3914) = xmm1.f[0]; /* movss */
    MEMF(0x5A3918) = xmm1.f[0]; /* movss */
    MEMF(0x5A3940) = xmm0.f[0]; /* movss */
    MEMF(0x5A3944) = xmm0.f[0]; /* movss */
    MEMF(0x5A3948) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x5A3940), 16); /* movaps */
    MEMF(0x5A3920) = xmm0.f[0]; /* movss */
    MEMF(0x5A3924) = xmm0.f[0]; /* movss */
    MEMF(0x5A3928) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x40A210), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(0x5A3940), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x5A38E0), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(0x5A38E0), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x5A3920), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, esi);
    esi = MEM32(0x420C18);
    memcpy((void *)XBOX_PTR(0x5A3920), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x5A3910), 16); /* movaps */
    ecx = ecx | 0xFFFFFFFFu;
    edx = 0; /* xor self */
    /* cmp esi, ecx - flags set for next jcc */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(0x5A3910), xmm1.b, 16); /* movaps */
    if (CMP_NE(esi, ecx)) goto loc_00103931; /* jne: not equal / not zero */

loc_0010392B:
    MEM32(0x420C18) = edx;

loc_00103931:
    MEM8(eax) = LO8(edx);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 1) = 0xFF;
    MEM16(eax + 0xC) = 0xFFFF;
    MEM8(eax + 3) = LO8(ecx);
    MEM8(eax + 2) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
