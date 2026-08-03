#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001292B0
 * Original: 0x001292B0 - 0x00129334 (132 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001292B0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_001292B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    ecx = ecx + 0x10;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    esi = MEM32(esp + 0xC);
    edi = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x10;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0xC) = edx;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(esp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x20);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
