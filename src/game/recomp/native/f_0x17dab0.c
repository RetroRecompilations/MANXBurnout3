#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0017DAB0
 * Original: 0x0017DAB0 - 0x0017DB17 (103 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DAB0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0017DAB0:
    ecx = ZX8(MEM8(esi + 0x4AF));
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0017DB16; /* jle: less or equal (signed <=) */

loc_0017DABD:
    edx = esi + 0x18;

loc_0017DAC0:
    if (CMP_EQ(MEM32(edx), edi)) goto loc_0017DACD; /* je: equal / zero */

loc_0017DAC4:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_0017DAC0; /* jl: less (signed <) */

loc_0017DACC:
    esp += 4; return; /* ret */

loc_0017DACD:
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0017DB16; /* je: equal / zero */

loc_0017DAD2:
    if (TEST_Z(ebx, ebx)) goto loc_0017DAE5; /* je: equal / zero */

loc_0017DAD6:
    ecx = MEM32(ebx + 0x13F4);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x19BC);
    goto loc_0017DAEC;

loc_0017DAE5:
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x218);

loc_0017DAEC:
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x42);
    ecx = ecx + eax;
    MEM8(eax + esi + 0x4B0) = 1;
    /* comiss xmm0.f[0], MEMF(esi + ecx * 4 + 0x228) - sets EFLAGS */
    eax = esi + ecx * 4 + 0x228;
    if ((xmm0.f[0] <= MEMF(esi + ecx * 4 + 0x228))) goto loc_0017DB16; /* jbe: below or equal (unsigned <=) */

loc_0017DB12:
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_0017DB16:
    esp += 4; return; /* ret */

}
