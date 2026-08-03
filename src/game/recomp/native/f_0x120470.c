#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00120470
 * Original: 0x00120470 - 0x001204B1 (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120470(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00120470:
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_000FFC80(); /* call 0x000FFC80 */

loc_00120478:
    SET_LO8(eax, MEM8(esi + 0x1169));
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001204AF; /* jle: less or equal (signed <=) */

loc_0012048C:
    eax = esi + 0x87C;

loc_00120492:
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + -12); /* divss */
    MEMF(eax) = xmm1.f[0]; /* movss */
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    ecx++;
    eax = eax + 0xC0;
    if (CMP_L(ecx, edx)) goto loc_00120492; /* jl: less (signed <) */

loc_001204AF:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
