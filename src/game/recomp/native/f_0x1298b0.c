#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001298B0
 * Original: 0x001298B0 - 0x00129CFA (1098 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001298B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001298B0:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    xmm1.f[0] = MEMF(0x3B168C); /* movss */
    xmm2.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x10) ? xmm0.f[0] : MEMF(esp + 0x10)); /* minss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x18) ? xmm0.f[0] : MEMF(esp + 0x18)); /* maxss */
    xmm0.f[0] = (xmm0.f[0] < MEMF(esp + 0x14) ? xmm0.f[0] : MEMF(esp + 0x14)); /* minss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x14);
    MEM8(eax + 0x101B) = 1;
    ecx = MEM32(0x3EBFC4);
    edx = MEM32(ebx + 0x18);
    ecx = ecx << 6;
    eax = ecx + edx + 0xA0;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(ebx + 0x38);
    eax = eax - 0;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    if ((eax == 0)) goto loc_00129983; /* je: equal / zero */

loc_0012996B:
    eax--;
    if ((eax == 0)) goto loc_0012997A; /* je: equal / zero */

loc_0012996E:
    eax--;
    if ((eax == 0)) goto loc_00129983; /* je: equal / zero */

loc_00129971:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF90), 16); /* movaps */
    goto loc_0012998A;

loc_0012997A:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AF30), 16); /* movaps */
    goto loc_0012998A;

loc_00129983:
    memcpy(xmm1.b, (void *)XBOX_PTR(0x40AEF0), 16); /* movaps */

loc_0012998A:
    /* mulps: xmm0.f[0] *= xmm1.f[0] (packed 4xfloat) */
    xmm1.f[0] = MEMF(esp + 0x20); /* movss */
    memcpy(xmm2.b, xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x60); /* subss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x3925A4); /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */
    memcpy(xmm1.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    eax = esp + 0x30;
    ecx = esp + 0x40;
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm1.b, 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* minps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x60), xmm0.b, 16); /* movaps */
    edx = eax;
    eax = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esi), 16); /* movaps */
    /* maxps xmm0.f[0], MEMF(edi) (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x60), 16); /* movaps */
    eax = MEM32(ebx + 0x14);
    memcpy((void *)XBOX_PTR(esp + 0x40), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esp + 0x30), xmm0.b, 16); /* movaps */
    xmm0.f[0] = MEMF(esp + 0x1C); /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3B1730); /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 0x1010); /* addss */
    MEMF(eax + 0x1010) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(esp + 0x44); /* movss */
    ecx = MEM32(ebx + 0x14);
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = MEMF(ecx + 0x8F4); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    xmm0.f[0] = MEMF(esp + 0x14); /* movss */
    xmm0.f[0] = (xmm0.f[0] > MEMF(esp + 0x1C) ? xmm0.f[0] : MEMF(esp + 0x1C)); /* maxss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(ebx + 0x14);
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    MEMF(edx + 0x8F4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x14);
    MEMF(eax + 0x8B4) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xC);
    edi = MEM32(ebx + 0x14);
    xmm0.f[0] = MEMF(edi + 0x8F4); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(eax + 0x264); /* divss */
    esi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00129B98; /* jle: less or equal (signed <=) */

loc_00129AB5:
    edx = eax + 0xAC4;
    goto loc_00129AC0;

    /* nop */

loc_00129AC0:
    if (CMP_EQ(MEM32(edx), 0)) goto loc_00129AD2; /* je: equal / zero */

loc_00129AC5:
    esi++;
    edx = edx + 4;
    if (CMP_L(esi, ecx)) goto loc_00129AC0; /* jl: less (signed <) */

loc_00129ACD:
    goto loc_00129B98;

loc_00129AD2:
    if (TEST_S(esi, esi)) goto loc_00129B98; /* jl: less (signed <) */

