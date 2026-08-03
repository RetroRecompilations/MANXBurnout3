#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B5C60
 * Original: 0x001B5C60 - 0x001B5CB1 (81 bytes, 29 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B5C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B5C60:
    PUSH32(esp, 0); sub_001D273E(); /* call 0x001D273E */

loc_001B5C65:
    eax--;
    if (CMP_A(eax, 8)) goto loc_001B5CAE; /* ja: above (unsigned >) */

loc_001B5C6B:
    { uint32_t _jt = MEM32(eax * 4 + 0x1B5CB4); /* switch: 9 entries, 9 targets */
    if (_jt == 0x001B5C72u) goto loc_001B5C72;
    if (_jt == 0x001B5C7Eu) goto loc_001B5C7E;
    if (_jt == 0x001B5C84u) goto loc_001B5C84;
    if (_jt == 0x001B5C8Au) goto loc_001B5C8A;
    if (_jt == 0x001B5C90u) goto loc_001B5C90;
    if (_jt == 0x001B5C96u) goto loc_001B5C96;
    if (_jt == 0x001B5C9Cu) goto loc_001B5C9C;
    if (_jt == 0x001B5CA2u) goto loc_001B5CA2;
    if (_jt == 0x001B5CA8u) goto loc_001B5CA8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001B5C72:
    PUSH32(esp, 0); sub_001D276B(); /* call 0x001D276B */

loc_001B5C77:
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    esp += 4; return; /* ret */

loc_001B5C7E:
    eax = 2;
    esp += 4; return; /* ret */

loc_001B5C84:
    eax = 3;
    esp += 4; return; /* ret */

loc_001B5C8A:
    eax = 4;
    esp += 4; return; /* ret */

loc_001B5C90:
    eax = 5;
    esp += 4; return; /* ret */

loc_001B5C96:
    eax = 6;
    esp += 4; return; /* ret */

loc_001B5C9C:
    eax = 7;
    esp += 4; return; /* ret */

loc_001B5CA2:
    eax = 8;
    esp += 4; return; /* ret */

loc_001B5CA8:
    eax = 9;
    esp += 4; return; /* ret */

loc_001B5CAE:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
