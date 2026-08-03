#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000C2360
 * Original: 0x000C2360 - 0x000C24D8 (376 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000C2360(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_000C2360:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    xmm4.f[0] = MEMF(0x3B1684); /* movss */
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    ecx = 0; /* xor self */
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 0xB) = LO8(ecx);
    SET_LO16(edx, MEM16(0x557A54));
    MEM16(eax + 8) = LO16(edx);
    MEM32(0x557A54) = MEM32(0x557A54) + 2;
    edx = MEM32(0x557A58);
    MEM32(eax + 4) = edx;
    MEM32(0x557A58) = eax;
    MEMF(esp) = xmm3.f[0]; /* movss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x70), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x80), xmm1.b, 16); /* movaps */
    xmm1.f[0] = MEMF(0x39610C); /* movss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x90), xmm5.b, 16); /* movaps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    memcpy(xmm5.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xA0), xmm5.b, 16); /* movaps */
    MEMF(esp) = xmm1.f[0]; /* movss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xB0), xmm1.b, 16); /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xC0), xmm1.b, 16); /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xD0), xmm0.b, 16); /* movaps */
    edx = 0xFFFFFFFDu;
    MEMF(eax + 0xE0) = xmm3.f[0]; /* movss */
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = 0xFFFFFFFFu;
    MEM32(eax + 0x68) = 0xFFFFFFFEu;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = 0xFFFFFFFFu;
    MEM32(eax + 0x58) = 0xFFFFFFFEu;
    MEM32(eax + 0x5C) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
