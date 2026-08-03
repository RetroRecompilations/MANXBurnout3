#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0020B590
 * Original: 0x0020B590 - 0x0020B610 (128 bytes, 62 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B590:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x94);
    ebx = 0; /* xor self */
    /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(esi, ebx)) goto loc_0020B608; /* je: equal / zero */

loc_0020B5AA:
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0); sub_002F56F4(); /* call 0x002F56F4 */

loc_0020B5B9:
    if (TEST_S(eax, eax)) goto loc_0020B608; /* jl: less (signed <) */

loc_0020B5BD:
    eax = MEM32(esp + 0x10);
    eax = eax & edi;
    if (CMP_EQ(eax, ebx)) goto loc_0020B608; /* je: equal / zero */

loc_0020B5C7:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_002F56B0(); /* call 0x002F56B0 */

loc_0020B5D2:
    if (CMP_AE(ebp, 0xFFFFFFFFu)) goto loc_0020B5D8; /* jae: above or equal (unsigned >=) */

loc_0020B5D7:
    edi++;

loc_0020B5D8:
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D161A(); /* call 0x001D161A */

loc_0020B5DF:
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F56F4(); /* call 0x002F56F4 */

loc_0020B5EA:
    if (TEST_Z(MEM8(esp + 0x10), 1)) goto loc_0020B5FD; /* je: equal / zero */

loc_0020B5F1:
    if (CMP_BE(edi, ebp)) goto loc_0020B5D2; /* jbe: below or equal (unsigned <=) */

loc_0020B5F5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0020B5FD:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0020B608:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
