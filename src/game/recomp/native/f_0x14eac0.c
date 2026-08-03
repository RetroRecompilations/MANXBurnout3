#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014EAC0
 * Original: 0x0014EAC0 - 0x0014EAFA (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014EAC0(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_0014EAC0:
    eax = MEM32(esi + 0x880);
    if (TEST_Z(eax, eax)) goto loc_0014EAF7; /* je: equal / zero */

loc_0014EACA:
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    /* comiss xmm0.f[0], MEMF(esi + 0x598) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esi + 0x598))) goto loc_0014EAE8; /* jbe: below or equal (unsigned <=) */

loc_0014EAD9:
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_0014D5F0(); /* call 0x0014D5F0 */

loc_0014EAE8:
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    edx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_0014EB00(); /* call 0x0014EB00 */

loc_0014EAF7:
    esp += 8; return; /* ret 4 */

}
