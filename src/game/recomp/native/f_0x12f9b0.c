#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012F9B0
 * Original: 0x0012F9B0 - 0x0012FA33 (131 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F9B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0012F9B0:
    PUSH32(esp, ebp);
    ebp = esp;
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    esp = esp & 0xFFFFFFF0u;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = esi + 0x9C;
    goto loc_0012F9D0;

    /* nop */

loc_0012F9D0:
    /* comiss xmm1.f[0], MEMF(edx) - sets EFLAGS */
    if ((xmm1.f[0] >= MEMF(edx))) goto loc_0012F9EB; /* jae: above or equal (unsigned >=) */

loc_0012F9D5:
    /* comiss xmm0.f[0], MEMF(edx) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx))) goto loc_0012F9E0; /* jbe: below or equal (unsigned <=) */

loc_0012F9DA:
    xmm0.f[0] = MEMF(edx); /* movss */
    eax = ecx;

loc_0012F9E0:
    ecx++;
    edx = edx + 0x30;
    if (CMP_L(ecx, 4)) goto loc_0012F9D0; /* jl: less (signed <) */

loc_0012F9E9:
    goto loc_0012F9ED;

loc_0012F9EB:
    eax = ecx;

loc_0012F9ED:
    edx = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    memcpy((void *)XBOX_PTR(ecx + esi + 0x80), xmm0.b, 16); /* movaps */
    edx = MEM32(edi);
    xmm0.f[0] = MEMF(ebp + 0xC); /* movss */
    ecx = ecx + esi;
    eax = eax + eax * 2 + 9;
    eax = eax << 4;
    eax = eax + esi;
    MEM32(eax) = edx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(edi + 8);
    MEM32(eax + 8) = edx;
    MEMF(ecx + 0x9C) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xA0) = 3;
    esp = ebp;
    POP32(esp, ebp);

}
