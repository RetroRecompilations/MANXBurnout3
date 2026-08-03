#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0024468A
 * Original: 0x0024468A - 0x002446F8 (110 bytes, 43 insns)
 * Category: rw_plcore
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0024468A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0024468A:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -24) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -32) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -28) = 0x7FFFFFFF;
    PUSH32(esp, 0); sub_0024877E(); /* call 0x0024877E */

loc_002446B7:
    esp = esp + 0xC;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    esi = eax;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_002446CC; /* js: sign (negative) */

loc_002446C1:
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    goto loc_002446D9;

loc_002446CC:
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_002446D7:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002446D9:
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_002446E6; /* js: sign (negative) */

loc_002446DE:
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_002446F3;

loc_002446E6:
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0024647B(); /* call 0x0024647B */

loc_002446F1:
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002446F3:
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
