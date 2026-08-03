#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00157680
 * Original: 0x00157680 - 0x00157714 (148 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157680:
    PUSH32(esp, ecx);
    eax = MEM32(0x4D1FE8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */

loc_00157692:
    ecx = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    esi = ebx;
    if (CMP_LE(edi & edi, 0)) goto loc_001576B0; /* jle: less or equal (signed <=) */

loc_0015769A:
    eax = MEM32(ebp + 8);
    eax = eax + 0x14;

loc_001576A0:
    edx = MEM32(eax);
    if (CMP_L(esi, edx)) goto loc_001576B0; /* jl: less (signed <) */

loc_001576A6:
    esi = esi - edx;
    ecx++;
    eax = eax + 0x18;
    if (CMP_L(ecx, edi)) goto loc_001576A0; /* jl: less (signed <) */

loc_001576B0:
    ebx++;
    if (CMP_L(ebx, 0x64)) goto loc_00157692; /* jl: less (signed <) */

loc_001576B6:
    eax = MEM32(ebp + 0xC);
    if (CMP_LE(eax & eax, 0)) goto loc_0015770E; /* jle: less or equal (signed <=) */

loc_001576BD:
    ebp = MEM32(ebp + 8);
    ebp = ebp + 0x10;
    MEM32(esp + 0x10) = eax;

loc_001576C7:
    eax = MEM32(ebp + 4);
    if (CMP_LE(eax & eax, 0)) goto loc_00157700; /* jle: less or equal (signed <=) */

loc_001576CE:
    ecx = MEM32(ebp);
    ecx = ecx + 0x34;
    edi = eax;

loc_001576D6:
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    eax = 0x39D870;

loc_001576E3:
    ebx = MEM32(eax);
    if (CMP_NE(ebx, edx)) goto loc_001576F0; /* jne: not equal / not zero */

loc_001576E9:
    ebx = MEM32(eax + 4);
    if (CMP_EQ(ebx, esi)) goto loc_001576FA; /* je: equal / zero */

loc_001576F0:
    eax = eax + 8;
    if (CMP_L(eax, 0x39DB90)) goto loc_001576E3; /* jl: less (signed <) */

loc_001576FA:
    ecx = ecx + 0x40;
    edi--;
    if ((edi != 0)) goto loc_001576D6; /* jne: not equal / not zero */

loc_00157700:
    eax = MEM32(esp + 0x10);
    ebp = ebp + 0x18;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_001576C7; /* jne: not equal / not zero */

loc_0015770E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
