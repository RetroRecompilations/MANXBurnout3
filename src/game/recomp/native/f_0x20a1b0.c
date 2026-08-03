#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020A1B0
 * Original: 0x0020A1B0 - 0x0020A1E2 (50 bytes, 22 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0020A1B0:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F556A(); /* call 0x002F556A */

loc_0020A1D3:
    if (TEST_S(eax, eax)) goto loc_0020A1E0; /* jl: less (signed <) */

loc_0020A1D7:
    ecx = MEM32(esi + 0x68);
    ecx = ecx | 8;
    MEM32(esi + 0x68) = ecx;

loc_0020A1E0:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
