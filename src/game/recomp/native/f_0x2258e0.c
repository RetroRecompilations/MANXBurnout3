#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002258E0
 * Original: 0x002258E0 - 0x0022597C (156 bytes, 56 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002258E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002258E0:
    esp = esp - 0xFA0;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xFAC);
    eax = MEM32(edi + 0x14);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_00225973; /* je: equal / zero */

loc_002258F8:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AA80(); /* call 0x0031AA80 */

loc_002258FE:
    if (TEST_Z(eax, eax)) goto loc_00225973; /* je: equal / zero */

loc_00225902:
    eax = MEM32(edi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0031AA8B(); /* call 0x0031AA8B */

loc_0022590E:
    /* cmp MEM32(edi + 0x55F4), ebp - flags set for next jcc */
    MEM32(edi + 0x14) = ebp;
    MEM8(esp + 0xC) = LO8(ebx);
    if (CMP_BE(MEM32(edi + 0x55F4), ebp)) goto loc_00225956; /* jbe: below or equal (unsigned <=) */

loc_0022591D:
    PUSH32(esp, esi);
    esi = edi + 0x4654;

loc_00225924:
    if (CMP_GE(ebp, 0xF8C)) goto loc_00225955; /* jge: greater or equal (signed >=) */

loc_0022592C:
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + ebp + 0x18;
    PUSH32(esp, 0x370FE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_00225942:
    ebp = ebp + eax;
    eax = MEM32(edi + 0x55F4);
    esp = esp + 0x10;
    ebx++;
    esi = esi + 0x10;
    if (CMP_B(ebx, eax)) goto loc_00225924; /* jb: below (unsigned <) */

loc_00225955:
    POP32(esp, esi);

loc_00225956:
    eax = MEM32(edi + 0x4644);
    /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00225973; /* je: equal / zero */

loc_00225961:
    ecx = MEM32(edi + 0x4648);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00225970:
    esp = esp + 0xC;

loc_00225973:
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0xFA0;
    esp += 4; return; /* ret */

}
