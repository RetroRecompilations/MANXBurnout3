#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001DD420
 * Original: 0x001DD420 - 0x001DD457 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001DD420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001DD420:
    eax = eax + 0xFFFFFFFEu;
    if (CMP_A(eax, 0x1C)) goto loc_001DD454; /* ja: above (unsigned >) */

loc_001DD428:
    eax = ZX8(MEM8(eax + 0x1DD470));
    { uint32_t _jt = MEM32(eax * 4 + 0x1DD458); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001DD436u) goto loc_001DD436;
    if (_jt == 0x001DD43Cu) goto loc_001DD43C;
    if (_jt == 0x001DD442u) goto loc_001DD442;
    if (_jt == 0x001DD448u) goto loc_001DD448;
    if (_jt == 0x001DD44Eu) goto loc_001DD44E;
    if (_jt == 0x001DD454u) goto loc_001DD454;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001DD436:
    eax = 0x500;
    esp += 4; return; /* ret */

loc_001DD43C:
    eax = 0x600;
    esp += 4; return; /* ret */

loc_001DD442:
    eax = 0x200;
    esp += 4; return; /* ret */

loc_001DD448:
    eax = 0xA00;
    esp += 4; return; /* ret */

loc_001DD44E:
    eax = 0x100;
    esp += 4; return; /* ret */

loc_001DD454:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
