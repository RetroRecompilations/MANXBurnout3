#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A3AE0
 * Original: 0x001A3AE0 - 0x001A3E76 (918 bytes, 294 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A3AE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A3AE0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(ebp + 0x363B1));
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x4C);
    ebx = ZX8(LO8(edx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58);
    ebx = ebx + ecx;
    SET_LO8(ecx, MEM8(ebp + 0x363B2));
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    if (CMP_A(esi, 7)) goto loc_001A3E70; /* ja: above (unsigned >) */

loc_001A3B0D:
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(esi * 4 + 0x1A3E78); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001A3B15u) goto loc_001A3B15;
    if (_jt == 0x001A3B90u) goto loc_001A3B90;
    if (_jt == 0x001A3BDAu) goto loc_001A3BDA;
    if (_jt == 0x001A3C1Du) goto loc_001A3C1D;
    if (_jt == 0x001A3C91u) goto loc_001A3C91;
    if (_jt == 0x001A3D0Du) goto loc_001A3D0D;
    if (_jt == 0x001A3D54u) goto loc_001A3D54;
    if (_jt == 0x001A3DC2u) goto loc_001A3DC2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001A3B15:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A3B31; /* je: equal / zero */

loc_001A3B19:
    SET_LO8(eax, MEM8(ebp + 0x363B9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A3B31; /* je: equal / zero */

loc_001A3B23:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x363B2) = 2;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3B31:
    SET_LO8(eax, MEM8(ebx + 0x55));
    ecx = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001A3B76; /* jbe: below or equal (unsigned <=) */

loc_001A3B3A:
    xmm0.f[0] = MEMF(esp + 0x18); /* movss */
    edi = 0; /* xor self */
    SET_LO8(edx, 2);

loc_001A3B44:
    eax = MEM32(ebx + 0x34);
    eax = ZX8(MEM8(eax + ecx));
    esi = MEM32(ebx + 0x30);
    esi = esi + edi;
    eax = eax + eax * 2;
    eax = ebp + eax * 8 + 0x117CC;
    MEM32(eax + 4) = esi;
    esi = MEM32(esi);
    MEM32(eax + 0xC) = esi;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x14) = LO8(edx);
    eax = ZX8(MEM8(ebx + 0x55));
    ecx++;
    edi = edi + 0x10;
    if (CMP_L(ecx, eax)) goto loc_001A3B44; /* jl: less (signed <) */

loc_001A3B76:
    SET_LO8(ecx, MEM8(ebp + 0x363B9));
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    POP32(esp, edi);
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) + 1);
    POP32(esp, esi);
    MEM8(ebp + 0x363B2) = LO8(ecx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3B90:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A3BD2; /* je: equal / zero */

loc_001A3B94:
    SET_LO8(eax, MEM8(ebp + 0x363B3));
    if (CMP_AE(LO8(eax), MEM8(ebx + 0x53))) goto loc_001A3BCB; /* jae: above or equal (unsigned >=) */

loc_001A3B9F:
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = eax + eax * 2;
    eax = MEM32(ebx);
    PUSH32(esp, 0);
    eax = eax + edx * 2;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001A3470(); /* call 0x001A3470 */

loc_001A3BB6:
    SET_LO8(eax, MEM8(ebp + 0x363B3));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebp + 0x363B3) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3BCB:
    MEM8(ebp + 0x363B3) = 0;

loc_001A3BD2:
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(ebp + 0x363B2) = LO8(ecx);

loc_001A3BDA:
    ecx = MEM32(ebx + 0x40);
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A3C08; /* jle: less or equal (signed <=) */

