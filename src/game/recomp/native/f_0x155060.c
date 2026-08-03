#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00155060
 * Original: 0x00155060 - 0x001550AE (78 bytes, 22 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155060(void)
{

loc_00155060:
    eax = MEM32(0x3EC8E8);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00158640(); /* call 0x00158640 */

loc_00155075:
    esp = esp + 8;
    PUSH32(esp, 0); sub_001586A0(); /* call 0x001586A0 */

loc_0015507D:
    eax = MEM32(eax * 4 + 0x3EC8EC);
    ecx = MEM32(0x45B9BC);
    edx = MEM32(ecx * 4 + 0x3EC8F8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(0x3EC8D8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3AF1A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243215(); /* call 0x00243215 */

loc_001550A8:
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

}
