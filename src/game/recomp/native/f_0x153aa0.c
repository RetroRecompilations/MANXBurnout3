#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153AA0
 * Original: 0x00153AA0 - 0x00153AF7 (87 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153AA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00153AA0:
    ecx = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_00153AF6; /* jbe: below or equal (unsigned <=) */

loc_00153AA6:
    PUSH32(esp, ebx);
    goto loc_00153AB0;

    /* nop */

loc_00153AB0:
    edx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + edx;
    edx = MEM32(0x4A1BE4);
    eax = eax + edx;
    edx = edx + eax;
    MEM32(0x4A1BE4) = edx;
    MEM32(0x4A1BE0) = eax;
    edx = 0; /* xor self */
    ebx = edi;
    ebx = ebx - ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    SET_LO16(ebx, MEM16(esi + ecx * 2));
    edx = edx + ecx;
    SET_LO16(eax, MEM16(esi + edx * 2));
    MEM16(esi + edx * 2) = LO16(ebx);
    MEM16(esi + ecx * 2) = LO16(eax);
    ecx++;
    if (CMP_B(ecx, edi)) goto loc_00153AB0; /* jb: below (unsigned <) */

loc_00153AF5:
    POP32(esp, ebx);

loc_00153AF6:
    esp += 4; return; /* ret */

}
