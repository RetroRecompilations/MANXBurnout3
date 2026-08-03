#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019FF80
 * Original: 0x0019FF80 - 0x0019FF9A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019FF80(void)
{

loc_0019FF80:
    eax = ZX8(MEM8(ecx + 0x49));
    edx = MEM32(ecx + 0x30);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x642C10;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019FFA0(); /* call 0x0019FFA0 */

loc_0019FF99:
    esp += 4; return; /* ret */

}
