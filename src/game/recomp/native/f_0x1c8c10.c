#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C8C10
 * Original: 0x001C8C10 - 0x001C8CE2 (210 bytes, 58 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8C10(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;

loc_001C8C10:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    PUSH32(esp, 0); sub_001D9510(); /* call 0x001D9510 */

loc_001C8C1B:
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0); sub_001DD160(); /* call 0x001DD160 */

loc_001C8C23:
    PUSH32(esp, eax);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E0900(); /* call 0x001E0900 */

loc_001C8C30:
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esi + 0x68) = 0;
    PUSH32(esp, 0); sub_001DE870(); /* call 0x001DE870 */

loc_001C8C44:
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0); sub_001DE870(); /* call 0x001DE870 */

loc_001C8C52:
    edx = MEM32(esi + 0x58);
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEM32(esi + 0x64) = eax;
    eax = MEM32(esi + 0x60);
    MEM32(edx + 0x60) = eax;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(esi + 0x64);
    MEM32(ecx + 0x64) = edx;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D92A0(); /* call 0x001D92A0 */

loc_001C8C85:
    ecx = MEM32(esi + 0x58);
    xmm0.f[0] = MEMF(0x3B1740); /* movss */
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, ecx);
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D9360(); /* call 0x001D9360 */

loc_001C8CA3:
    xmm0.f[0] = MEMF(0x3B181C); /* movss */
    edx = MEM32(ebp + 8);
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    esp = esp + 0x38;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = edi;
    MEM32(esi + 0x80) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
