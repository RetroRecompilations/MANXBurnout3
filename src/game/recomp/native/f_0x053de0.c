#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053DE0
 * Original: 0x00053DE0 - 0x00053EC1 (225 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053DE0(void)
{
    uint64_t mm0, mm1;

loc_00053DE0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + edx;
    SET_LO16(edx, MEM16(eax + 0x58));
    MEM16(ecx + 0x10) = LO16(edx);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x58);
    esi = esi + edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x58) = esi;
    esi = MEM32(eax + 0x5C);
    esi = esi + edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x5C) = esi;
    esi = MEM32(eax + 0x60);
    esi = esi + edx;
    edx = MEM32(eax + 0x68);
    MEM32(eax + 0x60) = esi;
    MEM32(ecx + 0xC) = edx;
    MEM32(eax + 0x68) = ecx;
    ecx = MEM32(eax + 0x60);
    MEM32(esp + 8) = ecx;
    mm0 = MEM32(esp + 8); /* movd */
    mm1 = MEM32(esp + 8); /* movd */
    /* pcmpgtd mm0, qword ptr [0x4a1d38] (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [0x4a1d38] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0xC) = mm0; /* movd */
    /* emms - empty MMX state */
    edx = MEM32(esp + 0xC);
    ecx = MEM32(eax + 0x5C);
    MEM32(0x4A1D38) = edx;
    MEM32(esp + 8) = ecx;
    mm0 = MEM32(esp + 8); /* movd */
    mm1 = MEM32(esp + 8); /* movd */
    /* pcmpgtd mm0, qword ptr [0x4a1d3c] (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [0x4a1d3c] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0xC) = mm0; /* movd */
    /* emms - empty MMX state */
    edx = MEM32(esp + 0xC);
    eax = MEM32(eax + 0x58);
    MEM32(0x4A1D3C) = edx;
    MEM32(esp + 8) = eax;
    mm0 = MEM32(esp + 8); /* movd */
    mm1 = MEM32(esp + 8); /* movd */
    /* pcmpgtd mm0, qword ptr [0x4a1d40] (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [0x4a1d40] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp + 0xC) = mm0; /* movd */
    /* emms - empty MMX state */
    ecx = MEM32(esp + 0xC);
    MEM32(0x4A1D40) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
