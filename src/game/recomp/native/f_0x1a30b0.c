#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A30B0
 * Original: 0x001A30B0 - 0x001A3107 (87 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A30B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A30B0:
    eax = MEM32(ecx + 0x36348);
    edx = MEM32(ecx + 0x3634C);
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi >> 0x10);
    eax = eax << 0x10;
    esi = esi + edx;
    eax = eax + esi;
    MEM32(ecx + 0x36348) = eax;
    eax = eax + edx;
    MEM32(ecx + 0x3634C) = eax;
    eax = MEM32(ecx + 0x36348);
    edx = 0; /* xor self */
    esi = 3;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    eax = ZX8(LO8(edx));
    eax = eax - 0;
    if ((eax == 0)) goto loc_001A3100; /* je: equal / zero */

loc_001A30EF:
    eax--;
    if ((eax == 0)) goto loc_001A30F9; /* je: equal / zero */

loc_001A30F2:
    SET_LO8(eax, MEM8(ecx + 0x363B6));
    esp += 4; return; /* ret */

loc_001A30F9:
    SET_LO8(eax, MEM8(ecx + 0x363B5));
    esp += 4; return; /* ret */

loc_001A3100:
    SET_LO8(eax, MEM8(ecx + 0x363B4));
    esp += 4; return; /* ret */

}
