#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00122710
 * Original: 0x00122710 - 0x0012282C (284 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122710(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00122710:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00109270(); /* call 0x00109270 */

loc_00122717:
    SET_LO8(ebx, LO8(eax));
    edx = 0; /* xor self */
    if (CMP_EQ(LO8(ebx), LO8(edx))) goto loc_00122828; /* je: equal / zero */

loc_00122723:
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = esi + 0x220;
    edi = ebp;
    ecx = 0x180;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x120;
    edi = esi + 0x820;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi + 0xCA0;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esi + 0xCC0) = edx;
    MEM32(esi + 0xCC4) = edx;
    ecx = esi + 0xCC8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    ecx = 0x120;
    edi = esi + 0xCE0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(esi + 0x1164) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1A1C); /* movss */
    MEM16(esi + 0x1160) = LO16(edx);
    MEM8(esi + 0x1168) = LO8(edx);
    MEM8(esi + 0x1169) = LO8(edx);
    MEM8(esi + 0x116A) = LO8(edx);
    MEM8(esi + 0x116B) = LO8(edx);
    MEMF(esi + 0x116C) = xmm0.f[0]; /* movss */
    ecx = 0x10;
    edi = esi + 0x1170;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi + 0x11B0;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    ecx = 0x60;
    edi = esi + 0x11D0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi + 0x208) = ebp;
    MEM8(esi + 0x1350) = LO8(edx);
    MEM8(esi + 0x1351) = LO8(edx);
    MEM8(esi + 0x20C) = 2;
    MEM8(esi + 0x1353) = LO8(edx);
    MEM8(esi + 0x1354) = LO8(edx);
    POP32(esp, ebp);

loc_00122828:
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
