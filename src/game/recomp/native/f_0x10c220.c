#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010C220
 * Original: 0x0010C220 - 0x0010C3AE (398 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0010C220:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(edx, edx)) goto loc_0010C239; /* jne: not equal / not zero */

loc_0010C232:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010C239:
    /* test edx, edx - flags set for next jcc */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    xmm2.f[0] = MEMF(ecx + 0xC); /* movss */
    if (CMP_BE(edx & edx, 0)) goto loc_0010C3A7; /* jbe: below or equal (unsigned <=) */

loc_0010C249:
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    esi = edx + -1;
    esi = esi >> 1;
    esi++;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = esi;
    /* nop */

loc_0010C260:
    edx = edi;
    ebx = MEM32(edx);
    MEM32(esp + 0x30) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esp + 0x34) = ebx;
    ebx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = ebx;
    edx = edi + 0x10;
    ebx = MEM32(edx);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= MEMF(esp + 0x30) (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x4C) = edx;
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    edx = esp + 0x1C;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x48) = ebx;
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= MEMF(esp + 0x40) (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    edx = esp + 0x20;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm2.f[0])) goto loc_0010C2F6; /* jbe: below or equal (unsigned <=) */

loc_0010C2F2:
    edx = 0; /* xor self */
    goto loc_0010C2FB;

loc_0010C2F6:
    edx = 1;

loc_0010C2FB:
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    /* comiss xmm1.f[0], xmm2.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm2.f[0])) goto loc_0010C30A; /* jbe: below or equal (unsigned <=) */

loc_0010C306:
    ebx = 0; /* xor self */
    goto loc_0010C30F;

loc_0010C30A:
    ebx = 1;

loc_0010C30F:
    if (CMP_EQ(edx, ebx)) goto loc_0010C36F; /* je: equal / zero */

loc_0010C313:
    esi = esp + 0x40;
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    MEM32(esp + 0x28) = esi;
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    esi = esp + 0x30;
    xmm4.f[0] = xmm4.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esi) (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x24); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    eax++;
    ecx = ecx + 0x10;

loc_0010C36F:
    if (CMP_NE(edx, 1)) goto loc_0010C382; /* jne: not equal / not zero */

loc_0010C374:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = ecx;
    eax++;
    ecx = ecx + 0x10;
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */

loc_0010C382:
    if (CMP_NE(ebx, 1)) goto loc_0010C395; /* jne: not equal / not zero */

loc_0010C387:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    edx = ecx;
    eax++;
    ecx = ecx + 0x10;
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */

loc_0010C395:
    edi = edi + 0x20;
    esi--;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = esi;
    if ((esi != 0)) goto loc_0010C260; /* jne: not equal / not zero */

loc_0010C3A7:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
