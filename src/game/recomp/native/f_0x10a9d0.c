#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010A9D0
 * Original: 0x0010A9D0 - 0x0010AACC (252 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A9D0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_0010A9D0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x1E4) = 0;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebp + 0xC));
    MEM32(eax + 0x1E0) = esi;
    esi = MEM32(edx + 0x208);
    MEM32(eax) = esi;
    esi = MEM32(edx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x60), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x70), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x80), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x90), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0xA0), xmm0.b, 16); /* movaps */
    edx = MEM32(ecx + 0x208);
    MEM32(eax + 0xF0) = edx;
    edx = MEM32(ecx + 0x204);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x120), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x130), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x140), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + 0x30), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x150), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x160), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x170), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x180), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x190), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_0010ABC0(); /* call 0x0010ABC0 */

loc_0010AAC7:
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
