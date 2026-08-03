#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001064B0
 * Original: 0x001064B0 - 0x001064F9 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001064B0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;

loc_001064B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0xF0), 16); /* movaps */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = esp + 8;
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, ecx);
    eax = esi;
    memcpy((void *)XBOX_PTR(esi + 0xF0), xmm1.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00106590(); /* call 0x00106590 */

loc_001064DE:
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x100), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    /* addps: xmm1.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x100), xmm1.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
