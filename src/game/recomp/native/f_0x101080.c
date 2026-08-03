#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00101080
 * Original: 0x00101080 - 0x001010E1 (97 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101080(void)
{
    int _flags = 0; /* fallback flag var */

loc_00101080:
    eax = eax - ebx;
    eax = eax - 0x176C;
    ecx = eax;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(ebx + 0x3B6C);
    edx = (uint32_t)((int32_t)edx >> 7);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    edx = ecx + -1;
    if (CMP_NE(eax, edx)) goto loc_001010AE; /* jne: not equal / not zero */

loc_001010A7:
    MEM32(ebx + 0x3B6C) = edx;
    esp += 4; return; /* ret */

loc_001010AE:
    PUSH32(esp, esi);
    ecx = ecx + ecx * 8;
    ecx = ecx << 6;
    edx = eax + eax * 8;
    PUSH32(esp, edi);
    edx = edx << 6;
    esi = ecx + ebx + 0x152C;
    edi = edx + ebx + 0x176C;
    ecx = 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x3B6C);
    eax--;
    POP32(esp, edi);
    MEM32(ebx + 0x3B6C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
