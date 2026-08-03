#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012C3F0
 * Original: 0x0012C3F0 - 0x0012C523 (307 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C3F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0012C3F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x40);
    xmm2.f[0] = MEMF(0x3B172C); /* movss */
    PUSH32(esp, ebx);
    edx = edx | 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    /* cmp MEM8(ecx + 0xC), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(MEM8(ecx + 0xC), LO8(ebx))) goto loc_0012C51B; /* jle: less or equal (signed <=) */

loc_0012C41C:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    edx = esp + 0xC;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm3.f[0] = MEMF(edx); /* movss */
    edx = esp + 0x20;
    MEM32(esp + 0x14) = edx;
    /* shufps xmm3, xmm3, 0 */
    MEM32(esp + 0xC) = 0x180;
    edx = 0xEA0;
    goto loc_0012C450;

    /* nop */

loc_0012C450:
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + ecx), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + ecx + 0x10), 16); /* movaps */
    ecx = MEM32(eax + 0x14);
    esi = MEM32(esp + 0xC);
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    ecx = ecx + esi;
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x18) = ecx;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi + 0x30) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    ecx = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    ecx = esp + 0x1C;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_0012C4F3; /* jbe: below or equal (unsigned <=) */

loc_0012C4EC:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEM32(esp + 0x10) = ebx;

loc_0012C4F3:
    MEM32(esp + 0xC) = MEM32(esp + 0xC) + 0x40;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x40);
    esi = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    ebx++;
    edx = edx + 0x20;
    if (CMP_L(ebx, esi)) goto loc_0012C450; /* jl: less (signed <) */

loc_0012C50E:
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0012C51B:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
