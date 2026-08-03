#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD080
 * Original: 0x001DD080 - 0x001DD15A (218 bytes, 47 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD080(void)
{
    recomp_xmm_t xmm0, xmm1;

loc_001DD080:
    eax = MEM32(esp + 4);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    edx = 0; /* xor self */
    ecx = eax + 0x90;
    MEM32(ecx) = ecx;
    MEM32(eax + 0x94) = ecx;
    ecx = 0x20003;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C0A24);
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(edx);
    MEM8(eax + 3) = LO8(edx);
    MEM32(eax + 4) = edx;
    MEMF(eax + 0x38) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x34) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x48) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x40) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x1C) = ecx;
    MEMF(eax + 0x78) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x64) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x50) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x60) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x58) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x54) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x74) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x70) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x68) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x88) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x84) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x80) = xmm0.f[0]; /* movss */
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x98) = edx;
    MEM32(eax + 0x9C) = edx;
    MEM32(eax + 0xA0) = eax;
    PUSH32(esp, 0); sub_001E1AF0(); /* call 0x001E1AF0 */

loc_001DD156:
    esp = esp + 8;
    esp += 4; return; /* ret */

}
