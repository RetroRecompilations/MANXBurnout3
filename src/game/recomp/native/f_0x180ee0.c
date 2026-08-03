#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00180EE0
 * Original: 0x00180EE0 - 0x0018112E (590 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00180EE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    xmm0.f[0] = MEMF(eax + 0x64); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B03FC) - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0.f[0] >= MEMF(0x3B03FC))) goto loc_00181125; /* jae: above or equal (unsigned >=) */

loc_00180F01:
    ecx = MEM32(eax + 0x10BC);
    if (CMP_GE(ecx, 0x270F)) goto loc_00181125; /* jge: greater or equal (signed >=) */

loc_00180F13:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm3.f[0] = MEMF(eax + 0x64); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1B4C); /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x40), 16); /* movaps */
    eax = MEM32(eax + 0x50);
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    ebx = MEM32(eax + 0x1684);
    SET_LO8(eax, MEM8(eax + 0x16B4));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1B48); /* mulss */
    ecx = MEM32(ebp + 8);
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1B44); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B03F8); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B19D0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x6457C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x384A80); /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    memcpy(xmm4.b, xmm3.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00181125; /* je: equal / zero */

loc_00180FD9:
    edx = esp + 0x50;
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x60;
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    edx = esp + 0x14;
    xmm2.f[0] = MEMF(edx); /* movss */
    eax = ZX8(LO8(eax));
    ecx = esp + 0x80;
    /* shufps xmm2, xmm2, 0 */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm2.b, 16); /* movaps */
    MEM32(esp + 0x14) = eax;
    goto loc_00181023;

loc_0018101B:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0xD0), 16); /* movaps */

loc_00181023:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x20);
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
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x24);
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x2C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xC0), 16); /* movaps */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7547D9);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = edx;
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    PUSH32(esp, edx);
    eax = 0xA;
    memcpy((void *)XBOX_PTR(esp + 0x98), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_00181113:
    eax = MEM32(esp + 0x14);
    ebx = ebx + 0x30;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0018101B; /* jne: not equal / not zero */

loc_00181125:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
