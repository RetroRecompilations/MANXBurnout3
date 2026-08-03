#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD8D0
 * Original: 0x001CD8D0 - 0x001CD9EA (282 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001CD8D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x3C;
    SET_LO8(eax, MEM8(edi + 0x45));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CD9BA; /* jne: not equal / not zero */

loc_001CD8E5:
    xmm0.f[0] = MEMF(edi + 0x1C); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001CD9B3; /* jnp: not parity */

loc_001CD8FB:
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + 8);
    if (TEST_Z(MEM8(ecx + 0x54), 2)) goto loc_001CD9BA; /* je: equal / zero */

loc_001CD90B:
    xmm0.f[0] = MEMF(edi); /* movss */
    edx = MEM32(esi + 0x2880);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 8); /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA270(); /* call 0x001CA270 */

loc_001CD93A:
    edx = MEM32(eax + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    edx = edx + 0x30;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x14) = eax;
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(edi + 0x38); /* movss */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00038BC0(); /* call 0x00038BC0 */

loc_001CD99E:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_001CD9BA; /* jbe: below or equal (unsigned <=) */

loc_001CD9B3:
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CD9BA:
    eax = MEM32(esi + 0x2884);
    ebx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_001CD9E3; /* jbe: below or equal (unsigned <=) */

loc_001CD9C6:
    eax--;
    MEM32(esi + 0x2884) = eax;
    eax = ZX8(MEM8(eax + esi + 0x2784));
    eax = eax << 6;
    ebx = eax + esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001CC910(); /* call 0x001CC910 */

loc_001CD9E3:
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
