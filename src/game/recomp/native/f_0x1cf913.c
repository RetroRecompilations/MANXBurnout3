#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF913
 * Original: 0x001CF913 - 0x001CF95C (73 bytes, 30 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF913(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF913:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_001D7024(); /* call 0x001D7024 */

loc_001CF92B:
    if (TEST_S(eax, eax)) goto loc_001CF93D; /* jl: less (signed <) */

loc_001CF92F:
    eax = MEM32(ebp + -4);
    eax = eax >> 0x10;
    eax = eax & 0x5F;
    MEM32(ebp + -4) = eax;
    goto loc_001CF941;

loc_001CF93D:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_001CF941:
    PUSH32(esp, 0); sub_001CFF80(); /* call 0x001CFF80 */

loc_001CF946:
    eax--;
    if ((eax != 0)) goto loc_001CF953; /* jne: not equal / not zero */

loc_001CF949:
    PUSH32(esp, 0); sub_001CF8EA(); /* call 0x001CF8EA */

loc_001CF94E:
    if (CMP_NE(eax, 3)) goto loc_001CF957; /* jne: not equal / not zero */

loc_001CF953:
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF1u;

loc_001CF957:
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}
