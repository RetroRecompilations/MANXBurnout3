#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019DDF0
 * Original: 0x0019DDF0 - 0x0019DFC5 (469 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019DDF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0019DDF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(esi + 0x28);
    ecx = ZX16(MEM16(esi + 0x20));
    edx = ZX16(MEM16(esi + 0x26));
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(esi + 0x24));
    PUSH32(esp, edi);
    edi = ZX16(MEM16(esi + 0x22));
    edx = edx << 4;
    edx = edx + eax;
    ecx = ecx << 4;
    ecx = ecx + eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    edi = edi << 4;
    edi = edi + eax;
    ebx = ebx << 4;
    ebx = ebx + eax;
    eax = esp + 0xC;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B1920); /* movss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = esp + 0xC;
    xmm1.f[0] = MEMF(edx); /* movss */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    /* shufps xmm1, xmm1, 0 */
    memcpy((void *)XBOX_PTR(esp + 0x4C), xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, ebx);
    /* addps: xmm3.f[0] += xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, edi);
    eax = esp + 0x34;
    MEM32(esp + 0x30) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm3.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001B2230(); /* call 0x001B2230 */

loc_0019DEA0:
    esp = esp + 0x14;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0019DEDA; /* jne: not equal / not zero */

loc_0019DEAB:
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_001B2230(); /* call 0x001B2230 */

loc_0019DECB:
    esp = esp + 0x14;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0xB) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0019DFBB; /* je: equal / zero */

loc_0019DEDA:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1940); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A7F34); /* addss */
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm2.f[0] -= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm3.b, xmm5.b, 16); /* movaps */
    /* subps: xmm3.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm3.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0002C0D0(); /* call 0x0002C0D0 */

loc_0019DF4F:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0019DF78; /* jp: parity */

loc_0019DF5E:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */

loc_0019DF78:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x44); /* addss */
    xmm1.f[0] = MEMF(esp + 0x40); /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEMF(esi) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */

loc_0019DFBB:
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
