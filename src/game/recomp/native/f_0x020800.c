#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00020800
 * Original: 0x00020800 - 0x0002085F (95 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00020800(void)
{
    int _cf = 0; /* carry flag */
    recomp_xmm_t xmm0, xmm1;

loc_00020800:
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x3D));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 5;
    MEM32(0x4D075C) = eax;
    SET_LO8(ecx, MEM8(edi + 0x3E));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xFFFFFFFDu;
    ecx = ecx + 5;
    MEM32(0x4D13AC) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x31);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x30);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B18F8); /* mulss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B18F4); /* mulss */
    MEMF(0x4D6198) = xmm1.f[0]; /* movss */
    MEMF(0x4D619C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00020860(); /* call 0x00020860 */

loc_0002085D:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
