#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C190
 * Original: 0x0021C190 - 0x0021C1FA (106 bytes, 50 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C190(void)
{
    int _flags = 0; /* fallback flag var */

loc_0021C190:
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    if (CMP_L(eax, edi)) goto loc_0021C1A4; /* jl: less (signed <) */

loc_0021C1A0:
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0021C1A4:
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(edx + eax * 4);
    if (TEST_NZ(esi, esi)) goto loc_0021C1B4; /* jne: not equal / not zero */

loc_0021C1AF:
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0021C1B4:
    edx = MEM32(ecx + 0x14);
    if (CMP_GE(eax, edx)) goto loc_0021C1C8; /* jge: greater or equal (signed >=) */

loc_0021C1BB:
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    ebx++;
    edx--;
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0x14) = edx;
    POP32(esp, ebx);

loc_0021C1C8:
    edx = edi + -1;
    /* cmp eax, edx - flags set for next jcc */
    MEM32(ecx + 0x18) = edx;
    if (CMP_GE(eax, edx)) goto loc_0021C1E6; /* jge: greater or equal (signed >=) */

loc_0021C1D2:
    edx = MEM32(ecx + 0x40);
    edi = MEM32(edx + eax * 4 + 4);
    edx = edx + eax * 4;
    MEM32(edx) = edi;
    edx = MEM32(ecx + 0x18);
    eax++;
    if (CMP_L(eax, edx)) goto loc_0021C1D2; /* jl: less (signed <) */

loc_0021C1E6:
    eax = MEM32(esi);
    edx = MEM32(ecx + 0x38);
    MEM32(esi) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(ecx + 0x38) = esi;
    edx++;
    POP32(esp, esi);
    MEM32(ecx + 0x10) = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
