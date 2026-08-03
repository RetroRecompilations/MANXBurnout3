#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C8E20
 * Original: 0x001C8E20 - 0x001C8E85 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8E20(void)
{
    int _flags = 0; /* fallback flag var */

loc_001C8E20:
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    edx = edx & 0x70000;
    eax = eax + ecx;
    if (CMP_EQ(edx, 0x20000)) goto loc_001C8E3A; /* je: equal / zero */

loc_001C8E35:
    eax = eax & 0xFFFFFFF;

loc_001C8E3A:
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, MEM8(ecx + 0x69));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001C8E84; /* jbe: below or equal (unsigned <=) */

loc_001C8E44:
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001C8E83; /* jbe: below or equal (unsigned <=) */

loc_001C8E4B:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x14;

loc_001C8E50:
    eax = MEM32(esi);
    eax = eax + ecx;
    edx = eax;
    MEM32(esi) = eax;
    ebx = MEM32(edx);
    eax = MEM32(edx + 4);
    ebx = ebx & 0x70000;
    eax = eax + ecx;
    if (CMP_EQ(ebx, 0x20000)) goto loc_001C8E72; /* je: equal / zero */

loc_001C8E6D:
    eax = eax & 0xFFFFFFF;

loc_001C8E72:
    MEM32(edx + 4) = eax;
    eax = ZX8(MEM8(ecx + 0x69));
    edi++;
    esi = esi + 4;
    if (CMP_L(edi, eax)) goto loc_001C8E50; /* jl: less (signed <) */

loc_001C8E81:
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001C8E83:
    POP32(esp, edi);

loc_001C8E84:
    esp += 4; return; /* ret */

}
