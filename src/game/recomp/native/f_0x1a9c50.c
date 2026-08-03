#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A9C50
 * Original: 0x001A9C50 - 0x001AA0F2 (1186 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A9C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1, xmm2, xmm3;

loc_001A9C50:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(ebx + 0x12B790) = esi;
    MEM32(ebx + 0x12B794) = esi;
    MEM8(ebx + 0x12B798) = 0;
    MEM8(ebx + 0x12B799) = 0;
    MEM32(ebx + 0x12B79C) = esi;
    MEM32(ebx + 0x12B7A4) = esi;
    PUSH32(esp, edi);
    eax = ebx + 0x12ADC8;
    MEM8(ebx + 0x12ADB0) = 0;
    MEM32(ebx + 0x12ADB4) = esi;
    MEM32(ebx + 0x12ADBC) = esi;
    MEM32(ebx + 0x12ADB8) = 1;
    PUSH32(esp, 0); sub_0019C6E0(); /* call 0x0019C6E0 */

loc_001A9CAF:
    eax = ebx + 0x12AF94;
    PUSH32(esp, 0); sub_0019C6E0(); /* call 0x0019C6E0 */

loc_001A9CBA:
    eax = 0; /* xor self */
    ecx = 0x13;
    edi = ebx + 0x12B170;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x23;
    edi = ebx + 0x12B1BC;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(ebx + 0x12B164) = 1;
    MEM32(ebx + 0x12B250) = 1;
    MEM32(ebx + 0x12B258) = esi;
    MEM32(ebx + 0x12B25C) = esi;
    esi = ebx + 0x4DE0;
    PUSH32(esp, 0); sub_001A10E0(); /* call 0x001A10E0 */

loc_001A9CFE:
    xmm0.f[0] = MEMF(0x3B1730); /* movss */
    MEMF(ebx + 0x3C864) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B16EC); /* movss */
    MEMF(ebx + 0x3C868) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x3C86C) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x3C870) = xmm0.f[0]; /* movss */
    MEMF(ebx + 0x3C874) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B17C0); /* movss */
    MEMF(ebx + 0x3C878) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    edi = 0; /* xor self */
    MEMF(ebx + 0x3C87C) = xmm0.f[0]; /* movss */
    MEM8(ebx + 0x3C860) = 0;
    MEM32(ebx + 0x3C880) = edi;
    MEM8(ebx + 0x3C2F4) = 0;
    MEM32(ebx + 0x3C2F0) = edi;
    edx = MEM32(0x3FA644);
    ecx = 0x3F9D24;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_001A9D82:
    MEM32(ebx + 0x3C900) = eax;
    ecx = MEM32(0x3F9D2C);
    MEM32(ebx + 0x3C8EC) = eax;
    MEM32(ebx + 0x3C8F0) = eax;
    MEM32(ebx + 0x3C8F4) = eax;
    MEM32(ebx + 0x3C8E8) = edi;
    MEM32(ebx + 0x3C8F8) = ecx;
    MEM32(ebx + 0x3C8FC) = edi;
    eax = ebx + 0x3C910;
    PUSH32(esp, eax);
    MEM32(ebx + 0x3C904) = edi;
    MEM32(ebx + 0x3C908) = edi;
    MEM8(ebx + 0x3C90C) = 0;
    PUSH32(esp, 0); sub_00110280(); /* call 0x00110280 */

loc_001A9DD1:
    eax = ebx + 0x1265C0;
    PUSH32(esp, 0); sub_0018B150(); /* call 0x0018B150 */

loc_001A9DDC:
    ecx = ebx + 0x12B260;
    MEM32(ebx + 0x128C74) = edi;
    MEM32(ebx + 0x128C78) = edi;
    MEM32(ebx + 0x128C7C) = edi;
    MEM16(ebx + 0x128C84) = LO16(edi);
    MEM8(ebx + 0x128C86) = 0;
    MEM32(ebx + 0x128C80) = edi;
    MEM32(ebx + 0x128C8C) = edi;
    MEM32(ebx + 0x128C88) = edi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_001A9E18:
    ecx = ebx + 0x128D10;
    PUSH32(esp, 0); sub_00163E70(); /* call 0x00163E70 */

loc_001A9E23:
    ecx = ebx + 0x129D60;
    PUSH32(esp, 0); sub_00163E70(); /* call 0x00163E70 */

loc_001A9E2E:
    MEM32(ebx + 0x12B7A8) = edi;
    MEM32(ebx + 0x12B7AC) = edi;
    MEM32(ebx + 0x12B7B0) = edi;
    MEM32(ebx + 0x12B7B4) = edi;
    MEM32(ebx + 0x12B7B8) = edi;
    MEM32(ebx + 0x12B7BC) = edi;
    eax = 0; /* xor self */
    ecx = ebx + 0x2C;

loc_001A9E57:
    MEM32(ecx) = eax;
    eax++;
    ecx = ecx + 8;
    if (CMP_L(eax, 0x40)) goto loc_001A9E57; /* jl: less (signed <) */

loc_001A9E62:
    eax = ebx + 0x12D0F0;
    MEM32(ebx + 0x12B7C0) = 1;
    MEM32(ebx + 0x12B7C4) = edi;
    MEM32(ebx + 0x12B7C8) = edi;
    MEM8(ebx + 0x144333) = 0;
    MEM8(ebx + 0x144332) = 0;
    MEM8(ebx + 0x144380) = 0;
    MEM8(ebx + 0x144381) = 0;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    goto loc_001A9EB0;

