#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001354A0
 * Original: 0x001354A0 - 0x001354F5 (85 bytes, 18 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001354A0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001354A0:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_001354A5:
    xmm0.f[0] = (float)(int32_t)MEM32(0x4D53AC); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x4AE1FC); /* mulss */
    eax = MEM32(0x4AE200);
    edx = ZX8(MEM8(esi + 0x6B64));
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EBFD0);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EBFCC); /* mulss */
    PUSH32(esp, ecx);
    eax = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001CA530(); /* call 0x001CA530 */

loc_001354F0:
    g_seh_ebp = ebp; sub_001F5840(); return; /* tail jmp 0x001F5840 */

}
