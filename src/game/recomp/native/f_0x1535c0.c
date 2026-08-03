#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001535C0
 * Original: 0x001535C0 - 0x00153658 (152 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001535C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001535C0:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    ebx = eax;
    eax = ebx + 0x4E4;
    PUSH32(esp, edi);
    ecx = 0x16;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x18);
    MEM32(esp + 0x14) = eax;
    MEM32(ebx + 0x548) = esi;
    if (CMP_NE(ebp, 0xFFFFFFFFu)) goto loc_00153603; /* jne: not equal / not zero */

loc_001535EE:
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_001535F3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x566) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00153603:
    MEM8(ebx + 0x566) = 0;
    SET_LO8(ecx, MEM8(edx + 0x54));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00153623; /* je: equal / zero */

loc_00153611:
    eax = ebp;
    edi = ebx;
    PUSH32(esp, 0); sub_001537C0(); /* call 0x001537C0 */

loc_0015361A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00153623:
    /* cmp MEM32(ebx + 0x54C), 4 - flags set for next jcc */
    MEM32(ebx + 0x554) = ebp;
    if (CMP_NE(MEM32(ebx + 0x54C), 4)) goto loc_00153647; /* jne: not equal / not zero */

loc_00153632:
    eax = ebx;
    MEM32(ebx + 0x54C) = 5;
    PUSH32(esp, 0); sub_001530D0(); /* call 0x001530D0 */

loc_00153643:
    eax = MEM32(esp + 0x14);

loc_00153647:
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = ebx + 8;
    PUSH32(esp, 0); sub_00155D20(); /* call 0x00155D20 */

loc_00153651:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
