#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0005A640
 * Original: 0x0005A640 - 0x0005A91C (732 bytes, 188 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0005A640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0005A640:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x1C);
    ecx = MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = eax + ecx + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x10);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(ebx + 0x2C);
    xmm0.f[0] = MEMF(eax + 0x2D0); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xC); /* subss */
    /* comiss xmm0.f[0], MEMF(eax + 0x2D0) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x68) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(eax + 0x2D0))) goto loc_0005A699; /* jbe: below or equal (unsigned <=) */

loc_0005A68B:
    xmm0.f[0] = MEMF(eax + 0x2D0); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0005A699:
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0005A6AA; /* jbe: below or equal (unsigned <=) */

loc_0005A6A1:
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_0005A6AA:
    xmm1.f[0] = MEMF(0x3B1838); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    ecx = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B17E8); /* mulss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(ebx + 0x30) = xmm0.f[0]; /* movss */
    edx = (int32_t)xmm3.f[0]; /* cvttss2si */
    PUSH32(esp, edx);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    eax = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3AB3F8);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x3F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243816(); /* call 0x00243816 */

loc_0005A6F4:
    esp = esp + 0x14;
    eax = ebx + 0x36;
    PUSH32(esp, 8);
    edx = esp + 0x74;
    PUSH32(esp, 0); sub_001B2C60(); /* call 0x001B2C60 */

loc_0005A705:
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    eax = 0x54FA20;
    esp = esp + 4;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = 0x54FA50;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    xmm0.f[0] = MEMF(0x3B1B44); /* movss */
    xmm2.f[0] = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ecx;
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0005A847; /* jbe: below or equal (unsigned <=) */

loc_0005A78D:
    edx = (int32_t)xmm2.f[0]; /* cvttss2si */
    MEM32(esp + 0x20) = eax;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    eax = esp + 0x50;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x54) = edx;
    edx = esp + 0x30;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x20) = 0x54FA40;
    MEM32(esp + 0x1C) = edx;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;

loc_0005A847:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    ecx = MEM32(0x4D6180);
    edx = MEM32(ebx + 0x24);
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x3FA00000);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x10); /* movss */
    PUSH32(esp, 0x42600000);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1690); /* subss */
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x20);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x389CB8); /* movss */
    PUSH32(esp, eax);
    eax = ebx + 0x36;
    ecx = esp + 0x40;
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0005A8B9:
    SET_LO8(eax, MEM8(ebx + 0x34));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0005A8CF; /* je: equal / zero */

loc_0005A8C0:
    xmm0.f[0] = MEMF(0x3B1688); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] > MEMF(esp + 0x18))) goto loc_0005A8DE; /* ja: above (unsigned >) */

loc_0005A8CF:
    ecx = MEM32(ebx + 0x2C);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(ecx + 0x2D0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(ecx + 0x2D0))) goto loc_0005A8FD; /* jbe: below or equal (unsigned <=) */

loc_0005A8DE:
    edx = MEM32(esp + 0x68);
    eax = MEM32(edx + 0x2C);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x6C);
    edx = edx | 1;
    ecx = ecx << 4;
    MEM32(ecx + eax) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0005A8FD:
    eax = MEM32(esp + 0x68);
    eax = MEM32(eax + 0x2C);
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x6C);
    POP32(esp, edi);
    edx = edx & 0xFFFFFFFEu;
    ecx = ecx << 4;
    POP32(esp, esi);
    MEM32(ecx + eax) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
