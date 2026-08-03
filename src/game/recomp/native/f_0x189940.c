#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00189940
 * Original: 0x00189940 - 0x001899CC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm3;

loc_00189940:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x27E0);
    eax = eax + 0x73A210;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    eax = MEM32(0x73A194);
    PUSH32(esp, esi);
    ecx = ecx << 6;
    esi = ecx + edx + 0xB0;
    ecx = MEM32(0x73A190);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00157630(); /* call 0x00157630 */

loc_0018997B:
    eax = eax - 0;
    if ((eax == 0)) goto loc_001899BE; /* je: equal / zero */

loc_00189980:
    eax--;
    if ((eax == 0)) goto loc_001899B0; /* je: equal / zero */

loc_00189983:
    eax--;
    if ((eax != 0)) goto loc_001899C7; /* jne: not equal / not zero */

loc_00189986:
    xmm3.f[0] = MEMF(esp + 0x18); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(0x3B1954); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x3B1950); /* mulss */
    eax = 0x3A3FE0;
    ecx = 0x3A3FD4;
    PUSH32(esp, 0); sub_00189C40(); /* call 0x00189C40 */

loc_001899AB:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001899B0:
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00189A90(); /* call 0x00189A90 */

loc_001899B9:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001899BE:
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001899D0(); /* call 0x001899D0 */

loc_001899C7:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
