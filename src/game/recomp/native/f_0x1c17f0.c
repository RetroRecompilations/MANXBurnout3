#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001C17F0
 * Original: 0x001C17F0 - 0x001C189B (171 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C17F0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C17F0:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    MEM32(esi + 0x14) = eax;
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    ebp = eax + 0x50;
    eax = MEM32(esi + 0x14);
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */
    eax = eax + 0x20;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x14);
    eax = eax + 0x40;
    MEM32(eax) = esi;
    edx = 0; /* xor self */
    MEM32(eax + 4) = edx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 0x4C) = esi;
    if (getenv("B3_VERTEX_TRACE")) {
        static unsigned context_trace_count;
        if (context_trace_count++ < 16)
            fprintf(stderr,
                    "[UI-CONTEXT-INIT] ctx=%08X owner=%08X one=%g "
                    "transform={%g,%g,%g,%g} rgba={%g,%g,%g,%g}\n",
                    MEM32(esi + 0x14), esi, MEMF(0x3B168C),
                    MEMF(MEM32(esi + 0x14) + 0x20),
                    MEMF(MEM32(esi + 0x14) + 0x24),
                    MEMF(MEM32(esi + 0x14) + 0x28),
                    MEMF(MEM32(esi + 0x14) + 0x2C),
                    MEMF(MEM32(esi + 0x14) + 0x30),
                    MEMF(MEM32(esi + 0x14) + 0x34),
                    MEMF(MEM32(esi + 0x14) + 0x38),
                    MEMF(MEM32(esi + 0x14) + 0x3C));
    }
    eax = MEM32(esi + 0x14);
    PUSH32(esp, ebp);
    edi = ecx + ecx * 2;
    PUSH32(esp, eax);
    edi = edi << 5;
    PUSH32(esp, ecx);
    eax = 0x10;
    ebx = 0x50;
    edi = edi + 0x10;
    PUSH32(esp, 0); sub_001BEF30(); /* call 0x001BEF30 */

loc_001C1893:
    eax = edi + ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
