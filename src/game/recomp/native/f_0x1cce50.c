#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CCE50
 * Original: 0x001CCE50 - 0x001CCEB6 (102 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCE50:
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(esi + 0x34));
    edx = 3;
    if (CMP_A(eax, edx)) goto loc_001CCEAF; /* ja: above (unsigned >) */

loc_001CCE60:
    { uint32_t _jt = MEM32(eax * 4 + 0x1CCEB8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001CCE67u) goto loc_001CCE67;
    if (_jt == 0x001CCE75u) goto loc_001CCE75;
    if (_jt == 0x001CCE84u) goto loc_001CCE84;
    if (_jt == 0x001CCE9Du) goto loc_001CCE9D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CCE67:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001CCEAF; /* jne: not equal / not zero */

loc_001CCE6B:
    MEM8(esi + 0x34) = LO8(edx);
    PUSH32(esp, 0); sub_001CCED0(); /* call 0x001CCED0 */

loc_001CCE73:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CCE75:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001CCEAF; /* je: equal / zero */

loc_001CCE79:
    MEM8(esi + 0x34) = 1;
    PUSH32(esp, 0); sub_001CCED0(); /* call 0x001CCED0 */

loc_001CCE82:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CCE84:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001CCEAF; /* je: equal / zero */

loc_001CCE88:
    SET_LO8(ecx, MEM8(esi + 0x35));
    SET_LO8(eax, 5);
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x34) = 1;
    PUSH32(esp, 0); sub_001CCED0(); /* call 0x001CCED0 */

loc_001CCE9B:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CCE9D:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_001CCEAF; /* je: equal / zero */

loc_001CCEA2:
    SET_LO8(eax, MEM8(esi + 0x35));
    SET_LO8(ecx, 5);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esi + 0x35) = LO8(ecx);
    MEM8(esi + 0x34) = LO8(edx);

loc_001CCEAF:
    PUSH32(esp, 0); sub_001CCED0(); /* call 0x001CCED0 */

loc_001CCEB4:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
