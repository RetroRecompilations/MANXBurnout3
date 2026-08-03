#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00111BD0
 * Original: 0x00111BD0 - 0x00111CCB (251 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00111BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00111BD0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = edx + 0xE5F4;
    PUSH32(esp, ebp);
    eax = ebx;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(esp + 0xC) = eax;

loc_00111BE2:
    ebp = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = 0; /* xor self */
    if (CMP_EQ(ebp, edi)) goto loc_00111BFC; /* je: equal / zero */

loc_00111BEB:
    goto loc_00111BF0;

    /* nop */

loc_00111BF0:
    ebp = (uint32_t)(int32_t)SMEM16(eax + 8);
    eax = eax + 8;
    ecx++;
    if (CMP_NE(ebp, edi)) goto loc_00111BF0; /* jne: not equal / not zero */

loc_00111BFC:
    eax = esi + ecx;
    ebp = (uint32_t)(int32_t)SMEM16(edx + eax * 8 + 0xE5FC);
    if (CMP_EQ(ebp, edi)) goto loc_00111C29; /* je: equal / zero */

loc_00111C0B:
    eax = edx + eax * 8 + 0xE5F8;

loc_00111C12:
    ebp = MEM32(eax);
    MEM32(eax + -8) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(eax + -4) = ebp;
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    eax = eax + 8;
    ecx++;
    if (CMP_NE(ebp, edi)) goto loc_00111C12; /* jne: not equal / not zero */

loc_00111C29:
    eax = MEM32(edx + 0x1CB74);
    eax = eax - 2;
    if (CMP_GE(ecx, eax)) goto loc_00111C5C; /* jge: greater or equal (signed >=) */

loc_00111C36:
    eax = esi + ecx;
    eax = edx + eax * 8 + 0xE5F0;

loc_00111C40:
    ebp = MEM32(eax + 0x10);
    MEM32(eax) = ebp;
    ebp = MEM32(eax + 0x14);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(edx + 0x1CB74);
    ecx++;
    ebp = ebp - 2;
    eax = eax + 8;
    if (CMP_L(ecx, ebp)) goto loc_00111C40; /* jl: less (signed <) */

loc_00111C5C:
    eax = MEM32(esp + 0xC);
    eax = eax + 0x4C80;
    esi = esi + 0x990;
    ebx = ebx + 0x4C80;
    /* cmp esi, 0x1CB0 - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(esi, 0x1CB0)) goto loc_00111BE2; /* jl: less (signed <) */

loc_00111C81:
    MEM32(edx + 0x1CB74) = MEM32(edx + 0x1CB74) + 0xFFFFFFFEu;
    esi = edx + 0xE5F4;
    ebx = 3;

loc_00111C93:
    eax = MEM32(edx + 0x1CB74);
    ecx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00111CBD; /* jle: less or equal (signed <=) */

loc_00111C9F:
    eax = esi;

loc_00111CA1:
    ebp = (uint32_t)(int32_t)SMEM16(eax);
    if (CMP_NE(ebp, MEM32(edx + 0x1CB70))) goto loc_00111CAF; /* jne: not equal / not zero */

loc_00111CAC:
    MEM16(eax) = LO16(edi);

loc_00111CAF:
    ebp = MEM32(edx + 0x1CB74);
    ecx++;
    eax = eax + 8;
    if (CMP_L(ecx, ebp)) goto loc_00111CA1; /* jl: less (signed <) */

loc_00111CBD:
    esi = esi + 0x4C80;
    ebx--;
    if ((ebx != 0)) goto loc_00111C93; /* jne: not equal / not zero */

loc_00111CC6:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
