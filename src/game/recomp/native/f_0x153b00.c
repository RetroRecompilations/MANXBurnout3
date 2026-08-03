#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153B00
 * Original: 0x00153B00 - 0x00153BD1 (209 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153B00(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00153B00:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 1;
    PUSH32(esp, esi);
    MEM32(esi + 0x5EC) = ebx;
    MEM32(esi + 0x5E8) = ebx;
    MEM32(esi + 0x5E4) = ebx;
    MEM32(esi + 0x5E0) = ebx;
    MEM32(esi + 0x618) = ebx;
    MEM32(esi + 0x600) = ebx;
    MEM32(esi + 0x604) = 0xFFFFFFFFu;
    MEM32(esi + 0x5F8) = ebx;
    MEM32(esi + 0x5F0) = eax;
    MEM8(esi + 0x614) = LO8(ebx);
    MEM8(esi + 0x62C) = LO8(ebx);
    MEM8(esi + 0x62E) = LO8(eax);
    MEM32(esi + 0x568) = ebx;
    MEM8(esi + 0x630) = LO8(eax);
    PUSH32(esp, 0); sub_00152E00(); /* call 0x00152E00 */

loc_00153B66:
    eax = 0; /* xor self */
    POP32(esp, ebx);
    /* nop */

loc_00153B70:
    MEM8(esi + eax + 0x5AC) = LO8(eax);
    eax++;
    if (CMP_L(eax, 0x26)) goto loc_00153B70; /* jl: less (signed <) */

loc_00153B7D:
    xmm0.f[0] = MEMF(0x3EC938); /* movss */
    MEMF(0x3EC928) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EC940); /* movss */
    MEMF(0x3EC92C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EC948); /* movss */
    MEMF(0x3EC930) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3EC950); /* movss */
    MEMF(0x3EC934) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x620) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x628) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
