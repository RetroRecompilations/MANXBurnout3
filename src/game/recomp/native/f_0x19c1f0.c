#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019C1F0
 * Original: 0x0019C1F0 - 0x0019C243 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019C1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019C1F0:
    if (CMP_NE(ecx, 1)) goto loc_0019C1FC; /* jne: not equal / not zero */

loc_0019C1F5:
    SET_LO8(edx, MEM8(eax + 0x1C));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0019C225; /* je: equal / zero */

loc_0019C1FC:
    eax = MEM32(eax);
    edx = MEM32(eax + ecx * 4 + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    esi = ZX16(MEM16(esi + 0x60EC30));
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4 + 0x18);
    eax = MEM32(0x649B7C);
    esi = esi + edi;
    SET_LO8(eax, MEM8(esi + eax));
    /* cmp LO8(eax), 0xFF - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_NE(LO8(eax), 0xFF)) goto loc_0019C228; /* jne: not equal / not zero */

loc_0019C225:
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0019C228:
    eax = ZX8(LO8(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + 0x63DCB0;
    ecx = (int32_t)MEMF(eax + 0x30); /* cvttss2si */
    eax = 0; /* xor self */
    /* cmp ecx, edx - flags set for next jcc */
    SET_LO8(eax, (CMP_G(ecx, edx)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}
