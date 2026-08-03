#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00040660
 * Original: 0x00040660 - 0x00040818 (440 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040660(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00040660:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x3B0);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x58);
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax + 0x80);
    MEM32(edx + 0x160) = ecx;
    ecx = MEM32(eax + 0x84);
    MEM32(edx + 0x164) = ecx;
    eax = eax + 0x80;
    eax = MEM32(eax + 8);
    MEM32(edx + 0x168) = eax;
    ecx = MEM32(ebx + 0x84);
    eax = MEM32(0x35FB48);
    MEM32(edx + 0x170) = ecx;
    PUSH32(esp, esi);
    esi = eax + 0xC60;
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = eax + 0xCA0;
    eax = eax + 0xEE0;
    edi = edx + 0x40;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(eax);
    ecx = edx + 0x100;
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(ecx + 8) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = esi;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;
    eax = edx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    esi = edx + 0x80;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001CF153(); /* call 0x001CF153 */

loc_0004070F:
    ecx = edx + 0xC0;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    {
    float _d0 = xmm0.f[0];
    float _s0 = xmm2.f[0];
    float _d1 = xmm0.f[1];
    float _s1 = xmm2.f[1];
    float _d2 = xmm0.f[2];
    float _s2 = xmm2.f[2];
    float _d3 = xmm0.f[3];
    float _s3 = xmm2.f[3];
    xmm0.f[0] = _d0;
    xmm0.f[1] = _s0;
    xmm0.f[2] = _d1;
    xmm0.f[3] = _s1;
    } /* unpcklps */
    {
    float _d0 = xmm1.f[0];
    float _s0 = xmm2.f[0];
    float _d1 = xmm1.f[1];
    float _s1 = xmm2.f[1];
    float _d2 = xmm1.f[2];
    float _s2 = xmm2.f[2];
    float _d3 = xmm1.f[3];
    float _s3 = xmm2.f[3];
    xmm1.f[0] = _d2;
    xmm1.f[1] = _s2;
    xmm1.f[2] = _d3;
    xmm1.f[3] = _s3;
    } /* unpckhps */
    {
    float _d0 = xmm3.f[0];
    float _s0 = xmm5.f[0];
    float _d1 = xmm3.f[1];
    float _s1 = xmm5.f[1];
    float _d2 = xmm3.f[2];
    float _s2 = xmm5.f[2];
    float _d3 = xmm3.f[3];
    float _s3 = xmm5.f[3];
    xmm3.f[0] = _d0;
    xmm3.f[1] = _s0;
    xmm3.f[2] = _d1;
    xmm3.f[3] = _s1;
    } /* unpcklps */
    {
    float _d0 = xmm4.f[0];
    float _s0 = xmm5.f[0];
    float _d1 = xmm4.f[1];
    float _s1 = xmm5.f[1];
    float _d2 = xmm4.f[2];
    float _s2 = xmm5.f[2];
    float _d3 = xmm4.f[3];
    float _s3 = xmm5.f[3];
    xmm4.f[0] = _d2;
    xmm4.f[1] = _s2;
    xmm4.f[2] = _d3;
    xmm4.f[3] = _s3;
    } /* unpckhps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 8), xmm3.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x18), xmm3.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm1.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x28), xmm4.b, 8); /* movlps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm1.b + 8, 8); /* movhps */
    memcpy((void *)XBOX_PTR(eax + 0x38), xmm4.b + 8, 8); /* movhps */
    eax = MEM32(ebx + 4);
    xmm0.f[0] = MEMF(eax + 0x50); /* movss */
    eax = eax + 0x50;
    esi = MEM32(ebp + 8);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x10); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x14); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x20); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x24); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x28); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x30); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x34); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x38); /* movss */
    ecx = edx + 0x120;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00040310(); /* call 0x00040310 */

loc_00040802:
    ecx = esi + 0x680;
    eax = ebx;
    PUSH32(esp, 0); sub_001C8F70(); /* call 0x001C8F70 */

loc_0004080F:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
