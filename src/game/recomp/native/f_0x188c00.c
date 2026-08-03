#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00188C00
 * Original: 0x00188C00 - 0x00188CED (237 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C00(void)
{
    recomp_xmm_t xmm0;

loc_00188C00:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x2C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x5C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x60), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x80), xmm0.b, 16); /* movaps */
    edx = MEM32(ecx + 0x90);
    MEM32(eax + 0x90) = edx;
    edx = MEM32(ecx + 0x94);
    MEM32(eax + 0x94) = edx;
    edx = MEM32(ecx + 0x98);
    MEM32(eax + 0x98) = edx;
    edx = MEM32(ecx + 0x9C);
    MEM32(eax + 0x9C) = edx;
    edx = MEM32(ecx + 0xA0);
    MEM32(eax + 0xA0) = edx;
    edx = MEM32(ecx + 0xA4);
    MEM32(eax + 0xA4) = edx;
    edx = MEM32(ecx + 0xA8);
    MEM32(eax + 0xA8) = edx;
    ecx = MEM32(ecx + 0xAC);
    MEM32(eax + 0xAC) = ecx;
    esp += 4; return; /* ret */

}
