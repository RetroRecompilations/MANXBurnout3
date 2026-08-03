#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00023B00
 * Original: 0x00023B00 - 0x00023B71 (113 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00023B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00023B00:
    edx = MEM32(esp + 4);
    eax = edx + -4;
    if (CMP_A(eax, 0x1C)) goto loc_00023B68; /* ja: above (unsigned >) */

loc_00023B0C:
    eax = ZX8(MEM8(eax + 0x23B8C));
    { uint32_t _jt = MEM32(eax * 4 + 0x23B74); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00023B1Au) goto loc_00023B1A;
    if (_jt == 0x00023B23u) goto loc_00023B23;
    if (_jt == 0x00023B2Cu) goto loc_00023B2C;
    if (_jt == 0x00023B35u) goto loc_00023B35;
    if (_jt == 0x00023B3Eu) goto loc_00023B3E;
    if (_jt == 0x00023B68u) goto loc_00023B68;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00023B1A:
    eax = MEM32(ecx + 0x994);
    esp += 8; return; /* ret 4 */

loc_00023B23:
    eax = MEM32(ecx + 0x9C4);
    esp += 8; return; /* ret 4 */

loc_00023B2C:
    eax = MEM32(ecx + 0x9D4);
    esp += 8; return; /* ret 4 */

loc_00023B35:
    eax = MEM32(ecx + 0x9E4);
    esp += 8; return; /* ret 4 */

loc_00023B3E:
    eax = MEM32(ecx + 0x984);
    if (TEST_NZ(eax, eax)) goto loc_00023B51; /* jne: not equal / not zero */

loc_00023B48:
    eax = MEM32(ecx + 0x92C);
    esp += 8; return; /* ret 4 */

loc_00023B51:
    if (CMP_NE(eax, 2)) goto loc_00023B5F; /* jne: not equal / not zero */

loc_00023B56:
    eax = MEM32(ecx + 0x9B4);
    esp += 8; return; /* ret 4 */

loc_00023B5F:
    eax = MEM32(ecx + 0x9A4);
    esp += 8; return; /* ret 4 */

loc_00023B68:
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_000196F0(); return; /* tail jmp 0x000196F0 */

}
