#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220AD0
 * Original: 0x00220AD0 - 0x00220B82 (178 bytes, 72 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220AD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220AD0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 8) = 1;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00220AEF; /* jne: not equal / not zero */

loc_00220AE9:
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00220AEF:
    ecx = MEM32(esp + 0x14);
    /* test ecx, ecx - flags set for next jcc */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_00220B08; /* je: equal / zero */

loc_00220AFC:
    if (CMP_AE(MEM32(edx), 0x10)) goto loc_00220B08; /* jae: above or equal (unsigned >=) */

loc_00220B01:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00220B08:
    if (CMP_NE(MEM32(ebx + 8), 2)) goto loc_00220B7B; /* jne: not equal / not zero */

loc_00220B0E:
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003393A0(); /* call 0x003393A0 */

loc_00220B17:
    ebp = eax;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00220B7A; /* je: equal / zero */

loc_00220B1E:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8004667Eu);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0033935A(); /* call 0x0033935A */

loc_00220B2E:
    PUSH32(esp, 0x50);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00220B35:
    esi = eax;
    eax = 0; /* xor self */
    ecx = 0x14;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x18) = ebp;
    ecx = MEM32(ebx + 8);
    MEM32(esi + 8) = ecx;
    edx = MEM32(ebx + 0xC);
    MEM32(esi + 0xC) = edx;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 0);
    MEM32(esi + 0x10) = eax;
    MEM8(esi + 0x14) = 1;
    PUSH32(esp, 0); sub_0021C5C0(); /* call 0x0021C5C0 */

loc_00220B62:
    ecx = MEM32(0x41CFE4);
    MEM32(esi) = ecx;
    PUSH32(esp, 0);
    MEM32(0x41CFE4) = esi;
    PUSH32(esp, 0); sub_0021C650(); /* call 0x0021C650 */

loc_00220B77:
    esp = esp + 0xC;

loc_00220B7A:
    POP32(esp, ebp);

loc_00220B7B:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