loc_001A3BE3:
    ecx = MEM32(ebx + 4);
    esi = MEM32(ebx + 0xC);
    esi = ZX8(MEM8(esi + eax));
    edx = ecx + eax * 4;
    ecx = MEM32(ebx + 8);
    ecx = ZX8(MEM8(ecx + eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x46);
    ecx = ecx + esi;
    MEM32(ebp + ecx * 4 + 4) = edx;
    ecx = MEM32(ebx + 0x40);
    eax++;
    if (CMP_L(eax, ecx)) goto loc_001A3BE3; /* jl: less (signed <) */

loc_001A3C08:
    SET_LO8(eax, MEM8(ebp + 0x363B2));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebp + 0x363B2) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3C1D:
    eax = MEM32(ebx + 0x44);
    esi = 0; /* xor self */
    if (CMP_LE(eax, esi)) goto loc_001A3C7C; /* jle: less or equal (signed <=) */

loc_001A3C26:
    MEM32(esp + 0x14) = esi;
    /* nop */

loc_001A3C30:
    edx = MEM32(ebx + 0x14);
    eax = ZX8(MEM8(edx + esi));
    ecx = MEM32(ebx + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x118);
    ecx = ecx + MEM32(esp + 0x14);
    edx = MEM32(ebx + 0x18);
    edi = eax + ebp + 4;
    eax = ZX8(MEM8(edx + esi));
    MEM32(edi + eax * 4 + 0x10) = ecx;
    SET_LO8(eax, MEM8(ebp + 0x363B1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A3C69; /* je: equal / zero */

loc_001A3C5D:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A5790(); /* call 0x001A5790 */

loc_001A3C69:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebx + 0x44);
    esi++;
    ecx = ecx + 0x1C;
    /* cmp esi, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(esi, eax)) goto loc_001A3C30; /* jl: less (signed <) */

loc_001A3C7C:
    SET_LO8(eax, MEM8(ebp + 0x363B2));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebp + 0x363B2) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3C91:
    ecx = MEM32(ebx + 0x48);
    eax = 0; /* xor self */
    /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(ecx, eax)) goto loc_001A3CF8; /* jle: less or equal (signed <=) */

loc_001A3C9E:
    MEM32(esp + 0x18) = eax;

loc_001A3CA2:
    edx = MEM32(ebx + 0x20);
    ecx = ZX8(MEM8(edx + eax));
    edx = MEM32(ebx + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x118);
    esi = MEM32(esp + 0x18);
    edi = ecx + ebp + 4;
    ecx = MEM32(ebx + 0x24);
    ecx = ZX8(MEM8(ecx + eax));
    edx = edx + esi;
    MEM32(edi + ecx * 4 + 0x20) = edx;
    SET_LO8(ecx, MEM8(ebp + 0x363B1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001A3CE1; /* je: equal / zero */

loc_001A3CD1:
    edx = MEM32(ebx + 0x24);
    esi = ZX8(MEM8(edx + eax));
    PUSH32(esp, 0); sub_001A68D0(); /* call 0x001A68D0 */

loc_001A3CDD:
    eax = MEM32(esp + 0x14);

loc_001A3CE1:
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x48);
    eax++;
    edx = edx + 0x14;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(eax, ecx)) goto loc_001A3CA2; /* jl: less (signed <) */

loc_001A3CF8:
    SET_LO8(eax, MEM8(ebp + 0x363B2));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebp + 0x363B2) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3D0D:
    SET_LO8(ecx, MEM8(ebx + 0x54));
    eax = 0; /* xor self */
    if (CMP_BE(LO8(ecx) & LO8(ecx), 0)) goto loc_001A3D3F; /* jbe: below or equal (unsigned <=) */

loc_001A3D16:
    ecx = 0; /* xor self */
    goto loc_001A3D20;

    /* nop */

loc_001A3D20:
    esi = MEM32(ebx + 0x2C);
    edx = MEM32(ebx + 0x28);
    esi = ZX8(MEM8(esi + eax));
    edx = edx + ecx;
    MEM32(ebp + esi * 8 + 0x123CC) = edx;
    edx = ZX8(MEM8(ebx + 0x54));
    eax++;
    ecx = ecx + 0x48;
    if (CMP_L(eax, edx)) goto loc_001A3D20; /* jl: less (signed <) */

