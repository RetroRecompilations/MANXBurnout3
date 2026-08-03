#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0012A8B0
 * Original: 0x0012A8B0 - 0x0012ABFE (846 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A8B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2;

loc_0012A8B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE8;
    ecx = MEM32(esi + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0xC);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0012ABF6; /* jle: less or equal (signed <=) */

loc_0012A8EC:
    ecx = ecx + 0xAC4;

loc_0012A8F2:
    edx = MEM32(ebp + 8);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_0012A909; /* je: equal / zero */

loc_0012A8F9:
    ebx++;
    ecx = ecx + 4;
    if (CMP_L(ebx, eax)) goto loc_0012A8F2; /* jl: less (signed <) */

loc_0012A901:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0012A909:
    if (TEST_S(ebx, ebx)) goto loc_0012ABF6; /* jl: less (signed <) */

loc_0012A911:
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(MEM8(eax + ebx + 0x4B2), 3)) goto loc_0012ABF6; /* je: equal / zero */

loc_0012A922:
    xmm0.f[0] = MEMF(ebp + 0x18); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1730); /* mulss */
    edi = MEM32(ebp + 0x10);
    ecx = eax;
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + ebx * 4 + 0xF90); /* addss */
    eax = ecx + ebx * 4 + 0xF90;
    edx = esp + 0x60;
    MEMF(eax) = xmm0.f[0]; /* movss */
    PUSH32(esp, edx);
    ecx = edi;
    eax = esi;
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012A956:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    ecx = MEM32(ebp + 0x14);
    eax = eax + 0x30;
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    eax = esi;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_00128860(); /* call 0x00128860 */

loc_0012A974:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    /* subps: xmm0.f[0] -= MEMF(esp + 0x30) (packed 4xfloat) */
    eax = eax + 0x30;
    PUSH32(esp, esi);
    edx = edi;
    eax = esp + 0x54;
    memcpy((void *)XBOX_PTR(esp + 0x34), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_001289B0(); /* call 0x001289B0 */

loc_0012A991:
    edx = MEM32(ebp + 0x14);
    edi = eax;
    PUSH32(esp, esi);
    eax = esp + 0xA4;
    PUSH32(esp, 0); sub_001289B0(); /* call 0x001289B0 */

loc_0012A9A3:
    memcpy(xmm0.b, (void *)XBOX_PTR(edi), 16); /* movaps */
    memcpy(xmm1.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    /* subps: xmm1.f[0] -= xmm0.f[0] (packed 4xfloat) */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = esp + 0x30;
    memcpy((void *)XBOX_PTR(esp + 0x50), xmm1.b, 16); /* movaps */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0012A9D1:
    eax = esp + 0x50;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_00013C10(); /* call 0x00013C10 */

loc_0012A9E0:
    xmm1.f[0] = MEMF(esp + 0x14); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* minss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A7950); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1940); /* movss */
    ecx = ebx * 8 + 0xF00;
    edi = ebx + 0x18;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x18) = ecx;
    edi = edi << 7;
    MEM32(esp + 0x14) = 2;
    /* nop */

loc_0012AA40:
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x14);
    xmm1.f[0] = MEMF(eax + edx); /* movss */
    ecx = MEM32(ebp + 0x10);
    /* cmp MEM32(ebp + 0xC), ecx - flags set for next jcc */
    xmm0.f[0] = MEMF(0x60EA1C); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3A2928); /* mulss */
    if (CMP_NE(MEM32(ebp + 0xC), ecx)) goto loc_0012AA6D; /* jne: not equal / not zero */

loc_0012AA64:
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm1.b, 16); /* movaps */
    goto loc_0012AA71;

loc_0012AA6D:
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0012AA71:
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x24); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x28) ? xmm0.f[0] : MEMF(esp + 0x28)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x2C) ? xmm0.f[0] : MEMF(esp + 0x2C)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x18);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, 0);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0xB8;
    eax = edi + eax + -2448;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00129640(); /* call 0x00129640 */

loc_0012AAB3:
    memcpy(xmm0.b, (void *)XBOX_PTR(eax), 16); /* movaps */
    ecx = MEM32(esi + 0x14);
    memcpy((void *)XBOX_PTR(ecx + edi), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    ecx = ecx + edi;
    memcpy((void *)XBOX_PTR(ecx + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(ecx + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x30), 16); /* movaps */
    eax = MEM32(esp + 0x18);
    memcpy((void *)XBOX_PTR(ecx + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(esi + 0x14);
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + edx) = xmm0.f[0]; /* movss */
    eax = eax + 4;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    edi = edi + 0x40;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0012AA40; /* jne: not equal / not zero */

loc_0012AB02:
    eax = MEM32(esi + 0x14);
    xmm0.f[0] = MEMF(esp + 0x20); /* movss */
    ecx = MEM32(esi + 0x14);
    ebx = ebx << 7;
    edi = ebx;
    memcpy(xmm1.b, (void *)XBOX_PTR(eax + edi + 0xC30), 16); /* movaps */
    memcpy(xmm2.b, (void *)XBOX_PTR(eax + edi + 0xC70), 16); /* movaps */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = eax + edi;
    edx = esp + 0x20;
    xmm0.f[0] = MEMF(edx); /* movss */
    /* shufps xmm0, xmm0, 0 */
    ecx = ecx + edi;
    /* subps: xmm2.f[0] -= xmm1.f[0] (packed 4xfloat) */
    /* mulps: xmm2.f[0] *= xmm0.f[0] (packed 4xfloat) */
    memcpy(xmm0.b, (void *)XBOX_PTR(ecx + 0xC30), 16); /* movaps */
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(ecx + 0xC70), xmm0.b, 16); /* movaps */
    ebx = 2;
    goto loc_0012AB60;

    /* nop */
    edi = edi;

loc_0012AB60:
    eax = MEM32(esi + 0x14);
    ecx = edi + eax + 0xC00;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    ecx = edi + eax + 0x770;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_0012AB7F:
    ecx = MEM32(esi + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    eax = edi + ecx + 0x900;
    memcpy((void *)XBOX_PTR(eax), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    edi = edi + 0x40;
    ebx--;
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    if ((ebx != 0)) goto loc_0012AB60; /* jne: not equal / not zero */

loc_0012ABB8:
    edx = MEM32(esi + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0012ABF6; /* jle: less or equal (signed <=) */

loc_0012ABC5:
    edx = edx + 0xAC4;
    goto loc_0012ABD0;

    /* nop */

loc_0012ABD0:
    edi = MEM32(ebp + 8);
    if (CMP_EQ(edi, MEM32(edx))) goto loc_0012ABE7; /* je: equal / zero */

loc_0012ABD7:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_0012ABD0; /* jl: less (signed <) */

loc_0012ABDF:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0012ABE7:
    if (TEST_S(eax, eax)) goto loc_0012ABF6; /* jl: less (signed <) */

loc_0012ABEB:
    edx = MEM32(esi + 0x14);
    MEM8(edx + eax + 0x101C) = 1;

loc_0012ABF6:
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}
