#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CC010
 * Original: 0x001CC010 - 0x001CC0BE (174 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC010:
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    /* cmp ecx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ecx, ebx)) goto loc_001CC044; /* je: equal / zero */

loc_001CC023:
    ecx = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_001CC03F; /* jle: less or equal (signed <=) */

loc_001CC029:
    /* nop */

loc_001CC030:
    edx = MEM32(eax + 0x24);
    MEM8(edx + ecx * 8 + 4) = LO8(ebx);
    edx = MEM32(eax + 0x1C);
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_001CC030; /* jl: less (signed <) */

loc_001CC03F:
    MEM32(eax + 0x30) = ebx;
    goto loc_001CC06A;

loc_001CC044:
    esi = MEM32(ebp + 0x134);
    ecx = 0; /* xor self */
    if (CMP_LE(edx, ebx)) goto loc_001CC06A; /* jle: less or equal (signed <=) */

loc_001CC050:
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    edx = edi;

loc_001CC056:
    if (CMP_EQ(MEM32(edx), esi)) goto loc_001CC065; /* je: equal / zero */

loc_001CC05A:
    ecx++;
    edx = edx + 8;
    if (CMP_L(ecx, MEM32(eax + 0x1C))) goto loc_001CC056; /* jl: less (signed <) */

loc_001CC063:
    goto loc_001CC069;

loc_001CC065:
    MEM8(edi + ecx * 8 + 4) = LO8(ebx);

loc_001CC069:
    POP32(esp, edi);

loc_001CC06A:
    ecx = ebp + -8;
    MEM32(ebp + 0x134) = ebx;
    MEM32(ebp + 0x138) = ebx;
    edx = MEM32(ecx);
    if (CMP_EQ(edx, ebx)) goto loc_001CC085; /* je: equal / zero */

loc_001CC07F:
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;

loc_001CC085:
    edx = MEM32(ecx + 4);
    if (CMP_EQ(edx, ebx)) goto loc_001CC095; /* je: equal / zero */

loc_001CC08C:
    esi = MEM32(ecx);
    MEM32(edx) = esi;
    MEM32(ecx + 4) = ebx;
    goto loc_001CC09A;

loc_001CC095:
    edx = MEM32(ecx);
    MEM32(eax + 0x18) = edx;

loc_001CC09A:
    edx = MEM32(eax + 0x14);
    edx = MEM32(edx + 0x10);
    POP32(esp, esi);
    POP32(esp, ebp);
    /* cmp edx, ebx - flags set for next jcc */
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    if (CMP_EQ(edx, ebx)) goto loc_001CC0B5; /* je: equal / zero */

loc_001CC0A9:
    MEM32(edx + 4) = ecx;
    eax = MEM32(eax + 0x14);
    MEM32(eax + 0x10) = ecx;
    esp += 8; return; /* ret 4 */

loc_001CC0B5:
    edx = MEM32(eax + 0x14);
    MEM32(edx + 0x10) = ecx;
    esp += 8; return; /* ret 4 */

}
