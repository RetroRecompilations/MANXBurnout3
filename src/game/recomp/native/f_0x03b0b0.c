#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003B0B0
 * Original: 0x0003B0B0 - 0x0003B0D8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003B0B0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_0003B0B0:
    PUSH32(esp, ebp);
    ebp = esp;
    eax = eax << 5;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + edx), 16); /* movaps */
    eax = eax + edx;
    edx = MEM32(ebp + 8);
    ecx = ecx << 5;
    esp = esp & 0xFFFFFFF0u;
    ecx = ecx + edx;
    memcpy((void *)XBOX_PTR(ecx), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
