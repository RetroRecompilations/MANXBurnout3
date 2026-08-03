#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000FDAC0
 * Original: 0x000FDAC0 - 0x000FDB3F (127 bytes, 42 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDAC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDAC0:
    eax = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    edx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_000FDAED; /* jle: less or equal (signed <=) */

loc_000FDACC:
    ecx = edi + 8;
    /* nop */

loc_000FDAD0:
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ebx)) goto loc_000FDAE2; /* je: equal / zero */

loc_000FDAD6:
    MEM8(eax + 0x5D4) = LO8(ebx);
    MEM32(eax + 0x4F0) = ebx;

loc_000FDAE2:
    eax = MEM32(edi + 0x28);
    edx++;
    ecx = ecx + 4;
    if (CMP_L(edx, eax)) goto loc_000FDAD0; /* jl: less (signed <) */

loc_000FDAED:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edi + 0x4E0;
    ebp = 8;
    /* nop */

loc_000FDB00:
    ecx = ecx | 0xFFFFFFFFu;
    eax = esi;
    PUSH32(esp, 0); sub_001B6840(); /* call 0x001B6840 */

loc_000FDB0A:
    esi = esi + 0x90;
    ebp--;
    if ((ebp != 0)) goto loc_000FDB00; /* jne: not equal / not zero */

loc_000FDB13:
    eax = MEM32(edi + 0x30E1C);
    /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, esi);
    MEM32(edi + 0x9A50) = ebx;
    MEM16(edi + 0x9A58) = 0xFFFF;
    POP32(esp, ebp);
    if (CMP_EQ(eax, ebx)) goto loc_000FDB3D; /* je: equal / zero */

loc_000FDB2E:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214820(); /* call 0x00214820 */

loc_000FDB34:
    esp = esp + 4;
    MEM32(edi + 0x30E1C) = ebx;

loc_000FDB3D:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
