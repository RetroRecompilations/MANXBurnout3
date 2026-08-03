#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0004EDC0
 * Original: 0x0004EDC0 - 0x0004EED2 (274 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0004EDC0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0004EDC0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    esi = edx;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    eax = esi;
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0004EDE1:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x27E0);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1C);
    eax = MEM32(edi + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    ecx = MEM32(edi + 8);
    ebx = edx + eax + 0x14;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x10);
    PUSH32(esp, ecx);
    esi = esi + 0x73B2A0;
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    MEM32(edi + 0x28) = esi;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004EE10:
    MEM32(edi + 0x24) = eax;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = ebx;
    PUSH32(esp, 0); sub_001C6850(); /* call 0x001C6850 */

loc_0004EE21:
    xmm0.f[0] = MEMF(0x3B17C8); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    xmm3.f[0] = MEMF(0x54F5B4); /* movss */
    xmm4.f[0] = MEMF(0x54F5C0); /* movss */
    memcpy(xmm1.b, xmm3.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    PUSH32(esp, eax);
    ecx = ebp + -12;
    edx = ebp + -20;
    esi = ebp + -28;
    MEM32(edi + 0x20) = eax;
    MEMF(ebp + -12) = xmm4.f[0]; /* movss */
    MEMF(ebp + -8) = xmm0.f[0]; /* movss */
    MEMF(ebp + -20) = xmm2.f[0]; /* movss */
    MEMF(ebp + -16) = xmm2.f[0]; /* movss */
    MEMF(ebp + -28) = xmm2.f[0]; /* movss */
    MEMF(ebp + -24) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_000FA780(); /* call 0x000FA780 */

loc_0004EE73:
    eax = MEM32(edi + 0x24);
    ecx = MEM32(edi + 0x28);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x3980F8); /* subss */
    MEM32(edi + 0x2C) = eax;
    edi = MEM32(ecx + 0x278);
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A795C); /* movss */
    PUSH32(esp, eax);
    edx = ebp + -28;
    ecx = ebp + -20;
    esi = ebp + -12;
    MEMF(ebp + -28) = xmm2.f[0]; /* movss */
    MEMF(ebp + -20) = xmm4.f[0]; /* movss */
    MEMF(ebp + -16) = xmm0.f[0]; /* movss */
    MEMF(ebp + -12) = xmm2.f[0]; /* movss */
    MEMF(ebp + -8) = xmm3.f[0]; /* movss */
    PUSH32(esp, 0); sub_0004E3B0(); /* call 0x0004E3B0 */

loc_0004EEC7:
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
