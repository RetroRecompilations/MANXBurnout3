#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018AF90
 * Original: 0x0018AF90 - 0x0018B14B (443 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AF90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0018AF90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    /* test MEM8(0x754B60), 1 - flags set for next jcc */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(MEM8(0x754B60), 1)) goto loc_0018AFD5; /* jne: not equal / not zero */

loc_0018AFA8:
    eax = MEM32(0x754B60);
    xmm1.f[0] = MEMF(0x387464); /* movss */
    eax = eax | 1;
    MEM32(0x754B60) = eax;
    MEMF(0x754B50) = xmm0.f[0]; /* movss */
    MEMF(0x754B54) = xmm1.f[0]; /* movss */
    MEMF(0x754B58) = xmm0.f[0]; /* movss */

loc_0018AFD5:
    eax = MEM32(ebp + 8);
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    eax = eax + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 5;
    goto loc_0018B000;

    /* nop */

loc_0018B000:
    xmm1.f[0] = MEMF(eax); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0018B12F; /* jbe: below or equal (unsigned <=) */

loc_0018B00D:
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + -32), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + -16), 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    ecx = esp + 0x1C;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    ebx = eax + -16;
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 0x20;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3A5600) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3A5600))) goto loc_0018B091; /* jbe: below or equal (unsigned <=) */

loc_0018B087:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    goto loc_0018B09D;

loc_0018B091:
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3895BC); /* mulss */

loc_0018B09D:
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    /* nop */

loc_0018B0B0:
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = esi + 0x7547E0;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    eax = MEM32(esi * 4 + 0x41A560);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5A9A00);
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_0018B0E3:
    esi++;
    if (CMP_L(esi, 3)) goto loc_0018B0B0; /* jl: less (signed <) */

loc_0018B0E9:
    eax = MEM32(esp + 0x10);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    xmm2.f[0] = MEMF(ebp + 0xC); /* movss */
    memcpy((void *)XBOX_PTR(eax + -32), xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x754B50), 16); /* movaps */
    edx = esp + 0x24;
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */

loc_0018B12F:
    ecx = MEM32(esp + 0x18);
    eax = eax + 0x30;
    ecx--;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = ecx;
    if ((ecx != 0)) goto loc_0018B000; /* jne: not equal / not zero */

loc_0018B145:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
