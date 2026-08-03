#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF843
 * Original: 0x001CF843 - 0x001CF857 (20 bytes, 5 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF843(void)
{

loc_001CF843:
    eax = MEM32(0x10118);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_001CF802(); /* call 0x001CF802 */

loc_001CF854:
    esp += 8; return; /* ret 4 */

}
