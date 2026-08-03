#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013FA60
 * Original: 0x0013FA60 - 0x0013FB27 (199 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FA60(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0013FA60:
    esp = esp - 0xC;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    eax = eax + 0x3C;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) | 2;
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(0x73A190);
    edx = edx | MEM32(0x73A194);
    if ((edx == 0)) goto loc_0013FAD4; /* je: equal / zero */

loc_0013FAAF:
    eax = MEM32(esp + 0x14);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC50);
    ecx = ecx + 0x4CFB20;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27E0);
    MEM32(esi + 0x10) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x73BB8C);
    MEM32(esi + 0x14) = edx;

loc_0013FAD4:
    eax = 0x4A71A0;
    MEM8(esi + 0xC) = 0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_0013FAE2:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0013FAFA; /* jne: not equal / not zero */

loc_0013FAE6:
    eax = MEM32(0x40B840);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    goto loc_0013FB08;

loc_0013FAFA:
    edx = MEM32(0x40B840);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edx + 0x68) = xmm0.f[0]; /* movss */

loc_0013FB08:
    eax = MEM32(0x40B840);
    ecx = MEM32(eax + 0x70);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = ecx | 0x20;
    MEM32(eax + 0x70) = ecx;
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}
