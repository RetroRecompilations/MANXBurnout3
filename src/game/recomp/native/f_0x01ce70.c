#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001CE70
 * Original: 0x0001CE70 - 0x0001CEC2 (82 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001CE70(void)
{
    int _flags = 0; /* fallback flag var */

loc_0001CE70:
    PUSH32(esp, esi);
    MEM32(0x44D154) = 0;
    esi = 0; /* xor self */
    /* nop */

loc_0001CE80:
    MEM8(esi + 0x44CFC8) = 0;
    SET_LO8(eax, MEM8(edi + esi + 0x451));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001CE9B; /* je: equal / zero */

loc_0001CE92:
    MEM8(esi + 0x44CFC8) = 1;
    goto loc_0001CEAA;

loc_0001CE9B:
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_0001CBC0(); /* call 0x0001CBC0 */

loc_0001CEA4:
    MEM8(esi + 0x44CFC8) = LO8(eax);

loc_0001CEAA:
    SET_LO8(eax, MEM8(esi + 0x44CFC8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0001CEBA; /* je: equal / zero */

loc_0001CEB4:
    MEM32(0x44D154) = MEM32(0x44D154) + 1;

loc_0001CEBA:
    esi++;
    if (CMP_L(esi, 0x43)) goto loc_0001CE80; /* jl: less (signed <) */

loc_0001CEC0:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
