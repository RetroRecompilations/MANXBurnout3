#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001068A0
 * Original: 0x001068A0 - 0x001069C0 (288 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001068A0(void)
{
    recomp_xmm_t xmm0;

loc_001068A0:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(esi + 0x215) = LO8(ebx);
    MEM32(esi + 0x204) = ebx;
    MEM32(esi + 0x200) = 0x5A3AA0;
    PUSH32(esp, esi);
    MEM32(0x5A3AA0) = ebx;
    MEM32(0x5A3AA4) = 0x5A3AB0;
    MEM32(0x5A3AA8) = 0x5A52B0;
    PUSH32(esp, 0); sub_00109270(); /* call 0x00109270 */

loc_001068DA:
    MEM8(esi + 0x215) = 7;
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8110), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x220), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x230), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x3F8130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x240), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x4A1F70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x250), xmm0.b, 16); /* movaps */
    MEM32(esi + 0x2B0) = ebx;
    MEM16(esi + 0x2B8) = LO16(ebx);
    MEM8(esi + 0x2BB) = LO8(ebx);
    MEM8(esi + 0x2BA) = 3;
    eax = 0; /* xor self */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esi + 0x260), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x2B4) = xmm0.f[0]; /* movss */
    ecx = esi + 0x270;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    edx = 0; /* xor self */
    eax = esi + 0x290;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    edx = esi + 0x2C0;
    eax = 0; /* xor self */
    ecx = 0x84;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx + 0x40;
    MEM32(edx + 4) = ecx;
    eax = edx + 0x1C;
    ecx = edx + 0x100;
    MEM32(edx) = eax;
    MEM32(edx + 8) = ecx;
    eax = edx + 0x180;
    ecx = edx + 0x1A4;
    POP32(esp, edi);
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
