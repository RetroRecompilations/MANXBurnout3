#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001309F0
 * Original: 0x001309F0 - 0x00130B3F (335 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001309F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001309F0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    ecx = MEM32(eax + 4);
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = ZX8(MEM8(eax + 0x19));
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_00130B30; /* jle: less or equal (signed <=) */

loc_00130A1F:
    MEM32(esp + 0x18) = eax;

loc_00130A23:
    ecx = ZX8(MEM8(ebx));
    edx = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    eax = MEM32(ebp + 8);
    edx = ZX8(MEM8(ebx + 1));
    ecx = ecx << 4;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    ecx = ZX8(MEM8(ebx + 2));
    edx = edx << 4;
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx + eax), 16); /* movaps */
    edx = MEM32(esp + 0x10);
    ecx = ecx << 4;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + eax), 16); /* movaps */
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edi = esp + 0x6C;
    eax = esp + 0x3C;
    edx = esp + 0x4C;
    esi = esp + 0x5C;
    memcpy((void *)XBOX_PTR(esp + 0x4C), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00130700(); /* call 0x00130700 */

loc_00130A84:
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00130AD6; /* je: equal / zero */

loc_00130A8B:
    edx = MEM32(ebp + 0xC);
    memcpy(xmm2.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(edx), 16); /* movaps */
    /* subps: xmm0.f[0] -= xmm2.f[0] (packed 4xfloat) */
    /* mulps: xmm0.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    /* shufps xmm3, xmm1, 0x39 */
    xmm1.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    eax = esp + 0x1C;
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00130AD6; /* jbe: below or equal (unsigned <=) */

loc_00130ACB:
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    memcpy((void *)XBOX_PTR(esp + 0x70), xmm2.b, 16); /* movaps */

loc_00130AD6:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = ecx + 0x10;
    ebx = ebx + 3;
    eax--;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00130A23; /* jne: not equal / not zero */

loc_00130AF3:
    xmm1.f[0] = MEMF(0x3B172C); /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    /* comiss xmm1.f[0], xmm0.f[0] - sets EFLAGS */
    if ((xmm1.f[0] <= xmm0.f[0])) goto loc_00130B30; /* jbe: below or equal (unsigned <=) */

loc_00130B06:
    ecx = MEM32(ebp + 0x10);
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00130B30:
    xmm0.f[0] = MEMF(0x3B172C); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
