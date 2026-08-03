#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DAC10
 * Original: 0x001DAC10 - 0x001DAC23 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DAC10(void)
{

loc_001DAC10:
    eax = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D8), _icall_esp); /* indirect call */
    }

loc_001DAC1B:
    eax = MEM32(esp + 8);
    esp = esp + 4;
    esp += 4; return; /* ret */

}
