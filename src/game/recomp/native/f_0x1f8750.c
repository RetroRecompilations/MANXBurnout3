#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F8750
 * Original: 0x001F8750 - 0x001F87FC (172 bytes, 78 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8750:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(esi, esi)) goto loc_001F8761; /* jne: not equal / not zero */

loc_001F875B:
    esi = MEM32(0x764134);

loc_001F8761:
    /* cmp MEM32(esp + 0x20), 1 - flags set for next jcc */
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(MEM32(esp + 0x20), 1)) goto loc_001F8791; /* jne: not equal / not zero */

loc_001F8774:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_001F8779:
    esp = esp + 0xC;
    if (CMP_NE(eax, 1)) goto loc_001F8791; /* jne: not equal / not zero */

loc_001F8781:
    eax = MEM32(esp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001F878B; /* je: equal / zero */

loc_001F8789:
    MEM32(eax) = esi;

loc_001F878B:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F8791:
    eax = esi + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    /* cmp edi, eax - flags set for next jcc */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(edi, eax)) goto loc_001F87D2; /* je: equal / zero */

loc_001F879F:
    /* nop */

loc_001F87A0:
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    esi = edi + -24;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebp, _icall_esp); /* indirect call */
    }

loc_001F87AC:
    esp = esp + 0xC;
    if (CMP_EQ(eax, 1)) goto loc_001F87E7; /* je: equal / zero */

loc_001F87B4:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F8750(); /* call 0x001F8750 */

loc_001F87C3:
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_001F87E2; /* jne: not equal / not zero */

loc_001F87CA:
    edi = MEM32(edi);
    if (CMP_NE(edi, MEM32(esp + 0x24))) goto loc_001F87A0; /* jne: not equal / not zero */

loc_001F87D2:
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001F87E0; /* je: equal / zero */

loc_001F87DA:
    MEM32(eax) = 0;

loc_001F87E0:
    eax = 0; /* xor self */

loc_001F87E2:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F87E7:
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001F87F5; /* je: equal / zero */

loc_001F87EF:
    edx = MEM32(esp + 0x14);
    MEM32(eax) = edx;

loc_001F87F5:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
