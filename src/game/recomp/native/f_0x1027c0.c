#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001027C0
 * Original: 0x001027C0 - 0x00102807 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001027C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001027C0:
    PUSH32(esp, ebx);
    eax = ecx + 0x4D93;
    edx = 6;
    ebx = 0; /* xor self */
    edi = edi;

loc_001027D0:
    MEM8(eax + -6) = LO8(ebx);
    MEM8(eax) = LO8(ebx);
    eax++;
    edx--;
    if ((edx != 0)) goto loc_001027D0; /* jne: not equal / not zero */

loc_001027D9:
    eax = MEM32(ecx + 0x4DA0);
    if (CMP_G(eax, ebx)) goto loc_001027FE; /* jg: greater (signed >) */

loc_001027E3:
    MEM8(ecx + 0x4D9A) = LO8(ebx);
    MEM8(ecx + 0x4D9B) = LO8(ebx);
    MEM8(ecx + 0x4D99) = LO8(ebx);
    MEM8(ecx + 0x4D9C) = 0xFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001027FE:
    eax--;
    MEM32(ecx + 0x4DA0) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
