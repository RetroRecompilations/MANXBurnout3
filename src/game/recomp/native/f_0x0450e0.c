#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000450E0
 * Original: 0x000450E0 - 0x00045309 (553 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000450E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_000450E0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    xmm1.f[0] = MEMF(0x60EA20); /* movss */
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 1;
    /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(eax);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 4);
    xmm2.f[0] = MEMF(esp + 8); /* movss */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 8);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x387EF8); /* addss */
    eax = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    if (TEST_Z(ecx, ecx)) goto loc_0004518A; /* je: equal / zero */

loc_0004514E:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_00045167:
    xmm0.f[0] = MEMF(eax); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    esp = esp + 8;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */

loc_0004518A:
    eax = MEM32(esi + 0x444);
    edi = MEM32(eax);
    if (TEST_Z(edi, edi)) goto loc_000452BF; /* je: equal / zero */

loc_0004519A:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    ecx = edi;
    ecx = ecx << 5;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + eax + -16), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    ebx = ecx + eax;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0xC))) goto loc_000451EE; /* jbe: below or equal (unsigned <=) */

loc_000451E4:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000451EE:
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_000451F7:
    /* cmp edi, 1 - flags set for next jcc */
    eax = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    if (CMP_NE(edi, 1)) goto loc_00045266; /* jne: not equal / not zero */

loc_0004524F:
    if (TEST_NZ(MEM8(esi + 0x10), 2)) goto loc_00045266; /* jne: not equal / not zero */

loc_00045255:
    eax = MEM32(esi + 0x444);
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm2.b, 16); /* movaps */
    goto loc_000452C4;

loc_00045266:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    ecx = esp + 0xC;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B1CF8) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B1CF8))) goto loc_000452C4; /* jbe: below or equal (unsigned <=) */

loc_0004529E:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ebx + -16), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    memcpy((void *)XBOX_PTR(ebx), xmm2.b, 16); /* movaps */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000452BF:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */

loc_000452C4:
    eax = MEM32(esi + 0x444);
    edx = MEM32(eax);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    edx = edx << 5;
    memcpy((void *)XBOX_PTR(edx + eax + 0x10), xmm0.b, 16); /* movaps */
    ecx = MEM32(eax);
    ecx++;
    ecx = ecx << 5;
    memcpy((void *)XBOX_PTR(ecx + eax), xmm2.b, 16); /* movaps */
    MEM32(eax) = MEM32(eax) + 1;
    eax = MEM32(esi + 0x444);
    xmm0.f[0] = (float)(int32_t)MEM32(eax); /* cvtsi2ss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 8); /* movss */
    POP32(esp, edi);
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
