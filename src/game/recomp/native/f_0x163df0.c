#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00163DF0
 * Original: 0x00163DF0 - 0x00163E67 (119 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00163DF0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    ecx = MEM32(eax);
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00163E63; /* je: equal / zero */

loc_00163E10:
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm2, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    edx = esp + 0xC;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x30) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(esi + 0x30))) goto loc_00163E63; /* jb: below (unsigned <) */

loc_00163E46:
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_001BF590(); /* call 0x001BF590 */

loc_00163E4E:
    edx = MEM32(edi + 8);
    eax = edi + 8;
    ecx = esi + 0x14;
    MEM32(ecx) = edx;
    MEM32(esi + 0x18) = eax;
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    MEM32(eax) = ecx;

loc_00163E63:
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
