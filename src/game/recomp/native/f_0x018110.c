#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018110
 * Original: 0x00018110 - 0x00018166 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018110(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00018110:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = edx + 0x52A;
    edi = 4;
    esi = 0; /* xor self */
    /* nop */

loc_00018130:
    MEMF(edx + -10) = xmm0.f[0]; /* movss */
    MEMF(edx + -6) = xmm0.f[0]; /* movss */
    eax = edx;
    ecx = 0x1F;

loc_00018141:
    MEM16(eax + -2) = LO16(esi);
    MEM16(eax) = LO16(esi);
    MEMF(eax + 2) = xmm1.f[0]; /* movss */
    MEMF(eax + 6) = xmm0.f[0]; /* movss */
    eax = eax + 0xC;
    ecx--;
    if ((ecx != 0)) goto loc_00018141; /* jne: not equal / not zero */

loc_00018158:
    edx = edx + 0x188;
    edi--;
    if ((edi != 0)) goto loc_00018130; /* jne: not equal / not zero */

loc_00018161:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
