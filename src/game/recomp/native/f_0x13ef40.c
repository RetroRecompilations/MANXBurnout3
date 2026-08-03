#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013EF40
 * Original: 0x0013EF40 - 0x0013F1CC (652 bytes, 150 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EF40(void)
{
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_0013EF40:
    esp = esp - 0x3C;
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1DDC); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1DD8); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x4D5370);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3B1A08); /* movss */
    PUSH32(esp, edi);
    edi = eax;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x384148); /* movss */
    eax = 0xFFFFFC18u;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A2928); /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = edi + 0x3440;
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0.f[0] = MEMF(0x3A3408); /* movss */
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0xFFFFFDA6u;
    MEM32(esp + 0x38) = 0xC6;
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0); sub_001401F0(); /* call 0x001401F0 */

loc_0013EFE0:
    if (CMP_EQ(MEM8(0x4D538C), LO8(ebx))) goto loc_0013EFF7; /* je: equal / zero */

loc_0013EFE8:
    if (CMP_EQ(esi, ebx)) goto loc_0013EFF7; /* je: equal / zero */

loc_0013EFEC:
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0); sub_0013F610(); /* call 0x0013F610 */

loc_0013EFF7:
    if (CMP_NE(MEM32(0x4D537C), 0xFFFFFFFFu)) goto loc_0013F1C5; /* jne: not equal / not zero */

loc_0013F004:
    eax = edi + 0x34C8;
    PUSH32(esp, 0); sub_00153E50(); /* call 0x00153E50 */

loc_0013F00F:
    if (CMP_EQ(MEM8(esp + 0xF), LO8(ebx))) goto loc_0013F1C5; /* je: equal / zero */

loc_0013F019:
    SET_LO8(eax, MEM8(edi + 0x3D3C));
    if (CMP_A(LO8(eax), 0xA)) goto loc_0013F08A; /* ja: above (unsigned >) */

loc_0013F023:
    edx = ZX8(MEM8(0x411E74));
    ecx = ZX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3A69C4); /* mulss */
    MEMF(0x3EBFCC) = xmm1.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3B16AC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(0x4A1EF0) = xmm1.f[0]; /* movss */
    MEMF(0x40FAA4) = xmm0.f[0]; /* movss */
    memcpy(xmm1.b, xmm0.b, 16); /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x39CC00); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC424); /* mulss */
    MEMF(0x40FAA8) = xmm1.f[0]; /* movss */
    MEMF(0x40FAAC) = xmm0.f[0]; /* movss */
    MEM8(edi + 0x3D3C) = MEM8(edi + 0x3D3C) + 1;

loc_0013F08A:
    ecx = MEM32(esi + 0xA8);
    if (CMP_LE(ecx, ebx)) goto loc_0013F14C; /* jle: less or equal (signed <=) */

loc_0013F098:
    eax = 0x73B3BE;
    /* nop */

loc_0013F0A0:
    SET_LO8(ebx, LO8(ebx) | MEM8(eax));
    eax = eax + 0x27E0;
    ecx--;
    if ((ecx != 0)) goto loc_0013F0A0; /* jne: not equal / not zero */

loc_0013F0AA:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0013F610(); /* call 0x0013F610 */

loc_0013F0B0:
    eax = edi + 0x1A90;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00145F60(); /* call 0x00145F60 */

loc_0013F0BC:
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0013B270(); /* call 0x0013B270 */

loc_0013F0C5:
    ebx = edi + 0x1150;
    PUSH32(esp, 0); sub_0014C880(); /* call 0x0014C880 */

loc_0013F0D0:
    edx = edi + 0x34C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00155FD0(); /* call 0x00155FD0 */

loc_0013F0DC:
    eax = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    esi = edi + 0x3B00;
    MEM32(esi + 0x1A4) = eax;
    MEM8(esi) = 1;
    PUSH32(esp, 0); sub_00152720(); /* call 0x00152720 */

loc_0013F0F7:
    esi = MEM32(0x73A1C0);
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_0013F141; /* jle: less or equal (signed <=) */

loc_0013F103:
    edx = 0x73C610;
    ebx = 0xFFFFEC78u;
    /* nop */

loc_0013F110:
    ecx = MEM32(edx);
    if (TEST_Z(ecx, ecx)) goto loc_0013F11F; /* je: equal / zero */

loc_0013F116:
    if (TEST_NZ(MEM8(ecx + 0x1161), 2)) goto loc_0013F139; /* jne: not equal / not zero */

loc_0013F11F:
    eax++;
    edx = edx + 0x27E0;
    /* cmp eax, esi - flags set for next jcc */
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(eax, esi)) goto loc_0013F110; /* jl: less (signed <) */

loc_0013F12E:
    PUSH32(esp, 0); sub_0013F3F0(); /* call 0x0013F3F0 */

loc_0013F133:
    eax = MEM32(esp + 0x18);
    goto loc_0013F15B;

loc_0013F139:
    MEM32(esp + 0x18) = 0xFFFFF63Cu;

loc_0013F141:
    PUSH32(esp, 0); sub_0013F3F0(); /* call 0x0013F3F0 */

loc_0013F146:
    eax = MEM32(esp + 0x18);
    goto loc_0013F15B;

loc_0013F14C:
    eax = 0xFFFFD8F0u;
    MEM32(esp + 0x18) = eax;
    MEM8(edi + 0x3B00) = LO8(ebx);

loc_0013F15B:
    ecx = MEM32(0x3EC250);
    eax = eax - ecx;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(MEM32(esp + 0x14), 0x12C)) goto loc_0013F19C; /* jl: less (signed <) */

loc_0013F17E:
    if (CMP_LE(MEM32(esp + 0x18), ecx)) goto loc_0013F18C; /* jle: less or equal (signed <=) */

loc_0013F184:
    ecx = ecx + 0x12C;
    goto loc_0013F192;

loc_0013F18C:
    ecx = ecx - 0x12C;

loc_0013F192:
    MEM32(0x3EC250) = ecx;
    MEM32(esp + 0x18) = ecx;

loc_0013F19C:
    ecx = MEM32(esp + 0x18);
    if (CMP_EQ(ecx, MEM32(0x3EC254))) goto loc_0013F1C5; /* je: equal / zero */

loc_0013F1A8:
    eax = MEM32(0x40E10C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0020A200(); /* call 0x0020A200 */

loc_0013F1B8:
    ecx = MEM32(esp + 0x20);
    esp = esp + 8;
    MEM32(0x3EC254) = ecx;

loc_0013F1C5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}
