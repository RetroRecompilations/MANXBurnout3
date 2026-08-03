#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00108F90
 * Original: 0x00108F90 - 0x0010903E (174 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108F90(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_00108F90:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x38;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = ecx;
    ecx = eax + 0x10;
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(edx + 4);
    xmm0.f[0] = MEMF(esp + 0x2C); /* movss */
    MEM32(esp + 0x30) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x34) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x3C) = edx;
    edx = eax + 0x20;
    esi = edx;
    edi = MEM32(esi);
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edi;
    edi = MEM32(esi + 4);
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    MEM32(esp + 0x14) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x18) = edi;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x38); /* movss */
    POP32(esp, edi);
    MEM32(esp + 0x18) = esi;
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
