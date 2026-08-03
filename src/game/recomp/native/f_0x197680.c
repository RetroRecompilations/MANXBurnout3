#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00197680
 * Original: 0x00197680 - 0x001976C2 (66 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00197680(void)
{

loc_00197680:
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax + eax * 2;
    eax = MEM32(edx + 0xC8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    edx = eax + eax * 2;
    edx = edx << 4;
    eax = MEM32(edx + 0x64B38C);
    ecx = ecx << 4;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x64B38C);
    PUSH32(esp, 0); sub_001989A0(); /* call 0x001989A0 */

loc_001976BC:
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}
