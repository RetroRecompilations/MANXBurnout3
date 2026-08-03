#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024B1B3
 * Original: 0x0024B1B3 - 0x0024B1DE (43 bytes, 16 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024B1B3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0024B1B3:
    ecx = MEM32(esp + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_0024B1BE; /* jne: not equal / not zero */

loc_0024B1BB:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0024B1BE:
    SET_LO16(eax, MEM16(esp + 8));
    if (CMP_BE(LO16(eax), 0xFF)) goto loc_0024B1D8; /* jbe: below or equal (unsigned <=) */

loc_0024B1C9:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_0024B1CE:
    MEM32(eax) = 0x2A;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0024B1D8:
    MEM8(ecx) = LO8(eax);
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}
