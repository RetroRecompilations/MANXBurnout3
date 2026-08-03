#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00063590
 * Original: 0x00063590 - 0x00063669 (217 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00063590(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_00063590:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    PUSH32(esp, edi);
    eax = esi + 0x1A0;
    PUSH32(esp, 0); sub_001C66F0(); /* call 0x001C66F0 */

loc_000635A2:
    eax = MEM32(esi + 0x1B4);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x557870); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1C44); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1C40); /* mulss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x5592C8); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1C3C); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1C38); /* mulss */
    ecx = MEM32(ebp + -8);
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + -4);
    PUSH32(esp, 0x464018);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0); sub_00062DA0(); /* call 0x00062DA0 */

loc_0006362A:
    PUSH32(esp, 0); sub_0004DD00(); /* call 0x0004DD00 */

loc_0006362F:
    MEM32(esi + 0x1E4) = 6;
    MEM32(esi + 0x1F4) = 0x17;
    edi = esi + 0x1F8;
    eax = 0; /* xor self */
    MEM32(edi + 0x1800) = edi;
    ecx = 0x600;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = 0x463C78;
    PUSH32(esp, 0); sub_00061B20(); /* call 0x00061B20 */

loc_00063662:
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
