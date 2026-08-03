#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00130B40
 * Original: 0x00130B40 - 0x00130C7D (317 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3, xmm4;

loc_00130B40:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x34;
    ecx = MEM32(edx + 0x10);
    ecx = MEM32(ecx + 0x40);
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xE90), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(ecx + 0xE80), 16); /* movaps */
    ecx = MEM32(ebp + 8);
    edx = MEM32(edx + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    /* cmp ebx, 8 - flags set for next jcc */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx), 16); /* movaps */
    ecx = MEM32(edx + 0x40);
    memcpy(xmm3.b, (void *)XBOX_PTR(ecx + 0xE90), 16); /* movaps */
    PUSH32(esp, esi);
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    /* addps: xmm3.f[0] += xmm0.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm3.b, 16); /* movaps */
    if (CMP_NE(ebx, 8)) goto loc_00130BAA; /* jne: not equal / not zero */

loc_00130B8F:
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001309F0(); /* call 0x001309F0 */

loc_00130B9E:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_00130BAA:
    esi = ZX8(MEM8(eax + 0x18));
    xmm2.f[0] = MEMF(0x3B172C); /* movss */
    edx = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (CMP_LE(esi & esi, 0)) goto loc_00130C49; /* jle: less or equal (signed <=) */

loc_00130BC8:
    ecx = MEM32(eax + 0x10);
    ecx = ecx + 9;
    edi = edi;

loc_00130BD0:
    eax = ZX8(MEM8(ecx + -1));
    if (CMP_EQ(eax, ebx)) goto loc_00130BDF; /* je: equal / zero */

loc_00130BD8:
    eax = ZX8(MEM8(ecx));
    if (CMP_NE(eax, ebx)) goto loc_00130C30; /* jne: not equal / not zero */

loc_00130BDF:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm3.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm4.b, xmm1.b, 16); /* movaps */
    /* shufps xmm4, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm2.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm2.f[0] <= xmm0.f[0])) goto loc_00130C30; /* jbe: below or equal (unsigned <=) */

loc_00130C25:
    eax = edx;
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEM32(esp + 0x18) = eax;
    goto loc_00130C34;

loc_00130C30:
    eax = MEM32(esp + 0x18);

loc_00130C34:
    edx++;
    ecx = ecx + 0xC;
    edi = edi + 0x10;
    if (CMP_L(edx, esi)) goto loc_00130BD0; /* jl: less (signed <) */

loc_00130C3F:
    if (CMP_GE(eax & eax, 0)) goto loc_00130C64; /* jge: greater or equal (signed >=) */

loc_00130C43:
    eax = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);

loc_00130C49:
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001309F0(); /* call 0x001309F0 */

loc_00130C58:
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_00130C64:
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x18);
    POP32(esp, edi);
    eax = eax << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + ecx), 16); /* movaps */
    POP32(esp, esi);
    memcpy((void *)XBOX_PTR(edx), xmm0.b, 16); /* movaps */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}
