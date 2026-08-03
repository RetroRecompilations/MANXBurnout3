#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002209B0
 * Original: 0x002209B0 - 0x00220A35 (133 bytes, 43 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002209B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002209B0:
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0021C5C0(); /* call 0x0021C5C0 */

loc_002209B8:
    ecx = MEM32(0x41CFE4);
    esi = MEM32(esp + 0xC);
    esp = esp + 4;
    /* test ecx, ecx - flags set for next jcc */
    eax = 0x41CFE4;
    if (TEST_Z(ecx, ecx)) goto loc_002209E3; /* je: equal / zero */

loc_002209CE:
    edi = edi;

loc_002209D0:
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, esi)) goto loc_002209DF; /* je: equal / zero */

loc_002209D6:
    eax = ecx;
    if (CMP_NE(MEM32(eax), 0)) goto loc_002209D0; /* jne: not equal / not zero */

loc_002209DD:
    goto loc_002209E3;

loc_002209DF:
    ecx = MEM32(esi);
    MEM32(eax) = ecx;

loc_002209E3:
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0021C650(); /* call 0x0021C650 */

loc_002209EA:
    esp = esp + 4;
    PUSH32(esp, 0); sub_0021C710(); /* call 0x0021C710 */

loc_002209F2:
    edx = MEM32(esi + 0x18);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0033934F(); /* call 0x0033934F */

loc_002209FD:
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00339344(); /* call 0x00339344 */

loc_00220A06:
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = 0xFFFFFFFFu;
    MEM8(esi + 0x14) = 0;
    PUSH32(esp, 0); sub_0021C5C0(); /* call 0x0021C5C0 */

loc_00220A18:
    ecx = MEM32(0x41CFE8);
    PUSH32(esp, 0);
    MEM32(esi + 4) = ecx;
    MEM32(0x41CFE8) = esi;
    PUSH32(esp, 0); sub_0021C650(); /* call 0x0021C650 */

loc_00220A2E:
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
