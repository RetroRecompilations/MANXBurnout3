#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00108240
 * Original: 0x00108240 - 0x001084D1 (657 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00108240:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    memcpy(xmm4.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy(xmm5.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy(xmm6.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0x50), 16); /* movaps */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm4.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    /* shufps xmm7, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    esi = esp + 4;
    MEMF(esi) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm5.f[0] (packed 4xfloat) */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy(xmm7.b, xmm2.b, 16); /* movaps */
    /* shufps xmm7, xmm2, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm7.f[0] = MEMF(0x3B17F8); /* movss */
    esi = esp + 8;
    MEMF(esi) = xmm0.f[0]; /* movss */
    /* mulps: xmm1.f[0] *= xmm6.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    /* shufps xmm0, xmm1, 0x39 */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    /* shufps xmm2, xmm0, 0x39 */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(0x3B1A54); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    esi = esp + 0xC;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    MEMF(esi) = xmm1.f[0]; /* movss */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00108325; /* jbe: below or equal (unsigned <=) */

loc_001082EC:
    xmm0.f[0] = MEMF(ecx + 0x60); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    esi = esp + 4;
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(ecx + 0x60); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* addps: xmm3.f[0] += xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    goto loc_00108380;

loc_00108325:
    /* comiss xmm0.f[0], MEMF(0x3B16D0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16D0))) goto loc_0010836B; /* jbe: below or equal (unsigned <=) */

loc_0010832E:
    xmm0.f[0] = MEMF(ecx + 0x60); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    esi = esp + 4;
    xmm0.f[0] = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm4.f[0] *= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 0x60); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    /* subps: xmm3.f[0] -= xmm4.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    goto loc_00108380;

loc_0010836B:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x60); /* subss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    esi = MEM32(ecx + 0x60);
    MEM32(edx + 4) = esi;

loc_00108380:
    xmm1.f[0] = MEMF(esp + 8); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_001083C2; /* jbe: below or equal (unsigned <=) */

loc_0010838B:
    xmm1.f[0] = MEMF(ecx + 0x64); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    esi = esp + 8;
    xmm1.f[0] = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(ecx + 0x64); /* movss */
    /* addps: xmm3.f[0] += xmm5.f[0] (packed 4xfloat) */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    MEMF(edx + 0xC) = xmm0.f[0]; /* movss */
    goto loc_00108419;

loc_001083C2:
    /* comiss xmm1.f[0], MEMF(0x3B16D0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B16D0))) goto loc_00108406; /* jbe: below or equal (unsigned <=) */

loc_001083CB:
    xmm1.f[0] = MEMF(ecx + 0x64); /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    esi = esp + 8;
    xmm1.f[0] = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm5.f[0] *= xmm1.f[0] (packed 4xfloat) */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 0x64); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1688); /* mulss */
    /* subps: xmm3.f[0] -= xmm5.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    MEMF(edx + 0xC) = xmm1.f[0]; /* movss */
    goto loc_00108419;

loc_00108406:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x64); /* subss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    esi = MEM32(ecx + 0x64);
    MEM32(edx + 0xC) = esi;

loc_00108419:
    xmm1.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm2.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm1.f[0])) goto loc_0010845B; /* jbe: below or equal (unsigned <=) */

loc_00108424:
    xmm1.f[0] = MEMF(ecx + 0x68); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    esi = esp + 0xC;
    xmm1.f[0] = MEMF(esi); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm6.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(ecx + 0x68); /* movss */
    /* addps: xmm3.f[0] += xmm6.f[0] (packed 4xfloat) */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    MEMF(edx + 0x10) = xmm1.f[0]; /* movss */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    goto loc_001084AF;

loc_0010845B:
    /* comiss xmm1.f[0], MEMF(0x3B16D0) - sets EFLAGS */
    if ((xmm1.f[0] <= MEMF(0x3B16D0))) goto loc_0010849F; /* jbe: below or equal (unsigned <=) */

loc_00108464:
    xmm1.f[0] = MEMF(ecx + 0x68); /* movss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    esi = esp + 0xC;
    xmm1.f[0] = MEMF(esi); /* movss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0x68); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1688); /* mulss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm6.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* subps: xmm3.f[0] -= xmm6.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm3.b, 16); /* movaps */
    MEMF(edx + 0x14) = xmm0.f[0]; /* movss */
    goto loc_001084AF;

loc_0010849F:
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x68); /* subss */
    MEMF(edx + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x68);
    MEM32(edx + 0x14) = ecx;

loc_001084AF:
    ecx = MEM32(esp + 0x10);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
