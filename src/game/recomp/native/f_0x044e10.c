#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00044E10
 * Original: 0x00044E10 - 0x00044E6E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00044E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00044E10:
    eax = MEM32(esi + 0x8A04);
    if (TEST_NZ(eax, eax)) goto loc_00044E1D; /* jne: not equal / not zero */

loc_00044E1A:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00044E1D:
    ecx = MEM32(esi + 0x8A04);
    ecx--;
    eax = ecx;
    MEM32(esi + 0x8A04) = ecx;
    ecx = MEM32(esi + 0x8A00);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4);
    ecx = ebx;
    ecx = ecx << 6;
    ecx = ecx + 0x54F1A0;
    eax = edi;
    PUSH32(esp, 0); sub_00044FE0(); /* call 0x00044FE0 */

loc_00044E48:
    edx = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x88);
    ecx = MEM32(edx + esi + 0x8B0C);
    eax = edx + esi + 0x8A8C;
    MEM32(eax + ecx * 4) = edi;
    MEM32(eax + 0x80) = MEM32(eax + 0x80) + 1;
    MEM32(edi + 8) = ebx;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
