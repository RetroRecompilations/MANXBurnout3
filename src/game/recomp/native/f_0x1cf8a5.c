#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CF8A5
 * Original: 0x001CF8A5 - 0x001CF8EA (69 bytes, 25 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8A5(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CF8A5:
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    if (CMP_BE(eax, 1)) goto loc_001CF8D8; /* jbe: below or equal (unsigned <=) */

loc_001CF8B0:
    if (CMP_EQ(eax, 2)) goto loc_001CF8CC; /* je: equal / zero */

loc_001CF8B5:
    if (CMP_EQ(eax, 4)) goto loc_001CF8CC; /* je: equal / zero */

loc_001CF8BA:
    if (CMP_NE(eax, 8)) goto loc_001CF8E4; /* jne: not equal / not zero */

loc_001CF8BF:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41A7C8), _icall_esp); /* indirect call */
    }

loc_001CF8CA:
    goto loc_001CF8E7;

loc_001CF8CC:
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF7B7(); /* call 0x001CF7B7 */

loc_001CF8D6:
    goto loc_001CF8E7;

loc_001CF8D8:
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CF705(); /* call 0x001CF705 */

loc_001CF8E2:
    goto loc_001CF8E7;

loc_001CF8E4:
    PUSH32(esp, 0x32);
    POP32(esp, eax);

loc_001CF8E7:
    esp += 12; return; /* ret 8 */

}
