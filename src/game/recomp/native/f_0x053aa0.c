#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053AA0
 * Original: 0x00053AA0 - 0x00053B64 (196 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00053AA0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00053B70(); /* call 0x00053B70 */

loc_00053AAD:
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(edx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00053AE1; /* je: equal / zero */

loc_00053ABA:
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    MEM32(edx + 0x10) = ebp;
    edx = MEM32(eax);
    /* test edx, edx - flags set for next jcc */
    POP32(esp, ebp);
    if (TEST_Z(edx, edx)) goto loc_00053ACE; /* je: equal / zero */

loc_00053AC7:
    MEM32(edx + 4) = 0;

loc_00053ACE:
    edx = MEM32(ecx + 0x44);
    if (TEST_NZ(edx, edx)) goto loc_00053AD9; /* jne: not equal / not zero */

loc_00053AD5:
    MEM32(eax) = edx;
    goto loc_00053ADE;

loc_00053AD9:
    MEM32(eax) = edx;
    MEM32(edx + 4) = eax;

loc_00053ADE:
    MEM32(ecx + 0x44) = eax;

loc_00053AE1:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEM32(eax + 0x50) = ecx;
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    eax = eax + 8;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(edi + 0x64) = eax;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebx);
    eax = MEM32(edi + 0x64);
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(edi + 0x64);
    ecx = MEM32(esi);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 4);
    POP32(esp, edi);
    MEM32(eax + 0xC) = edx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
