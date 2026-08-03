#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00243816
 * Original: 0x00243816 - 0x0024386D (87 bytes, 37 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00243816(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00243816:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, 0); sub_00246622(); /* call 0x00246622 */

loc_00243844:
    esp = esp + 0xC;
    /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_00243867; /* je: equal / zero */

loc_0024384D:
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_0024385A; /* js: sign (negative) */

loc_00243852:
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_00243867;

loc_0024385A:
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_00243865:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00243867:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
