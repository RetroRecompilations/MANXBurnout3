#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002F650
 * Original: 0x0002F650 - 0x0002FFD4 (2436 bytes, 479 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0002F650:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = MEM32(0x754C30);
    /* test LO8(eax), 1 - flags set for next jcc */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if (TEST_NZ(LO8(eax), 1)) goto loc_0002F6B6; /* jne: not equal / not zero */

loc_0002F696:
    eax = eax | 1;
    MEMF(0x754C28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A69C0); /* movss */
    MEM32(0x754C30) = eax;
    MEMF(0x754C2C) = xmm0.f[0]; /* movss */

loc_0002F6B6:
    /* test LO8(eax), 2 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x396EB0); /* movss */
    if (TEST_NZ(LO8(eax), 2)) goto loc_0002F6E2; /* jne: not equal / not zero */

loc_0002F6C2:
    xmm2.f[0] = MEMF(0x3A49FC); /* movss */
    eax = eax | 2;
    MEM32(0x754C30) = eax;
    MEMF(0x754C20) = xmm0.f[0]; /* movss */
    MEMF(0x754C24) = xmm2.f[0]; /* movss */

loc_0002F6E2:
    if (TEST_NZ(LO8(eax), 4)) goto loc_0002F706; /* jne: not equal / not zero */

loc_0002F6E6:
    xmm2.f[0] = MEMF(0x3B0400); /* movss */
    eax = eax | 4;
    MEM32(0x754C30) = eax;
    MEMF(0x754C18) = xmm0.f[0]; /* movss */
    MEMF(0x754C1C) = xmm2.f[0]; /* movss */

loc_0002F706:
    if (TEST_NZ(LO8(eax), 8)) goto loc_0002F72A; /* jne: not equal / not zero */

loc_0002F70A:
    xmm2.f[0] = MEMF(0x3B1D68); /* movss */
    eax = eax | 8;
    MEM32(0x754C30) = eax;
    MEMF(0x754C10) = xmm0.f[0]; /* movss */
    MEMF(0x754C14) = xmm2.f[0]; /* movss */

loc_0002F72A:
    if (TEST_NZ(LO8(eax), 0x10)) goto loc_0002F74E; /* jne: not equal / not zero */

loc_0002F72E:
    eax = eax | 0x10;
    MEMF(0x754C08) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B2024); /* movss */
    MEM32(0x754C30) = eax;
    MEMF(0x754C0C) = xmm0.f[0]; /* movss */

loc_0002F74E:
    if (TEST_NZ(LO8(eax), 0x20)) goto loc_0002F76A; /* jne: not equal / not zero */

loc_0002F752:
    xmm0.f[0] = MEMF(0x398CC0); /* movss */
    eax = eax | 0x20;
    MEM32(0x754C30) = eax;
    MEMF(0x754C00) = xmm0.f[0]; /* movss */

loc_0002F76A:
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_0002F77C; /* jbe: below or equal (unsigned <=) */

loc_0002F774:
    MEMF(0x75479C) = xmm0.f[0]; /* movss */

loc_0002F77C:
    SET_LO8(eax, MEM8(0x4D4002));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0002F798; /* je: equal / zero */

loc_0002F785:
    SET_LO8(eax, MEM8(0x5A3749));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0002F798; /* jne: not equal / not zero */

loc_0002F78E:
    edi = 0x4AE20C;
    PUSH32(esp, 0); sub_00021A50(); /* call 0x00021A50 */

loc_0002F798:
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0xF3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0034C2E0(); /* call 0x0034C2E0 */

loc_0002F7AF:
    edi = 0; /* xor self */
    esi = 0x4D6170;
    MEM8(0x4D6B30) = 1;
    PUSH32(esp, 0); sub_0003D9E0(); /* call 0x0003D9E0 */

loc_0002F7C2:
    PUSH32(esp, 0); sub_001C72F0(); /* call 0x001C72F0 */

loc_0002F7C7:
    xmm0.f[0] = MEMF(0x3B2020); /* movss */
    xmm1.f[0] = MEMF(0x754C1C); /* movss */
    edi = MEM32(0x4D6180);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* mulps: xmm0.f[0] *= MEMF(esp + 0x60) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x754C2C); /* movss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1884); /* mulss */
    eax = esp + 0x40;
    MEMF(esp + 0x5C) = xmm2.f[0]; /* movss */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    edx = 0x386720;
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C0F50(); /* call 0x001C0F50 */

loc_0002F853:
    xmm1.f[0] = MEMF(0x396EB0); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x754C28); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x386720);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001C1250(); /* call 0x001C1250 */

loc_0002F884:
    xmm0.f[0] = MEMF(0x3B201C); /* movss */
    xmm1.f[0] = MEMF(0x754C00); /* movss */
    xmm2.f[0] = MEMF(0x754C28); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B2018); /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B2014); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    /* mulps: xmm0.f[0] *= MEMF(esp + 0x60) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A49FC); /* addss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = MEMF(0x754C2C); /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1D04); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B2010); /* mulss */
    edx = esp + 8;
    PUSH32(esp, 1);
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    ecx = esp + 0x38;
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C75C0(); /* call 0x001C75C0 */

