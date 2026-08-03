#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001556C0
 * Original: 0x001556C0 - 0x00155713 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001556C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001556C0:
    ecx = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_00155712; /* jbe: below or equal (unsigned <=) */

loc_001556C6:
    PUSH32(esp, ebx);
    goto loc_001556D0;

    /* nop */

loc_001556D0:
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
    SET_LO8(ebx, MEM8(ecx + esi));
    edx = edx + ecx;
    SET_LO8(eax, MEM8(edx + esi));
    MEM8(edx + esi) = LO8(ebx);
    MEM8(ecx + esi) = LO8(eax);
    ecx++;
    if (CMP_B(ecx, edi)) goto loc_001556D0; /* jb: below (unsigned <) */

loc_00155711:
    POP32(esp, ebx);

loc_00155712:
    esp += 4; return; /* ret */

}
