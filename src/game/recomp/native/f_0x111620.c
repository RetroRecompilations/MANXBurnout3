#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111620
 * Original: 0x00111620 - 0x00111672 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111620(void)
{

loc_00111620:
    eax = MEM32(esi + 0x1CB70);
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = eax + esi + 0x70;
    edx = ecx + 0x70;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax) = 3;
    edx = MEM32(ecx + 0xB0);
    edx = edx + 0xE80;
    MEM32(eax + 8) = edx;
    SET_LO8(edx, 0); /* xor self */
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(edx);
    MEM32(ecx + 0x16C) = eax;
    PUSH32(esp, 0); sub_00114270(); /* call 0x00114270 */

loc_0011165E:
    ecx = MEM32(esi + 0x1CB70);
    eax = esi;
    PUSH32(esp, 0); sub_00111AC0(); /* call 0x00111AC0 */

loc_0011166B:
    MEM32(esi + 0x1CB70) = MEM32(esi + 0x1CB70) + 1;
    esp += 4; return; /* ret */

}
