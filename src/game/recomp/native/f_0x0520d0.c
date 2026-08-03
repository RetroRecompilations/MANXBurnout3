#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000520D0
 * Original: 0x000520D0 - 0x000521EB (283 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000520D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_000520D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebx + 0x40;
    PUSH32(esp, eax);
    MEMF(ebx + 0x38) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00052620(); /* call 0x00052620 */

loc_000520ED:
    eax = MEM32(ebx + 0x24);
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    xmm3.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm4.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = 0x54FA20;
    MEM32(esp + 0x18) = 0x54FA50;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x38);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x3FA00000);
    PUSH32(esp, 0x41F00000);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x34) = ecx;
    PUSH32(esp, 0x54FA20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebx + 0x20);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x54F898); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] - MEMF(0x388E90); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x388F08); /* subss */
    PUSH32(esp, eax);
    eax = ebx + 0x40;
    ecx = esp + 0x30;
    MEMF(esp + 0x38) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_000521D2:
    SET_LO8(eax, MEM8(ebx + 0xCC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000521E2; /* je: equal / zero */

loc_000521DC:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000521F0(); /* call 0x000521F0 */

loc_000521E2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
