#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00128FE0
 * Original: 0x00128FE0 - 0x0012903F (95 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128FE0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_00128FE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x40;
    edx = MEM32(edi + 0x14);
    eax = esi + 0x1C;
    eax = eax << 6;
    eax = eax + edx;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x18);
    ecx = esp + 4;
    edx = esi;
    edx = edx << 6;
    PUSH32(esp, ecx);
    ecx = edx + eax + 0x570;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_0012900E:
    ecx = MEM32(edi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp), 16); /* movaps */
    eax = esi + 0x14;
    eax = eax << 6;
    eax = eax + ecx;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
