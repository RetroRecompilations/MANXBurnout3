#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00163E70
 * Original: 0x00163E70 - 0x00163F64 (244 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163E70(void)
{
    recomp_xmm_t xmm0;

loc_00163E70:
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    MEMF(ecx + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16DC); /* movss */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16D8); /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16D4); /* movss */
    eax = ecx + 0x60;
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7F34); /* movss */
    MEM32(ecx + 0x34) = 1;
    MEM32(ecx + 0x38) = 0xA;
    MEM32(ecx + 0x40) = eax;
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001BF040(); /* call 0x001BF040 */

loc_00163ECA:
    xmm0.f[0] = MEMF(0x3A795C); /* movss */
    eax = ecx + 0x100C;
    MEM32(ecx + 0xD4) = eax;
    edx = ecx + 0x1008;
    MEM32(ecx + 0x94) = edx;
    eax = ecx + 0x1014;
    MEM32(ecx + 0x154) = eax;
    edx = ecx + 0x1010;
    MEM32(ecx + 0x114) = edx;
    eax = ecx + 0x101C;
    MEM32(ecx + 0x1D4) = eax;
    edx = ecx + 0x1018;
    MEM32(ecx + 0x194) = edx;
    eax = ecx + 0x1024;
    MEM32(ecx + 0x254) = eax;
    edx = ecx + 0x1020;
    MEM32(ecx + 0x214) = edx;
    eax = ecx + 0x102C;
    MEM32(ecx + 0x2D4) = eax;
    edx = ecx + 0x1028;
    MEM32(ecx + 0x294) = edx;
    eax = 0; /* xor self */
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0x1049) = LO8(eax);
    MEM32(ecx + 0x1030) = eax;
    MEM32(ecx + 0x1034) = eax;
    esp += 4; return; /* ret */

}
