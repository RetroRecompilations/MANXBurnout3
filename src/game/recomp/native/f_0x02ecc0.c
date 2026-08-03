#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0002ECC0
 * Original: 0x0002ECC0 - 0x0002EE68 (424 bytes, 100 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ECC0(void)
{
    uint32_t ebp;
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002ECC0:
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ebp = eax + 0x310;
    PUSH32(esp, ecx);
    esi = ebp;
    PUSH32(esp, 0); sub_001C8C10(); /* call 0x001C8C10 */

loc_0002ECE1:
    esi = MEM32(esp + 0x1C);
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    esi = esi + 0x90;
    PUSH32(esp, 0);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    MEMF(ebp + 0x90) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_001C8C10(); /* call 0x001C8C10 */

loc_0002ED0A:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    edx = esi;
    esi = MEM32(esp + 0x1C);
    esi = esi + 0x130;
    PUSH32(esp, ebx);
    MEMF(edx + 0x90) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001C8C10(); /* call 0x001C8C10 */

loc_0002ED2C:
    xmm2.f[0] = MEMF(0x3B168C); /* movss */
    xmm0.f[0] = MEMF(0x3B18F0); /* movss */
    MEMF(esi + 0x90) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    /* FPU: fptan  */
    /* FPU: ffree st(0) */
    /* FPU: fincstp  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(ebp + 0x70); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    eax = ebp + 0x48;
    MEMF(eax) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(ebp + 0x74); /* divss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    MEMF(ebp + 0x4C) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] / xmm0.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    PUSH32(esp, eax);
    MEMF(ebp + 0x50) = xmm3.f[0]; /* movss */
    MEMF(ebp + 0x54) = xmm2.f[0]; /* movss */
    eax = MEM32(ebp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D9450(); /* call 0x001D9450 */

loc_0002ED96:
    xmm0.f[0] = MEMF(0x3A7964); /* movss */
    MEMF(ebp + 0x6C) = xmm0.f[0]; /* movss */
    ecx = MEM32(ebp + 0x58);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    MEMF(ebp + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D92A0(); /* call 0x001D92A0 */

loc_0002EDC1:
    edx = MEM32(ebp + 0x58);
    xmm0.f[0] = MEMF(0x3A340C); /* movss */
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, edx);
    MEMF(ebp + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D9360(); /* call 0x001D9360 */

loc_0002EDDF:
    edi = MEM32(esp + 0x28);
    eax = MEM32(edi + 0x58);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, eax);
    MEMF(edi + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D92A0(); /* call 0x001D92A0 */

loc_0002EE01:
    ecx = MEM32(edi + 0x58);
    xmm0.f[0] = MEMF(0x3A340C); /* movss */
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, ecx);
    MEMF(edi + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D9360(); /* call 0x001D9360 */

loc_0002EE1F:
    edx = MEM32(esi + 0x58);
    xmm0.f[0] = MEMF(0x3B1684); /* movss */
    PUSH32(esp, 0x3F000000);
    MEMF(esi + 0x84) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D92A0(); /* call 0x001D92A0 */

loc_0002EE3D:
    eax = MEM32(esi + 0x58);
    xmm0.f[0] = MEMF(0x3A340C); /* movss */
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, eax);
    MEMF(esi + 0x88) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_001D9360(); /* call 0x001D9360 */

loc_0002EE5B:
    esp = esp + 0x38;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
