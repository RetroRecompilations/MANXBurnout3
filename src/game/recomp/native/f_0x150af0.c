#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00150AF0
 * Original: 0x00150AF0 - 0x00150B85 (149 bytes, 48 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150AF0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00150AF0:
    xmm1.f[0] = MEMF(0x60EA20); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0xC); /* divss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    PUSH32(esp, edi);
    edi = ecx;
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] < xmm0.f[0])) goto loc_00150B67; /* jb: below (unsigned <) */

loc_00150B2B:
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FB100(); /* call 0x001FB100 */

loc_00150B39:
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FB140(); /* call 0x001FB140 */

loc_00150B44:
    SET_LO8(eax, MEM8(esi + 0x37));
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(esi + 0x34) = 0;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x37) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(ebx) = 0;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00150B67:
    ecx = MEM32(eax);
    edx = edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 8);
    MEM32(edx + 8) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, 0); sub_001CC3E0(); /* call 0x001CC3E0 */

loc_00150B80:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
