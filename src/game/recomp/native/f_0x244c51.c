#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244C51
 * Original: 0x00244C51 - 0x00244C94 (67 bytes, 30 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244C51(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00244C51:
    if (CMP_NE(MEM32(0x41D4A8), 0)) goto loc_00244C5F; /* jne: not equal / not zero */

loc_00244C5A:
    g_seh_ebp = ebp; sub_00248FF0(); return; /* tail jmp 0x00248FF0 */

loc_00244C5F:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_00244C6A:
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00248F42(); /* call 0x00248F42 */

loc_00244C73:
    ebx = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    esi++;
    PUSH32(esp, 0); sub_00248F42(); /* call 0x00248F42 */

loc_00244C7F:
    POP32(esp, ecx);
    edi++;
    /* test ebx, ebx - flags set for next jcc */
    POP32(esp, ecx);
    ecx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00244C8C; /* je: equal / zero */

loc_00244C88:
    if (CMP_EQ(ebx, ecx)) goto loc_00244C6A; /* je: equal / zero */

loc_00244C8C:
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
