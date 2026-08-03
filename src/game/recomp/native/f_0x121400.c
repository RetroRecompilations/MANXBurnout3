#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00121400
 * Original: 0x00121400 - 0x0012149E (158 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00121400:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x2424);
    /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x2428) = 0;
    if (TEST_Z(eax, eax)) goto loc_00121499; /* je: equal / zero */

loc_0012141D:
    xmm0.f[0] = MEMF(eax + 0xBC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    /* comiss xmm0.f[0], MEMF(esi + 0xBC) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esi + 0xBC))) goto loc_0012147F; /* jbe: below or equal (unsigned <=) */

loc_00121436:
    eax = esi + 0xC0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0xC);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = esp + 0xC;
    xmm0.f[0] = MEMF(eax); /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm1.f[0] *= xmm0.f[0] (packed 4xfloat) */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FFC80(); /* call 0x000FFC80 */

loc_0012147F:
    ecx = MEM32(esi + 0x2424);
    MEM32(ecx + 0x2424) = 0;
    MEM32(esi + 0x2424) = 0;

loc_00121499:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
