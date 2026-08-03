#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003FE10
 * Original: 0x0003FE10 - 0x0003FED3 (195 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003FE10(void)
{
    recomp_xmm_t xmm0;

loc_0003FE10:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    ecx = 0x10;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0x40;
    edi = eax + 0x40;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0x80;
    edi = eax + 0x80;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = edx + 0xC0;
    edi = eax + 0xC0;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx + 0x100;
    edi = MEM32(ecx);
    esi = eax + 0x100;
    MEM32(esi) = edi;
    edi = MEM32(ecx + 4);
    MEM32(esi + 4) = edi;
    edi = MEM32(ecx + 8);
    MEM32(esi + 8) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(esi + 0xC) = edi;
    edi = MEM32(ecx + 0x10);
    MEM32(esi + 0x10) = edi;
    ecx = MEM32(ecx + 0x14);
    MEM32(esi + 0x14) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x120), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x120), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x130), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x130), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x140), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x140), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x150), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x160), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x160), xmm0.b, 16); /* movaps */
    edx = MEM32(edx + 0x170);
    POP32(esp, edi);
    MEM32(eax + 0x170) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
