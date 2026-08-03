#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sub_001C57C0
 * Original: 0x001C57C0 - 0x001C5898 (216 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C57C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001C57C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1C;
    SET_LO8(edx, MEM8(esi + 0x61));
    /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (getenv("B3_VERTEX_TRACE")) {
        static unsigned movie_build_trace_count;
        if (movie_build_trace_count++ < 8)
            fprintf(stderr,
                    "[MOVIE-QUAD-BUILD] out=%08X media=%08X offset=%08X{%g,%g} "
                    "size=%08X{%g,%g} anchor=%08X{%g,%g} colour=%08X\n",
                    eax, esi, edi, MEMF(edi), MEMF(edi + 4),
                    ecx, MEMF(ecx), MEMF(ecx + 4),
                    ebx, MEMF(ebx), MEMF(ebx + 4), MEM32(ebp + 0xC));
    }
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001C57D8; /* je: equal / zero */

loc_001C57D4:
    edx = 0; /* xor self */
    goto loc_001C57E0;

loc_001C57D8:
    edx = MEM32(esi + 0x40);
    edx = edx << 5;
    edx = edx + esi;

loc_001C57E0:
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x18); /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)MEM32(edx + 0x1C); /* cvtsi2ss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x30) = esi;
    MEM8(eax + 0x34) = 0;
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm3.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x24) = edx;
    xmm0.f[0] = MEMF(edi); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx); /* movss */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x14);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    edx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    MEM32(eax) = edx;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = ecx;
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    MEM32(eax + 0x3C) = 0x1C59A0;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
