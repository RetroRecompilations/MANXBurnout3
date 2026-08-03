#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00181130
 * Original: 0x00181130 - 0x00181606 (1238 bytes, 286 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00181130:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xCC0);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0xB0), 16); /* movaps */
    MEMF(esp + 0x9C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC4), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD4), xmm0.b, 16); /* movaps */
    ecx = MEM32(ecx + 0x40);
    SET_LO8(ecx, MEM8(ecx + 0x16B5));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xAC) = xmm1.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm2.b, 16); /* movaps */
    MEM8(esp + 0xF) = LO8(ecx);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00181429; /* je: equal / zero */

loc_001811B8:
    edx = ZX8(LO8(ecx));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = MEMF(0x3B16B8); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1A04); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1884); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B03F4); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0xCC0);
    edx = MEM32(ecx + 0x40);
    ebx = MEM32(edx + 0x1688);
    xmm1.f[0] = MEMF(0x3B18B8); /* movss */
    ecx = esp + 0x90;
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x70;
    edx = esp + 0xB0;
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = esp + 0x10;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    MEM32(esp + 0x8C) = edx;
    MEM32(esp + 0x28) = edx;
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm0.f[0] (packed 4xfloat) */
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x100), xmm3.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm2.b, 16); /* movaps */
    goto loc_001812A0;

    /* nop */

loc_001812A0:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x8C);
    edi = MEM32(esp + 0x14);
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
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x54);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x2C);
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
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, 1);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(esp + 0x74);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(eax + 0xCC4);
    xmm0.f[0] = MEMF(ecx + 0x49C); /* movss */
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(eax + 0xCC0);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 0x34); /* movss */
    edx = esp + 0x104;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    ecx = 0xC;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001824C0(); /* call 0x001824C0 */

loc_001813C8:
    xmm0.f[0] = MEMF(esp + 0x34); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = 2;
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_00183140(); /* call 0x00183140 */

loc_0018140B:
    SET_LO8(eax, MEM8(esp + 0xF));
    ebx = ebx + 0x30;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    if ((LO8(eax) != 0)) goto loc_001812A0; /* jne: not equal / not zero */

loc_00181421:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */

loc_00181429:
    ecx = MEM32(eax + 0xCC0);
    esi = MEM32(ecx + 0x40);
    SET_LO8(edx, MEM8(esi + 0x16B2));
    SET_LO8(ecx, MEM8(esi + 0x16B1));
    MEM8(esp + 0x1B) = LO8(edx);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    if ((LO8(edx) == 0)) { sub_00181606(); return; } /* je: equal / zero */

loc_0018144A:
    xmm0.f[0] = MEMF(0x3A795C); /* movss */
    edx = ZX8(LO8(edx));
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A2928); /* mulss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x20) ? xmm0.f[0] : MEMF(esp + 0x20)); /* minss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(eax + 0xCC0);
    edx = MEM32(edx + 0x40);
    ebx = MEM32(edx + 0x1678);
    MEM8(esp + 0xF) = 0;

loc_00181497:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001815E1; /* je: equal / zero */

loc_0018149F:
    eax = esp + 0x70;
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x90;
    MEM32(esp + 0x24) = eax;
    eax = ZX8(LO8(ecx));
    edx = esp + 0xB0;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x14) = eax;
    goto loc_001814D0;

    /* nop */

loc_001814D0:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);
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
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x64);
    eax = MEM32(esp + 0x68);
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x10), 16); /* movaps */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x6C);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x24);
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
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    eax = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F800000);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = edx;
    edx = esp + 0x104;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 0xD;
    PUSH32(esp, 0); sub_001824C0(); /* call 0x001824C0 */

loc_001815CC:
    eax = MEM32(esp + 0x14);
    ebx = ebx + 0x30;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_001814D0; /* jne: not equal / not zero */

loc_001815DE:
    eax = MEM32(ebp + 0xC);

loc_001815E1:
    SET_LO8(ecx, MEM8(esp + 0xF));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00181606(); return; } /* jne: not equal / not zero */

loc_001815E9:
    ecx = MEM32(eax + 0xCC0);
    edx = MEM32(ecx + 0x40);
    ebx = MEM32(edx + 0x167C);
    SET_LO8(ecx, MEM8(esp + 0x1B));
    MEM8(esp + 0xF) = 1;
    goto loc_00181497;

}
