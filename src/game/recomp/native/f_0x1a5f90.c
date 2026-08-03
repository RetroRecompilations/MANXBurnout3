#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A5F90
 * Original: 0x001A5F90 - 0x001A5FDA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A5F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_001A5F90:
    edx = (uint32_t)(int32_t)SMEM16(0x649B2A);
    eax = MEM32(0x649B28);
    eax = eax << 0x10;
    eax = eax + edx;
    edx = MEM32(0x649B2C);
    eax = eax + edx;
    edx = edx + eax;
    MEM32(0x649B2C) = edx;
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    MEM32(0x649B28) = eax;
    edi = 0x64;
    ecx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    SET_LO8(eax, 0); /* xor self */

loc_001A5FC4:
    edi = ZX8(LO8(eax));
    edi = ZX8(MEM8(edi + esi + 8));
    ecx = ecx + edi;
    if (CMP_LE(edx, ecx)) goto loc_001A5FD8; /* jle: less or equal (signed <=) */

loc_001A5FD2:
    SET_LO8(eax, LO8(eax) + 1);
    if (CMP_B(LO8(eax), 8)) goto loc_001A5FC4; /* jb: below (unsigned <) */

loc_001A5FD8:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
