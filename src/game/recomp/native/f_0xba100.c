#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000BA100
 * Original: 0x000BA100 - 0x000BA1B1 (177 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000BA100(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_000BA100:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    ecx = MEM32(0x557A34);
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = eax + 2;
    ecx = 0x557A20;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_000BA11F:
    xmm0.f[0] = MEMF(0x56FD1C); /* movss */
    xmm1.f[0] = MEMF(0x56FDD8); /* movss */
    PUSH32(esp, 0);
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    MEM32(esi + 0x38) = eax;
    edx = MEM32(0x464660);
    PUSH32(esp, edx);
    MEMF(ebp + -24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x56FDFC); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x56FD78); /* movss */
    PUSH32(esp, 0x557970);
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x56FDEC); /* movss */
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    edx = ebp + -24;
    ecx = ebp + -32;
    edi = ebp + -40;
    MEMF(ebp + -20) = xmm1.f[0]; /* movss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C19A0(); /* call 0x001C19A0 */

loc_000BA1AC:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
