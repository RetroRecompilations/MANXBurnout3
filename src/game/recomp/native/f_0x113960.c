#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00113960
 * Original: 0x00113960 - 0x00114267 (2311 bytes, 570 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00113960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00113960:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2B4;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x28);
    ebx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_0010FC50(); /* call 0x0010FC50 */

loc_00113988:
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ecx + 0x24);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010FC50(); /* call 0x0010FC50 */

loc_0011399B:
    /* cmp MEM32(esp + 0x1C), 2 - flags set for next jcc */
    edi = MEM32(ebp + 0xC);
    MEM32(esp + 0x4C) = eax;
    MEM8(edi + 0x2C) = 0;
    if (CMP_NE(MEM32(esp + 0x1C), 2)) goto loc_001139B6; /* jne: not equal / not zero */

loc_001139AD:
    if (CMP_EQ(eax, 2)) goto loc_0011425E; /* je: equal / zero */

loc_001139B6:
    eax = MEM32(edi + 0x24);
    if (CMP_NE(MEM8(eax), 4)) goto loc_001139D2; /* jne: not equal / not zero */

loc_001139BE:
    eax = MEM32(edi + 0x28);
    if (CMP_NE(MEM8(eax), 4)) goto loc_001139D2; /* jne: not equal / not zero */

loc_001139C6:
    if (CMP_EQ(MEM32(esi + 0x2424), ebx)) goto loc_0011425E; /* je: equal / zero */

loc_001139D2:
    SET_LO8(eax, MEM8(0x4A52B3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113B80; /* je: equal / zero */

loc_001139DF:
    if (CMP_NE(MEM8(esi + 0x20C), 1)) goto loc_00113B80; /* jne: not equal / not zero */

loc_001139EC:
    if (CMP_NE(MEM8(ebx + 0x20C), 1)) goto loc_00113B80; /* jne: not equal / not zero */

loc_001139F9:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1D0), 16); /* movaps */
    ecx = MEM32(ebx + 0x204);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x58), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1E0), 16); /* movaps */
    esi = MEM32(esi + 0x204);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x6C), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x1D0), 16); /* movaps */
    PUSH32(esp, esi);
    edx = esp + 0x60;
    memcpy((void *)XBOX_PTR(esp + 0xA0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x1E0), 16); /* movaps */
    eax = ebx + 0x70;
    PUSH32(esp, edx);
    edi = esp + 0x84;
    esi = esp + 0x44;
    memcpy((void *)XBOX_PTR(esp + 0xB4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00108EF0(); /* call 0x00108EF0 */

loc_00113A62:
    ecx = MEM32(ebp + 0xC);
    esp = esp + 0x14;
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(ecx + 0x2C) = LO8(eax);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113B45; /* je: equal / zero */

loc_00113A73:
    xmm3.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    xmm4.f[0] = MEMF(0x3B1684); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    edx = esp + 0x10;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    MEM32(esp + 0x294) = 1;
    edx = MEM32(ecx + 0x204);
    eax = esp + 0x10;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = esp + 0x10;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    ecx = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x110), xmm1.b, 16); /* movaps */
    edx = MEM32(ebx + 0x204);
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    eax = esp + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x200), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    PUSH32(esp, eax);
    eax = esp + 0x94;
    memcpy((void *)XBOX_PTR(esp + 0x2B4), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00113B34:
    PUSH32(esp, eax);
    eax = esp + 0x54;
    ecx = esp + 0x2A4;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00113B45:
    esi = MEM32(esp + 0x18);
    edi = MEM32(ebp + 0xC);

loc_00113B4C:
    SET_LO8(eax, MEM8(edi + 0x2C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011425E; /* je: equal / zero */

loc_00113B57:
    ecx = MEM32(edi + 0x24);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00113B68; /* je: equal / zero */

loc_00113B60:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00113B68; /* je: equal / zero */

loc_00113B64:
    if (CMP_NE(LO8(eax), 1)) goto loc_00113B9B; /* jne: not equal / not zero */

loc_00113B68:
    edx = MEM32(ecx + 0xC);
    SET_LO8(eax, MEM8(edx + 0x210));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00113B9B; /* jne: not equal / not zero */

loc_00113B75:
    eax = 2;
    MEM32(esp + 0x1C) = eax;
    goto loc_00113BA0;

loc_00113B80:
    ecx = esp + 0xB0;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = ebx;
    edx = esi;
    PUSH32(esp, 0); sub_0010A9D0(); /* call 0x0010A9D0 */

loc_00113B93:
    esp = esp + 8;
    MEM8(edi + 0x2C) = LO8(eax);
    goto loc_00113B4C;

loc_00113B9B:
    eax = 2;

loc_00113BA0:
    MEM8(esi + 0x211) = 1;
    MEM8(ebx + 0x211) = 1;
    ecx = MEM32(esp + 0x294);
    if (TEST_Z(ecx, ecx)) goto loc_00113E9C; /* je: equal / zero */

loc_00113BBD:
    ecx = MEM32(esi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x110), 16); /* movaps */
    edx = MEM32(ebx + 0x204);
    /* cmp MEM32(esp + 0x1C), eax - flags set for next jcc */
    memcpy(xmm2.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x200), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    if (CMP_NE(MEM32(esp + 0x1C), eax)) goto loc_00113BFF; /* jne: not equal / not zero */

loc_00113BF7:
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    goto loc_00113E8B;

loc_00113BFF:
    if (CMP_NE(MEM32(esp + 0x4C), eax)) goto loc_00113C1E; /* jne: not equal / not zero */

loc_00113C05:
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x130), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x130), xmm1.b, 16); /* movaps */
    goto loc_00113E9C;

