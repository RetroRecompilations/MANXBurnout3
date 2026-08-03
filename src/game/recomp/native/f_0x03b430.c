#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003B430
 * Original: 0x0003B430 - 0x0003B6A1 (625 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0003B430:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    /* test eax, eax - flags set for next jcc */
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(0x3FBD10), 16); /* movaps */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    PUSH32(esp, ebx);
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    if (TEST_Z(eax, eax)) goto loc_0003B47E; /* je: equal / zero */

loc_0003B45F:
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0003B46E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x38), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x38), 16); /* movaps */
    esp = esp + 8;

loc_0003B47E:
    SET_LO8(eax, MEM8(esi + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0003B570; /* je: equal / zero */

loc_0003B489:
    ebx = MEM32(esi + 8);
    eax = SX8(LO8(eax));
    MEM32(esp + 0x1C) = eax;
    eax--;
    eax = eax << 5;
    edi = eax;
    eax = edi + ebx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    /* subps: xmm0.f[0] -= MEMF(esp + 0x40) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x18;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x18))) goto loc_0003B4FB; /* jbe: below or equal (unsigned <=) */

loc_0003B4F1:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0003B4FB:
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0003B504:
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    ecx = MEM32(ebp + 8);
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    /* cmp MEM8(esi + 0x10), 1 - flags set for next jcc */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* shufps xmm0, xmm2, 0xc9 */
    memcpy(xmm4.b, xmm0.b, 16); /* movaps */
    /* shufps xmm4, xmm0, 0xc9 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0xd2 */
    /* mulps: xmm4.f[0] *= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    if (CMP_NE(MEM8(esi + 0x10), 1)) goto loc_0003B5D7; /* jne: not equal / not zero */

loc_0003B540:
    if (TEST_NZ(MEM8(esi + 0x12), 2)) goto loc_0003B5D7; /* jne: not equal / not zero */

loc_0003B54A:
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(ebx + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(ebx + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(ebx + 0x18) = xmm0.f[0]; /* movss */

loc_0003B56B:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */

loc_0003B570:
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    ebx = MEM32(esi + 8);
    ecx = ecx << 5;
    memcpy((void *)XBOX_PTR(ecx + ebx), xmm0.b, 16); /* movaps */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    eax = MEM32(esi + 8);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    ecx = ecx + ebx;
    edx = edx << 5;
    MEMF(edx + eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    eax = edx + eax + 0x10;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    edx = MEM32(esi + 8);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    ecx = ecx << 5;
    MEMF(ecx + edx + 0x1C) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x10) = MEM8(esi + 0x10) + 1;
    MEMF(esi) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0003B5D7:
    eax = MEM32(esp + 0x1C);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    eax = eax + 0xFFFFFFFEu;
    eax = eax << 5;
    eax = eax + ebx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x58) = edx;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x50), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = esp + 0x1C;
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    eax = esp + 0x50;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0003B63D:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1CFC); /* mulss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0003B56B; /* jbe: below or equal (unsigned <=) */

loc_0003B654:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + ebx), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 8);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    eax = edi + edx + 0x10;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 8);
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(edi + eax + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
