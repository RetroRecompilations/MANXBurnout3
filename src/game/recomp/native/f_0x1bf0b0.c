#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BF0B0
 * Original: 0x001BF0B0 - 0x001BF130 (128 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BF0B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BF0B0:
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx + 8;
    /* cmp eax, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_001BF0EF; /* je: equal / zero */

loc_001BF0BD:
    /* nop */

loc_001BF0C0:
    ecx = MEM32(ebx + 0x3C);
    if (CMP_L(ecx, MEM32(ebx + 0x34))) goto loc_001BF0EF; /* jl: less (signed <) */

loc_001BF0C8:
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = eax + 0xFFFFFFECu;
    PUSH32(esp, 1);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, eax);
    eax = ebx;
    ecx = 0; /* xor self */
    edi = ebx;
    PUSH32(esp, 0); sub_001BF130(); /* call 0x001BF130 */

loc_001BF0E8:
    eax = MEM32(ebx + 0xC);
    if (CMP_NE(eax, esi)) goto loc_001BF0C0; /* jne: not equal / not zero */

loc_001BF0EF:
    esi = MEM32(ebx + 0x14);
    ebp = ebx + 0x10;
    if (CMP_EQ(esi, ebp)) goto loc_001BF12C; /* je: equal / zero */

loc_001BF0F9:
    /* nop */

loc_001BF100:
    edi = esi + -28;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001BF410(); /* call 0x001BF410 */

loc_001BF109:
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(edx) = eax;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(ecx + 4) = edx;
    MEM32(esi + 4) = 0;
    MEM32(esi) = 0;
    esi = MEM32(ebx + 0x14);
    if (CMP_NE(esi, ebp)) goto loc_001BF100; /* jne: not equal / not zero */

loc_001BF12C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
