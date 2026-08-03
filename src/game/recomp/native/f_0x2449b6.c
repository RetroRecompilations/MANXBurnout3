#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002449B6
 * Original: 0x002449B6 - 0x002449F3 (61 bytes, 31 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002449B6(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_002449B6:
    ecx = MEM32(esp + 0xC);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi;
    if (TEST_Z(ecx, ecx)) goto loc_002449EE; /* je: equal / zero */

loc_002449C6:
    edx = MEM32(esp + 0x10);

loc_002449CA:
    SET_LO16(eax, MEM16(edx));
    MEM16(edi) = LO16(eax);
    edi++;
    edi++;
    edx++;
    edx++;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_002449DC; /* je: equal / zero */

loc_002449D9:
    ecx--;
    if ((ecx != 0)) goto loc_002449CA; /* jne: not equal / not zero */

loc_002449DC:
    if (TEST_Z(ecx, ecx)) goto loc_002449EE; /* je: equal / zero */

loc_002449E0:
    ecx--;
    if ((ecx == 0)) goto loc_002449EE; /* je: equal / zero */

loc_002449E3:
    eax = 0; /* xor self */
    ecx = ecx >> 1;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */

loc_002449EE:
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
