#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D1981
 * Original: 0x001D1981 - 0x001D1998 (23 bytes, 7 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D1981(void)
{

loc_001D1981:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B80C), _icall_esp); /* indirect call */
    }

loc_001D198B:
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D1953(); /* call 0x001D1953 */

loc_001D1993:
    eax = edx;
    esp += 8; return; /* ret 4 */

}
