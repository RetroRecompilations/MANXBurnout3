#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00244B25
 * Original: 0x00244B25 - 0x00244B95 (112 bytes, 46 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00244B25(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00244B25:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + eax;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, esi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    PUSH32(esp, 0); sub_0024877E(); /* call 0x0024877E */

loc_00244B54:
    esp = esp + 0xC;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    esi = eax;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_00244B69; /* js: sign (negative) */

loc_00244B5E:
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    goto loc_00244B76;

loc_00244B69:
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_00244B74:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00244B76:
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_00244B83; /* js: sign (negative) */

loc_00244B7B:
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_00244B90;

loc_00244B83:
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_00244B8E:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00244B90:
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
