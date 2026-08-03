#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00181780
 * Original: 0x00181780 - 0x001818F2 (370 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00181780:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    edx = MEM32(ecx + 0xCC4);
    xmm0.f[0] = MEMF(edx + 0x49C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B03EC) - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0.f[0] >= MEMF(0x3B03EC))) goto loc_001818E9; /* jae: above or equal (unsigned >=) */

loc_001817AA:
    eax = MEM32(ecx + 0xCC0);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm1.b, 16); /* movaps */
    eax = MEM32(eax + 0x40);
    ecx = MEM32(eax + 0x1690);
    SET_LO8(eax, MEM8(eax + 0x16B7));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2.f[0] = MEMF(esp + 0x94); /* movss */
    SET_LO8(edx, MEM8(edx + 0x1016));
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    MEM32(esp + 0x1C) = ecx;
    MEM8(esp + 0x1B) = LO8(edx);
    SET_LO8(ebx, 0x10);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001818E9; /* je: equal / zero */

loc_00181813:
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x20) = eax;
    /* nop */

loc_00181820:
    SET_LO8(ecx, MEM8(esp + 0x1B));
    if (TEST_Z(LO8(ecx), LO8(ebx))) goto loc_001818CD; /* je: equal / zero */

loc_0018182C:
    edx = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    eax = esp + 0x50;
    ecx = esp + 0x60;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;
    esi = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x28);
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
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x6457C);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = 0x60E200;
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0); sub_00189D50(); /* call 0x00189D50 */

loc_001818C7:
    xmm2.f[0] = MEMF(esp + 0x2C); /* movss */

loc_001818CD:
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = ecx + 0x30;
    SET_LO8(ebx, LO8(ebx) << 1);
    eax--;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_00181820; /* jne: not equal / not zero */

loc_001818E9:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
