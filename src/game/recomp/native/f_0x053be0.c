#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053BE0
 * Original: 0x00053BE0 - 0x00053C8E (174 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00053BE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    /* cmp edx, 8 - flags set for next jcc */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    if (CMP_NE(edx, 8)) goto loc_00053C02; /* jne: not equal / not zero */

loc_00053BEF:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00053C02:
    xmm0.f[0] = MEMF(ecx + 0x50); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x48); /* subss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x54); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x4C); /* subss */
    esi = MEM32(ebp + -8);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx * 8 + 0x3FD410); /* movss */
    MEM32(ebp + -16) = esi;
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -16); /* mulss */
    esi = MEM32(ebp + -4);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx * 8 + 0x3FD414); /* movss */
    edx = MEM32(ebp + -8);
    MEM32(ebp + -12) = esi;
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + -12); /* mulss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x48); /* movss */
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + -4);
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -16); /* addss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x4C); /* movss */
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -12) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -12); /* addss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
