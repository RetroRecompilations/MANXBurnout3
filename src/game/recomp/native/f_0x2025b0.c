#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002025B0
 * Original: 0x002025B0 - 0x00202607 (87 bytes, 41 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002025B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002025B0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x12C);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(ecx & ecx, 0)) goto loc_002025F9; /* jbe: below or equal (unsigned <=) */

loc_002025C7:
    ebp = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    /* nop */

loc_002025D0:
    eax = MEM32(eax + 0x10);
    eax = MEM32(edi + eax);
    if (TEST_Z(eax, eax)) goto loc_002025E8; /* je: equal / zero */

loc_002025DA:
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_002025E1:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00202600; /* je: equal / zero */

loc_002025E8:
    eax = MEM32(ebx + 0x12C);
    ecx = MEM32(eax + 0xC);
    esi++;
    edi = edi + 0x20;
    if (CMP_B(esi, ecx)) goto loc_002025D0; /* jb: below (unsigned <) */

loc_002025F9:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00202600:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
