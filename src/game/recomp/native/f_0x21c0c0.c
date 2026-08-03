#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C0C0
 * Original: 0x0021C0C0 - 0x0021C123 (99 bytes, 44 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C0C0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x38);
    if (TEST_NZ(eax, eax)) goto loc_0021C0DA; /* jne: not equal / not zero */

loc_0021C0CC:
    PUSH32(esp, 0); sub_0021BEC0(); /* call 0x0021BEC0 */

loc_0021C0D1:
    if (CMP_GE(eax, 1)) goto loc_0021C0DA; /* jge: greater or equal (signed >=) */

loc_0021C0D6:
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0021C0DA:
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x38);
    eax = MEM32(esi);
    MEM32(ebx + 0x38) = eax;
    MEM32(esi) = ecx;
    edx = MEM32(ebx + 0x18);
    eax = MEM32(ebx + 0x40);
    MEM32(eax + edx * 4) = esi;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(ebx + 0x10);
    eax++;
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(ebx + 0x24);
    edx--;
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x10) = edx;
    if (TEST_Z(eax, eax)) goto loc_0021C11B; /* je: equal / zero */

loc_0021C107:
    ecx = MEM32(esi);
    edx = MEM32(ebx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021C114:
    esp = esp + 0xC;
    if (CMP_LE(eax & eax, 0)) goto loc_0021C11E; /* jle: less or equal (signed <=) */

loc_0021C11B:
    MEM32(ebx + 8) = MEM32(ebx + 8) + 1;

loc_0021C11E:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
