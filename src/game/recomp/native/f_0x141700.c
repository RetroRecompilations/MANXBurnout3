#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00141700
 * Original: 0x00141700 - 0x00141743 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141700(void)
{
    uint32_t ebp;

loc_00141700:
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(edx + 0x204);
    eax = eax + 0x30;
    ecx = MEM32(eax);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, 0); sub_00140480(); /* call 0x00140480 */

loc_0014173D:
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}
