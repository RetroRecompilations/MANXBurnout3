#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012AC00
 * Original: 0x0012AC00 - 0x0012AC63 (99 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AC00(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0012AC00:
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0012A8B0(); /* call 0x0012A8B0 */

loc_0012AC14:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012AC5F; /* jbe: below or equal (unsigned <=) */

loc_0012AC23:
    esi = MEM32(esi + 0x10);
    eax = MEM32(0x40FAF0);
    esi = esi + 0x30;
    if (TEST_Z(eax, eax)) goto loc_0012AC5F; /* je: equal / zero */

loc_0012AC32:
    /* comiss xmm0.f[0], MEMF(0x40F808) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x40F808))) goto loc_0012AC53; /* jbe: below or equal (unsigned <=) */

loc_0012AC3B:
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014D5F0(); /* call 0x0014D5F0 */

loc_0012AC4D:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */

loc_0012AC53:
    edx = esi;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014EB00(); /* call 0x0014EB00 */

loc_0012AC5F:
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
