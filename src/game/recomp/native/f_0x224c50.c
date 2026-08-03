#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00224C50
 * Original: 0x00224C50 - 0x00224C9D (77 bytes, 31 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00224C50:
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    ecx = MEM32(edi);
    eax = eax | 0xFFFFFFFFu;
    if (TEST_Z(ecx, ecx)) goto loc_00224C9B; /* je: equal / zero */

loc_00224C5E:
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00220DF0(); /* call 0x00220DF0 */

loc_00224C74:
    esp = esp + 0x10;
    /* cmp esi, 0x73746174 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(esi, 0x73746174)) goto loc_00224C9B; /* jne: not equal / not zero */

loc_00224C80:
    ecx = MEM32(edi + 0x118);
    if (CMP_EQ(ecx, 1)) goto loc_00224C99; /* je: equal / zero */

loc_00224C8B:
    if (CMP_LE(eax & eax, 0)) goto loc_00224C9B; /* jle: less or equal (signed <=) */

loc_00224C8F:
    if (CMP_EQ(ecx, 0x14)) goto loc_00224C9B; /* je: equal / zero */

loc_00224C94:
    if (CMP_EQ(ecx, 0x10)) goto loc_00224C9B; /* je: equal / zero */

loc_00224C99:
    eax = 0; /* xor self */

loc_00224C9B:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
