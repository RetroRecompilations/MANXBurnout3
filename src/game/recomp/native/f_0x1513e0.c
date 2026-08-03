#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001513E0
 * Original: 0x001513E0 - 0x00151481 (161 bytes, 60 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001513E0:
    ecx = MEM32(0x73A194);
    edx = MEM32(0x3AE170);
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x73A190);
    PUSH32(esp, edi);
    MEM32(esi) = edx;
    edx = MEM32(0x3AE174);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = esp + 0x10;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_0015140E:
    PUSH32(esp, 2);
    eax = edi;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_00151419:
    edi = esi;
    esp = esp + 0x14;
    edi--;
    /* nop */

loc_00151420:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00151420; /* jne: not equal / not zero */

loc_00151428:
    SET_LO16(ecx, MEM16(0x3AE16C));
    PUSH32(esp, 2);
    edx = esp + 0xF;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM16(edi) = LO16(ecx);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_0015143F:
    edi = esi;
    esp = esp + 0xC;
    edi--;

loc_00151445:
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00151445; /* jne: not equal / not zero */

loc_0015144D:
    SET_LO16(eax, MEM16(0x3AE168));
    PUSH32(esp, 2);
    PUSH32(esp, 0x3AE164);
    PUSH32(esp, esi);
    MEM16(edi) = LO16(eax);
    PUSH32(esp, 0); sub_00243C60(); /* call 0x00243C60 */

loc_00151463:
    esp = esp + 0xC;
    esi--;

loc_00151467:
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00151467; /* jne: not equal / not zero */

loc_0015146F:
    SET_LO16(ecx, MEM16(0x3AE16C));
    edi = esi;
    MEM16(edi) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