loc_001A9EA4:
    eax = MEM32(esp + 0x1C);
    goto loc_001A9EB0;

    /* nop */

loc_001A9EB0:
    ecx = MEM32(esp + 0x18);
    esi = eax + -6432;
    MEM32(eax + 0xEB0) = ecx;
    PUSH32(esp, 0); sub_001705F0(); /* call 0x001705F0 */

loc_001A9EC5:
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = eax + 0xB60;
    ecx++;
    MEM32(eax) = edi;
    MEM8(eax + 0xEB9) = 0;
    MEM32(eax + -1496) = edx;
    eax = eax + 0x27E0;
    /* cmp ecx, 2 - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(ecx, 2)) goto loc_001A9EA4; /* jl: less (signed <) */

loc_001A9EF5:
    MEM32(esp + 0x1C) = edi;
    esi = ebx + 0x130790;
    /* nop */

loc_001A9F00:
    PUSH32(esp, 0); sub_001705F0(); /* call 0x001705F0 */

loc_001A9F05:
    eax = MEM32(esp + 0x1C);
    eax++;
    esi = esi + 0x2470;
    /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, 5)) goto loc_001A9F00; /* jl: less (signed <) */

loc_001A9F19:
    MEM32(esp + 0x1C) = edi;
    esi = ebx + 0x13D6E0;

loc_001A9F23:
    eax = esi + -6432;
    PUSH32(esp, 0); sub_0018D020(); /* call 0x0018D020 */

loc_001A9F2E:
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x17C) = eax;
    eax++;
    MEM32(esi) = 2;
    MEM32(esi + 0x178) = edi;
    esi = esi + 0x1AB0;
    /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(eax, 5)) goto loc_001A9F23; /* jl: less (signed <) */

loc_001A9F54:
    edi = edi | 0xFFFFFFFFu;
    MEM32(ebx + 0x144334) = edi;
    MEM32(ebx + 0x144338) = edi;
    MEM32(ebx + 0x14433C) = edi;
    MEM32(ebx + 0x144340) = edi;
    MEM32(ebx + 0x144344) = edi;
    ebx = 0x5A9A00;
    PUSH32(esp, 0); sub_0017E8A0(); /* call 0x0017E8A0 */

loc_001A9F7F:
    PUSH32(esp, 0x64800000);
    ebx = 0; /* xor self */
    PUSH32(esp, 0xC);
    MEM32(0x45D120) = 0x540;
    MEM32(0x45D124) = ebx;
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_001A9F9D:
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_001A9FC1; /* je: equal / zero */

loc_001A9FA3:
    PUSH32(esp, 0xB2800000u);
    PUSH32(esp, 0x41C0);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_001A9FB2:
    if (CMP_NE(eax, ebx)) goto loc_001A9FC5; /* jne: not equal / not zero */

loc_001A9FB6:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_001A9FC1:
    esi = 0; /* xor self */
    goto loc_001A9FD3;

loc_001A9FC5:
    eax = eax & 0xFFFFFFF;
    MEM32(esi) = 0x1000001;
    MEM32(esi + 4) = eax;

loc_001A9FD3:
    PUSH32(esp, 1);
    MEM32(0x4A1CF8) = esi;
    MEM32(0x4A1CFC) = 0x45BC18;
    MEM32(0x4A1D00) = 0x45C698;
    PUSH32(esp, 0); sub_00032020(); /* call 0x00032020 */

loc_001A9FF4:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00032020(); /* call 0x00032020 */

loc_001A9FFA:
    esp = esp + 8;
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0); sub_0034FAF0(); /* call 0x0034FAF0 */

loc_001AA00A:
    MEM32(0x4A1D04) = eax;
    PUSH32(esp, 0); sub_00032CA0(); /* call 0x00032CA0 */

loc_001AA014:
    xmm0.f[0] = MEMF(0x3B168C); /* movss */
    MEMF(0x60E0C0) = xmm0.f[0]; /* movss */
    MEMF(0x60E0C4) = xmm0.f[0]; /* movss */
    MEMF(0x60E0C8) = xmm0.f[0]; /* movss */
    memcpy(xmm2.b, (void *)XBOX_PTR(0x60E0C0), 16); /* movaps */
    esi = MEM32(ebp + 8);
    ecx = MEM32(0x4A1EB4);
    memcpy(xmm0.b, xmm2.b, 16); /* movaps */
    /* mulps: xmm0.f[0] *= xmm2.f[0] (packed 4xfloat) */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    memcpy(xmm3.b, xmm1.b, 16); /* movaps */
    /* shufps xmm3, xmm1, 0x39 */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    memcpy((void *)XBOX_PTR(esp + 0x20), xmm0.b, 16); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    memcpy(xmm0.b, (void *)XBOX_PTR(esp + 0x20), 16); /* movaps */
    MEM32(0x60E170) = edi;
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    MEM32(0x60E180) = 1;
    MEM32(0x60E188) = ebx;
    eax = 0x3832AC;
    xmm0.f[0] = MEMF(eax); /* movss */
    /* shufps xmm0, xmm0, 0 */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    /* shufps xmm1, xmm0, 0 */
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    eax = 1;
    /* mulps: xmm2.f[0] *= xmm1.f[0] (packed 4xfloat) */
    memcpy((void *)XBOX_PTR(0x60E0C0), xmm2.b, 16); /* movaps */
    edi = 0x54F900;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x24) = eax;
    MEM8(esi + 0x28) = LO8(ebx);
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0); sub_000526C0(); /* call 0x000526C0 */

loc_001AA0E5:
    POP32(esp, edi);
    MEM32(esi + 0x144384) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);

}
