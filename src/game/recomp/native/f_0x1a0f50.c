#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A0F50
 * Original: 0x001A0F50 - 0x001A0FFA (170 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A0F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001A0F50:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    eax = ZX8(MEM8(edx + 0x49));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x642C40;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = ZX8(MEM8(ecx + 0x49));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x642C40;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    /* shufps xmm2, xmm1, 0x39 */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    eax = esp + 0xC;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ecx + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001A0FD0; /* jbe: below or equal (unsigned <=) */

loc_001A0FCD:
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */

loc_001A0FD0:
    SET_LO8(ecx, MEM8(ecx + 0x4D));
    if (CMP_EQ(LO8(ecx), 3)) goto loc_001A0FEE; /* je: equal / zero */

loc_001A0FD8:
    if (CMP_EQ(LO8(ecx), 5)) goto loc_001A0FEE; /* je: equal / zero */

loc_001A0FDD:
    if (CMP_NE(LO8(ecx), 4)) goto loc_001A0FF6; /* jne: not equal / not zero */

loc_001A0FE2:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A5A48); /* subss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001A0FEE:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3B1870); /* subss */

loc_001A0FF6:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
