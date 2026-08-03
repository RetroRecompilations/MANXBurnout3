#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000542D0
 * Original: 0x000542D0 - 0x0005460B (827 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000542D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_000542D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(ebx + 0x3C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A2D50); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x54FA50), 16); /* movaps */
    PUSH32(esp, esi);
    memcpy((void *)XBOX_PTR(esp + 0x3C), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = 0x54FA20;
    MEM32(esp + 0x28) = 0x54FA50;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x5C);
    MEM32(esp + 0x3C) = eax;
    SET_LO8(eax, MEM8(ebx + 0x51));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + 0x30);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00054371; /* je: equal / zero */

loc_00054369:
    ecx = MEM32(eax + 4);
    MEM32(ebx + 0x34) = ecx;
    goto loc_00054377;

loc_00054371:
    edx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebx + 0x34) = edx;

loc_00054377:
    ecx = MEM32(0x73A1A4);
    MEM32(ebx + 0x38) = ecx;
    SET_LO8(ecx, MEM8(ebx + 0x50));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0005445E; /* je: equal / zero */

loc_0005438B:
    edx = (uint32_t)(int32_t)SMEM16(eax);
    if (CMP_NE(edx, MEM32(0x73A1A4))) goto loc_0005445E; /* jne: not equal / not zero */

loc_0005439A:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], MEMF(ebx + 0x4C) - sets EFLAGS */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    if ((xmm0.f[0] < MEMF(ebx + 0x4C))) goto loc_000543B6; /* jb: below (unsigned <) */

loc_000543AC:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_00054402;

loc_000543B6:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    /* comiss xmm0.f[0], MEMF(ebx + 0x4C) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(ebx + 0x4C))) goto loc_000543EF; /* jb: below (unsigned <) */

loc_000543C4:
    xmm0.f[0] = MEMF(ebx + 0x4C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    /* comiss xmm0.f[0], MEMF(0x3A69B8) - sets EFLAGS */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= MEMF(0x3A69B8))) goto loc_000543EF; /* jbe: below or equal (unsigned <=) */

loc_000543E0:
    PUSH32(esp, 0x3F666666);
    esi = 0x411560;
    PUSH32(esp, 0); sub_001418A0(); /* call 0x001418A0 */

loc_000543EF:
    xmm0.f[0] = MEMF(ebx + 0x4C); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x60EA1C); /* subss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */

loc_00054402:
    esi = MEM32(esp + 0x18);
    MEMF(ebx + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, esi);
    eax = esp + 0x44;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    PUSH32(esp, 0x54FA20);
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000340E0(); /* call 0x000340E0 */

loc_00054434:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 0xC;
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x54FA40);
    PUSH32(esp, ecx);
    eax = esp + 0x5C;
    memcpy((void *)XBOX_PTR(esp + 0x4C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000340E0(); /* call 0x000340E0 */

loc_00054453:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */

loc_0005445E:
    SET_LO16(ecx, MEM16(ebx + 0x38));
    SET_LO16(edx, MEM16(ebx + 0x34));
    SET_LO16(ecx, LO16(ecx) + 0x30);
    MEM16(ebx + 0x46) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebx + 0x52));
    SET_LO16(edx, LO16(edx) + 0x30);
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    eax = ebx + 0x40;
    MEM16(eax) = LO16(edx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000544C5; /* je: equal / zero */

loc_0005447F:
    ecx = MEM32(ebx + 0x24);
    xmm0.f[0] = MEMF(ecx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1690); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x387C04); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    goto loc_000544FB;

loc_000544C5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    edx = MEM32(0x4D6180);
    xmm1.f[0] = MEMF(0x389CB8); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 0x10); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x389CB4); /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */

loc_000544FB:
    PUSH32(esp, 0x7F7FFFFF);
    PUSH32(esp, 0x41);
    PUSH32(esp, 0x3FC00000);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x2C);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0); sub_000F68E0(); /* call 0x000F68E0 */

loc_0005452E:
    eax = MEM32(ebx + 0x2C);
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 0xC); /* movss */
    edx = MEM32(esp + 0x28);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B168C); /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm2.f[0] = MEMF(esp + 0x20); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    xmm2.f[0] = MEMF(esp + 0x24); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(eax); /* movss */
    MEM32(esp + 0x20) = edx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x24) = ecx;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    ebx = MEM32(ebx + 0x2C);
    xmm1.f[0] = MEMF(ebx + 8); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebx + 0xC); /* movss */
    edx = MEM32(esp + 0x28);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    POP32(esp, edi);
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    POP32(esp, esi);
    MEM32(ebx + 8) = edx;
    MEM32(ebx + 0xC) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
