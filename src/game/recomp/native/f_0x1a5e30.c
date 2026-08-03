#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5E30
 * Original: 0x001A5E30 - 0x001A5F10 (224 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5E30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A5E30:
    PUSH32(esp, ecx);
    eax = MEM32(0x6137E0);
    ecx--;
    /* cmp ecx, 0xA - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(ecx, 0xA)) goto loc_001A5E9C; /* ja: above (unsigned >) */

loc_001A5E3E:
    { uint32_t _jt = MEM32(ecx * 4 + 0x1A5F10); /* switch: 11 entries, 7 targets */
    if (_jt == 0x001A5E45u) goto loc_001A5E45;
    if (_jt == 0x001A5E50u) goto loc_001A5E50;
    if (_jt == 0x001A5E5Bu) goto loc_001A5E5B;
    if (_jt == 0x001A5E66u) goto loc_001A5E66;
    if (_jt == 0x001A5E74u) goto loc_001A5E74;
    if (_jt == 0x001A5E88u) goto loc_001A5E88;
    if (_jt == 0x001A5E9Cu) goto loc_001A5E9C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001A5E45:
    edi = MEM32(eax + 0x54);
    ecx = MEM32(eax + 0x58);
    esi = MEM32(eax + 0x5C);
    goto loc_001A5EA8;

loc_001A5E50:
    edi = MEM32(eax + 0x60);
    ecx = MEM32(eax + 0x64);
    esi = MEM32(eax + 0x68);
    goto loc_001A5EA8;

loc_001A5E5B:
    edi = MEM32(eax + 0x6C);
    ecx = MEM32(eax + 0x70);
    esi = MEM32(eax + 0x74);
    goto loc_001A5EA8;

loc_001A5E66:
    edi = MEM32(eax + 0x78);
    ecx = MEM32(eax + 0x7C);
    esi = MEM32(eax + 0x80);
    goto loc_001A5EA8;

loc_001A5E74:
    edi = MEM32(eax + 0x84);
    ecx = MEM32(eax + 0x88);
    esi = MEM32(eax + 0x8C);
    goto loc_001A5EA8;

loc_001A5E88:
    edi = MEM32(eax + 0x90);
    ecx = MEM32(eax + 0x94);
    esi = MEM32(eax + 0x98);
    goto loc_001A5EA8;

loc_001A5E9C:
    edi = MEM32(esp + 8);
    ecx = MEM32(esp + 8);
    esi = MEM32(esp + 8);

loc_001A5EA8:
    if (CMP_NE(ecx, 1)) goto loc_001A5EB3; /* jne: not equal / not zero */

loc_001A5EAD:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001A5EB3:
    edx = (uint32_t)(int32_t)SMEM16(0x649B2A);
    eax = MEM32(0x649B28);
    eax = eax << 0x10;
    eax = eax + edx;
    edx = MEM32(0x649B2C);
    eax = eax + edx;
    edx = edx + eax;
    MEM32(0x649B2C) = edx;
    edx = 0; /* xor self */
    MEM32(0x649B28) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_001A5EFE; /* jle: less or equal (signed <=) */

loc_001A5EE6:
    ebx = edi + 0x10;
    /* nop */

loc_001A5EF0:
    esi = esi + MEM32(ebx);
    if (CMP_LE(edx, esi)) goto loc_001A5F05; /* jle: less or equal (signed <=) */

loc_001A5EF6:
    eax++;
    ebx = ebx + 0x18;
    if (CMP_L(eax, ecx)) goto loc_001A5EF0; /* jl: less (signed <) */

loc_001A5EFE:
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001A5F05:
    eax = eax + eax * 2;
    POP32(esp, ebx);
    eax = edi + eax * 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
