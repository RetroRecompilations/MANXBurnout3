#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00045050
 * Original: 0x00045050 - 0x000450D4 (132 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00045050(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00045050:
    /* test MEM8(eax + 0x10), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(MEM8(eax + 0x10), 3)) goto loc_000450B3; /* je: equal / zero */

loc_00045057:
    ecx = MEM32(eax + 0x440);
    ecx = MEM32(ecx);
    edx = MEM32(eax + 0x444);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0x444);
    ecx = MEM32(edx);
    esi = MEM32(eax + 0x440);
    ecx = ecx << 5;
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + ecx + -16), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + edx + -16), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + ecx), 16); /* movaps */
    esi = esi + ecx + -16;
    memcpy((void *)XBOX_PTR(ecx + edx), xmm0.b, 16); /* movaps */
    ecx = MEM32(eax + 0x440);
    edx = MEM32(eax + 0x444);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    ecx = ecx + 0x10;
    edx = edx + 0x10;
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(edx + 0x10), xmm0.b, 16); /* movaps */
    MEM8(eax + 0x10) = MEM8(eax + 0x10) & 0xFC;

loc_000450B3:
    xmm0.f[0] = MEMF(0x60EA20); /* movss */
    edx = MEM32(eax + 0xC);
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    /* comiss xmm0.f[0], MEMF(edx + 0x3C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(edx + 0x3C))) goto loc_000450D0; /* jbe: below or equal (unsigned <=) */

loc_000450C9:
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000450D0:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
