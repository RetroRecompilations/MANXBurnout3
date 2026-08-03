#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00121B50
 * Original: 0x00121B50 - 0x00121BB8 (104 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121B50(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00121B50:
    edx = MEM32(ecx + 0x84);
    xmm1.f[0] = MEMF(ecx + 0x28); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B17B8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / MEMF(esp + 4); /* divss */
    eax = 1;
    /* cmp edx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(edx, eax)) goto loc_00121BA9; /* jle: less or equal (signed <=) */

loc_00121B73:
    edx = ecx + 8;
    goto loc_00121B80;

    /* nop */
    /* nop */

loc_00121B80:
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_00121BAF; /* jbe: below or equal (unsigned <=) */

loc_00121B92:
    esi = MEM32(ecx + 0x84);
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, esi)) goto loc_00121B80; /* jl: less (signed <) */

loc_00121BA0:
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00121BA9:
    xmm0.f[0] = MEMF(esp + 8); /* movss */

loc_00121BAF:
    MEMF(ecx + 0x54) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
