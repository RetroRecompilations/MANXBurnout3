#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018050
 * Original: 0x00018050 - 0x00018109 (185 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018050:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    esi = ebp + 0xB3D;
    edx = 0x4AE2A4;
    eax = ebp + 0x69C;
    edi = 4;

loc_00018072:
    MEM32(eax + -388) = ecx;
    MEM32(eax + -384) = edx;
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx++;
    eax = eax + 0x188;
    edx = edx + 0x120;
    MEM8(esi) = LO8(ebx);
    esi++;
    edi--;
    if ((edi != 0)) goto loc_00018072; /* jne: not equal / not zero */

loc_0001809C:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    SET_LO8(edx, 0); /* xor self */
    ecx = ebp + 0xB3B;
    eax = ebp + 0xB4C;

loc_000180B5:
    MEM8(ecx + -2) = LO8(edx);
    MEM8(ecx) = LO8(ebx);
    MEMF(eax + -8) = xmm0.f[0]; /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x42) = LO8(ebx);
    MEMF(eax + 0x34) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x3C) = xmm1.f[0]; /* movss */
    SET_LO8(edx, LO8(edx) + 1);
    eax = eax + 4;
    ecx++;
    if (CMP_L(LO8(edx), 2)) goto loc_000180B5; /* jl: less (signed <) */

loc_000180F4:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0xB38) = LO8(ebx);
    MEM8(ebp + 0xB7C) = LO8(ebx);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
