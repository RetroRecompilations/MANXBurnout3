#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004F7F0
 * Original: 0x0004F7F0 - 0x0004F87E (142 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004F7F0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_0004F7F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    edx = MEM32(eax + 0x38);
    xmm1.f[0] = MEMF(0x3B1760); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x28);
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    PUSH32(esp, 0x3FCDE0);
    ecx = ebp + -16;
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x35BF14); /* movss */
    PUSH32(esp, ecx);
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1920); /* movss */
    PUSH32(esp, edx);
    edx = ebp + -24;
    ecx = ebp + -32;
    edi = ebp + -40;
    MEMF(ebp + -32) = xmm1.f[0]; /* movss */
    MEMF(ebp + -28) = xmm1.f[0]; /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_0004F879:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
