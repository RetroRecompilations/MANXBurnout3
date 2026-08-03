#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00129770
 * Original: 0x00129770 - 0x001298AC (316 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_00129770:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    eax = MEM32(0x3EBFC4);
    edx = MEM32(ecx + 0x18);
    eax = eax << 6;
    eax = eax + edx + 0xA0;
    edx = MEM32(eax);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ecx + 0x38);
    eax = eax - 0;
    MEM32(esp + 0x10) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 8), 16); /* movaps */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    if ((eax == 0)) goto loc_001297D5; /* je: equal / zero */

loc_001297BD:
    eax--;
    if ((eax == 0)) goto loc_001297CC; /* je: equal / zero */

loc_001297C0:
    eax--;
    if ((eax == 0)) goto loc_001297D5; /* je: equal / zero */

loc_001297C3:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_001297DC;

loc_001297CC:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF30), 16); /* movaps */
    goto loc_001297DC;

loc_001297D5:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AEF0), 16); /* movaps */

loc_001297DC:
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3925A4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    edx = esp + 0x20;
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    esi = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 8) = eax;
    esi = MEM32(esp + 8);
    edi = MEM32(esp + 0xC);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x10), xmm0.b, 16); /* movaps */
    esi = MEM32(0x3EBFC4);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x40), 16); /* movaps */
    eax = MEM32(ecx + 0x14);
    esi = esi + 0x1C;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x10), 16); /* movaps */
    esi = esi << 6;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    esi = esi + eax;
    ecx = 0x10;
    edi = esp + 0x50;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x44); /* movss */
    /* comiss xmm0.f[0], MEMF(esp + 0x34) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(esp + 0x34))) goto loc_001298A4; /* jbe: below or equal (unsigned <=) */

loc_0012989C:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001298A4:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
