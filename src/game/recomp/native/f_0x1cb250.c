#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CB250
 * Original: 0x001CB250 - 0x001CB2B6 (102 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CB250:
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(esi + 0x2E));
    edx = 3;
    if (CMP_A(eax, edx)) goto loc_001CB2AF; /* ja: above (unsigned >) */

loc_001CB260:
    { uint32_t _jt = MEM32(eax * 4 + 0x1CB2B8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001CB267u) goto loc_001CB267;
    if (_jt == 0x001CB275u) goto loc_001CB275;
    if (_jt == 0x001CB284u) goto loc_001CB284;
    if (_jt == 0x001CB29Du) goto loc_001CB29D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CB267:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001CB2AF; /* jne: not equal / not zero */

loc_001CB26B:
    MEM8(esi + 0x2E) = LO8(edx);
    PUSH32(esp, 0); sub_001CB2D0(); /* call 0x001CB2D0 */

loc_001CB273:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CB275:
    if (CMP_NE(LO8(ecx), 1)) goto loc_001CB2AF; /* jne: not equal / not zero */

loc_001CB27A:
    MEM8(esi + 0x2E) = LO8(ecx);
    PUSH32(esp, 0); sub_001CB2D0(); /* call 0x001CB2D0 */

loc_001CB282:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CB284:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001CB2AF; /* je: equal / zero */

loc_001CB288:
    SET_LO8(ecx, MEM8(esi + 0x2F));
    SET_LO8(eax, 5);
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    MEM8(esi + 0x2F) = LO8(eax);
    MEM8(esi + 0x2E) = 1;
    PUSH32(esp, 0); sub_001CB2D0(); /* call 0x001CB2D0 */

loc_001CB29B:
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CB29D:
    if (CMP_EQ(LO8(ecx), 1)) goto loc_001CB2AF; /* je: equal / zero */

loc_001CB2A2:
    SET_LO8(eax, MEM8(esi + 0x2F));
    SET_LO8(ecx, 5);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esi + 0x2F) = LO8(ecx);
    MEM8(esi + 0x2E) = LO8(edx);

loc_001CB2AF:
    PUSH32(esp, 0); sub_001CB2D0(); /* call 0x001CB2D0 */

loc_001CB2B4:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
