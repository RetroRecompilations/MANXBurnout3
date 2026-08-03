#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00186D50
 * Original: 0x00186D50 - 0x00186E62 (274 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00186D50:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    ecx = MEM32(eax + 0xCC4);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(ebx + 0x64578); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x100C); /* subss */
    /* comiss xmm0.f[0], MEMF(0x3B1694) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0.f[0] >= MEMF(0x3B1694))) goto loc_00186E59; /* jae: above or equal (unsigned >=) */

loc_00186D82:
    xmm1.f[0] = MEMF(0x3A2D50); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00186D9F; /* jbe: below or equal (unsigned <=) */

loc_00186D8F:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    goto loc_00186DC5;

loc_00186D9F:
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16E8); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69C0); /* mulss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */

loc_00186DC5:
    xmm2.f[0] = MEMF(ebx + 0x6457C); /* movss */
    edx = MEM32(eax + 0xCC0);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0xB0), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    edi = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    ecx = esp + 0x1C;
    xmm2.f[0] = MEMF(ecx); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebx + 0x6457C); /* mulss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */

loc_00186E21:
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = esi + 0x7547CC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(esi * 4 + 0x41A514);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00186E53:
    esi++;
    if (CMP_L(esi, 3)) goto loc_00186E21; /* jl: less (signed <) */

loc_00186E59:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
