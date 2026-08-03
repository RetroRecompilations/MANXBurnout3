#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA1E0
 * Original: 0x001CA1E0 - 0x001CA21F (63 bytes, 26 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA1E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CA1E0:
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    MEM32(ebx + 8) = edi;
    if (CMP_BE(edi & edi, 0)) goto loc_001CA1FE; /* jbe: below or equal (unsigned <=) */

loc_001CA1EA:
    /* nop */

loc_001CA1F0:
    ecx = MEM32(ebx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001CA1F9:
    esi++;
    if (CMP_B(esi, edi)) goto loc_001CA1F0; /* jb: below (unsigned <) */

loc_001CA1FE:
    /* cmp MEM32(ebx + 8), 1 - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(MEM32(ebx + 8), 1)) goto loc_001CA212; /* jne: not equal / not zero */

loc_001CA205:
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_001F7800(); /* call 0x001F7800 */

loc_001CA20C:
    esp = esp + 4;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001CA212:
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_001F7800(); /* call 0x001F7800 */

loc_001CA219:
    esp = esp + 4;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}
