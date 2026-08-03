#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00247391
 * Original: 0x00247391 - 0x002473B9 (40 bytes, 12 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00247391(void)
{
    int _flags = 0; /* fallback flag var */

loc_00247391:
    eax = MEM32(esp + 4);
    if (CMP_EQ(eax, 1)) goto loc_002473AD; /* je: equal / zero */

loc_0024739A:
    if (CMP_LE(eax, 1)) goto loc_002473B8; /* jle: less or equal (signed <=) */

loc_0024739C:
    if (CMP_G(eax, 3)) goto loc_002473B8; /* jg: greater (signed >) */

loc_002473A1:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_002473A6:
    MEM32(eax) = 0x22;
    esp += 4; return; /* ret */

loc_002473AD:
    PUSH32(esp, 0); sub_0024A0AE(); /* call 0x0024A0AE */

loc_002473B2:
    MEM32(eax) = 0x21;

loc_002473B8:
    esp += 4; return; /* ret */

}
