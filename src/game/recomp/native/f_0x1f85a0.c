#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F85A0
 * Original: 0x001F85A0 - 0x001F863A (154 bytes, 61 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F85A0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001F85A0:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x48);
    if (TEST_Z(eax, eax)) goto loc_001F85B0; /* je: equal / zero */

loc_001F85AC:
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F85B0:
    SET_LO16(eax, MEM16(esi + 0x46));
    if (CMP_BE(LO16(eax), 1)) goto loc_001F8628; /* jbe: below or equal (unsigned <=) */

loc_001F85BA:
    ecx = MEM32(esp + 0x10);
    /* test ecx, ecx - flags set for next jcc */
    ecx = MEM32(esi + 0x40);
    eax = ZX16(LO16(eax));
    edx = 1;
    if (TEST_Z(ecx, ecx)) goto loc_001F85FB; /* je: equal / zero */

loc_001F85CD:
    PUSH32(esp, 0x3080A);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = ecx >> 0x1C;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FEBF0(); /* call 0x001FEBF0 */

loc_001F85E6:
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x40;
    eax = MEM32(esi + 0x48);
    esp = esp + 0x18;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F85FB:
    ecx = ecx >> 0x1C;
    PUSH32(esp, 0);
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE820(); /* call 0x001FE820 */

loc_001F8610:
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x80;
    eax = MEM32(esi + 0x48);
    esp = esp + 0x14;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F8628:
    MEM32(esi + 0x48) = 1;
    eax = MEM32(esi + 0x48);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
