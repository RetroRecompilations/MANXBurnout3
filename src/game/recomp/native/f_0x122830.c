#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00122830
 * Original: 0x00122830 - 0x00122C1A (1002 bytes, 226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0, xmm1;

loc_00122830:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00109270(); /* call 0x00109270 */

loc_00122841:
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    MEM32(esi + 0xCC4) = ebx;
    MEM32(esi + 0xCC0) = eax;
    MEM32(esi + 0x204) = eax;
    eax = MEM32(eax + 0x40);
    SET_LO8(eax, MEM8(eax + 0xD));
    ecx = 0; /* xor self */
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esi + 0x1169) = LO8(eax);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_001228E3; /* jle: less or equal (signed <=) */

loc_0012286F:
    ecx = ebx + 0x4D0;
    edx = esi + 0xCC8;
    MEM32(esp + 0x14) = ecx;
    edi = esi + 0x890;
    MEM32(esp + 0x18) = edx;
    /* nop */

loc_00122890:
    edx = edi + -112;
    PUSH32(esp, 0); sub_00121C90(); /* call 0x00121C90 */

loc_00122898:
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = ebx;
    eax = MEM32(ebx);
    MEM32(edi) = eax;
    edx = MEM32(ebx + 0x14);
    MEM32(edi + -4) = edx;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    ecx = ecx + 4;
    MEM32(edi + -32) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    eax++;
    edx = edx + 4;
    ebx = ebx + 0x40;
    edi = edi + 0xC0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(eax, ecx)) goto loc_00122890; /* jl: less (signed <) */

loc_001228DC:
    if (CMP_GE(eax, 6)) goto loc_00122910; /* jge: greater or equal (signed >=) */

loc_001228E1:
    ecx = eax;

loc_001228E3:
    edx = ecx + ecx * 2;
    edx = edx << 6;
    eax = 6;
    edx = edx + esi + 0x894;
    eax = eax - ecx;
    goto loc_00122900;

    /* nop */

loc_00122900:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEMF(edx) = xmm0.f[0]; /* movss */
    edx = edx + 0xC0;
    eax--;
    if ((eax != 0)) goto loc_00122900; /* jne: not equal / not zero */

loc_00122910:
    eax = MEM32(esi + 0xCC4);
    ecx = MEM32(esi + 0xCC0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = eax + 0x300;
    PUSH32(esp, 0); sub_001318F0(); /* call 0x001318F0 */

loc_00122928:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    ecx = MEM32(ebp + 8);
    SET_LO8(ebx, 2);
    MEM8(esi + 0x20C) = LO8(ebx);
    MEMF(esi + 0x1C0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C8) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx + 0x40);
    eax = MEM32(edx + 0x14);
    MEM32(esi + 0x1CC) = eax;
    eax = MEM32(ecx + 0x40);
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0xE80), 16); /* movaps */
    eax = eax + 0xE80;
    memcpy((void *)XBOX_PTR(esi + 0x1D0), xmm0.b, 16); /* movaps */
    memcpy(xmm0.b, (void *)XBOX_PTR(eax + 0x10), 16); /* movaps */
    memcpy((void *)XBOX_PTR(esi + 0x1E0), xmm0.b, 16); /* movaps */
    ecx = MEM32(ecx + 0x40);
    ecx = ecx + 0x1060;
    PUSH32(esp, ecx);
    edi = esi + 0x220;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00122C20(); /* call 0x00122C20 */

loc_00122991:
    edx = edi + 0xA0;
    MEM32(edi + 4) = edx;
    eax = edi + 0x1C;
    MEM32(edi) = eax;
    ecx = edi + 0x320;
    MEM32(edi + 8) = ecx;
    edx = edi + 0x480;
    MEM32(edi + 0xC) = edx;
    eax = edi + 0x4F8;
    MEM32(edi + 0x10) = eax;
    MEM32(esi + 0x208) = edi;
    eax = 0; /* xor self */
    MEM8(esi + 0x20C) = LO8(ebx);
    ecx = 0x120;
    edi = esi + 0xCE0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0xCC0);
    edx = MEM32(ecx + 0x40);
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(edx + 0xC));
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00122A90; /* jle: less or equal (signed <=) */

loc_001229ED:
    eax = MEM32(ebp + 0xC);
    eax = eax + 0x180;
    MEM32(esp + 0x18) = 0xEA0;
    MEM32(esp + 0x10) = 0xAFC;
    edi = esi + 0xD98;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_00122A10:
    ebx = edi + -184;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00121D70(); /* call 0x00121D70 */

loc_00122A1C:
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + edx);
    edx = MEM32(esp + 0x14);
    MEM32(edi + -8) = ecx;
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edi + 4) = 0;
    eax = MEM32(esi + 0xCC0);
    ecx = MEM32(eax + 0x40);
    ecx = ecx + edx;
    eax = ebx;
    PUSH32(esp, 0); sub_00121F80(); /* call 0x00121F80 */

loc_00122A4F:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x10);
    ecx = ecx + 0x20;
    edx = edx + 0x40;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0xCC0);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 0x40);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xC);
    eax++;
    ebx = ebx + 4;
    edi = edi + 0xC0;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(eax, ecx)) goto loc_00122A10; /* jl: less (signed <) */

loc_00122A90:
    SET_LO8(edx, MEM8(esi + 0x1169));
    eax = MEM32(esi + 0xCC4);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM8(esi + 0x116A) = LO8(edx);
    MEM8(eax + 0x1014) = 0;
    MEMF(esi + 0x1164) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x1160) = 0;
    eax = MEM32(esi + 0xCC4);
    xmm1.f[0] = MEMF(0x3B1A1C); /* movss */
    MEM8(esi + 0x1168) = 0;
    MEMF(esi + 0x1F8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x490) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x494) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x498) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0xCC4);
    MEMF(ecx + 0x49C) = xmm1.f[0]; /* movss */
    eax = eax + 0x490;
    eax = 0; /* xor self */
    ecx = 0x60;
    edi = esi + 0x11D0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edx = MEM32(esi + 0xCC4);
    MEM8(esi + 0x1350) = LO8(eax);
    MEM8(esi + 0x1351) = LO8(eax);
    MEM8(edx + 0x1016) = LO8(eax);
    eax = MEM32(esi + 0xCC4);
    MEM32(eax + 0x1024) = 0;
    ecx = MEM32(esi + 0xCC4);
    MEM8(ecx + 0x1023) = 0;
    edx = MEM32(esi + 0xCC4);
    MEM8(edx + 0x1015) = 0;
    eax = MEM32(esi + 0xCC4);
    MEM8(eax + 0x1017) = 0;
    ecx = MEM32(esi + 0xCC4);
    MEM8(ecx + 0x1019) = 0;
    edx = MEM32(esi + 0xCC4);
    MEM8(edx + 0x1018) = 0;
    eax = MEM32(esi + 0xCC4);
    MEM8(eax + 0x101A) = 0;
    eax = MEM32(esi + 0xCC4);
    MEMF(eax + 0xFF0) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFF4) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFF8) = xmm0.f[0]; /* movss */
    MEMF(eax + 0xFFC) = xmm0.f[0]; /* movss */
    eax = eax + 0xFF0;
    eax = MEM32(esi + 0xCC4);
    MEMF(eax + 0x1000) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1004) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1008) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x100C) = xmm0.f[0]; /* movss */
    eax = eax + 0x1000;
    MEM8(esi + 0x116B) = 0;
    ecx = 0; /* xor self */
    edx = esi + 0x11B0;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    POP32(esp, edi);
    MEM8(esi + 0x1353) = LO8(ecx);
    MEM8(esi + 0x1354) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
