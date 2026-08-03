#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00188CF0
 * Original: 0x00188CF0 - 0x00188D6E (126 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188CF0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00188CF0:
    eax = MEM32(0x3FA644);
    edx = 0; /* xor self */
    /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, edx)) goto loc_00188D08; /* jne: not equal / not zero */

loc_00188CFC:
    MEM32(0x3FA5E4) = 2;
    goto loc_00188D1F;

loc_00188D08:
    ecx = 2;
    if (CMP_NE(eax, ecx)) goto loc_00188D19; /* jne: not equal / not zero */

loc_00188D11:
    MEM32(0x3FA66C) = ecx;
    goto loc_00188D1F;

loc_00188D19:
    MEM32(0x3FA65C) = ecx;

loc_00188D1F:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    esi = edi + 0x80;
    MEM8(edi + 0x14C) = LO8(edx);
    MEM8(edi + 0x13C) = LO8(edx);
    eax = esi;
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00011640(); /* call 0x00011640 */

loc_00188D4E:
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xB0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edi + 0xF0), xmm0.b, 16); /* movaps */
    MEM32(edi + 0x140) = 0x18;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
