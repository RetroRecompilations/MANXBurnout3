#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00014730
 * Original: 0x00014730 - 0x0001475E (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014730(void)
{
    int _flags = 0; /* fallback flag var */

loc_00014730:
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_001BEEF0(); /* call 0x001BEEF0 */

loc_00014738:
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0001475C; /* jle: less or equal (signed <=) */

loc_00014741:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */

loc_00014744:
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebx + eax + 8);
    PUSH32(esp, 0); sub_001C8E20(); /* call 0x001C8E20 */

loc_00014750:
    eax = MEM32(esi + 8);
    edi++;
    ebx = ebx + 0x10;
    if (CMP_L(edi, eax)) goto loc_00014744; /* jl: less (signed <) */

loc_0001475B:
    POP32(esp, ebx);

loc_0001475C:
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