loc_0002F938:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    xmm5.f[0] = MEMF(0x754C28); /* movss */
    xmm3.f[0] = MEMF(0x754C00); /* movss */
    xmm6.f[0] = MEMF(0x754C2C); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, xmm4.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm5.f[0]; /* divss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + MEMF(0x3A49FC); /* addss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2.f[0] = MEMF(0x3B2010); /* movss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    xmm4.f[0] = xmm4.f[0] / xmm6.f[0]; /* divss */
    eax = esp + 0x10;
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] + MEMF(0x3B1D04); /* addss */
    PUSH32(esp, 1);
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    eax = esp + 0x20;
    ecx = esp + 0x40;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm2.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C75C0(); /* call 0x001C75C0 */

loc_0002F9E4:
    xmm0.f[0] = MEMF(0x3B2020); /* movss */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    xmm2.f[0] = MEMF(0x3A69C4); /* movss */
    memcpy(xmm3.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A55F8); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm3.f[0] (packed 4xfloat) */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm5.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm3.f[0] (packed 4xfloat) */
    xmm3.f[0] = MEMF(0x754C28); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x80), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm2.b, 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B1688); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1690); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x754C2C); /* divss */
    xmm2.f[0] = xmm2.f[0] + MEMF(0x3B1D04); /* addss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x754C00); /* addss */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A49FC); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x75479C); /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x754C00); /* addss */
    MEMF(esp + 0x20) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(0x754C2C); /* movss */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = MEMF(esp + 0x28); /* movss */
    ecx = esp + 0x80;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    edx = esp + 0x1C;
    memcpy(xmm1.b, xmm6.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B200C); /* mulss */
    PUSH32(esp, 4);
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm5.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_0002FB70:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x5C), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x4C), 16); /* movaps */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm6.f[0] = MEMF(0x3B1688); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x8C), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xAC), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x9C), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xBC), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x754C28); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3B1690); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x754C00); /* addss */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    memcpy(xmm5.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B2010); /* movss */
    memcpy(xmm7.b, xmm6.b, 16); /* movaps */
    xmm6.f[0] = MEMF(0x754C2C); /* movss */
    xmm7.f[0] = xmm7.f[0] / xmm6.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    memcpy(xmm7.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A49FC); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x75479C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x754C00); /* addss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B200C); /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x48); /* movss */
    esp = esp + 0x1C;
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    eax = esp + 0x70;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 4);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_0002FCA9:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x4C), 16); /* movaps */
    xmm7.f[0] = MEMF(0x3C84D0); /* movss */
    xmm6.f[0] = MEMF(0x754C2C); /* movss */
    xmm4.f[0] = MEMF(0x754C28); /* movss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esp + 0x7C), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x8C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x3C), 16); /* movaps */
    esp = esp + 0xC;
    edx = esp + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    PUSH32(esp, edx);
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1688); /* addss */
    eax = esp + 0xC;
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x396EB0); /* mulss */
    PUSH32(esp, 4);
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm2.b, xmm6.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    PUSH32(esp, eax);
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_0002FD6B:
    xmm7.f[0] = MEMF(0x3C84D4); /* movss */
    xmm6.f[0] = MEMF(0x754C2C); /* movss */
    xmm4.f[0] = MEMF(0x754C28); /* movss */
    xmm5.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0xC;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1688); /* addss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x396EB0); /* mulss */
    edx = esp + 0xC;
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm2.b, xmm6.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    PUSH32(esp, 4);
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm5.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_0002FE06:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x3C), 16); /* movaps */
    xmm6.f[0] = MEMF(0x3C84D0); /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x7C), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x8C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x4C), 16); /* movaps */
    esp = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    xmm5.f[0] = MEMF(0x754C2C); /* movss */
    xmm4.f[0] = MEMF(0x754C28); /* movss */
    eax = esp + 0x70;
    PUSH32(esp, eax);
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1688); /* addss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x396EB0); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B1F00); /* mulss */
    ecx = esp + 0xC;
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, 4);
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_0002FECC:
    xmm6.f[0] = MEMF(0x3C84D4); /* movss */
    xmm5.f[0] = MEMF(0x754C2C); /* movss */
    xmm4.f[0] = MEMF(0x754C28); /* movss */
    esp = esp + 0xC;
    edx = esp + 0x70;
    PUSH32(esp, edx);
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3B1688); /* addss */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    eax = esp + 0xC;
    memcpy(xmm1.b, xmm4.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x396EB0); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x3B1F00); /* mulss */
    PUSH32(esp, 4);
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    eax = esp + 0x1C;
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C7EC0(); /* call 0x001C7EC0 */

loc_0002FF6B:
    eax = MEM32(0x4A1B9C);
    esp = esp + 0xC;
    if (CMP_BE(eax & eax, 0)) goto loc_0002FF7C; /* jbe: below or equal (unsigned <=) */

loc_0002FF77:
    PUSH32(esp, 0); sub_001C69C0(); /* call 0x001C69C0 */

loc_0002FF7C:
    PUSH32(esp, 0); sub_001C6F30(); /* call 0x001C6F30 */

loc_0002FF81:
    ecx = MEM32(0x4D6520);
    edx = MEM32(ecx + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D9280(); /* call 0x001D9280 */

loc_0002FF90:
    xmm0.f[0] = MEMF(0x75479C); /* movss */
    xmm1.f[0] = MEMF(0x3A55F8); /* movss */
    esp = esp + 4;
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(0x4D6520) = 0;
    MEM32(0x4D6524) = 0;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0002FFCC; /* jbe: below or equal (unsigned <=) */

loc_0002FFBC:
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A7ED8); /* addss */
    MEMF(0x75479C) = xmm0.f[0]; /* movss */

loc_0002FFCC:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
