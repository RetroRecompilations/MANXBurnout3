#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00186C20
 * Original: 0x00186C20 - 0x00186D50 (304 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00186C20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = eax;
    /* comiss xmm0.f[0], MEMF(esi + 0x2B4) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(esi + 0x2B4))) goto loc_00186D4B; /* jae: above or equal (unsigned >=) */

loc_00186C3C:
    xmm0.f[0] = MEMF(esi + 0x2B4); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1870) - sets EFLAGS */
    if ((xmm0.f[0] >= MEMF(0x3B1870))) goto loc_00186D4B; /* jae: above or equal (unsigned >=) */

loc_00186C51:
    ecx = MEM32(esi + 0x204);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x386EF4); /* mulss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1.f[0] = MEMF(edi + 0x6457C); /* movss */
    ecx = ecx + 0x30;
    edx = MEM32(ecx);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    eax = esp + 4;
    xmm1.f[0] = MEMF(eax); /* movss */
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 0x2B0);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0xB0), 16); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0xCC0);
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEM32(esp + 0x18) = edx;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    eax = eax + 0x5C;
    ecx = esp + 4;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_00186CE5:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    esi = esi + 0x2BB;
    PUSH32(esp, esi);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1684); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A55F8); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1.f[0]; /* movss */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp + 0x38;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00186D2B:
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = 8;
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_00186D4B:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
