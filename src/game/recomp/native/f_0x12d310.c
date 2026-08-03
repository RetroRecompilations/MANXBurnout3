#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012D310
 * Original: 0x0012D310 - 0x0012D45E (334 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_0012D310:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x3C;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x2C), xmm0.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B191C); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 8) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if ((xmm0.f[0] > MEMF(esp + 8))) goto loc_0012D419; /* ja: above (unsigned >) */

loc_0012D359:
    eax = ebx;
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_0012D360:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012D419; /* jne: not equal / not zero */

loc_0012D368:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012D383:
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012D38C:
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    /* shufps xmm0, xmm0, 0xc9 */
    /* shufps xmm1, xmm1, 0xd2 */
    memcpy(xmm3.b, xmm0.b, 16); /* movaps */
    /* shufps xmm3, xmm0, 0xc9 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0xd2 */
    /* mulps: xmm3.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0003B060(); /* call 0x0003B060 */

loc_0012D3C3:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012D3E4; /* je: equal / zero */

loc_0012D3C7:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0012D3E4:
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_0012D3ED:
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_0010C3B0(); /* call 0x0010C3B0 */

loc_0012D3FF:
    esp = esp + 4;
    /* comiss xmm0.f[0], MEMF(0x3B1A04) - sets EFLAGS */
    MEMF(edi) = xmm0.f[0]; /* movss */
    if ((xmm0.f[0] < MEMF(0x3B1A04))) goto loc_0012D43A; /* jb: below (unsigned <) */

loc_0012D40F:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1C1C); /* subss */
    goto loc_0012D436;

loc_0012D419:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */

loc_0012D436:
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_0012D43A:
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = esi;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
