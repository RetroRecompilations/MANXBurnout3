#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225760
 * Original: 0x00225760 - 0x00225825 (197 bytes, 78 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225760:
    eax = MEM32(esp + 0xC);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0022578C; /* je: equal / zero */

loc_00225769:
    esi = MEM32(esp + 0x14);
    if (TEST_Z(esi, esi)) goto loc_0022578C; /* je: equal / zero */

loc_00225771:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA80(); /* call 0x0031AA80 */

loc_00225777:
    if (CMP_GE(eax & eax, 0)) goto loc_00225791; /* jge: greater or equal (signed >=) */

loc_0022577B:
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x370FAC);
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_00225789:
    esp = esp + 4;

loc_0022578C:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00225791:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0031AA80(); /* call 0x0031AA80 */

loc_00225797:
    if (CMP_NE(eax, 0x1500F1)) goto loc_00225814; /* jne: not equal / not zero */

loc_0022579E:
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = ebp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AB64(); /* call 0x0031AB64 */

loc_002257B5:
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x370F90);
    MEM32(ebp) = eax;
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_002257C7:
    eax = MEM32(ebp);
    esp = esp + 8;
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00225800; /* jle: less or equal (signed <=) */

loc_002257D3:
    ecx = MEM32(edi + 4);
    eax = MEM32(edi);
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x370F64);
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_002257F2:
    eax = MEM32(ebp);
    esp = esp + 0x20;
    ebx++;
    edi = edi + 0x56;
    if (CMP_L(ebx, eax)) goto loc_002257D3; /* jl: less (signed <) */

loc_00225800:
    PUSH32(esp, 0x370F58);
    PUSH32(esp, 0); sub_002256C0(); /* call 0x002256C0 */

loc_0022580A:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00225814:
    ecx = 0; /* xor self */
    /* cmp eax, 0x1500F0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0x1500F0)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    ecx = ecx + 0xFFFFFFFEu;
    eax = ecx;
    esp += 4; return; /* ret */

}
