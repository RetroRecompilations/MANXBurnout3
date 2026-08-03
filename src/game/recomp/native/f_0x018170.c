#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018170
 * Original: 0x00018170 - 0x000181B9 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018170(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;

loc_00018170:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_00021B40(); /* call 0x00021B40 */

loc_00018179:
    edi = edi + 0x518;
    esi = 4;

loc_00018184:
    eax = edi;
    PUSH32(esp, 0); sub_00020CE0(); /* call 0x00020CE0 */

loc_0001818B:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001819F; /* je: equal / zero */

loc_0001818F:
    xmm0.f[0] = MEMF(0x4AE200); /* movss */
    MEMF(edi + 0x184) = xmm0.f[0]; /* movss */

loc_0001819F:
    eax = MEM32(0x4AE1FC);
    PUSH32(esp, eax);
    edx = edi + 8;
    PUSH32(esp, 0); sub_00019A10(); /* call 0x00019A10 */

loc_000181AD:
    edi = edi + 0x188;
    esi--;
    if ((esi != 0)) goto loc_00018184; /* jne: not equal / not zero */

loc_000181B6:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
