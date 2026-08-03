#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004DA90
 * Original: 0x0004DA90 - 0x0004DD00 (624 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004DA90(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_0004DA90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    PUSH32(esp, edi);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1768); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEM32(0x54F528) = eax;
    MEM32(0x54F548) = eax;
    MEM32(0x54F568) = eax;
    eax = 0; /* xor self */
    MEM32(0x4607C8) = eax;
    MEM32(0x4607CC) = eax;
    MEM32(0x4607D0) = eax;
    MEM32(0x4607D4) = eax;
    MEM32(0x4607D8) = eax;
    MEM32(0x4607DC) = eax;
    MEM32(0x4607E0) = eax;
    MEM32(0x4607E4) = eax;
    MEM32(0x4607E8) = eax;
    MEM32(0x4607EC) = eax;
    MEM32(0x4607F0) = eax;
    MEM32(0x4607F4) = eax;
    MEM32(0x4607F8) = eax;
    MEM32(0x4607FC) = eax;
    MEM32(0x460800) = eax;
    MEM32(0x460804) = eax;
    MEM32(0x460808) = eax;
    MEM32(0x46080C) = eax;
    MEM32(0x460810) = eax;
    MEM32(0x460814) = eax;
    MEM32(0x460818) = eax;
    MEM32(0x46081C) = eax;
    MEM32(0x460820) = eax;
    MEM32(0x460824) = eax;
    MEM32(0x460828) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(0x54F52C) = ecx;
    MEM32(0x54F54C) = ecx;
    MEM32(0x54F56C) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    MEM32(0x46082C) = eax;
    MEM32(0x460830) = eax;
    MEM32(0x460834) = eax;
    MEM32(0x460838) = eax;
    ecx = 0x29;
    edi = 0x460848;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0; /* xor self */
    MEM32(0x460770) = ecx;
    MEM32(0x460774) = ecx;
    MEM32(0x460778) = ecx;
    MEM32(0x46077C) = ecx;
    MEM32(0x460780) = ecx;
    MEM32(0x460784) = ecx;
    MEM32(0x460788) = ecx;
    MEM32(0x46078C) = ecx;
    MEM32(0x460790) = ecx;
    MEM32(0x460794) = ecx;
    MEM32(0x460798) = ecx;
    memcpy((void *)XBOX_PTR(0x54F510), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x54F530), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(0x54F550), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B18B0); /* movss */
    MEM32(0x46079C) = ecx;
    MEMF(0x54F520) = xmm0.f[0]; /* movss */
    MEMF(0x54F524) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1698); /* movss */
    MEM32(0x4607A0) = ecx;
    MEMF(0x54F540) = xmm0.f[0]; /* movss */
    MEMF(0x54F544) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1690); /* movss */
    MEM32(0x4607A4) = ecx;
    MEMF(0x54F560) = xmm0.f[0]; /* movss */
    MEMF(0x54F564) = xmm0.f[0]; /* movss */
    MEM32(0x46083C) = eax;
    MEM32(0x4607A8) = ecx;
    edx = 0; /* xor self */
    MEM32(0x4608F0) = edx;
    MEM32(0x4608F4) = edx;
    MEM32(0x4608F8) = edx;
    MEM32(0x4608FC) = edx;
    MEM32(0x460900) = edx;
    MEM32(0x460904) = edx;
    MEM32(0x460908) = edx;
    MEM32(0x46090C) = edx;
    MEM32(0x460910) = edx;
    MEM32(0x460914) = edx;
    MEM32(0x460918) = edx;
    MEM32(0x46091C) = edx;
    MEM32(0x4607AC) = ecx;
    MEM32(0x460920) = edx;
    MEM32(0x4607B0) = ecx;
    MEM32(0x460924) = edx;
    MEM32(0x4607B4) = ecx;
    MEM32(0x460928) = edx;
    MEM32(0x4607B8) = ecx;
    MEM32(0x46092C) = edx;
    MEM32(0x4607BC) = ecx;
    MEM32(0x460938) = eax;
    MEM32(0x4607C4) = eax;
    MEM32(0x460930) = edx;
    MEM32(0x460934) = eax;
    MEM32(0x460844) = eax;
    MEM32(0x460840) = eax;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
