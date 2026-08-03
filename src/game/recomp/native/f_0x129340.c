#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00129340
 * Original: 0x00129340 - 0x001293CF (143 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129340(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00129340:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA0;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012935A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    xmm1.f[0] = MEMF(ebp + 0xC); /* movss */
    edx = MEM32(ebp + 8);
    memcpy(xmm2.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(ebp + 0x10);
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    PUSH32(esp, ecx);
    eax = esp + 0x58;
    memcpy((void *)XBOX_PTR(esp + 0x48), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001292B0(); /* call 0x001292B0 */

loc_001293B2:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 8;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00129040(); /* call 0x00129040 */

loc_001293C9:
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
