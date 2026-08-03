#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001553D0
 * Original: 0x001553D0 - 0x0015541A (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001553D0(void)
{

loc_001553D0:
    edx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + edx;
    edx = MEM32(0x4A1BE4);
    eax = eax + edx;
    edx = edx + eax;
    MEM32(0x4A1BE4) = edx;
    PUSH32(esp, esi);
    MEM32(0x4A1BE0) = eax;
    edx = 0; /* xor self */
    esi = 0x26;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    PUSH32(esp, edi);
    esi = ecx + 0x5AC;
    edi = 0x26;
    MEM8(ecx + 0x615) = LO8(edx);
    PUSH32(esp, 0); sub_001556C0(); /* call 0x001556C0 */

loc_00155417:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
