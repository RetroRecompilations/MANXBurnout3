#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C710
 * Original: 0x0021C710 - 0x0021C74B (59 bytes, 16 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C710(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C710:
    PUSH32(esp, 0x41CF98);
    PUSH32(esp, 0); sub_0021C5C0(); /* call 0x0021C5C0 */

loc_0021C71A:
    eax = MEM32(0x41CF9C);
    esp = esp + 4;
    if (CMP_BE(eax, 1)) goto loc_0021C72E; /* jbe: below or equal (unsigned <=) */

loc_0021C727:
    eax--;
    MEM32(0x41CF9C) = eax;
    esp += 4; return; /* ret */

loc_0021C72E:
    eax = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x41CFA4);
    MEM32(0x41CF98) = eax;
    MEM32(0x41CF9C) = eax;
    MEM32(0x41CFA0) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x36B87C), _icall_esp); /* indirect call */
    }

loc_0021C74A:
    esp += 4; return; /* ret */

}
