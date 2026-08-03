#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00021C20
 * Original: 0x00021C20 - 0x00021CD4 (180 bytes, 47 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021C20(void)
{

loc_00021C20:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x3C849C);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x3C838C);
    MEM32(esi + 0x18) = 0;
    ecx = eax + 0x1C;
    MEM32(esi + 0x10) = ecx;
    edx = 0xEA00;
    MEM32(esi + 0x14) = edx;
    ebx = MEM32(0x3C84A0);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x28) = edx;
    MEM32(esi + 0x2C) = 1;
    ebx = eax + 0xEA1C;
    MEM32(esi + 0x24) = ebx;
    ebx = MEM32(0x3C84A4);
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = 2;
    eax = eax + 0x1D41C;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(0x3C849C);
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = ecx;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = 0;
    ecx = MEM32(0x3C849C);
    MEM32(0x4A1C7C) = ecx;
    PUSH32(esp, 0); sub_00018650(); /* call 0x00018650 */

loc_00021CA3:
    edx = MEM32(0x4D1FD0);
    PUSH32(esp, 0x3AADC4);
    MEM32(esi + 0x70) = edx;
    PUSH32(esp, 0); sub_001CFDD0(); /* call 0x001CFDD0 */

loc_00021CB6:
    ecx = eax;
    eax = ecx + 0xE9FF;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0x74) = ecx;
    eax = eax + 2;
    MEM32(esi + 0x6C) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
