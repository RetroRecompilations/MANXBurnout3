#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017FB10
 * Original: 0x0017FB10 - 0x0017FFE4 (1236 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FB10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0017FB10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x13F4);
    SET_LO8(ecx, MEM8(eax + 0x18FA));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0017FFDB; /* jne: not equal / not zero */

loc_0017FB39:
    SET_LO8(ecx, MEM8(edi + 0x215));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = MEM32(edi + 0xCC0);
    edx = 0; /* xor self */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    /* cmp LO8(ecx), 1 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(LO8(ecx), 1)) ? 1 : 0); /* setne */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xC0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0xD0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    edx = edx + 0x12;
    /* cmp LO8(ecx), 1 - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0xE0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    MEM32(esp + 0x1C) = edx;
    memcpy((void *)XBOX_PTR(esp + 0xF0), xmm0.b, 16); /* movaps */
    if (CMP_NE(LO8(ecx), 1)) goto loc_0017FE3B; /* jne: not equal / not zero */

loc_0017FBA3:
    esi = MEM32(eax + 0x40);
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0xB0), 16); /* movaps */
    eax = esp + 0x60;
    esi = esi + 0xE80;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0017FBC1:
    xmm1.f[0] = MEMF(0x3A7ED8); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0017FBDD; /* jbe: below or equal (unsigned <=) */

loc_0017FBCE:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0xE0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm1.b, 16); /* movaps */
    goto loc_0017FBE2;

loc_0017FBDD:
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */

loc_0017FBE2:
    xmm0.f[0] = MEMF(ebx + 0x6457C); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = esp + 0x18;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x50;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0017FC0D:
    xmm2.f[0] = MEMF(esi + 4); /* movss */
    xmm3.f[0] = MEMF(esi); /* movss */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B16E0); /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi + 0x10); /* addss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A69C4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A5600); /* mulss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esi + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69C0); /* mulss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0xC4;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0017FC7A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(esp + 0x1C);
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = ebx + 0x64588;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x68), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x78) (packed 4xfloat) */
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0x9C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_0017FCCD:
    xmm2.f[0] = MEMF(esi + 0x14); /* movss */
    xmm0.f[0] = MEMF(esi + 4); /* movss */
    xmm3.f[0] = MEMF(esi + 0x10); /* movss */
    xmm1.f[0] = MEMF(esi + 8); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B16E0); /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A69C4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A69C0); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A5600); /* mulss */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0xA8;
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0017FD34:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    memcpy((void *)XBOX_PTR(esp + 0x48), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x58) (packed 4xfloat) */
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x7C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0x3F800000);
    edx = MEM32(esp + 0x24);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_0017FD7E:
    xmm0.f[0] = MEMF(esi + 0x14); /* movss */
    xmm2.f[0] = MEMF(esi + 4); /* movss */
    xmm3.f[0] = MEMF(esi + 0x10); /* movss */
    xmm1.f[0] = MEMF(esi + 0x18); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esi); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A5600); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3A69B4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1684); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A69C0); /* mulss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0xA8;
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0017FDE5:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(esp + 0x1C);
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    memcpy((void *)XBOX_PTR(esp + 0x68), xmm0.b, 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x78) (packed 4xfloat) */
    PUSH32(esp, ebx);
    memcpy((void *)XBOX_PTR(esp + 0x9C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_0017FE32:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_0017FE3B:
    ecx = MEM32(edi + 0xCC0);
    eax = MEM32(ecx + 0x40);
    edx = MEM32(eax + 0x168C);
    SET_LO8(eax, MEM8(eax + 0x16B6));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017FFDB; /* je: equal / zero */

loc_0017FE5C:
    ecx = esp + 0xB0;
    MEM32(esp + 0x9C) = ecx;
    ecx = ZX8(LO8(eax));
    edx = esp + 0xC0;
    MEM32(esp + 0x94) = edx;
    eax = ecx + ebx + 0x64588;
    MEM32(esp + 0x18) = ecx;
    goto loc_0017FE90;

loc_0017FE88:
    eax = MEM32(esp + 0x8C);
    /* nop */

loc_0017FE90:
    ecx = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    eax--;
    MEM32(esp + 0x8C) = eax;
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    esi = MEM32(esp + 0x94);
    edi = MEM32(esp + 0x9C);
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
    edx = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    xmm1.f[0] = MEMF(ebx + 0x6457C); /* movss */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEMF(esp + 0x98) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(ebp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0xB0), 16); /* movaps */
    MEM32(esp + 0x4C) = ecx;
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0);
    ecx = esp + 0x9C;
    xmm1.f[0] = MEMF(ecx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x54), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    memcpy((void *)XBOX_PTR(esp + 0x7C), xmm1.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    PUSH32(esp, 0x3F400000);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0xB0), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0xB8) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xB8), 16); /* movaps */
    edx = esp + 0xA8;
    MEMF(edx) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00181A80(); /* call 0x00181A80 */

loc_0017FFC1:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = ecx + 0x30;
    eax--;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_0017FE88; /* jne: not equal / not zero */

loc_0017FFDB:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
