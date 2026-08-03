#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153950
 * Original: 0x00153950 - 0x001539AF (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153950(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153950:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    MEM32(ebx + 0x4C0) = edi;
    if (CMP_LE(edi & edi, 0)) goto loc_00153971; /* jle: less or equal (signed <=) */

loc_00153960:
    ecx = ebx + 0xD2;

loc_00153966:
    MEM16(ecx) = LO16(eax);
    eax++;
    ecx = ecx + 2;
    if (CMP_L(eax, edi)) goto loc_00153966; /* jl: less (signed <) */

loc_00153971:
    esi = ebx + 0xD2;
    PUSH32(esp, 0); sub_00153AA0(); /* call 0x00153AA0 */

loc_0015397C:
    ecx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x4A1BE4);
    eax = eax + ecx;
    MEM32(0x4A1BE0) = eax;
    ecx = ecx + eax;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    POP32(esp, edi);
    MEM32(0x4A1BE4) = ecx;
    POP32(esp, esi);
    MEM32(ebx + 0x4BC) = edx;
    esp += 4; return; /* ret */

}
