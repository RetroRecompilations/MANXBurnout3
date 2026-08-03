#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FBE60
 * Original: 0x000FBE60 - 0x000FBE7E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBE60(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FBE60:
    if (CMP_AE(LO16(eax), LO16(edx))) goto loc_000FBE7B; /* jae: above or equal (unsigned >=) */

loc_000FBE65:
    PUSH32(esp, esi);
    esi = 0xFFFF;
    esi = esi - edx;
    /* cmp LO16(ecx), LO16(esi) - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_BE(LO16(ecx), LO16(esi))) goto loc_000FBE7B; /* jbe: below or equal (unsigned <=) */

loc_000FBE73:
    eax = eax - ecx;
    eax = eax + 0xFFFF;
    esp += 4; return; /* ret */

loc_000FBE7B:
    eax = eax - ecx;
    esp += 4; return; /* ret */

}
