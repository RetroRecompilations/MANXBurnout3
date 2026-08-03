#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001976D0
 * Original: 0x001976D0 - 0x00197713 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001976D0(void)
{

loc_001976D0:
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x19BC);
    edx = MEM32(esp + 8);
    eax = eax + eax * 2;
    PUSH32(esp, ecx);
    eax = eax << 4;
    ecx = MEM32(eax + 0x64B38C);
    eax = MEM32(edx + 0xC8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x19BC);
    PUSH32(esp, ecx);
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    edx = MEM32(ecx + 0x64B38C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001987A0(); /* call 0x001987A0 */

loc_0019770D:
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}
