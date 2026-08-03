#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00103660
 * Original: 0x00103660 - 0x0010385C (508 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00103660:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    SET_LO8(ecx, MEM8(edi + 1));
    PUSH32(esp, esi);
    esi = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 2));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, 0); sub_00102FD0(); /* call 0x00102FD0 */

loc_0010367C:
    memcpy(xmm2.b, (void *)XBOX_PTR(0x40A200), 16); /* movaps */
    ecx = ZX16(MEM16(edi + 4));
    memcpy(xmm1.b, (void *)XBOX_PTR(0x752D60), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x752D70), 16); /* movaps */
    edx = ZX16(MEM16(edi + 6));
    eax = ZX16(MEM16(edi + 8));
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x384208); /* movss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x14), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    esp = esp + 4;
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF270(); /* call 0x000FF270 */

loc_001036F2:
    SET_LO16(eax, MEM16(edi + 0xA));
    xmm1.f[0] = MEMF(0x3B1B40); /* movss */
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00103730; /* jns: not sign (positive) */

loc_00103726:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00103730:
    MEMF(ebx) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0xC));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00103767; /* jns: not sign (positive) */

loc_0010375D:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00103767:
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0xE));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0010379F; /* jns: not sign (positive) */

loc_00103795:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0010379F:
    MEMF(ebx + 8) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x10));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_001037D7; /* jns: not sign (positive) */

loc_001037CD:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_001037D7:
    ecx = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x12));
    SET_LO8(edx, HI8(eax));
    edx = edx & 0x7F;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    edx = edx & 0xFF;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00103811; /* jns: not sign (positive) */

loc_00103807:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00103811:
    edx = 0; /* xor self */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x14));
    SET_LO8(edx, HI8(eax));
    edx = edx & 0x7F;
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    edx = edx & 0xFF;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00103846; /* jns: not sign (positive) */

loc_0010383F:
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */

loc_00103846:
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    SET_LO8(eax, MEM8(edi + 3));
    ecx = MEM32(ebp + 8);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
