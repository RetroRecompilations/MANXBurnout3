#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003D4A0
 * Original: 0x0003D4A0 - 0x0003D4C5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D4A0:
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 0x2B)) goto loc_0003D4C2; /* ja: above (unsigned >) */

loc_0003D4A8:
    eax = ZX8(MEM8(eax + 0x3D4D4));
    { uint32_t _jt = MEM32(eax * 4 + 0x3D4C8); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0003D4B6u) goto loc_0003D4B6;
    if (_jt == 0x0003D4BCu) goto loc_0003D4BC;
    if (_jt == 0x0003D4C2u) goto loc_0003D4C2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0003D4B6:
    eax = 0x20;
    esp += 4; return; /* ret */

loc_0003D4BC:
    eax = 0x10;
    esp += 4; return; /* ret */

loc_0003D4C2:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}
