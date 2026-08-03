#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001314D0
 * Original: 0x001314D0 - 0x0013177D (685 bytes, 184 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001314D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001314D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2F8;
    SET_LO8(eax, MEM8(esi + 0x18));
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00131507; /* jbe: below or equal (unsigned <=) */

loc_001314EA:
    eax = 0; /* xor self */
    /* nop */

loc_001314F0:
    edi = MEM32(esi + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + eax), xmm0.b, 16); /* movaps */
    edi = ZX8(MEM8(esi + 0x18));
    ecx++;
    eax = eax + 0x10;
    if (CMP_L(ecx, edi)) goto loc_001314F0; /* jl: less (signed <) */

loc_00131507:
    SET_LO8(eax, MEM8(esi + 0x19));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001316A7; /* jbe: below or equal (unsigned <=) */

loc_0013151A:
    xmm4.f[0] = MEMF(0x3B191C); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm5.f[0] = MEMF(0x3B168C); /* movss */
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;

loc_00131535:
    ecx = MEM32(esi);
    ebx = ZX8(MEM8(eax + ecx + 1));
    edi = MEM32(esi + 8);
    eax = eax + ecx;
    ecx = ZX8(MEM8(eax));
    eax = ZX8(MEM8(eax + 2));
    ecx = ecx << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + edi), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(edi + ecx), 16); /* movaps */
    ebx = ebx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    eax = eax << 4;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + edi), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0xd2 */
    /* shufps xmm1, xmm1, 0xc9 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0xd2 */
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    /* shufps xmm6, xmm1, 0xc9 */
    /* mulps: xmm6.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    /* shufps xmm6, xmm2, 0x39 */
    xmm7.f[0] = xmm7.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x2C;
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    MEMF(eax) = xmm7.f[0]; /* movss */
    /* comiss xmm4.f[0], MEMF(esp + 0x2C) - sets EFLAGS */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    if ((xmm4.f[0] <= MEMF(esp + 0x2C))) goto loc_001315D2; /* jbe: below or equal (unsigned <=) */

loc_001315B9:
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    goto loc_00131622;

loc_001315D2:
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    /* shufps xmm6, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    eax = 0x3832AC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */

loc_00131622:
    eax = MEM32(esi + 4);
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    eax = eax + edx;
    MEMF(eax) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(esi + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + ecx), 16); /* movaps */
    eax = MEM32(esi + 4);
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    ecx = esp + 0x28;
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    MEMF(edx + eax + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    edi = ZX8(MEM8(esi + 0x19));
    ecx++;
    eax = eax + 3;
    edx = edx + 0x10;
    /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = eax;
    if (CMP_L(ecx, edi)) goto loc_00131535; /* jl: less (signed <) */

loc_001316A4:
    edx = MEM32(ebp + 0xC);

loc_001316A7:
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    edi = MEM32(ebp + 8);
    ecx = esp + 0x228;
    PUSH32(esp, ecx);
    edx = esp + 0x20C;
    PUSH32(esp, edx);
    eax = esp + 0x1F0;
    PUSH32(esp, eax);
    ecx = esp + 0x1D4;
    PUSH32(esp, ecx);
    edx = esp + 0x1B8;
    PUSH32(esp, edx);
    eax = esp + 0x19C;
    PUSH32(esp, eax);
    ecx = esp + 0x180;
    PUSH32(esp, ecx);
    edx = esp + 0x164;
    PUSH32(esp, edx);
    eax = esp + 0x148;
    PUSH32(esp, eax);
    ecx = esp + 0x12C;
    PUSH32(esp, ecx);
    edx = esp + 0x110;
    PUSH32(esp, edx);
    eax = esp + 0xF4;
    PUSH32(esp, eax);
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_00130C80(); /* call 0x00130C80 */

loc_00131733:
    edx = esp + 0x40;
    edi = edi + 0x28;
    PUSH32(esp, edi);
    eax = esp + 0x244;
    ecx = 0x478A48;
    MEM32(0x478A48) = edx;
    MEM32(0x478A4C) = esi;
    PUSH32(esp, 0); sub_00127340(); /* call 0x00127340 */

loc_00131758:
    eax = esp + 0x240;
    edx = 0x478A48;
    PUSH32(esp, 0); sub_00127CC0(); /* call 0x00127CC0 */

loc_00131769:
    edx = eax;
    eax = 0x478A48;
    PUSH32(esp, 0); sub_00128180(); /* call 0x00128180 */

loc_00131775:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
