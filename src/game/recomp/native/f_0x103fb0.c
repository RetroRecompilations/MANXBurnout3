#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00103FB0
 * Original: 0x00103FB0 - 0x00104296 (742 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_00103FB0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(MEM8(edi), 1)) goto loc_0010428C; /* je: equal / zero */

loc_00103FC9:
    SET_LO8(ecx, MEM8(edi + 0x11));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x12));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(edi + 0x10));
    PUSH32(esp, 0); sub_00102FD0(); /* call 0x00102FD0 */

loc_00103FDA:
    memcpy(xmm2.b, (void *)XBOX_PTR(0x40A200), 16); /* movaps */
    ecx = ZX16(MEM16(edi + 0x14));
    memcpy(xmm1.b, (void *)XBOX_PTR(0x752D60), 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(0x752D70), 16); /* movaps */
    edx = ZX16(MEM16(edi + 0x16));
    eax = ZX16(MEM16(edi + 0x18));
    /* addps: xmm0.f[0] += xmm2.f[0] (packed 4xfloat) */
    /* subps: xmm1.f[0] -= xmm2.f[0] (packed 4xfloat) */
    xmm2.f[0] = MEMF(0x384208); /* movss */
    xmm3.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    /* subps: xmm0.f[0] -= xmm1.f[0] (packed 4xfloat) */
    xmm3.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    memcpy(xmm2.b, xmm0.b, 16); /* movaps */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x14), 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    /* addps: xmm0.f[0] += xmm1.f[0] (packed 4xfloat) */
    esp = esp + 4;
    memcpy((void *)XBOX_PTR(esi + 0x30), xmm0.b, 16); /* movaps */
    PUSH32(esp, 0); sub_000FF270(); /* call 0x000FF270 */

loc_00104050:
    SET_LO16(eax, MEM16(edi + 0x1A));
    xmm1.f[0] = MEMF(0x3B1B40); /* movss */
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0010408E; /* jns: not sign (positive) */

loc_00104084:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_0010408E:
    esi = MEM32(ebp + 8);
    MEMF(esi) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x1C));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_001040C8; /* jns: not sign (positive) */

loc_001040BE:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_001040C8:
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x1E));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00104100; /* jns: not sign (positive) */

loc_001040F6:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00104100:
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x20));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00104138; /* jns: not sign (positive) */

loc_0010412E:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00104138:
    esi = MEM32(ebp + 0xC);
    MEMF(esi) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x22));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00104172; /* jns: not sign (positive) */

loc_00104168:
    memcpy(xmm3.b, xmm2.b, 16); /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm3.b, 16); /* movaps */

loc_00104172:
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(edi + 0x24));
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    edx = edx & 0xFF;
    ecx = ecx & 0x7F;
    /* test HI8(eax), HI8(eax) - flags set for next jcc */
    xmm3.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_001041A7; /* jns: not sign (positive) */

loc_001041A0:
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */

loc_001041A7:
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    eax = edi + 0x28;
    ecx = eax;
    SET_LO16(edx, MEM16(ecx));
    eax = MEM32(ebp + 0x10);
    MEM16(eax) = LO16(edx);
    SET_LO8(ecx, MEM8(ecx + 2));
    MEM8(eax + 2) = LO8(ecx);
    edx = ZX8(MEM8(edi + 0x13));
    MEM32(ebx + 4) = edx;
    eax = ZX8(MEM8(edi + 0x2E));
    MEM32(ebx + 8) = eax;
    SET_LO8(ecx, MEM8(edi + 0x2F));
    MEM8(ebx + 0xC) = LO8(ecx);
    SET_LO8(ecx, 0); /* xor self */
    MEM8(ebx + 0x14) = LO8(ecx);
    MEM8(ebx + 0x15) = LO8(ecx);
    MEM8(ebx + 0x16) = LO8(ecx);
    MEM8(ebx + 0x17) = LO8(ecx);
    MEM8(ebx + 0x18) = LO8(ecx);
    MEM8(ebx + 0x19) = LO8(ecx);
    MEM8(ebx + 0x1A) = LO8(ecx);
    if (TEST_Z(MEM8(edi + 0x2C), 4)) goto loc_001041F5; /* je: equal / zero */

loc_001041F1:
    MEM8(ebx + 0x14) = 1;

loc_001041F5:
    if (TEST_Z(MEM8(edi + 0x2C), 8)) goto loc_001041FF; /* je: equal / zero */

loc_001041FB:
    MEM8(ebx + 0x15) = 1;

loc_001041FF:
    if (TEST_Z(MEM8(edi + 0x2C), 0x10)) goto loc_00104209; /* je: equal / zero */

loc_00104205:
    MEM8(ebx + 0x16) = 1;

loc_00104209:
    SET_LO8(eax, MEM8(edi + 0x2C));
    if (TEST_Z(LO8(eax), 1)) goto loc_00104219; /* je: equal / zero */

loc_00104210:
    MEM32(ebx + 0x10) = 2;
    goto loc_00104224;

loc_00104219:
    edx = ZX8(LO8(eax));
    edx = edx >> 1;
    edx = edx & 1;
    MEM32(ebx + 0x10) = edx;

loc_00104224:
    if (TEST_Z(MEM8(edi + 0x2C), 0x20)) goto loc_0010422E; /* je: equal / zero */

loc_0010422A:
    MEM8(ebx + 0x17) = 1;

loc_0010422E:
    SET_LO8(eax, MEM8(edi + 0x2C));
    SET_LO8(edx, 0x40);
    if (TEST_Z(LO8(edx), LO8(eax))) goto loc_0010423B; /* je: equal / zero */

loc_00104237:
    MEM8(ebx + 0x18) = 1;

loc_0010423B:
    SET_LO8(eax, 0x80);
    if (TEST_Z(MEM8(edi + 0x2C), LO8(eax))) goto loc_00104246; /* je: equal / zero */

loc_00104242:
    MEM8(ebx + 0x1A) = 1;

loc_00104246:
    if (TEST_Z(MEM8(edi + 0x2D), LO8(eax))) goto loc_00104253; /* je: equal / zero */

loc_0010424B:
    MEM8(ebx + 0x19) = 1;
    MEM8(edi + 0x2D) = MEM8(edi + 0x2D) & 0x7F;

loc_00104253:
    MEM8(ebx + 0x24) = LO8(ecx);
    if (TEST_Z(MEM8(edi + 0x2D), LO8(edx))) goto loc_0010425F; /* je: equal / zero */

loc_0010425B:
    MEM8(ebx + 0x24) = 1;

loc_0010425F:
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x2D));
    ecx = 0; /* xor self */
    eax = eax >> 3;
    eax = eax & 7;
    MEM32(ebx + 0x2C) = eax;
    SET_LO8(ecx, MEM8(edi + 0x2D));
    eax = MEM32(ebp + 0x18);
    ecx = ecx & 7;
    MEM32(ebx + 0x28) = ecx;
    SET_LO16(edx, MEM16(edi + 0x26));
    MEM16(eax) = LO16(edx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0010428C:
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}
