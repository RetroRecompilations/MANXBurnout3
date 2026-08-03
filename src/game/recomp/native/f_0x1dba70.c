#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DBA70
 * Original: 0x001DBA70 - 0x001DBB65 (245 bytes, 62 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DBA70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001DBA70:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    xmm1.f[0] = MEMF(eax); /* movss */
    xmm0.f[0] = MEMF(eax + 4); /* movss */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm3.f[0] = 0.0f; /* xorps self = zero */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    memcpy(xmm0.b, xmm4.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm1.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm1.b, 16); /* movaps */
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    /* comiss xmm3.f[0], MEMF(esp + 0xC) - sets EFLAGS */
    ecx = MEM32(ebp + 8);
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    /* TODO: cmpltss xmm2, xmm1 */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    xmm0.f[0] = 1.0f / sqrtf(xmm0.f[0]); /* rsqrtss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    /* andps xmm0.f[0], xmm1.f[0] */
    xmm1.f[0] = MEMF(eax); /* movss */
    edx = esp + 0x10;
    MEMF(edx) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(eax + 8); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    if ((xmm3.f[0] < MEMF(esp + 0xC))) goto loc_001DBB5D; /* jb: below (unsigned <) */

loc_001DBB3D:
    PUSH32(esp, 0x19);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DBB4C:
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DBB5A:
    esp = esp + 8;

loc_001DBB5D:
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}
