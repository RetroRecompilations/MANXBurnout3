#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF857
 * Original: 0x001CF857 - 0x001CF8A5 (78 bytes, 31 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF857(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001CF857:
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    if (CMP_BE(eax, 1)) goto loc_001CF890; /* jbe: below or equal (unsigned <=) */

loc_001CF864:
    if (CMP_EQ(eax, 2)) goto loc_001CF882; /* je: equal / zero */

loc_001CF869:
    if (CMP_EQ(eax, 4)) goto loc_001CF882; /* je: equal / zero */

loc_001CF86E:
    if (CMP_NE(eax, 8)) goto loc_001CF89E; /* jne: not equal / not zero */

loc_001CF873:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41A7C4), _icall_esp); /* indirect call */
    }

loc_001CF880:
    goto loc_001CF8A1;

loc_001CF882:
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF79D(); /* call 0x001CF79D */

loc_001CF88E:
    goto loc_001CF8A1;

loc_001CF890:
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF79D(); /* call 0x001CF79D */

loc_001CF89C:
    goto loc_001CF8A1;

loc_001CF89E:
    PUSH32(esp, 0x32);
    POP32(esp, eax);

loc_001CF8A1:
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