loc_00113C1E:
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_00114F30(); /* call 0x00114F30 */

loc_00113C2F:
    edx = MEM32(edi + 0x24);
    if (CMP_NE(MEM8(edx), 4)) goto loc_00113D07; /* jne: not equal / not zero */

loc_00113C3B:
    eax = MEM32(esi + 0x2424);
    if (TEST_Z(eax, eax)) goto loc_00113D07; /* je: equal / zero */

loc_00113C49:
    xmm0.f[0] = MEMF(eax + 0x1F0); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi + 0x1F0); /* addss */
    xmm1.f[0] = MEMF(ebx + 0x1F0); /* movss */
    eax = esp + 0x50;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = esp + 0x34;
    ecx = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000BFB10(); /* call 0x000BFB10 */

loc_00113C81:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm4.f[0] = MEMF(esp + 0x18); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = esp + 0x10;
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(esi + 0x130), 16); /* movaps */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x130), xmm2.b, 16); /* movaps */
    eax = MEM32(esi + 0x2424);
    edx = esp + 0x10;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    eax = eax + 0x130;
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm4.f[0]; /* subss */
    eax = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    goto loc_00113E84;

loc_00113D07:
    ecx = MEM32(edi + 0x28);
    if (CMP_NE(MEM8(ecx), 4)) goto loc_00113DFB; /* jne: not equal / not zero */

loc_00113D13:
    eax = MEM32(ebx + 0x2424);
    if (TEST_Z(eax, eax)) goto loc_00113DFB; /* je: equal / zero */

loc_00113D21:
    xmm1.f[0] = MEMF(eax + 0x1F0); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ebx + 0x1F0); /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x1F0); /* addss */
    xmm0.f[0] = MEMF(esi + 0x1F0); /* movss */
    edx = esp + 0x50;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    ecx = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000BFB10(); /* call 0x000BFB10 */

loc_00113D5D:
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x10;
    xmm1.f[0] = MEMF(eax); /* movss */
    /* shufps xmm1, xmm1, 0 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x130), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x130), xmm1.b, 16); /* movaps */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = esp + 0x10;
    xmm2.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm2, xmm2, 0 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, (void *)XBOX_PTR(ebx + 0x130), 16); /* movaps */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    /* addps: xmm2.f[0] += xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm2.b, 16); /* movaps */
    eax = MEM32(ebx + 0x2424);
    edx = esp + 0x10;
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    eax = eax + 0x130;
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(eax), xmm1.b, 16); /* movaps */
    goto loc_00113E9C;

loc_00113DFB:
    xmm1.f[0] = MEMF(ebx + 0x1F0); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esi + 0x1F0); /* addss */
    xmm0.f[0] = MEMF(esi + 0x1F0); /* movss */
    eax = esp + 0x50;
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    eax = esp + 0x34;
    ecx = esp + 0x24;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000BFB10(); /* call 0x000BFB10 */

loc_00113E2F:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = esp + 0x10;
    xmm0.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x130), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x130), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    edx = esp + 0x10;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */

loc_00113E84:
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */

loc_00113E8B:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx + 0x130), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ebx + 0x130), xmm0.b, 16); /* movaps */

