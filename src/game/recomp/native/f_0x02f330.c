#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002F330
 * Original: 0x0002F330 - 0x0002F37A (74 bytes, 21 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F330(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002F330:
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0002F351; /* je: equal / zero */

loc_0002F335:
    ecx--;
    if ((ecx == 0)) goto loc_0002F349; /* je: equal / zero */

loc_0002F338:
    ecx--;
    if ((ecx != 0)) goto loc_0002F369; /* jne: not equal / not zero */

loc_0002F33B:
    ecx = eax + 0x130;
    edx = eax + 0x270;
    goto loc_0002F35D;

loc_0002F349:
    ecx = eax + 0x90;
    goto loc_0002F357;

loc_0002F351:
    ecx = eax + 0x310;

loc_0002F357:
    edx = eax + 0x1D0;

loc_0002F35D:
    MEM32(eax + 0x3B0) = ecx;
    MEM32(eax + 0x3B4) = edx;

loc_0002F369:
    eax = MEM32(eax + 0x3B0);
    ecx = MEM32(eax + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D9290(); /* call 0x001D9290 */

loc_0002F378:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
