#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000538B0
 * Original: 0x000538B0 - 0x0005396E (190 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000538B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_000538B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x64);
    esi = MEM32(edi + 0x28);
    ebx = 0; /* xor self */
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(edi + 0x58) = ebx;
    MEM32(edi + 0x5C) = ebx;
    MEM32(edi + 0x60) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_000538D8; /* je: equal / zero */

loc_000538D3:
    PUSH32(esp, 0); sub_00053B70(); /* call 0x00053B70 */

loc_000538D8:
    eax = edi + 0x14;
    PUSH32(esp, 0); sub_001C66F0(); /* call 0x001C66F0 */

loc_000538E0:
    ecx = MEM32(0x4D6B24);
    eax = MEM32(0x4D652C);
    edx = MEM32(0x4D6B20);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    eax = eax - ecx;
    ecx = MEM32(0x4D6B28);
    eax = eax - edx;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x4D6530);
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x54FA88); /* divss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0x54F8F0); /* divss */
    edx = ecx + ecx;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    eax = eax - edx;
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(esi + 8) = ecx;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = edx;
    MEM32(edi + 4) = ebx;
    MEMF(edi) = xmm0.f[0]; /* movss */
    MEM32(edi + 8) = 5;
    MEM32(edi + 0xC) = 6;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
