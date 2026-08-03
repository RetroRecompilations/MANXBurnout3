#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004F520
 * Original: 0x0004F520 - 0x0004F627 (263 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0004F520:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(ecx + 0x28);
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(eax); /* addss */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA50), 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3B1694); /* addss */
    PUSH32(esp, esi);
    memcpy((void *)XBOX_PTR(esp + 0x3C), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = 0x54FA20;
    MEM32(esp + 0x18) = 0x54FA50;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0x7F7FFFFF);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, 1);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = edx;
    SET_LO8(edx, MEM8(ebp + 8));
    PUSH32(esp, 0x3FA00000);
    eax = 0; /* xor self */
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = MEM32(0x4D532C);
    edx = MEM32(edx + 0xC);
    PUSH32(esp, 0x41D80000);
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    esi = esp + 0x30;
    PUSH32(esp, esi);
    esi = esp + 0x54;
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    esi = esp + 0x30;
    PUSH32(esp, esi);
    eax = eax + 0x8A4;
    eax = MEM32(edx + eax * 4);
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1920); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0004F61F:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
