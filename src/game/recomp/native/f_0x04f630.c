#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004F630
 * Original: 0x0004F630 - 0x0004F7E4 (436 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0004F630:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x20);
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 0xC8);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1694); /* addss */
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0x19BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x739C60);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_0017E030(); /* call 0x0017E030 */

loc_0004F673:
    /* test eax, eax - flags set for next jcc */
    edx = ebx + 0x3C;
    if (CMP_GE(eax & eax, 0)) goto loc_0004F689; /* jge: greater or equal (signed >=) */

loc_0004F67A:
    SET_LO16(ecx, MEM16(0x3F7B0C));
    eax = (uint32_t)(-(int32_t)eax);
    MEM16(edx) = LO16(ecx);
    edx = edx + 2;

loc_0004F689:
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, 0); sub_001B2EF0(); /* call 0x001B2EF0 */

loc_0004F696:
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    esp = esp + 8;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x1C) = 0x54FA20;
    MEM32(esp + 0x20) = 0x54FA50;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x48);
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA20), 16); /* movaps */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x3FA00000);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x42340000);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x5C);
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x48) = ecx;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x24);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = edx;
    edx = esp + 0x40;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1920); /* movss */
    PUSH32(esp, eax);
    eax = ebx + 0x3C;
    ecx = esp + 0x40;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0004F767:
    eax = MEM32(ebx + 0x24);
    ecx = MEM32(eax + 8);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEM32(ebx + 0x50) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebx + 0x54) = edx;
    xmm1.f[0] = MEMF(ebx + 0x50); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx + 0x54); /* movss */
    ecx = MEM32(esp + 0x28);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x20) = ecx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x24) = edx;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    POP32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    POP32(esp, esi);
    MEM32(ebx + 0x58) = eax;
    MEM32(ebx + 0x5C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
