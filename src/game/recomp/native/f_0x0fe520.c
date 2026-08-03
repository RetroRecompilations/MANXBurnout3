#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FE520
 * Original: 0x000FE520 - 0x000FE583 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE520(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_000FE520:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = edi + 0x30816;
    edx = 8;
    ecx = 0; /* xor self */

loc_000FE530:
    MEM32(eax + -22) = 0xFFFFFFFFu;
    MEM8(eax + -18) = LO8(ecx);
    MEM8(eax + -2) = LO8(ecx);
    MEM8(eax + -1) = LO8(ecx);
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    MEM32(eax + 2) = ecx;
    MEMF(eax + 6) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xA) = xmm0.f[0]; /* movss */
    MEM32(eax + 0xE) = ecx;
    MEM32(eax + 0x1A) = ecx;
    MEM32(eax + 0x16) = ecx;
    MEM32(eax + 0x1E) = ecx;
    MEM32(eax + 0x22) = ecx;
    MEM8(eax + 0x26) = LO8(ecx);
    MEM8(eax + 0x27) = LO8(ecx);
    MEM32(eax + 0x2A) = ecx;
    MEM32(eax + 0x2E) = ecx;
    MEM32(eax + 0x32) = ecx;
    MEM8(eax + 0x36) = LO8(ecx);
    MEM8(eax + 0x37) = LO8(ecx);
    eax = eax + 0x50;
    edx--;
    if ((edx != 0)) goto loc_000FE530; /* jne: not equal / not zero */

loc_000FE57C:
    MEM32(edi + 0x30A80) = ecx;
    esp += 4; return; /* ret */

}
