#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002DDC0
 * Original: 0x0002DDC0 - 0x0002DDF0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DDC0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_0002DDC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    xmm1.f[0] = MEMF(ecx); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + -8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 4); /* movss */
    ecx = MEM32(ebp + -8);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + -4) = xmm1.f[0]; /* movss */
    edx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
