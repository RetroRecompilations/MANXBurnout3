#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001270D0
 * Original: 0x001270D0 - 0x00127180 (176 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001270D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001270D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x3C;
    memcpy(xmm2.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1E0), 16); /* movaps */
    eax = MEM32(esi + 0x204);
    memcpy(xmm1.b, (void *)XBOX_PTR(esi + 0x1D0), 16); /* movaps */
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    PUSH32(esp, ecx);
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, eax);
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    eax = esp + 0x28;
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00013CA0(); /* call 0x00013CA0 */

loc_0012710E:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ebp + 8);
    eax = MEM32(esi + 0x204);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00031330(); /* call 0x00031330 */

loc_0012712A:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esp = esp + 0x10;
    ecx = esi;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00127080(); /* call 0x00127080 */

loc_0012713C:
    ecx = eax;
    ecx = ecx | edx;
    if ((ecx == 0)) goto loc_00127179; /* je: equal / zero */

loc_00127142:
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(esi + 0xCC4);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0xCC0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = edi + 0x300;
    PUSH32(esp, eax);
    ecx = 0xC;
    eax = edi;
    PUSH32(esp, 0); sub_0012FA40(); /* call 0x0012FA40 */

loc_00127179:
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
