#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010B210
 * Original: 0x0010B210 - 0x0010B310 (256 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0010B210:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(edi + 0x18));
    if (CMP_BE(LO8(edx) & LO8(edx), 0)) goto loc_0010B282; /* jbe: below or equal (unsigned <=) */

loc_0010B228:
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(edi + 8);
    edx = ZX8(LO8(edx));
    ecx = esp + 0x18;
    MEM32(esp + 0x10) = edx;
    /* nop */

loc_0010B240:
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    edx = esp + 0x14;
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    eax = eax + 0x10;
    ecx = ecx + 4;
    edx--;
    MEM32(esp + 0x10) = edx;
    if ((edx != 0)) goto loc_0010B240; /* jne: not equal / not zero */

loc_0010B282:
    MEM32(esi) = 0;
    SET_LO8(ecx, MEM8(edi + 0x1A));
    SET_LO8(eax, 0); /* xor self */
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0010B30A; /* jbe: below or equal (unsigned <=) */

loc_0010B295:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    goto loc_0010B2A0;

    /* nop */

loc_0010B2A0:
    ecx = MEM32(edi + 0xC);
    eax = ZX8(LO8(eax));
    SET_LO16(eax, MEM16(ecx + eax * 2));
    ecx = ZX8(LO8(eax));
    xmm1.f[0] = MEMF(esp + ecx * 4 + 0x18); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_0010B2F9; /* jb: below (unsigned <) */

loc_0010B2B8:
    edx = ZX8(HI8(eax));
    xmm1.f[0] = MEMF(esp + edx * 4 + 0x18); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_0010B2F9; /* jb: below (unsigned <) */

loc_0010B2C6:
    edi = MEM32(esi);
    eax = edi;
    eax = eax << 4;
    eax = eax + MEM32(ebp + 8);
    edi++;
    MEM32(esi) = edi;
    edi = MEM32(ebp + 8);
    ecx = ecx << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    ecx = MEM32(esi);
    eax = ecx;
    eax = eax << 4;
    eax = eax + edi;
    edi = MEM32(ebp + 0xC);
    ecx++;
    MEM32(esi) = ecx;
    edx = edx << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */

loc_0010B2F9:
    SET_LO8(eax, MEM8(esp + 0xF));
    SET_LO8(ecx, MEM8(edi + 0x1A));
    SET_LO8(eax, LO8(eax) + 1);
    /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_B(LO8(eax), LO8(ecx))) goto loc_0010B2A0; /* jb: below (unsigned <) */

loc_0010B30A:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
