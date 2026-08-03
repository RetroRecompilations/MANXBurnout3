#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017E7F0
 * Original: 0x0017E7F0 - 0x0017E89C (172 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0017E7F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    eax = MEM32(edi + 0x1580);
    ecx = MEM32(eax + 0x27D0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    eax = MEM32(ecx + 0x4D0740);
    eax = eax & 0x20;
    ecx = 0; /* xor self */
    eax = eax | ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if ((eax == 0)) goto loc_0017E87D; /* je: equal / zero */

loc_0017E81E:
    edx = edi + 0x70;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0017E82C:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    esp = esp + 8;
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0017E87D; /* jbe: below or equal (unsigned <=) */

loc_0017E846:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    ecx = MEM32(edi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0017E87D:
    eax = MEM32(esi);
    edx = ebx;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(esi + 8);
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + 0xC);
    eax = ebx;
    MEM32(edx + 0xC) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
