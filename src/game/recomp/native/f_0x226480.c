#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226480
 * Original: 0x00226480 - 0x002264D6 (86 bytes, 36 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226480(void)
{
    int _flags = 0; /* fallback flag var */

loc_00226480:
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    esp = esp - 0x54;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    esi = esi + 0xFFFFFFF8u;
    if (TEST_Z(ecx, ecx)) goto loc_002264CF; /* je: equal / zero */

loc_00226495:
    if (CMP_GE(esi & esi, 0)) goto loc_002264A1; /* jge: greater or equal (signed >=) */

loc_00226499:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_002264A1:
    ecx = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00225550(); /* call 0x00225550 */

loc_002264AC:
    edi = MEM32(esp + 0x68);
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00225580(); /* call 0x00225580 */

loc_002264BC:
    PUSH32(esp, 8);
    esi = esi + edi;
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002255E0(); /* call 0x002255E0 */

loc_002264CB:
    esp = esp + 0x1C;
    POP32(esp, edi);

loc_002264CF:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}
