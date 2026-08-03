#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7240
 * Original: 0x001B7240 - 0x001B737C (316 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7240(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7240:
    edx = MEM32(eax + 0x4AC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    if (CMP_LE(edx, esi)) goto loc_001B7379; /* jle: less or equal (signed <=) */

loc_001B7256:
    edx = eax + 0x2C;
    PUSH32(esp, ebx);
    /* nop */

loc_001B7260:
    if (CMP_EQ(MEM32(edx), edi)) goto loc_001B7276; /* je: equal / zero */

loc_001B7264:
    ebx = MEM32(eax + 0x4AC);
    ecx++;
    edx = edx + 0x18;
    if (CMP_L(ecx, ebx)) goto loc_001B7260; /* jl: less (signed <) */

loc_001B7272:
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B7276:
    ecx = ecx + ecx * 2;
    edx = MEM32(eax + ecx * 8 + 0x274);
    ecx = eax + ecx * 8;
    ebx = ebx | 0xFFFFFFFFu;
    if (CMP_EQ(edx, esi)) goto loc_001B72A4; /* je: equal / zero */

loc_001B728A:
    MEM8(edx) = 0;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = ebx;
    MEM8(edx + 1) = 0xFF;
    MEM16(edx + 0xC) = 0xFFFF;
    MEM8(edx + 3) = LO8(ebx);
    MEM8(edx + 2) = 0;

loc_001B72A4:
    edx = MEM32(eax + 0x4AC);
    if (CMP_LE(edx, 1)) goto loc_001B7357; /* jle: less or equal (signed <=) */

loc_001B72B3:
    edx = edx + edx * 2;
    edx = eax + edx * 8 + 0x14;
    edi = ecx + 0x2C;
    PUSH32(esp, ebp);
    ebp = MEM32(edx);
    MEM32(edi) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(edi + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(edi + 8) = ebp;
    ebp = MEM32(edx + 0xC);
    MEM32(edi + 0xC) = ebp;
    ebp = MEM32(edx + 0x10);
    MEM32(edi + 0x10) = ebp;
    edx = MEM32(edx + 0x14);
    MEM32(edi + 0x14) = edx;
    edx = MEM32(eax + 0x4AC);
    edx = edx + edx * 2;
    ecx = ecx + 0x26C;
    edx = eax + edx * 8 + 0x254;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edi = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edi;
    edi = MEM32(edx + 0x10);
    MEM32(ecx + 0x10) = edi;
    edx = MEM32(edx + 0x14);
    MEM32(ecx + 0x14) = edx;
    ecx = MEM32(eax + 0x4AC);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 8 + 0x14;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = esi;
    ecx = MEM32(eax + 0x4AC);
    edx = ecx + ecx * 2;
    ecx = eax + edx * 8 + 0x254;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = esi;
    ecx = MEM32(eax + 0x4AC);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx--;
    POP32(esp, edi);
    MEM32(eax + 0x4AC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001B7357:
    MEM32(ecx + 0x2C) = ebx;
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x34) = esi;
    MEM32(ecx + 0x26C) = ebx;
    MEM32(ecx + 0x270) = ebx;
    MEM32(ecx + 0x274) = esi;
    MEM32(eax + 0x4AC) = MEM32(eax + 0x4AC) - 1;
    POP32(esp, ebx);

loc_001B7379:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
