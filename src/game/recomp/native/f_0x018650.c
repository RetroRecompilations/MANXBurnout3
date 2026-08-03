#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018650
 * Original: 0x00018650 - 0x000186F2 (162 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018650(void)
{
    recomp_xmm_t xmm0;

loc_00018650:
    PUSH32(esp, 0x4AE1E0);
    PUSH32(esp, 0x3850A8);
    PUSH32(esp, esi);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_00022EF0(); /* call 0x00022EF0 */

loc_00018665:
    PUSH32(esp, 0x4AE1E0);
    PUSH32(esp, 0x384F68);
    PUSH32(esp, 0x3F9BA0);
    ecx = 0x3F9A30;
    PUSH32(esp, 0); sub_00022660(); /* call 0x00022660 */

loc_0001867E:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 4) = 3;
    MEM32(esi + 0x64) = 0xFFFFFFFFu;
    MEM32(0x420C88) = eax;
    eax = 0x1010101;
    MEM16(0x420C98) = LO16(eax);
    MEM8(0x420C9A) = LO8(eax);
    MEMF(0x420C9C) = xmm0.f[0]; /* movss */
    MEMF(0x420CA0) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x14);
    ecx = ecx + 0x3FF;
    edx = edx + 0x3FF;
    eax = eax + 0x3FF;
    ecx = ecx >> 0xA;
    edx = edx >> 0xA;
    eax = eax >> 0xA;
    ecx = ecx + edx;
    eax = ecx + eax + 4;
    eax = eax << 0xA;
    MEM32(esi + 8) = eax;
    esp += 4; return; /* ret */

}
