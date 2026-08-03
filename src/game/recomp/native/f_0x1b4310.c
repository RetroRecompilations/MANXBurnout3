#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4310
 * Original: 0x001B4310 - 0x001B43AE (158 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4310(void)
{
    int _flags = 0; /* fallback flag var */

loc_001B4310:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = esi + 0xC;
    goto loc_001B4320;

    /* nop */

loc_001B4320:
    eax = edx;
    eax = eax >> 1;
    MEM8(ecx + 0x126) = LO8(eax);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 1);
    MEM32(ecx + -4) = ebx;
    MEM8(ecx) = LO8(ebx);
    MEM8(ecx + 0x127) = LO8(eax);
    MEM32(ecx + 0x12C) = 0xD;
    MEM32(ecx + 0x130) = 1;
    MEM32(ecx + 0x128) = ebx;
    edx++;
    ecx = ecx + 0x154;
    if (CMP_L(edx, 8)) goto loc_001B4320; /* jl: less (signed <) */

loc_001B435F:
    edx = (uint32_t)((int32_t)edx * (int32_t)0x154);
    eax = esi + 0xAA8;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax) = ebx;
    MEM32(esi + 0xBD8) = ebx;
    MEM32(esi + 0xBDC) = ebx;
    MEM8(esi + 0xAAC) = 0x75;
    MEM8(esi + 0xBD2) = LO8(ecx);
    MEM8(esi + 0xBD3) = LO8(ecx);
    MEM32(edx + esi + 0x134) = ebx;
    MEM32(esi + 0xBFC) = eax;
    MEM32(esi + 0xC0C) = ebx;
    MEM32(esi + 0xC08) = ebx;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ecx;

}
