#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001069C0
 * Original: 0x001069C0 - 0x00106CF9 (825 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001069C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_001069C0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ebx = eax;
    edi = ecx;
    PUSH32(esp, 0); sub_00109270(); /* call 0x00109270 */

loc_001069D5:
    SET_LO8(eax, MEM8(ebp + 8));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x2B0) = edi;
    MEM16(esi + 0x2B8) = LO16(ebx);
    MEM8(esi + 0x2BA) = LO8(eax);
    MEMF(esi + 0x2B4) = xmm1.f[0]; /* movss */
    MEM8(esi + 0x2BB) = 0xFF;
    MEM8(esi + 0x4D0) = 0;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00106ACD; /* jne: not equal / not zero */

loc_00106A0C:
    eax = MEM32(edi + ebx * 4 + 0xCC8);
    xmm2.f[0] = MEMF(0x3B1720); /* movss */
    MEM32(esi + 0x204) = eax;
    eax = esi + 0x2C0;
    ecx = ebx + ebx * 2;
    ecx = ecx << 6;
    xmm0.f[0] = MEMF(ecx + edi + 0x870); /* movss */
    MEM8(esi + 0x20C) = 1;
    MEM32(esi + 0x208) = eax;
    MEMF(esi + 0x1CC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1E0) = xmm2.f[0]; /* movss */
    edx = esi + 0x1E0;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(edx + 4) = xmm1.f[0]; /* movss */
    MEMF(edx + 8) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(0x3A69C4); /* movss */
    ecx = esi + 0x1D0;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    edi = eax + 0x40;
    MEM32(eax + 4) = edi;
    edi = eax + 0x1C;
    MEM32(eax) = edi;
    edi = eax + 0x100;
    MEM32(eax + 8) = edi;
    edi = eax + 0x180;
    MEM32(eax + 0xC) = edi;
    edi = eax + 0x1A4;
    MEM32(eax + 0x10) = edi;
    PUSH32(esp, 0); sub_00156510(); /* call 0x00156510 */

loc_00106AAE:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    memcpy((void *)XBOX_PTR(esi + 0x260), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(0x3B17D8); /* movss */
    MEMF(esi + 0x1F8) = xmm0.f[0]; /* movss */
    goto loc_00106CD8;

loc_00106ACD:
    if (CMP_NE(LO8(eax), 1)) goto loc_00106BFB; /* jne: not equal / not zero */

loc_00106AD5:
    eax = MEM32(edi + 0xCC4);
    MEM8(esi + 0x20C) = 1;
    edx = ebx + 6;
    edx = edx << 6;
    edx = edx + eax;
    MEM32(esi + 0x204) = edx;
    eax = esi + 0x2C0;
    MEM32(esi + 0x208) = eax;
    edx = MEM32(edi + 0xCC0);
    ecx = ebx + 0x75;
    ebx = MEM32(edx + 0x40);
    ecx = ecx << 5;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + ebx), 16); /* movaps */
    ecx = ecx + ebx;
    memcpy((void *)XBOX_PTR(esi + 0x1D0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    ebx = esi + 0x1D0;
    memcpy((void *)XBOX_PTR(ebx + 0x10), xmm0.b, 16); /* movaps */
    ecx = eax + 0x40;
    MEM32(eax + 4) = ecx;
    edx = eax + 0x1C;
    ecx = eax + 0x100;
    MEM32(eax) = edx;
    MEM32(eax + 8) = ecx;
    edx = eax + 0x180;
    ecx = eax + 0x1A4;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    edx = esi + 0x1E0;
    ecx = ebx;
    PUSH32(esp, 0); sub_00156510(); /* call 0x00156510 */

loc_00106B59:
    eax = ebx;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00106B60:
    memcpy(xmm1.b, (void *)XBOX_PTR(ebx), 16); /* movaps */
    MEMF(esi + 0x1CC) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esi + 0x1E0), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(0x3B1684); /* movss */
    edx = esp + 0xC;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esi + 0x260), xmm0.b, 16); /* movaps */
    eax = MEM32(edi + 0xCC0);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2B8);
    edx = MEM32(eax + 0x40);
    eax = ZX8(MEM8(edx + ecx + 0xADC));
    if (TEST_NZ(eax, eax)) goto loc_00106BC5; /* jne: not equal / not zero */

loc_00106BB5:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x264) = xmm0.f[0]; /* movss */
    goto loc_00106CD8;

loc_00106BC5:
    if (CMP_NE(eax, 1)) goto loc_00106BDA; /* jne: not equal / not zero */

loc_00106BCA:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x260) = xmm0.f[0]; /* movss */
    goto loc_00106CD8;

loc_00106BDA:
    if (CMP_NE(eax, 2)) goto loc_00106CD8; /* jne: not equal / not zero */

loc_00106BE3:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esi + 0x268) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x264) = xmm0.f[0]; /* movss */
    goto loc_00106CD8;

loc_00106BFB:
    if (CMP_NE(LO8(eax), 2)) goto loc_00106CD8; /* jne: not equal / not zero */

loc_00106C03:
    eax = MEM32(edi + 0xCC4);
    edx = MEM32(eax + 0x1024);
    ecx = ebx + ebx * 4;
    ebx = MEM32(edx + 8);
    ecx = ecx << 4;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + ebx + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x220), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + ebx + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x230), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + ebx + 0x30), 16); /* movaps */
    ecx = ecx + ebx;
    memcpy((void *)XBOX_PTR(esi + 0x240), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x40), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x250), xmm0.b, 16); /* movaps */
    eax = esi + 0x220;
    MEM32(esi + 0x204) = eax;
    eax = esi + 0x2C0;
    MEM8(esi + 0x20C) = 1;
    MEM32(esi + 0x208) = eax;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    edx = MEM32(edi + 0xCC0);
    edi = MEM32(edx + 0x40);
    ecx = ecx + 0x7B;
    ecx = ecx << 5;
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + edi), 16); /* movaps */
    ecx = ecx + edi;
    memcpy((void *)XBOX_PTR(esi + 0x1D0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0x10), 16); /* movaps */
    edi = esi + 0x1D0;
    memcpy((void *)XBOX_PTR(edi + 0x10), xmm0.b, 16); /* movaps */
    ecx = eax + 0x40;
    MEM32(eax + 4) = ecx;
    edx = eax + 0x1C;
    ecx = eax + 0x100;
    MEM32(eax) = edx;
    MEM32(eax + 8) = ecx;
    edx = eax + 0x180;
    ecx = eax + 0x1A4;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    edx = esi + 0x1E0;
    ecx = edi;
    PUSH32(esp, 0); sub_00156510(); /* call 0x00156510 */

loc_00106CC9:
    eax = edi;
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_00106CD0:
    MEMF(esi + 0x1CC) = xmm0.f[0]; /* movss */

loc_00106CD8:
    xmm0.f[0] = MEMF(0x3B1D68); /* movss */
    eax = esi;
    MEMF(esi + 0x1F0) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00109BB0(); /* call 0x00109BB0 */

loc_00106CEF:
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
