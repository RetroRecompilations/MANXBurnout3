#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152290
 * Original: 0x00152290 - 0x00152330 (160 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152290(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00152290:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001522B4; /* je: equal / zero */

loc_00152297:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x28) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esi + 0x28))) goto loc_001522CF; /* jbe: below or equal (unsigned <=) */

loc_001522A5:
    xmm0.f[0] = MEMF(esi + 0x28); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x3A69C4); /* addss */
    goto loc_001522CA;

loc_001522B4:
    xmm0.f[0] = MEMF(esi + 0x28); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_001522CF; /* jbe: below or equal (unsigned <=) */

loc_001522C2:
    xmm0.f[0] = xmm0.f[0] - MEMF(0x3A69C4); /* subss */

loc_001522CA:
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */

loc_001522CF:
    eax = MEM32(esi + 0x10);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_001522E3; /* jne: not equal / not zero */

loc_001522D7:
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    ebx = esi;
    PUSH32(esp, 0); sub_00152330(); /* call 0x00152330 */

loc_001522E3:
    eax = MEM32(esi + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_001522F6; /* jne: not equal / not zero */

loc_001522EA:
    edx = MEM32(esi + 0x24);
    PUSH32(esp, 1);
    ebx = esi;
    PUSH32(esp, 0); sub_00152330(); /* call 0x00152330 */

loc_001522F6:
    SET_LO8(eax, MEM8(esi + 0x3C));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00152304; /* je: equal / zero */

loc_001522FE:
    MEM8(esi + 0x3C) = 0;
    goto loc_0015230F;

loc_00152304:
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_0015230F; /* je: equal / zero */

loc_0015230B:
    eax--;
    MEM32(esi + 0x38) = eax;

loc_0015230F:
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0015231D; /* je: equal / zero */

loc_00152316:
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00152400(); /* call 0x00152400 */

loc_0015231D:
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_0015232E; /* je: equal / zero */

loc_00152324:
    edx = 1;
    PUSH32(esp, 0); sub_00152400(); /* call 0x00152400 */

loc_0015232E:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
