#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A8C30
 * Original: 0x001A8C30 - 0x001A8C8A (90 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A8C30(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_001A8C30:
    eax = MEM32(esi + 0x114);
    if (TEST_Z(eax, eax)) goto loc_001A8C65; /* je: equal / zero */

loc_001A8C3A:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001A06F0(); /* call 0x001A06F0 */

loc_001A8C40:
    eax = MEM32(esi + 0x114);
    PUSH32(esp, 0); sub_001A0600(); /* call 0x001A0600 */

loc_001A8C4B:
    eax = MEM32(esi + 0x114);
    ecx = 0x6137E0;
    PUSH32(esp, 0); sub_001A3A80(); /* call 0x001A3A80 */

loc_001A8C5B:
    MEM32(esi + 0x114) = 0;

loc_001A8C65:
    eax = MEM32(esi + 0x118);
    if (TEST_Z(eax, eax)) goto loc_001A8C89; /* je: equal / zero */

loc_001A8C6F:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */
    MEM32(esi + 0x118) = 0;
    MEMF(esi + 0x11C) = xmm0.f[0]; /* movss */

loc_001A8C89:
    esp += 4; return; /* ret */

}
