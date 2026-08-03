#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128C30
 * Original: 0x00128C30 - 0x00128D36 (262 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00128C30:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0xC));
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00128C4F; /* je: equal / zero */

loc_00128C43:
    esi = 7;
    ecx = 3;
    goto loc_00128C56;

loc_00128C4F:
    esi = 6;
    ecx = 0; /* xor self */

loc_00128C56:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00128C92; /* je: equal / zero */

loc_00128C5A:
    edi = MEM32(edx + 0x18);
    xmm0.f[0] = MEMF(edi + ecx * 4 + 0xA70); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    ecx = ecx << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + edi + 0x90), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    eax = edi;
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + eax + 0xA0), 16); /* movaps */
    goto loc_00128CCB;

loc_00128C92:
    eax = MEM32(edx + 0x18);
    xmm0.f[0] = MEMF(eax + ecx * 4 + 0xA70); /* movss */
    eax = MEM32(edx + 0x14);
    ecx = ecx << 6;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + ecx + 0x720), 16); /* movaps */
    edi = eax + ecx;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(edi + 0x730), 16); /* movaps */

loc_00128CCB:
    edx = MEM32(edx + 0x18);
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    esi = esi << 6;
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esi + edx + 0xA4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx + ecx + 0xA4); /* subss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00128CF9; /* je: equal / zero */

loc_00128CEF:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16E8); /* mulss */
    goto loc_00128D01;

loc_00128CF9:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */

loc_00128D01:
    eax = MEM32(ebp + 8);
    edx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x18);
    POP32(esp, esi);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
