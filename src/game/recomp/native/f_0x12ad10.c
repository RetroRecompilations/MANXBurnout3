#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012AD10
 * Original: 0x0012AD10 - 0x0012AD52 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AD10(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0012AD10:
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0012A8B0(); /* call 0x0012A8B0 */

loc_0012AD24:
    xmm0.f[0] = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_0012AD4E; /* jbe: below or equal (unsigned <=) */

loc_0012AD33:
    eax = MEM32(0x40FAF0);
    if (TEST_Z(eax, eax)) goto loc_0012AD4E; /* je: equal / zero */

loc_0012AD3C:
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    ebx = ebx + 0x30;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014ECB0(); /* call 0x0014ECB0 */

loc_0012AD4D:
    POP32(esp, ebx);

loc_0012AD4E:
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
