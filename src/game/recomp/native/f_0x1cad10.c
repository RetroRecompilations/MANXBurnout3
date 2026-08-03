#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CAD10
 * Original: 0x001CAD10 - 0x001CAE23 (275 bytes, 77 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAD10(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001CAD10:
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM8(esi + 0x2E), 2)) goto loc_001CAE19; /* je: equal / zero */

loc_001CAD20:
    eax = ZX8(MEM8(esi + 0x30));
    eax = eax << 3;
    xmm0.f[0] = MEMF(eax + 0x4A1BEC); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 0x4A1BE8); /* movss */
    /* test MEM8(esi + 0x31), 0x10 - flags set for next jcc */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    if (TEST_Z(MEM8(esi + 0x31), 0x10)) goto loc_001CAD6F; /* je: equal / zero */

loc_001CAD4A:
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x10); /* mulss */
    eax = MEM32(esi + 0x14);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC80(); /* call 0x0020BC80 */

loc_001CAD5D:
    eax = MEM32(esi + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CADBA; /* je: equal / zero */

loc_001CAD67:
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    goto loc_001CADA6;

loc_001CAD6F:
    xmm1.f[0] = MEMF(0x4A1EEC); /* movss */
    ecx = MEM32(esi + 0x14);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x10); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0020BC80(); /* call 0x0020BC80 */

loc_001CAD8E:
    eax = MEM32(esi + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CADBA; /* je: equal / zero */

loc_001CAD98:
    xmm0.f[0] = MEMF(0x4A1EEC); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */

loc_001CADA6:
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 0x10); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BC80(); /* call 0x0020BC80 */

loc_001CADB7:
    esp = esp + 8;

loc_001CADBA:
    SET_LO8(eax, MEM8(esi + 0x33));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0.f[0] = MEMF(esi + 0xC); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CADCE; /* jne: not equal / not zero */

loc_001CADC6:
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4A1EF0); /* mulss */

loc_001CADCE:
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((xmm1.f[0] > xmm0.f[0])) goto loc_001CADEF; /* ja: above (unsigned >) */

loc_001CADE2:
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], xmm1.f[0] - sets EFLAGS */
    if ((xmm0.f[0] <= xmm1.f[0])) goto loc_001CADF5; /* jbe: below or equal (unsigned <=) */

loc_001CADEF:
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_001CADF5:
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CAE04:
    eax = MEM32(esi + 0x20);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001CAE18; /* je: equal / zero */

loc_001CAE0E:
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020BCB0(); /* call 0x0020BCB0 */

loc_001CAE15:
    esp = esp + 8;

loc_001CAE18:
    POP32(esp, edi);

loc_001CAE19:
    PUSH32(esp, 0); sub_001CB2D0(); /* call 0x001CB2D0 */

loc_001CAE1E:
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
