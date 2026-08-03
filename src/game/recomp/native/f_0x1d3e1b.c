#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D3E1B
 * Original: 0x001D3E1B - 0x001D3E49 (46 bytes, 17 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D3E1B(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001D3E1B:
    eax = MEM32(esp + 8);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001D3E28; /* jne: not equal / not zero */

loc_001D3E24:
    eax = 0; /* xor self */
    goto loc_001D3E46;

loc_001D3E28:
    ecx = 0x2710;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = (uint32_t)(-(int32_t)eax);
    MEM32(ecx + 4) = edx;
    edx = edx + 0 + _cf; /* adc */
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    eax = ecx;

loc_001D3E46:
    esp += 12; return; /* ret 8 */

}
