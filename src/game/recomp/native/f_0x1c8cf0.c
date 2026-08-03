#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C8CF0
 * Original: 0x001C8CF0 - 0x001C8D9F (175 bytes, 42 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8CF0(void)
{
    recomp_xmm_t xmm0;

loc_001C8CF0:
    PUSH32(esp, 0); sub_001D9510(); /* call 0x001D9510 */

loc_001C8CF5:
    MEM32(esi + 0x58) = eax;
    PUSH32(esp, 0); sub_001DD160(); /* call 0x001DD160 */

loc_001C8CFD:
    PUSH32(esp, eax);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E0900(); /* call 0x001E0900 */

loc_001C8D0A:
    ecx = MEM32(esi + 0x58);
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEM32(esi + 0x68) = 0;
    MEM32(ecx + 0x60) = edi;
    edx = MEM32(esi + 0x58);
    MEM32(edx + 0x64) = ebx;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = ebx;
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D92A0(); /* call 0x001D92A0 */

loc_001C8D41:
    ecx = MEM32(esi + 0x58);
    xmm0.f[0] = MEMF(0x3B1740); /* movss */
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, ecx);
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D9360(); /* call 0x001D9360 */

loc_001C8D5F:
    xmm0.f[0] = MEMF(0x3B181C); /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esi + 0x70) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0x78) = edx;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x7C) = eax;
    ecx = MEM32(edi + 0x14);
    esp = esp + 0x18;
    MEM32(esi + 0x80) = ecx;
    esp += 4; return; /* ret */

}