loc_001A3D3F:
    SET_LO8(eax, MEM8(ebp + 0x363B2));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebp + 0x363B2) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3D54:
    SET_LO8(eax, MEM8(ebp + 0x363B8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001A3DAD; /* je: equal / zero */

loc_001A3D5E:
    eax = MEM32(ebx + 0x3C);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_001A3DAD; /* jle: less or equal (signed <=) */

loc_001A3D67:
    esi = 0; /* xor self */
    /* nop */

loc_001A3D70:
    eax = MEM32(ebx + 0x38);
    ecx = ZX8(MEM8(eax + esi + 0xA));
    edx = ZX8(MEM8(eax + esi + 0xB));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x118);
    eax = eax + esi;
    ecx = ecx + ebp + 4;
    MEM32(ecx + edx * 4 + 0x30) = eax;
    SET_LO8(edx, MEM8(ebp + 0x363B1));
    if (CMP_BE(LO8(edx) & LO8(edx), 0)) goto loc_001A3DA2; /* jbe: below or equal (unsigned <=) */

loc_001A3D97:
    eax = ZX8(MEM8(eax + 0xB));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A6A30(); /* call 0x001A6A30 */

loc_001A3DA2:
    eax = MEM32(ebx + 0x3C);
    edi++;
    esi = esi + 0xC;
    if (CMP_L(edi, eax)) goto loc_001A3D70; /* jl: less (signed <) */

loc_001A3DAD:
    SET_LO8(eax, MEM8(ebp + 0x363B2));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    POP32(esp, esi);
    MEM8(ebp + 0x363B2) = LO8(eax);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001A3DC2:
    SET_LO8(ecx, MEM8(ebp + 0x363B7));
    SET_LO8(edx, LO8(edx) + 1);
    /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(ebp + 0x363B1) = LO8(edx);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A3E19; /* jne: not equal / not zero */

loc_001A3DD4:
    SET_LO8(ecx, MEM8(ebp + 0x363B8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A3E19; /* jne: not equal / not zero */

loc_001A3DDE:
    ecx = ZX8(LO8(edx));
    if (CMP_GE(ecx, MEM32(eax + 0x50))) goto loc_001A3E07; /* jge: greater or equal (signed >=) */

loc_001A3DE6:
    edx = MEM32(eax + 0x4C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    SET_LO16(edx, MEM16(ecx + edx + 0x50));
    MEM16(ebp + 0x363A4) = LO16(edx);
    eax = MEM32(eax + 0x4C);
    SET_LO8(ecx, MEM8(ecx + eax + 0x52));
    MEM8(ebp + 0x363A6) = LO8(ecx);
    goto loc_001A3E61;

loc_001A3E07:
    MEM16(ebp + 0x363A4) = 0;
    MEM8(ebp + 0x363A6) = 0;
    goto loc_001A3E61;

loc_001A3E19:
    ecx = ZX8(LO8(edx));
    if (CMP_GE(ecx, MEM32(eax + 0x50))) goto loc_001A3E51; /* jge: greater or equal (signed >=) */

loc_001A3E21:
    SET_LO8(edx, MEM8(ebp + 0x363B8));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A3E3F; /* je: equal / zero */

loc_001A3E2B:
    SET_LO8(edx, MEM8(0x752D80));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001A3E3F; /* je: equal / zero */

loc_001A3E35:
    xmm0.f[0] = MEMF(0x3A69C4); /* movss */
    goto loc_001A3E59;

loc_001A3E3F:
    edx = MEM32(eax + 0x4C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58);
    eax = MEM32(ecx + edx + 0x4C);
    MEM32(ebp + 0x363A0) = eax;
    goto loc_001A3E61;

loc_001A3E51:
    xmm0.f[0] = MEMF(0x3B16C0); /* movss */

loc_001A3E59:
    MEMF(ebp + 0x363A0) = xmm0.f[0]; /* movss */

loc_001A3E61:
    MEM8(ebp + 0x363BD) = 0;
    MEM8(ebp + 0x363B2) = 0;
    POP32(esp, edi);

loc_001A3E70:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
