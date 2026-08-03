#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003B240
 * Original: 0x0003B240 - 0x0003B2AA (106 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B240(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0003B240:
    eax = MEM32(ecx + 0x20A04);
    if (TEST_NZ(eax, eax)) goto loc_0003B24D; /* jne: not equal / not zero */

loc_0003B24A:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0003B24D:
    eax = MEM32(ecx + 0x20A04);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20A00);
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    eax--;
    MEM32(ecx + 0x20A04) = eax;
    eax = MEM32(esi + eax * 4);
    esi = edx + edx * 4;
    esi = esi << 4;
    esi = esi + 0x3E7BC8;
    MEM32(eax + 4) = esi;
    esi = edx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x208);
    ecx = esi + ecx + 0x20C0C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x12) = 0;
    MEM8(eax + 0x10) = 0;
    esi = MEM32(ecx + 0x200);
    MEM32(ecx + esi * 4) = eax;
    MEM32(ecx + 0x200) = MEM32(ecx + 0x200) + 1;
    MEM8(eax + 0x11) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
