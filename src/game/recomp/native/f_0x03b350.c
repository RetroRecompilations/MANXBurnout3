#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003B350
 * Original: 0x0003B350 - 0x0003B428 (216 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B350(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0003B350:
    PUSH32(esp, ecx);
    xmm0.f[0] = MEMF(edi + 0x14); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16C0) - sets EFLAGS */
    xmm1.f[0] = MEMF(0x60EA20); /* movss */
    xmm2.f[0] = MEMF(0x3B1870); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    SET_LO8(ebx, 0x10);
    if (1 /* jnp after test - parity */) goto loc_0003B3A3; /* jnp: not parity */

loc_0003B37D:
    xmm0.f[0] = MEMF(0x60EA1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x14); /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_0003B3A3; /* ja: above (unsigned >) */

loc_0003B393:
    eax = MEM32(edi + 0x10);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x11);
    if (CMP_NE(ecx, edx)) goto loc_0003B3A3; /* jne: not equal / not zero */

loc_0003B39E:
    if (CMP_NE(MEM8(eax + 0x10), LO8(ebx))) goto loc_0003B408; /* jne: not equal / not zero */

loc_0003B3A3:
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_0003B240(); /* call 0x0003B240 */

loc_0003B3AC:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0003B422; /* je: equal / zero */

loc_0003B3B2:
    eax = MEM32(edi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0003B405; /* je: equal / zero */

loc_0003B3B9:
    xmm0.f[0] = MEMF(0x60EA1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x14); /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_0003B405; /* jb: below (unsigned <) */

loc_0003B3CF:
    if (CMP_NE(MEM8(eax + 0x10), LO8(ebx))) goto loc_0003B405; /* jne: not equal / not zero */

loc_0003B3D4:
    edx = MEM32(esi + 8);
    ebx = MEM32(eax + 8);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x10);
    PUSH32(esp, edx);
    eax = 0xF;
    edx = ebx;
    PUSH32(esp, 0); sub_0003B0B0(); /* call 0x0003B0B0 */

loc_0003B3EB:
    SET_LO8(ecx, MEM8(esi + 0x10));
    xmm1.f[0] = MEMF(esp + 8); /* movss */
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x10) = LO8(ecx);
    eax = MEM32(ebx + 0x1FC);
    MEM32(esi) = eax;
    MEM8(esi + 0x12) = MEM8(esi + 0x12) | 2;

loc_0003B405:
    MEM32(edi + 0x10) = esi;

loc_0003B408:
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    esi = MEM32(edi + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_0003B430(); /* call 0x0003B430 */

loc_0003B422:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}
