#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FF090
 * Original: 0x000FF090 - 0x000FF0D9 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF090(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_000FF090:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0x7FFFFFFF;
    esi = MEM32(ebp + 8);
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* andps xmm0.f[0], MEMF(esi) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
