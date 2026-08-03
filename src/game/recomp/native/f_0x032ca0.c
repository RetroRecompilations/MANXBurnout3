#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00032CA0
 * Original: 0x00032CA0 - 0x00032D7B (219 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032CA0(void)
{
    recomp_xmm_t xmm0, xmm1;

loc_00032CA0:
    esp = esp - 8;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(0x4D9254) = ecx;
    MEM32(0x4D9258) = edx;
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(0x4D9284) = ecx;
    MEM32(0x4D9288) = edx;
    MEMF(esp) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    MEM32(0x4D92B4) = ecx;
    MEM32(0x4D92B8) = edx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp);
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(0x45D128) = eax;
    MEM32(0x45D138) = eax;
    MEM32(0x4D92E4) = ecx;
    MEM32(0x4D92E8) = edx;
    MEMF(0x4D91A8) = xmm0.f[0]; /* movss */
    MEMF(0x4D91AC) = xmm0.f[0]; /* movss */
    MEMF(0x4D91C0) = xmm1.f[0]; /* movss */
    MEMF(0x4D91C4) = xmm0.f[0]; /* movss */
    MEMF(0x4D91D8) = xmm1.f[0]; /* movss */
    MEMF(0x4D91DC) = xmm1.f[0]; /* movss */
    MEMF(0x4D91F0) = xmm0.f[0]; /* movss */
    MEMF(0x4D91F4) = xmm1.f[0]; /* movss */
    MEM32(0x45D18C) = eax;
    esp = esp + 8;
    esp += 4; return; /* ret */

}
