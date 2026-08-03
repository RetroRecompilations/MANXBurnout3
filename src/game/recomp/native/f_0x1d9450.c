#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D9450
 * Original: 0x001D9450 - 0x001D9497 (71 bytes, 22 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D9450(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_001D9450:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(eax + 4);
    eax = MEM32(esi + 4);
    /* test eax, eax - flags set for next jcc */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esi + 0x68); /* divss */
    MEM32(esi + 0x6C) = edx;
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x6C); /* divss */
    MEMF(esi + 0x70) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x74) = xmm0.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001D9493; /* je: equal / zero */

loc_001D948A:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD220(); /* call 0x001DD220 */

loc_001D9490:
    esp = esp + 4;

loc_001D9493:
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
