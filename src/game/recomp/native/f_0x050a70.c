#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00050A70
 * Original: 0x00050A70 - 0x00050F60 (1264 bytes, 278 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00050A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00050A70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    ecx = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = eax + ecx + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x10);
    eax = eax + 2;
    MEM32(esp + 0x10) = eax;
    /* cmp MEM32(ebp + 0xC), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(MEM32(ebp + 0xC), 3)) goto loc_00050B8B; /* jne: not equal / not zero */

loc_00050AAE:
    eax = MEM32(0x464658);
    edx = MEM32(ebx + 0x20);
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0x56FD98);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4A2570);
    PUSH32(esp, edx);
    edx = 0x56FDA0;
    ecx = 0x54F7C8;
    edi = esp + 0x50;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_00050B0B:
    eax = MEM32(0x464658);
    edx = MEM32(ebx + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x56FD98);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4A2580);
    PUSH32(esp, edx);
    edx = 0x56FDA0;
    ecx = 0x54F7B0;
    edi = esp + 0x50;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_00050B5D:
    eax = MEM32(ebx + 0x38);
    eax = MEM32(eax + 0x250);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00050CEA; /* je: equal / zero */

loc_00050B6F:
    ecx = MEM32(eax * 4 + 0x39E978);
    edx = MEM32(0x4D532C);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + ecx * 4);
    MEM32(esp + 0x10) = ecx;
    goto loc_00050CEA;

loc_00050B8B:
    xmm2.f[0] = MEMF(0x54F7C8); /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(ebx + 0x20);
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x54F7CC); /* movss */
    edx = MEM32(esp + 0x20);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x4A2570); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x38); /* subss */
    ecx = MEM32(esp + 0x24);
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x4A2574); /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(eax) = edx;
    MEM32(esp + 0x3C) = ecx;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x3C); /* subss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x54F7C8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x54F7CC);
    MEM32(eax + 0xC) = ecx;
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    ecx = 0x1C1930;
    MEM32(eax + 0x3C) = ecx;
    xmm1.f[0] = MEMF(0x54F7B0); /* movss */
    eax = MEM32(ebx + 0x28);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x54F7B4); /* movss */
    edx = MEM32(esp + 0x38);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x4A2580); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x4A2584); /* movss */
    edx = MEM32(esp + 0x38);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEM32(eax) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    MEM32(eax + 4) = edx;
    edx = MEM32(0x54F7B0);
    MEM32(eax + 8) = edx;
    edx = MEM32(0x54F7B4);
    MEM32(eax + 0xC) = edx;
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = ecx;

loc_00050CEA:
    xmm0.f[0] = MEMF(0x4A2570); /* movss */
    esi = MEM32(ebx + 0x24);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x4A2574); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x54F7CC); /* addss */
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    xmm0.f[0] = MEMF(0x3B20B4); /* movss */
    edx = esp + 0x44;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x3FD170);
    eax = esp + 0x44;
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A2D7C); /* movss */
    PUSH32(esp, ecx);
    edi = esp + 0x64;
    MEMF(esp + 0x64) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_000B52A0(); /* call 0x000B52A0 */

loc_00050D8C:
    xmm0.f[0] = MEMF(0x4A2580); /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = MEMF(0x3B20B4); /* movss */
    esi = MEM32(ebx + 0x2C);
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x4A2584); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x54F7B4); /* addss */
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x40);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x3FD170);
    edx = esp + 0x44;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEMF(esp + 0x60) = xmm2.f[0]; /* movss */
    xmm2.f[0] = MEMF(0x3A2D7C); /* movss */
    PUSH32(esp, eax);
    edi = esp + 0x54;
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_000B52A0(); /* call 0x000B52A0 */

loc_00050E39:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_00050EBC; /* je: equal / zero */

loc_00050E5C:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    edi = MEM32(ebx + 0x34);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0x42100000);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = MEM32(0x4D6180);
    PUSH32(esp, 0x54F7A0);
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0005AA60(); /* call 0x0005AA60 */

loc_00050E9E:
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x2C);
    eax = eax << 4;
    MEM32(eax + edx) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00050EBC:
    ebx = MEM32(ebx + 0x34);
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54F7A0); /* movss */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x20) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54F7A4); /* movss */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x24) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x24); /* subss */
    MEM32(ebx) = edx;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x3C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    MEM32(ebx + 4) = eax;
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(ebx + 0xC) = edx;
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm0.b, 16); /* movaps */
    MEM32(ebx + 0x3C) = 0x1C1930;
    edx = MEM32(ecx + 0x2C);
    POP32(esp, edi);
    eax = eax << 4;
    POP32(esp, esi);
    MEM32(eax + edx) = 1;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
