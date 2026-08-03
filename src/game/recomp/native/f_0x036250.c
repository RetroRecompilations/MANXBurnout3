#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00036250
 * Original: 0x00036250 - 0x000363B1 (353 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036250(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00036250:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00036268; /* je: equal / zero */

loc_00036259:
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x64); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x386EF4); /* mulss */
    goto loc_0003626D;

loc_00036268:
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x60); /* cvtsi2ss */

loc_0003626D:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0003628E; /* jbe: below or equal (unsigned <=) */

loc_0003627A:
    MEM32(edi + 0x50) = 0xFFFFFFFFu;
    ecx = 0x14;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0003628E:
    xmm1.f[0] = MEMF(ecx + 0x4C); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x44); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x40); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 0x48); /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1.f[0] = MEMF(ecx + 0x40); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    MEM32(edi + 4) = eax;
    xmm1.f[0] = MEMF(ecx + 0x44); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    edx = edx + 3;
    edx = edx & 0xFFFFFFFCu;
    MEM32(edi + 0x18) = edx;
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 0x48); /* mulss */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    MEM32(edi + 0x2C) = eax;
    xmm1.f[0] = MEMF(ecx + 0x4C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x3F7318);
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    eax = esi + 0x47A270;
    MEM32(edi) = eax;
    eax = MEM32(edi + 4);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = (int32_t)xmm1.f[0]; /* cvttss2si */
    edx = edx + 3;
    edx = edx & 0xFFFFFFFCu;
    MEM32(edi + 0x40) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = eax + eax * 8;
    edx = edx << 4;
    esi = edx + esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    eax = esi + 0x47A270;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(edi + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = eax + eax * 8;
    eax = eax << 4;
    esi = eax + esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    eax = esi + 0x47A270;
    MEM32(edi + 0x28) = eax;
    eax = MEM32(edi + 0x2C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = eax + eax * 8;
    eax = MEM32(edi + 0x40);
    edx = edx << 4;
    esi = edx + esi + 0xF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 2);
    esi = esi & 0xFFFFFFF0u;
    ebx = esi + 0x47A270;
    eax = eax + eax * 8;
    eax = eax << 4;
    MEM32(edi + 0x3C) = ebx;
    edx = MEM32(ecx + 0x40);
    esi = esi + eax;
    MEM32(edi + 0xC) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(0x3F7318) = esi;
    MEM32(edi + 0x20) = eax;
    edx = MEM32(ecx + 0x48);
    MEM32(edi + 0x34) = edx;
    eax = MEM32(ecx + 0x4C);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edi + 0x48) = eax;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}
