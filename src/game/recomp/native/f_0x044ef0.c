#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00044EF0
 * Original: 0x00044EF0 - 0x00044FD5 (229 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00044EF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 8;
    xmm0.f[0] = MEMF(edi + 0x14); /* movss */
    /* ucomiss xmm0.f[0], MEMF(0x3B16C0) - sets EFLAGS */
    xmm1.f[0] = MEMF(0x60EA20); /* movss */
    xmm2.f[0] = MEMF(0x3B1870); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    if (1 /* jnp after test - parity */) goto loc_00044F49; /* jnp: not parity */

loc_00044F20:
    xmm0.f[0] = MEMF(0x60EA1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x14); /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_00044F49; /* ja: above (unsigned >) */

loc_00044F36:
    eax = MEM32(edi + 0x10);
    if (CMP_NE(MEM32(eax + 8), ebx)) goto loc_00044F49; /* jne: not equal / not zero */

loc_00044F3E:
    eax = MEM32(eax + 0x444);
    if (CMP_NE(MEM32(eax), 0x10)) goto loc_00044FB6; /* jne: not equal / not zero */

loc_00044F49:
    esi = edx;
    PUSH32(esp, 0); sub_00044E10(); /* call 0x00044E10 */

loc_00044F50:
    if (TEST_Z(eax, eax)) goto loc_00044FCD; /* je: equal / zero */

loc_00044F54:
    ecx = MEM32(edi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00044FB3; /* je: equal / zero */

loc_00044F5B:
    xmm0.f[0] = MEMF(0x60EA1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x14); /* addss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm1.f[0])) goto loc_00044FB3; /* jb: below (unsigned <) */

loc_00044F71:
    edx = MEM32(ecx + 0x440);
    if (CMP_NE(MEM32(edx), 0x10)) goto loc_00044FB3; /* jne: not equal / not zero */

loc_00044F7C:
    ecx = MEM32(eax + 0x444);
    esi = MEM32(ecx);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x1F0), 16); /* movaps */
    esi = esi << 5;
    memcpy((void *)XBOX_PTR(esi + ecx + 0x10), xmm0.b, 16); /* movaps */
    esi = MEM32(ecx);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x200), 16); /* movaps */
    esi++;
    esi = esi << 5;
    memcpy((void *)XBOX_PTR(esi + ecx), xmm0.b, 16); /* movaps */
    MEM32(ecx) = MEM32(ecx) + 1;
    ecx = MEM32(edx + 0x20C);
    MEM8(eax + 0x10) = MEM8(eax + 0x10) | 2;
    MEM32(eax + 4) = ecx;

loc_00044FB3:
    MEM32(edi + 0x10) = eax;

loc_00044FB6:
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 8);
    esi = MEM32(edi + 0x10);
    PUSH32(esp, edx);
    MEMF(edi + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0); sub_000450E0(); /* call 0x000450E0 */

loc_00044FCD:
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}
