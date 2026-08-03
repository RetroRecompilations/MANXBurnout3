#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00220900
 * Original: 0x00220900 - 0x002209A8 (168 bytes, 64 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00220900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00220900:
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_00339339(); /* call 0x00339339 */

loc_0022091F:
    ebx = eax;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0022092C; /* jne: not equal / not zero */

loc_00220926:
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0022092C:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00220935:
    esp = esp + 4;
    esi = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    PUSH32(esp, 0x8004667Eu);
    ecx = 0x14;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, ebx);
    MEM32(esi + 0x18) = ebx;
    PUSH32(esp, 0); sub_0033935A(); /* call 0x0033935A */

loc_00220958:
    if (CMP_NE(ebp, 2)) goto loc_00220971; /* jne: not equal / not zero */

loc_0022095D:
    PUSH32(esp, 4);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00339365(); /* call 0x00339365 */

loc_00220971:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0); sub_0021C5C0(); /* call 0x0021C5C0 */

loc_00220989:
    eax = MEM32(0x41CFE4);
    MEM32(esi) = eax;
    PUSH32(esp, 0);
    MEM32(0x41CFE4) = esi;
    PUSH32(esp, 0); sub_0021C650(); /* call 0x0021C650 */

loc_0022099D:
    esp = esp + 8;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
