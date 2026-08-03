#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00189C40
 * Original: 0x00189C40 - 0x00189D4F (271 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00189C40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x20;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    /* comiss xmm0.f[0], xmm3.f[0] - sets EFLAGS */
    if ((xmm0.f[0] < xmm3.f[0])) goto loc_00189C73; /* jb: below (unsigned <) */

loc_00189C51:
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(ecx + 8);
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEM32(esp + 8) = edx;
    xmm1.f[0] = MEMF(esp + 8); /* movss */
    MEM32(esp + 0xC) = eax;
    goto loc_00189CE4;

loc_00189C73:
    /* comiss xmm3.f[0], MEMF(0x3B168C) - sets EFLAGS */
    if ((xmm3.f[0] < MEMF(0x3B168C))) goto loc_00189C9E; /* jb: below (unsigned <) */

loc_00189C7C:
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    xmm0.f[0] = MEMF(esp + 4); /* movss */
    MEM32(esp + 8) = edx;
    xmm1.f[0] = MEMF(esp + 8); /* movss */
    MEM32(esp + 0xC) = eax;
    goto loc_00189CE4;

loc_00189C9E:
    xmm1.f[0] = MEMF(ecx); /* movss */
    xmm0.f[0] = MEMF(eax); /* movss */
    xmm2.f[0] = MEMF(ecx + 4); /* movss */
    xmm4.f[0] = MEMF(ecx + 8); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1.f[0] = MEMF(eax + 4); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = MEMF(eax + 8); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_00189CE4:
    xmm2.f[0] = MEMF(0x3A1248); /* movss */
    esp = esp - 8;
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    eax = esp + 0x18;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000486E0(); /* call 0x000486E0 */

loc_00189D0B:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x18), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm1.f[0] = MEMF(esp + 0x1C); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    esp = esp + 8;
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
