#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <string.h>

/**
 * sub_001C1930
 * Original: 0x001C1930 - 0x001C1992 (98 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C1930(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_001C1930:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    xmm0.f[0] = MEMF(eax + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax); /* addss */
    edx = MEM32(eax + 4);
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0xC); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + -8);
    MEM32(ebp + -16) = ecx;
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    memset(xmm0.b, 0, 16); /* xorps self = zero */
    ecx = ebp + -8;
    PUSH32(esp, 1);
    MEM32(ebp + -20) = edx;
    edx = MEM32(ebp + -4);
    PUSH32(esp, ecx);
    ecx = eax + 0x10;
    eax = ebp + -24;
    MEM32(ebp + -12) = edx;
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C75C0(); /* call 0x001C75C0 */

loc_001C198B:
    esp = esp + 8;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */
}
