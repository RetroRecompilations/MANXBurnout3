#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00011510
 * Original: 0x00011510 - 0x00011536 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011510(void)
{
    uint64_t mm0, mm1;

loc_00011510:
    PUSH32(esp, ecx);
    mm0 = MEM32(esp + 0xC); /* movd */
    mm1 = MEM32(esp + 0xC); /* movd */
    /* pcmpgtd mm0, qword ptr [esp + 8] (MMX/SIMD integer) */
    /* pand mm1, mm0 (MMX/SIMD integer) */
    /* pandn mm0, qword ptr [esp + 8] (MMX/SIMD integer) */
    /* por mm0, mm1 (MMX/SIMD integer) */
    MEM32(esp) = mm0; /* movd */
    /* emms - empty MMX state */
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