loc_00129ADA:
    SET_LO8(ecx, MEM8(edi + esi + 0x4B2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00129AEE; /* je: equal / zero */

loc_00129AE5:
    if (CMP_NE(LO8(ecx), 1)) goto loc_00129B98; /* jne: not equal / not zero */

loc_00129AEE:
    esi = esi << 7;
    xmm1.f[0] = MEMF(eax + esi + 0x2E4); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + esi + 0xC74) = xmm1.f[0]; /* movss */
    ecx = MEM32(ebx + 0x14);
    edx = esi + ecx + 0xC40;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = ecx + esi + 0x7B0;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00129B26:
    edx = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + edx + 0x940), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    eax = esi + edx + 0x940;
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(ebx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00129B92; /* jle: less or equal (signed <=) */

loc_00129B6E:
    edx = edx + 0xAC4;

loc_00129B74:
    if (CMP_EQ(MEM32(edx), 0)) goto loc_00129B83; /* je: equal / zero */

loc_00129B79:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_00129B74; /* jl: less (signed <) */

loc_00129B81:
    goto loc_00129B92;

loc_00129B83:
    if (TEST_S(eax, eax)) goto loc_00129B92; /* jl: less (signed <) */

loc_00129B87:
    ecx = MEM32(ebx + 0x14);
    MEM8(eax + ecx + 0x101C) = 1;

loc_00129B92:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */

loc_00129B98:
    edx = MEM32(ebx + 0x18);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00129C85; /* jle: less or equal (signed <=) */

loc_00129BA9:
    ecx = edx + 0xAC4;
    /* nop */

loc_00129BB0:
    if (CMP_EQ(MEM32(ecx), 1)) goto loc_00129BC2; /* je: equal / zero */

loc_00129BB5:
    esi++;
    ecx = ecx + 4;
    if (CMP_L(esi, eax)) goto loc_00129BB0; /* jl: less (signed <) */

loc_00129BBD:
    goto loc_00129C85;

loc_00129BC2:
    if (TEST_S(esi, esi)) goto loc_00129C85; /* jl: less (signed <) */

loc_00129BCA:
    eax = MEM32(ebx + 0x14);
    SET_LO8(ecx, MEM8(eax + esi + 0x4B2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00129BE1; /* je: equal / zero */

loc_00129BD8:
    if (CMP_NE(LO8(ecx), 1)) goto loc_00129C85; /* jne: not equal / not zero */

loc_00129BE1:
    esi = esi << 7;
    xmm1.f[0] = MEMF(edx + esi + 0x2E4); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(eax + esi + 0xC74) = xmm1.f[0]; /* movss */
    edx = MEM32(ebx + 0x14);
    eax = esi + edx + 0xC40;
    edx = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = edx + esi + 0x7B0;
    PUSH32(esp, 0); sub_000116E0(); /* call 0x000116E0 */

loc_00129C19:
    eax = MEM32(ebx + 0x14);
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x70), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + eax + 0x940), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x80), 16); /* movaps */
    eax = esi + eax + 0x940;
    memcpy((void *)XBOX_PTR(eax + 0x10), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x90), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x20), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0xA0), 16); /* movaps */
    memcpy((void *)XBOX_PTR(eax + 0x30), xmm0.b, 16); /* movaps */
    edx = MEM32(ebx + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_00129C85; /* jle: less or equal (signed <=) */

loc_00129C61:
    edx = edx + 0xAC4;

loc_00129C67:
    if (CMP_EQ(MEM32(edx), 1)) goto loc_00129C76; /* je: equal / zero */

loc_00129C6C:
    eax++;
    edx = edx + 4;
    if (CMP_L(eax, ecx)) goto loc_00129C67; /* jl: less (signed <) */

loc_00129C74:
    goto loc_00129C85;

loc_00129C76:
    if (TEST_S(eax, eax)) goto loc_00129C85; /* jl: less (signed <) */

loc_00129C7A:
    ecx = MEM32(ebx + 0x14);
    MEM8(eax + ecx + 0x101C) = 1;

loc_00129C85:
    esi = 7;
    edi = ebx;
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_00129C91:
    esi = 6;
    PUSH32(esp, 0); sub_00128FE0(); /* call 0x00128FE0 */

loc_00129C9B:
    xmm0.f[0] = MEMF(esp + 0x5C); /* movss */
    /* comiss xmm0.f[0], MEMF(0x3B16E0) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x3B16E0))) goto loc_00129CF4; /* jbe: below or equal (unsigned <=) */

loc_00129CAA:
    ebx = MEM32(ebx + 0x10);
    eax = MEM32(0x40FAF0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B1884); /* mulss */
    ebx = ebx + 0x30;
    /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00129CF4; /* je: equal / zero */

loc_00129CC7:
    /* comiss xmm0.f[0], MEMF(0x40F80C) - sets EFLAGS */
    if ((xmm0.f[0] <= MEMF(0x40F80C))) goto loc_00129CE8; /* jbe: below or equal (unsigned <=) */

loc_00129CD0:
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014DB50(); /* call 0x0014DB50 */

loc_00129CE2:
    xmm0.f[0] = MEMF(esp + 0x10); /* movss */

loc_00129CE8:
    edx = ebx;
    eax = 0x40F270;
    PUSH32(esp, 0); sub_0014EB00(); /* call 0x0014EB00 */

loc_00129CF4:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);

}
