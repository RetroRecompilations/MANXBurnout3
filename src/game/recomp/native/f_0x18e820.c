#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0018E820
 * Original: 0x0018E820 - 0x0018E860 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E820(void)
{

loc_0018E820:
    MEM32(esi + 0x18) = 0;
    eax = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    MEM32(esi + 0x1C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = 1;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    ecx = MEM32(0x4D5370);
    ecx = MEM32(ecx + 0x1B8);
    edx = MEM32(ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x2C), _icall_esp); /* indirect call */
    }

loc_0018E859:
    MEM32(esi + 0x20) = eax;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
