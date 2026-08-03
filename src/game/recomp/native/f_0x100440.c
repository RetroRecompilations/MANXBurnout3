#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00100440
 * Original: 0x00100440 - 0x001006BC (636 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100440:
    PUSH32(esp, ecx);
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    MEM8(esi + 0x4F4) = 0;
    MEMF(esi + 0x5D8) = xmm0.f[0]; /* movss */
    ebx = ebx | 0xFFFFFFFFu;
    MEM32(esi + 0x5DC) = ebx;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebp = 0; /* xor self */
    MEM32(esi + 0x5E0) = ebp;
    MEM32(esi + 0x5E4) = ebp;
    edi = esi + 0x5E8;
    ecx = 0x40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(esi + 0x6EA) = LO16(ebx);
    MEM32(esi + 0x6EC) = ebx;
    edi = 0xFFFF;
    MEM16(esi + 0x6E8) = LO16(edi);
    MEM8(esi + 0x6F8) = LO8(eax);
    MEM8(esi + 0x6FA) = LO8(eax);
    eax = esi + 0x938;
    MEM32(esi + 0x6FC) = ebx;
    MEM32(esi + 0x700) = ebx;
    MEM8(esi + 0x6F9) = 0xFF;
    MEM16(esi + 0x704) = LO16(edi);
    MEM8(esi + 0x6FB) = LO8(ebx);
    PUSH32(esp, 0); sub_00103860(); /* call 0x00103860 */

loc_001004CC:
    MEM32(esi + 0xC0C) = ebx;
    MEM32(esi + 0xC10) = ebx;
    MEM8(esi + 0xC0B) = LO8(ebx);
    MEM8(esi + 0xC08) = 0;
    MEM8(esi + 0xC09) = 0xFF;
    MEM16(esi + 0xC14) = LO16(edi);
    MEM8(esi + 0xC0A) = 0;
    MEM32(esi + 0xC20) = ebx;
    MEM32(esi + 0xC24) = ebx;
    MEM8(esi + 0xC1F) = LO8(ebx);
    MEM8(esi + 0xC1C) = 0;
    MEM8(esi + 0xC1D) = 0xFF;
    MEM16(esi + 0xC28) = LO16(edi);
    MEM8(esi + 0xC1E) = 0;
    MEM32(esi + 0xC34) = ebx;
    MEM32(esi + 0xC38) = ebx;
    MEM8(esi + 0xC33) = LO8(ebx);
    MEM8(esi + 0xC30) = 0;
    MEM8(esi + 0xC31) = 0xFF;
    MEM16(esi + 0xC3C) = LO16(edi);
    MEM8(esi + 0xC32) = 0;
    MEM32(esi + 0xC48) = ebx;
    MEM32(esi + 0xC4C) = ebx;
    MEM8(esi + 0xC47) = LO8(ebx);
    MEM8(esi + 0xC44) = 0;
    MEM8(esi + 0xC45) = 0xFF;
    MEM16(esi + 0xC50) = LO16(edi);
    MEM8(esi + 0xC46) = 0;
    MEM32(esi + 0xC84) = ebx;
    MEM32(esi + 0xC88) = ebx;
    MEM8(esi + 0xC83) = LO8(ebx);
    MEM8(esi + 0xC80) = 0;
    MEM8(esi + 0xC81) = 0xFF;
    MEM16(esi + 0xC8C) = LO16(edi);
    MEM8(esi + 0xC82) = 0;
    MEM32(esi + 0x1644) = ebx;
    MEM32(esi + 0x1648) = ebx;
    MEM8(esi + 0x1643) = LO8(ebx);
    MEM8(esi + 0x1640) = 0;
    MEM8(esi + 0x1641) = 0xFF;
    MEM16(esi + 0x164C) = LO16(edi);
    MEM8(esi + 0x1642) = 0;
    eax = esi + 0x176C;
    ebx = 0x10;
    goto loc_001005F0;

    /* nop */

loc_001005F0:
    PUSH32(esp, 0); sub_00103860(); /* call 0x00103860 */

loc_001005F5:
    eax = eax + 0x240;
    ebx--;
    if ((ebx != 0)) goto loc_001005F0; /* jne: not equal / not zero */

loc_001005FD:
    MEM32(esi + 0x3B6C) = ebp;
    ebx = esi + 0x3B70;
    MEM32(esp + 0xC) = 0x18;

loc_00100611:
    eax = ebx;
    PUSH32(esp, 0); sub_000FFD50(); /* call 0x000FFD50 */

loc_00100618:
    eax = MEM32(esp + 0xC);
    ebx = ebx + 0xC0;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_00100611; /* jne: not equal / not zero */

loc_00100629:
    xmm0.f[0] = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x4D70) = ebp;
    MEM32(esi + 0x4D74) = ebp;
    MEM8(esi + 0x4D78) = 0;
    MEM8(esi + 0x4D79) = 0;
    MEMF(esi + 0x4D7C) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x4D80) = ebp;
    MEM16(esi + 0x4D84) = LO16(edi);
    MEM8(esi + 0x4D8C) = 1;
    MEM32(esi + 0x4D88) = ebp;
    MEM32(esi + 0x4DA0) = ebp;
    MEM32(esi + 0x4DA4) = ebp;
    eax = esi + 0x4D93;
    ecx = 6;
    /* nop */

loc_00100680:
    MEM8(eax + -6) = 0;
    MEM8(eax) = 0;
    eax++;
    ecx--;
    if ((ecx != 0)) goto loc_00100680; /* jne: not equal / not zero */

loc_0010068B:
    eax = MEM32(esi + 0x4DA0);
    POP32(esp, edi);
    /* cmp eax, ebp - flags set for next jcc */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(eax, ebp)) goto loc_001006B6; /* jg: greater (signed >) */

loc_00100698:
    MEM8(esi + 0x4D9A) = 0;
    MEM8(esi + 0x4D9B) = 0;
    MEM8(esi + 0x4D99) = 0;
    MEM8(esi + 0x4D9C) = 0xFF;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001006B6:
    eax--;

}
