#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020DFD0
 * Original: 0x0020DFD0 - 0x0020E001 (49 bytes, 16 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DFD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020DFD0:
    eax = MEM32(0x41CB74);
    if (TEST_Z(eax, eax)) goto loc_0020DFDE; /* je: equal / zero */

loc_0020DFD9:
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

loc_0020DFDE:
    SET_LO8(ecx, MEM8(0x76B328));
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 4);
    eax--;
    eax = eax & ecx;
    ecx = MEM32(0x76B32C);
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + ecx;
    esp += 4; return; /* ret */

}
