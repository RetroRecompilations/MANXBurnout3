#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00053540
 * Original: 0x00053540 - 0x000535DD (157 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00053540(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm1;

loc_00053540:
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x174);
    eax = eax - 2;
    if ((eax == 0)) goto loc_00053555; /* je: equal / zero */

loc_0005354C:
    eax = eax - 6;
    if ((eax != 0)) goto loc_000535DB; /* jne: not equal / not zero */

loc_00053555:
    PUSH32(esp, 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3FE4B8);
    eax = 0; /* xor self */
    ecx = 1;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_0005356E:
    xmm1.f[0] = MEMF(0x3B16C0); /* movss */
    PUSH32(esp, 8);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = 1;
    PUSH32(esp, 0x3FF190);
    ecx = eax;
    MEM32(0x3FE4E0) = 0x73A1D0;
    MEM32(0x3FE4DC) = 0x73B8A0;
    MEMF(0x3FE4E4) = xmm1.f[0]; /* movss */
    MEM32(0x3FE4D8) = 0;
    PUSH32(esp, 0); sub_0004E100(); /* call 0x0004E100 */

loc_000535B5:
    MEM32(0x3FF1B8) = 0x73C9B0;
    MEM32(0x3FF1B4) = 0x73E080;
    MEMF(0x3FF1BC) = xmm1.f[0]; /* movss */
    MEM32(0x3FF1B0) = 0;

loc_000535DB:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
