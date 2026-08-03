#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00181610
 * Original: 0x00181610 - 0x0018177A (362 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00181610:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    eax = MEM32(ecx + 0xCC0);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    edx = MEM32(ecx + 0xCC0);
    ecx = MEM32(ecx + 0xCC4);
    memcpy((void *)XBOX_PTR(esp + 0x44), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x54), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x64), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(ebp + 8);
    memcpy((void *)XBOX_PTR(esp + 0x74), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(eax + 0x6457C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B03F0); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x40);
    SET_LO8(eax, MEM8(esi + 0x16B6));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, MEM8(ecx + 0x1016));
    ebx = MEM32(esi + 0x168C);
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM8(esp + 0xF) = LO8(edx);
    MEM8(esp + 0xE) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00181771; /* je: equal / zero */

loc_00181693:
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_001816A0:
    SET_LO8(ecx, MEM8(esp + 0xF));
    if (TEST_Z(MEM8(esp + 0xE), LO8(ecx))) goto loc_00181755; /* je: equal / zero */

loc_001816AE:
    memcpy(xmm0.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    edx = esp + 0x40;
    eax = esp + 0x50;
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    xmm0.f[0] = MEMF(edi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    /* mulps: xmm0.f[0] *= MEMF(esi) (packed 4xfloat) */
    /* addps: xmm0.f[0] += MEMF(esi + 0x30) (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x10) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(edi + 8); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1.f[0] *= MEMF(esi + 0x20) (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7547D8);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4A3830);
    PUSH32(esp, 0x4A3830);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0xB;
    PUSH32(esp, 0); sub_001820D0(); /* call 0x001820D0 */

loc_00181755:
    SET_LO8(ecx, MEM8(esp + 0xE));
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, LO8(ecx) << 1);
    ebx = ebx + 0x30;
    eax--;
    MEM8(esp + 0xE) = LO8(ecx);
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_001816A0; /* jne: not equal / not zero */

loc_00181771:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
