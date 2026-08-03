#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA680
 * Original: 0x001CA680 - 0x001CA709 (137 bytes, 42 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA680(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CA680:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x534;
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_001CDB70(); /* call 0x001CDB70 */

loc_001CA693:
    esi = MEM32(edi + 0x2DDC);
    if (TEST_Z(esi, esi)) goto loc_001CA6F4; /* je: equal / zero */

loc_001CA69D:
    ebx = 8;

loc_001CA6A2:
    if (CMP_LE(MEM32(esi + 0x178), 2)) goto loc_001CA6EE; /* jle: less or equal (signed <=) */

loc_001CA6AB:
    SET_LO8(eax, MEM8(esi + 0x19D));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001CA6EE; /* jne: not equal / not zero */

loc_001CA6B5:
    ecx = MEM32(esi + 0x174);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F9400(); /* call 0x001F9400 */

loc_001CA6C1:
    esp = esp + 4;
    if (CMP_NE(eax, 6)) goto loc_001CA6D0; /* jne: not equal / not zero */

loc_001CA6C9:
    MEM8(esi + 0x19E) = 1;

loc_001CA6D0:
    edx = MEM32(esi + 0x174);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F93C0(); /* call 0x001F93C0 */

loc_001CA6DE:
    esp = esp + 8;
    MEM32(esi + 0x178) = ebx;
    MEM8(esi + 0x19D) = 1;

loc_001CA6EE:
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_001CA6A2; /* jne: not equal / not zero */

loc_001CA6F4:
    PUSH32(esp, 1);
    ebx = edi + 8;
    PUSH32(esp, 0); sub_001CE1B0(); /* call 0x001CE1B0 */

loc_001CA6FE:
    MEM8(edi + 0x2E05) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
