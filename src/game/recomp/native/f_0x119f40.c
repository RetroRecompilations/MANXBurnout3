#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00119F40
 * Original: 0x00119F40 - 0x0011A012 (210 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119F40(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119F40:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
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

loc_00119F7B:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(esi + 0x220) = ebx;
    MEM8(esi + 0x215) = 6;
    MEMF(esi + 0x224) = xmm0.f[0]; /* movss */
    ebp = esi + 0x230;
    eax = 0; /* xor self */
    edi = ebp;
    edx = esi + 0x570;
    ecx = 0xCC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi + 0x560;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    edi = edx;
    ecx = 0x84;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = edx + 0x40;
    MEM32(edx + 4) = eax;
    ecx = edx + 0x1C;
    MEM32(edx) = ecx;
    eax = edx + 0x100;
    MEM32(edx + 8) = eax;
    ecx = edx + 0x180;
    MEM32(edx + 0xC) = ecx;
    eax = edx + 0x1A4;
    MEM32(edx + 0x10) = eax;
    MEM32(ebp) = ebx;
    ecx = ebp + 0x10;
    edx = ebp + 0x310;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = edx;
    POP32(esp, edi);
    MEM32(ebp) = 0xFFFFFFFFu;
    MEM32(esi + 0x200) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
