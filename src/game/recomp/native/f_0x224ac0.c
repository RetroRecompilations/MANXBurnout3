#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00224AC0
 * Original: 0x00224AC0 - 0x00224B3F (127 bytes, 52 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224AC0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = MEM32(edi + 0x120);
    eax = eax | 0xFFFFFFFFu;
    if (CMP_GE(esi & esi, 0)) goto loc_00224AED; /* jge: greater or equal (signed >=) */

loc_00224ADD:
    ecx = ebx;
    esi = ecx + 1;

loc_00224AE2:
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00224AE2; /* jne: not equal / not zero */

loc_00224AE9:
    ecx = ecx - esi;
    esi = ecx;

loc_00224AED:
    if (CMP_LE(esi, 0x3E80)) goto loc_00224AFA; /* jle: less or equal (signed <=) */

loc_00224AF5:
    esi = 0x3E80;

loc_00224AFA:
    if (CMP_NE(MEM32(edi + 0x118), 0x10)) goto loc_00224B1E; /* jne: not equal / not zero */

loc_00224B03:
    ecx = MEM32(ebp + 4);
    eax = 0; /* xor self */
    if (TEST_NZ(ecx, ecx)) goto loc_00224B1E; /* jne: not equal / not zero */

loc_00224B0C:
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    eax = edi;
    PUSH32(esp, 0); sub_00223070(); /* call 0x00223070 */

loc_00224B15:
    esp = esp + 8;
    if (TEST_S(eax, eax)) goto loc_00224B1E; /* jl: less (signed <) */

loc_00224B1C:
    eax = esi;

loc_00224B1E:
    if (CMP_NE(MEM32(edi + 0x118), 0x14)) goto loc_00224B3A; /* jne: not equal / not zero */

loc_00224B27:
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00220B90(); /* call 0x00220B90 */

loc_00224B37:
    esp = esp + 0x18;

loc_00224B3A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
