#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128A20
 * Original: 0x00128A20 - 0x00128C22 (514 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00128A20:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    PUSH32(esp, ebx);
    ebx = 7;
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = ebx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    esi = 0; /* xor self */
    /* nop */

loc_00128A50:
    if (CMP_EQ(esi, 6)) goto loc_00128ACE; /* je: equal / zero */

loc_00128A55:
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_00128A63:
    ecx = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = eax + 0x30;
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00128ABB; /* jbe: below or equal (unsigned <=) */

loc_00128AA5:
    ebx = MEM32(esp + 0x28);
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x28) = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_00128ACE;

loc_00128ABB:
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00128ACE; /* jbe: below or equal (unsigned <=) */

loc_00128AC6:
    ebx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_00128ACE:
    esi++;
    if (CMP_L(esi, 7)) goto loc_00128A50; /* jl: less (signed <) */

loc_00128AD8:
    eax = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(esp + 0x28));
    esi = MEM32(ebp + 0x10);
    MEM8(eax) = LO8(ecx);
    MEM8(esi) = LO8(ebx);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_00128AF5:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    eax = eax + 0x30;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    eax = edi;
    memcpy((void *)XBOX_PTR(esp + 0x14), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_00128B10:
    memcpy(xmm5.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm4.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = eax + 0x30;
    eax = MEM32(ebp + 8);
    memcpy(xmm0.b, xmm5.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* shufps xmm3, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    memcpy(xmm3.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    edx = 0x386194;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    ecx = esp + 0x10;
    MEMF(ecx) = xmm2.f[0]; /* movss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm5.f[0] (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm5.b, xmm2.b, 16); /* movaps */
    /* shufps xmm5, xmm2, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    /* subps: xmm3.f[0] -= xmm4.f[0] (packed 4xfloat) */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0x28;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00128BF7; /* jbe: below or equal (unsigned <=) */

loc_00128BD7:
    xmm2.f[0] = MEMF(esp + 0x28); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00128BF7; /* jbe: below or equal (unsigned <=) */

loc_00128BE2:
    eax = MEM32(ebp + 0x14);
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 0x10); /* divss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00128BF7:
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00128C13; /* jbe: below or equal (unsigned <=) */

loc_00128BFC:
    ecx = MEM32(ebp + 0x14);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_00128C13:
    edx = MEM32(ebp + 0x14);
    POP32(esp, esi);
    MEMF(edx) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