loc_00113E9C:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x2B0), 16); /* movaps */
    eax = esp + 0x50;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x2A0), 16); /* movaps */
    PUSH32(esp, eax);
    eax = esp + 0x34;
    ecx = esi;
    memcpy((void *)XBOX_PTR(esp + 0x24), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00113ECE:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    eax = esp + 0x74;
    ecx = ebx;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001066A0(); /* call 0x001066A0 */

loc_00113EE9:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x30) (packed 4xfloat) */
    eax = esp + 0x70;
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_00113EFF:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00113F4E; /* jne: not equal / not zero */

loc_00113F03:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00113F16:
    xmm0.f[0] = MEMF(0x41A4C0); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = esp + 0x10;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    eax = esp + 0x20;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00113F4E:
    ecx = MEM32(0x4A1D98);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = ebx;
    ecx = esi;
    PUSH32(esp, 0); sub_0010F8D0(); /* call 0x0010F8D0 */

loc_00113F7D:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm1.b, 16); /* movaps */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00114034; /* jbe: below or equal (unsigned <=) */

loc_00113FA0:
    ecx = MEM32(esp + 0x1C);
    eax = 2;
    if (CMP_NE(ecx, eax)) goto loc_00113FCF; /* jne: not equal / not zero */

loc_00113FAD:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    eax = esp + 0x30;
    ecx = esp + 0x80;
    PUSH32(esp, 0); sub_000115C0(); /* call 0x000115C0 */

loc_00113FC5:
    eax = esp + 0x90;
    PUSH32(esp, eax);
    goto loc_00114019;

loc_00113FCF:
    /* cmp MEM32(esp + 0x4C), eax - flags set for next jcc */
    eax = esi;
    if (CMP_NE(MEM32(esp + 0x4C), eax)) goto loc_00113FDE; /* jne: not equal / not zero */

loc_00113FD7:
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    goto loc_0011401B;

loc_00113FDE:
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esp + 0x84;
    PUSH32(esp, 0); sub_00106500(); /* call 0x00106500 */

loc_00113FEF:
    eax = esp + 0x80;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_00011570(); /* call 0x00011570 */

loc_00114000:
    PUSH32(esp, eax);
    eax = esp + 0x74;
    ecx = esp + 0x84;
    PUSH32(esp, 0); sub_000116A0(); /* call 0x000116A0 */

loc_00114011:
    ecx = esp + 0x90;
    PUSH32(esp, ecx);

loc_00114019:
    eax = ebx;

loc_0011401B:
    ecx = esp + 0x84;
    PUSH32(esp, 0); sub_00106500(); /* call 0x00106500 */

loc_00114027:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    goto loc_00114039;

loc_00114034:
    MEMF(edi + 0x20) = xmm1.f[0]; /* movss */

loc_00114039:
    edi = MEM32(edi + 0x24);
    SET_LO8(eax, MEM8(edi));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0011404A; /* je: equal / zero */

loc_00114042:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011404A; /* je: equal / zero */

loc_00114046:
    if (CMP_NE(LO8(eax), 1)) goto loc_0011408B; /* jne: not equal / not zero */

loc_0011404A:
    edx = MEM32(edi + 0xC);
    SET_LO8(eax, MEM8(edx + 0x210));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0011408B; /* jne: not equal / not zero */

loc_00114057:
    if (CMP_EQ(MEM8(edi), 2)) goto loc_0011408B; /* je: equal / zero */

loc_0011405C:
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, 0); sub_0010C550(); /* call 0x0010C550 */

loc_00114067:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0011408B; /* je: equal / zero */

loc_0011406B:
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0x28);
    edx = MEM32(eax + 0xC);
    SET_LO8(ecx, MEM8(edx + 0x210));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0011408B; /* je: equal / zero */

loc_0011407E:
    /* cmp MEM8(eax), 2 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3EBE54); /* movss */
    if (CMP_EQ(MEM8(eax), 2)) goto loc_00114093; /* je: equal / zero */

loc_0011408B:
    xmm0.f[0] = MEMF(0x3EBE50); /* movss */

loc_00114093:
    SET_LO8(eax, MEM8(edi));
    if (CMP_EQ(LO8(eax), 2)) goto loc_001140A5; /* je: equal / zero */

loc_00114099:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001140A5; /* je: equal / zero */

loc_0011409D:
    if (CMP_NE(LO8(eax), 1)) goto loc_001141F0; /* jne: not equal / not zero */

loc_001140A5:
    eax = MEM32(edi + 0xC);
    SET_LO8(ecx, MEM8(eax + 0x210));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001141F0; /* jne: not equal / not zero */

loc_001140B6:
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = MEMF(eax + 0x20); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001141F3; /* jbe: below or equal (unsigned <=) */

loc_001140C7:
    eax = MEM32(eax + 0x28);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0010FC30(); /* call 0x0010FC30 */

