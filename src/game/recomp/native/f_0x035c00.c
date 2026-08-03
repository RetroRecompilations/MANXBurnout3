#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00035C00
 * Original: 0x00035C00 - 0x00035CF4 (244 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00035C00:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(ebp + 0x28));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00035C1A; /* jne: not equal / not zero */

loc_00035C18:
    ecx = esi;

loc_00035C1A:
    eax = MEM32(ecx + 8);
    edi = MEM32(ecx);
    SET_LO8(ebx, MEM8(ebp + 0x24));
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = eax + edi;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00035C50; /* jne: not equal / not zero */

loc_00035C2E:
    xmm0.f[0] = MEMF(esi + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0xC); /* subss */
    xmm1.f[0] = MEMF(ecx + 0x14); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00035C50; /* jbe: below or equal (unsigned <=) */

loc_00035C45:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

loc_00035C50:
    esi = MEM32(ebp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    esi = MEM32(edx);
    xmm1.f[0] = MEMF(ebp + 0xC); /* movss */
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    MEMF(eax + 0xC) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x20); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x14); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1684); /* mulss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + 0x10); /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 0x1C); /* movss */
    MEMF(eax + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx + 8);
    /* test eax, eax - flags set for next jcc */
    MEMF(ecx + 0x18) = xmm1.f[0]; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_00035CE2; /* jne: not equal / not zero */

loc_00035CDC:
    eax = MEM32(ecx + 4);
    MEM32(ecx + 8) = eax;

loc_00035CE2:
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    eax--;
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}
