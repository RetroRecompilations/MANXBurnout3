#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00202610
 * Original: 0x00202610 - 0x00202669 (89 bytes, 41 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00202610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00202610:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x12C);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(ecx & ecx, 0)) goto loc_0020265B; /* jbe: below or equal (unsigned <=) */

loc_00202627:
    ebp = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    /* nop */

loc_00202630:
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edi + 4);
    if (TEST_Z(eax, eax)) goto loc_0020264A; /* je: equal / zero */

loc_0020263B:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593B4), _icall_esp); /* indirect call */
    }

loc_00202643:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00202662; /* je: equal / zero */

loc_0020264A:
    eax = MEM32(ebx + 0x12C);
    ecx = MEM32(eax + 0xC);
    esi++;
    edi = edi + 0x20;
    if (CMP_B(esi, ecx)) goto loc_00202630; /* jb: below (unsigned <) */

loc_0020265B:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00202662:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
