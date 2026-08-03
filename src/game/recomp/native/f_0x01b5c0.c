#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001B5C0
 * Original: 0x0001B5C0 - 0x0001B633 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B5C0(void)
{

loc_0001B5C0:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebx;
    PUSH32(esp, 0); sub_0001AF70(); /* call 0x0001AF70 */

loc_0001B5C9:
    eax = 0; /* xor self */
    MEM32(0x44D620) = eax;
    MEM32(0x44D624) = eax;
    MEM32(0x44D628) = eax;
    MEM32(0x44D62C) = eax;
    edx = 0x44CFC8;
    MEM32(0x44D630) = eax;
    PUSH32(esp, 0); sub_0001B3A0(); /* call 0x0001B3A0 */

loc_0001B5EE:
    edx = 0x44D4B8;
    PUSH32(esp, 0); sub_0001B2B0(); /* call 0x0001B2B0 */

loc_0001B5F8:
    ecx = 0x9E;
    esi = 0x44CFC8;
    edi = 0x44D240;
    eax = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0001BE60(); /* call 0x0001BE60 */

loc_0001B610:
    eax = MEM32(0x44CFC0);
    ecx = 0x58;
    esi = 0x44CFC8;
    edi = 0x44D4B8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    eax++;
    POP32(esp, edi);
    MEM32(0x44CFC0) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
