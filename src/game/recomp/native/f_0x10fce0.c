#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010FCE0
 * Original: 0x0010FCE0 - 0x00110274 (1428 bytes, 371 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FCE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0010FCE0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    xmm0.f[0] = MEMF(ebx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    ebx = MEM32(ebp + -56);
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    MEM32(ebp + -48) = ebx;
    ebx = MEM32(ebp + -52);
    xmm2.f[0] = MEMF(ebp + -48); /* movss */
    MEMF(ebp + -56) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    MEM32(ebp + -44) = ebx;
    ebx = MEM32(ebp + -56);
    xmm1.f[0] = MEMF(ebp + -44); /* movss */
    MEMF(ebp + -52) = xmm0.f[0]; /* movss */
    MEM32(ebp + -40) = ebx;
    ebx = MEM32(ebp + -52);
    xmm5.f[0] = MEMF(ebp + -40); /* movss */
    MEM32(ebp + -36) = ebx;
    xmm3.f[0] = MEMF(ebp + -36); /* movss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0.f[0] = MEMF(0x384208); /* movss */
    /* comiss xmm0.f[0], MEMF(ebp + 8) - sets EFLAGS */
    if ((xmm0.f[0] < MEMF(ebp + 8))) goto loc_0010FD8B; /* jb: below (unsigned <) */

loc_0010FD7E:
    xmm0.f[0] = MEMF(0x3B16CC); /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010FD8B:
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm4.b, xmm2.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = MEMF(ecx); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -56) = xmm4.f[0]; /* movss */
    ebx = MEM32(ebp + -56);
    xmm4.f[0] = MEMF(ecx + 4); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 4); /* subss */
    MEMF(ebp + -52) = xmm4.f[0]; /* movss */
    MEM32(ebp + -40) = ebx;
    ebx = MEM32(ebp + -52);
    xmm4.f[0] = MEMF(ebp + -40); /* movss */
    MEM32(ebp + -36) = ebx;
    xmm6.f[0] = MEMF(ebp + -36); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm4.f[0]; /* addss */
    xmm4.f[0] = MEMF(edx); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax); /* subss */
    MEMF(ebp + -56) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(edx + 4); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 4); /* subss */
    ebx = MEM32(ebp + -56);
    MEMF(ebp + -52) = xmm4.f[0]; /* movss */
    xmm4.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(ebp + -4) = xmm7.f[0]; /* movss */
    memcpy(xmm7.b, xmm4.b, 16); /* movaps */
    xmm7.f[0] = xmm7.f[0] / xmm0.f[0]; /* divss */
    MEM32(ebp + -40) = ebx;
    ebx = MEM32(ebp + -52);
    memcpy(xmm0.b, xmm7.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEM32(ebp + -36) = ebx;
    MEMF(ebp + 8) = xmm4.f[0]; /* movss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -12); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(ebp + -4) ? xmm0.f[0] : MEMF(ebp + -4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(ebp + 8) ? xmm0.f[0] : MEMF(ebp + 8)); /* minss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm6.f[0] = MEMF(ebp + -40); /* movss */
    MEMF(ebp + -4) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -36); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    MEMF(ebp + -12) = xmm4.f[0]; /* movss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -20); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(ebp + -4) ? xmm0.f[0] : MEMF(ebp + -4)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(ebp + -12) ? xmm0.f[0] : MEMF(ebp + -12)); /* minss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -28); /* movss */
    memcpy(xmm6.b, xmm0.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + -56) = xmm6.f[0]; /* movss */
    ebx = MEM32(ebp + -56);
    MEM32(ebp + -48) = ebx;
    memcpy(xmm6.b, xmm1.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + -52) = xmm6.f[0]; /* movss */
    ebx = MEM32(ebp + -52);
    xmm6.f[0] = MEMF(ebp + -48); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(eax); /* addss */
    MEM32(ebp + -44) = ebx;
    MEMF(ebp + -32) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(ebp + -44); /* movss */
    xmm6.f[0] = xmm6.f[0] + MEMF(eax + 4); /* addss */
    ebx = MEM32(ebp + -32);
    MEMF(ebp + -28) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(ebp + 8); /* movss */
    MEM32(ebp + -48) = ebx;
    ebx = MEM32(ebp + -28);
    memcpy(xmm7.b, xmm6.b, 16); /* movaps */
    MEM32(ebp + -44) = ebx;
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + -56) = xmm7.f[0]; /* movss */
    ebx = MEM32(ebp + -56);
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ebp + -52) = xmm1.f[0]; /* movss */
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ebp + -52);
    xmm1.f[0] = MEMF(ebp + -16); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax); /* addss */
    MEM32(ebp + -12) = ebx;
    MEMF(ebp + -24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ebp + -12); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    ebx = MEM32(ebp + -24);
    MEM32(ebp + -56) = ebx;
    MEMF(ebp + -20) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -48); /* subss */
    ebx = MEM32(ebp + -20);
    MEM32(ebp + -52) = ebx;
    xmm7.f[0] = 0.0f; /* xorps self = zero */
    MEMF(ebp + -16) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + -44); /* subss */
    ebx = MEM32(ebp + -16);
    MEM32(ebp + -8) = ebx;
    MEMF(ebp + -12) = xmm1.f[0]; /* movss */
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -32);
    MEM32(edi) = ebx;
    ebx = MEM32(ebp + -28);
    xmm1.f[0] = MEMF(ebp + -4); /* movss */
    MEM32(edi + 4) = ebx;
    ebx = MEM32(ecx);
    MEM32(esi) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(ebp + 0x10);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -8); /* movss */
    ebx = MEM32(ebp + 0x14);
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx) = xmm7.f[0]; /* movss */
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -56); /* subss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    ebx = MEM32(ebp + -32);
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -52); /* subss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(ebp + -28);
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(ebp + -8); /* movss */
    MEM32(ebp + -4) = ebx;
    xmm0.f[0] = MEMF(ebp + -4); /* movss */
    memcpy(xmm6.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0010FFFA; /* jbe: below or equal (unsigned <=) */

loc_0010FFCF:
    ebx = MEM32(ebp + -24);
    MEM32(edi) = ebx;
    ebx = MEM32(ebp + -20);
    MEM32(edi + 4) = ebx;
    ebx = MEM32(edx);
    MEM32(esi) = ebx;
    edx = MEM32(edx + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ebp + 0x10);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = MEM32(ebp + 0x14);
    MEMF(edx) = xmm4.f[0]; /* movss */

loc_0010FFFA:
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    memcpy(xmm2.b, xmm5.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    MEMF(ebp + -32) = xmm2.f[0]; /* movss */
    edx = MEM32(ebp + -32);
    xmm2.f[0] = MEMF(eax + 4); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    MEMF(ebp + -28) = xmm2.f[0]; /* movss */
    MEM32(ebp + -40) = edx;
    edx = MEM32(ebp + -28);
    xmm6.f[0] = MEMF(ebp + -40); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    MEM32(ebp + -36) = edx;
    xmm2.f[0] = MEMF(ebp + -36); /* movss */
    edx = MEM32(ebp + 0xC);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6.f[0] = MEMF(edx); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ecx); /* subss */
    MEMF(ebp + -32) = xmm6.f[0]; /* movss */
    xmm6.f[0] = MEMF(edx + 4); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ecx + 4); /* subss */
    ebx = MEM32(ebp + -32);
    MEMF(ebp + -28) = xmm6.f[0]; /* movss */
    memcpy(xmm6.b, xmm4.b, 16); /* movaps */
    xmm6.f[0] = xmm6.f[0] / xmm0.f[0]; /* divss */
    MEM32(ebp + -40) = ebx;
    ebx = MEM32(ebp + -28);
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEM32(ebp + -36) = ebx;
    MEMF(ebp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(ebp + 8) = xmm7.f[0]; /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -28); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(ebp + 8) ? xmm0.f[0] : MEMF(ebp + 8)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(ebp + 0xC) ? xmm0.f[0] : MEMF(ebp + 0xC)); /* minss */
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -36); /* movss */
    xmm2.f[0] = MEMF(ebp + -40); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ebp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(ebp + 8) = xmm7.f[0]; /* movss */
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -28); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(ebp + 8) ? xmm0.f[0] : MEMF(ebp + 8)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(ebp + 0xC) ? xmm0.f[0] : MEMF(ebp + 0xC)); /* minss */
    MEMF(ebp + -12) = xmm0.f[0]; /* movss */
    xmm2.f[0] = MEMF(ebp + -20); /* movss */
    xmm6.f[0] = MEMF(ebp + -12); /* movss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    ebx = MEM32(ebp + -40);
    MEM32(ebp + -32) = ebx;
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    ebx = MEM32(ebp + -36);
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -32); /* addss */
    MEM32(ebp + -28) = ebx;
    MEMF(ebp + -40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -28); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    ebx = MEM32(ebp + -40);
    MEMF(ebp + -36) = xmm0.f[0]; /* movss */
    MEM32(ebp + -48) = ebx;
    ebx = MEM32(ebp + -36);
    memcpy(xmm0.b, xmm6.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    MEM32(ebp + -44) = ebx;
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    ebx = MEM32(ebp + -32);
    xmm0.f[0] = MEMF(ecx); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    MEMF(ebp + -28) = xmm3.f[0]; /* movss */
    MEM32(ebp + -24) = ebx;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -20) = ebx;
    xmm0.f[0] = xmm0.f[0] + MEMF(ebp + -24); /* addss */
    MEMF(ebp + -32) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + -20); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    ecx = MEM32(ebp + -32);
    MEMF(ebp + -28) = xmm0.f[0]; /* movss */
    ebx = MEM32(ebp + -28);
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -48); /* subss */
    MEMF(ebp + -24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -44); /* subss */
    MEM32(ebp + -52) = ebx;
    ebx = MEM32(ebp + -24);
    MEMF(ebp + -20) = xmm0.f[0]; /* movss */
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(ebp + -20);
    xmm3.f[0] = MEMF(ebp + -8); /* movss */
    MEM32(ebp + -4) = ebx;
    xmm0.f[0] = MEMF(ebp + -4); /* movss */
    memcpy(xmm5.b, xmm3.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    MEM32(ebp + -56) = ecx;
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_001101F1; /* jbe: below or equal (unsigned <=) */

loc_001101CB:
    ebx = MEM32(eax);
    MEM32(edi) = ebx;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -40);
    MEM32(esi) = eax;
    eax = MEM32(ebp + -36);
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEMF(eax) = xmm7.f[0]; /* movss */
    eax = MEM32(ebp + 0x14);
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEMF(eax) = xmm2.f[0]; /* movss */

loc_001101F1:
    xmm0.f[0] = MEMF(edx); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -56); /* subss */
    MEMF(ebp + -48) = xmm0.f[0]; /* movss */
    eax = MEM32(ebp + -48);
    xmm0.f[0] = MEMF(edx + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp + -52); /* subss */
    MEMF(ebp + -44) = xmm0.f[0]; /* movss */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -44);
    xmm2.f[0] = MEMF(ebp + -8); /* movss */
    MEM32(ebp + -4) = eax;
    xmm0.f[0] = MEMF(ebp + -4); /* movss */
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_0011025B; /* jbe: below or equal (unsigned <=) */

loc_00110238:
    eax = MEM32(edx);
    MEM32(edi) = eax;
    edx = MEM32(edx + 4);
    eax = MEM32(ebp + -28);
    MEM32(edi + 4) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(esi) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 4) = eax;
    MEMF(ecx) = xmm4.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEMF(edx) = xmm6.f[0]; /* movss */

loc_0011025B:
    MEMF(ebp + 0xC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(ebp + 0xC)); /* sqrtss */
    MEMF(ebp + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(ebp + 8); /* movss */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
