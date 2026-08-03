#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D42AC
 * Original: 0x001D42AC - 0x001D42CD (33 bytes, 10 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D42AC(void)
{

loc_001D42AC:
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x4C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x4C) = eax;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    esp += 12; return; /* ret 8 */

}
