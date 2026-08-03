#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C1670
 * Original: 0x001C1670 - 0x001C173A (202 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001C1670:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEM32(esp + 0x18) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x20) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x24) = edx;
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    edi = ecx + 0x20;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0xC); /* mulss */
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x2C) = edx;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    esi = MEM32(ecx + 0x44);
    if (TEST_Z(esi, esi)) goto loc_001C1732; /* je: equal / zero */

loc_001C1723:
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, 0); sub_001C1670(); /* call 0x001C1670 */

loc_001C172C:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001C1723; /* jne: not equal / not zero */

loc_001C1732:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
