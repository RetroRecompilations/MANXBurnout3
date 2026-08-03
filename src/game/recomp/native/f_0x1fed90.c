#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FED90
 * Original: 0x001FED90 - 0x001FEDBC (44 bytes, 17 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FED90(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FED90:
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x7593D4), _icall_esp); /* indirect call */
    }

loc_001FEDA3:
    ecx = eax;
    esp = esp + 8;
    if (CMP_BE(ecx & ecx, 0)) goto loc_001FEDB9; /* jbe: below or equal (unsigned <=) */

loc_001FEDAC:
    eax = ecx + 8;
    eax = eax >> 3;
    eax = eax << 3;
    MEM32(eax + -4) = ecx;
    esp += 4; return; /* ret */

loc_001FEDB9:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
