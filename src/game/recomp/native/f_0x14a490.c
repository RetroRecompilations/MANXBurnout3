#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0014A490
 * Original: 0x0014A490 - 0x0014A4D7 (71 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014A490(void)
{

loc_0014A490:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = edi + 8;
    eax = esi;
    PUSH32(esp, 0); sub_00148C10(); /* call 0x00148C10 */

loc_0014A49E:
    MEM8(esi + 0x5E) = 1;
    MEM32(esi + 0x98) = 0;
    esi = edi + 0x198;
    edi = 5;
    goto loc_0014A4C0;

    /* nop */

loc_0014A4C0:
    eax = esi + -200;
    PUSH32(esp, 0); sub_00148C10(); /* call 0x00148C10 */

loc_0014A4CB:
    MEM8(esi + -106) = 0;
    MEM8(esi) = 0;

}
