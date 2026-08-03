#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0010FBC0
 * Original: 0x0010FBC0 - 0x0010FC02 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010FBC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010FBC0:
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    /* cmp eax, 7 - flags set for next jcc */
    edx = (uint32_t)(int32_t)SMEM8(0x73BB8C);
    if (CMP_A(eax, 7)) goto loc_0010FBFC; /* ja: above (unsigned >) */

loc_0010FBCF:
    { uint32_t _jt = MEM32(eax * 4 + 0x10FC04); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0010FBD6u) goto loc_0010FBD6;
    if (_jt == 0x0010FBD9u) goto loc_0010FBD9;
    if (_jt == 0x0010FBDFu) goto loc_0010FBDF;
    if (_jt == 0x0010FBE5u) goto loc_0010FBE5;
    if (_jt == 0x0010FBFCu) goto loc_0010FBFC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010FBD6:
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0010FBD9:
    eax = 1;
    esp += 4; return; /* ret */

loc_0010FBDF:
    eax = 2;
    esp += 4; return; /* ret */

loc_0010FBE5:
    eax = MEM32(ecx + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x242B);
    eax = eax - edx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 2;
    eax = eax + 3;
    esp += 4; return; /* ret */

loc_0010FBFC:
    eax = 6;
    esp += 4; return; /* ret */

}
