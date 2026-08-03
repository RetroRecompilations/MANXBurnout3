#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010E510
 * Original: 0x0010E510 - 0x0010E54B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E510(void)
{
    recomp_xmm_t xmm0;

loc_0010E510:
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    SET_LO16(edx, MEM16(ecx + 0x30));
    MEM16(eax + 0x30) = LO16(edx);
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x50), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x50), xmm0.b, 16); /* movaps */
    esp += 4; return; /* ret */

}
