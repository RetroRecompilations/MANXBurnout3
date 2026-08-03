#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019E800
 * Original: 0x0019E800 - 0x0019E857 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019E800(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0019E800:
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x15));
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_0019E856; /* jbe: below or equal (unsigned <=) */

loc_0019E809:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, esi);
    esi = 0xFFFFFFF0u;
    PUSH32(esp, edi);
    ecx = edx + 0x10;
    esi = esi - edx;
    /* nop */

loc_0019E820:
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0019E846; /* je: equal / zero */

loc_0019E826:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    if (CMP_NE(MEM8(eax + 0x46), 2)) goto loc_0019E843; /* jne: not equal / not zero */

loc_0019E83A:
    MEM8(eax + 0x46) = 1;
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */

loc_0019E843:
    MEM8(ecx) = 0xFF;

loc_0019E846:
    edi = MEM32(edx);
    edi = ZX8(MEM8(edi + 0x15));
    ecx++;
    eax = esi + ecx;
    if (CMP_L(eax, edi)) goto loc_0019E820; /* jl: less (signed <) */

loc_0019E854:
    POP32(esp, edi);
    POP32(esp, esi);

loc_0019E856:
    esp += 4; return; /* ret */

}