loc_001140D2:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001141F0; /* je: equal / zero */

loc_001140DA:
    ecx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x51) = LO8(eax);
    MEM8(esp + 0x50) = LO8(eax);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ecx + 0x28);
    MEM8(esp + 0x17) = 1;
    PUSH32(esp, 0); sub_0010C550(); /* call 0x0010C550 */

loc_00114100:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114198; /* je: equal / zero */

loc_00114108:
    ebx = MEM32(ebx + 0x13F4);
    esi = MEM32(esi + 0x13F4);
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    MEM32(esp + 0x5C) = ebx;
    /* cmp MEM8(edi), 2 - flags set for next jcc */
    edx = esp + 0x50;
    if (CMP_EQ(MEM8(edi), 2)) goto loc_00114134; /* je: equal / zero */

loc_00114129:
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x28);
    if (CMP_EQ(MEM8(eax), 2)) goto loc_0011419C; /* je: equal / zero */

loc_00114134:
    SET_LO8(eax, MEM8(ebx + 0x15D6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00114158; /* je: equal / zero */

loc_0011413E:
    if (CMP_NE(MEM32(ebx + 0x15DC), esi)) goto loc_00114158; /* jne: not equal / not zero */

loc_00114146:
    xmm0.f[0] = MEMF(esi + 0x10DC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 0x140C); /* subss */
    goto loc_00114184;

loc_00114158:
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x19BC);
    xmm1.f[0] = MEMF(esi + ecx * 4 + 0x15A8); /* movss */
    /* comiss xmm1.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    eax = esi + ecx * 4 + 0x15A8;
    if ((xmm1.f[0] <= MEMF(0x3B16E0))) goto loc_00114184; /* jbe: below or equal (unsigned <=) */

loc_00114178:
    xmm0.f[0] = MEMF(esi + 0x10DC); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_00114184:
    xmm1.f[0] = MEMF(0x3EBE7C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0011419C; /* jbe: below or equal (unsigned <=) */

loc_00114191:
    MEM8(esp + 0x17) = 0;
    goto loc_0011419C;

loc_00114198:
    edx = MEM32(esp + 0x10);

loc_0011419C:
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x28);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_NE(LO8(ecx), 3)) goto loc_001141BA; /* jne: not equal / not zero */

loc_001141A9:
    esi = MEM32(eax + 0xC);
    if (TEST_Z(MEM8(esi + 0x174), 8)) goto loc_001141BA; /* je: equal / zero */

loc_001141B5:
    MEM8(esp + 0x17) = 0;

loc_001141BA:
    if (CMP_NE(LO8(ecx), 4)) goto loc_001141CB; /* jne: not equal / not zero */

loc_001141BF:
    ecx = MEM32(edi + 0xC);
    if (TEST_NZ(MEM8(ecx + 0x1353), 0x10)) goto loc_001141F0; /* jne: not equal / not zero */

loc_001141CB:
    if (CMP_NE(MEM8(esp + 0x17), 1)) goto loc_001141F0; /* jne: not equal / not zero */

loc_001141D2:
    eax = MEM32(eax + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x218);
    eax = MEM32(edi + 0xC);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64ACE8);
    esi = edx;
    PUSH32(esp, 0); sub_0010DCA0(); /* call 0x0010DCA0 */

loc_001141F0:
    eax = MEM32(ebp + 0xC);

loc_001141F3:
    ecx = MEM32(eax + 0x24);
    if (CMP_NE(MEM8(ecx), 6)) goto loc_0011422A; /* jne: not equal / not zero */

loc_001141FB:
    ecx = MEM32(ecx + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x210));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0011422A; /* jne: not equal / not zero */

loc_00114208:
    edx = MEM32(eax + 0x28);
    edx = MEM32(edx + 0xC);
    SET_LO8(ebx, MEM8(edx + 0x210));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0011422A; /* je: equal / zero */

loc_00114218:
    edx = (uint32_t)(int32_t)SMEM8(edx + 0x218);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_00114227:
    eax = MEM32(ebp + 0xC);

loc_0011422A:
    ecx = MEM32(eax + 0x28);
    if (CMP_NE(MEM8(ecx), 6)) goto loc_0011425E; /* jne: not equal / not zero */

loc_00114232:
    ecx = MEM32(ecx + 0xC);
    SET_LO8(edx, MEM8(ecx + 0x210));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0011425E; /* jne: not equal / not zero */

loc_0011423F:
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(eax + 0x210));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0011425E; /* je: equal / zero */

loc_0011424F:
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x218);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_0011425E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
