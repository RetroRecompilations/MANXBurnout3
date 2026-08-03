#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DB150
 * Original: 0x001DB150 - 0x001DB1FA (170 bytes, 60 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DB150(void)
{
    int _flags = 0; /* fallback flag var */

loc_001DB150:
    edx = MEM32(0x7593F0);
    ecx = 0; /* xor self */
    esp = esp - 8;
    eax = 1;
    /* cmp edx, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(edx, eax)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(esi, esi)) goto loc_001DB1D4; /* je: equal / zero */

loc_001DB16C:
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    /* test edi, edi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    esi = edx;
    if (TEST_Z(esi, esi)) goto loc_001DB1AD; /* je: equal / zero */

loc_001DB17E:
    PUSH32(esp, 0); sub_001DE6C0(); /* call 0x001DE6C0 */

loc_001DB183:
    esi = eax;
    eax = 0; /* xor self */
    /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    if (TEST_Z(eax, eax)) goto loc_001DB1A7; /* je: equal / zero */

loc_001DB190:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001DB090(); /* call 0x001DB090 */

loc_001DB196:
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001DB1A7; /* je: equal / zero */

loc_001DB19D:
    MEM32(0x7593F0) = 2;

loc_001DB1A7:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001DB1AD:
    PUSH32(esp, 0x80000016u);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DB1BB:
    MEM32(esp + 0x10) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DB1C9:
    esp = esp + 8;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_001DB1D4:
    PUSH32(esp, 0x80000001u);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0); sub_002087B0(); /* call 0x002087B0 */

loc_001DB1E2:
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_001E1710(); /* call 0x001E1710 */

loc_001DB1F0:
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
