#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00121EB0
 * Original: 0x00121EB0 - 0x00121F7F (207 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121EB0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00121EB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x9C;
    PUSH32(esp, esi);
    esi = eax;
    MEMF(esi) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xB8);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    eax = esp + 0x10;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm2.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm2.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00108F90(); /* call 0x00108F90 */

loc_00121F2B:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = esi;
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_00109040(); /* call 0x00109040 */

loc_00121F3B:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    esi = esi + 0x30;
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    PUSH32(esp, esi);
    edx = esp + 0x44;
    eax = esp + 0x74;
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00109040(); /* call 0x00109040 */

loc_00121F62:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x20), xmm0.b, 16); /* movaps */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
