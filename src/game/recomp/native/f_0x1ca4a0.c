#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CA4A0
 * Original: 0x001CA4A0 - 0x001CA505 (101 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CA4A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CA4A0:
    eax = MEM32(edi + 0x2E00);
    eax--;
    if (CMP_A(eax, 0x17)) goto loc_001CA500; /* ja: above (unsigned >) */

loc_001CA4AC:
    eax = ZX8(MEM8(eax + 0x1CA518));
    { uint32_t _jt = MEM32(eax * 4 + 0x1CA508); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001CA4BAu) goto loc_001CA4BA;
    if (_jt == 0x001CA4D8u) goto loc_001CA4D8;
    if (_jt == 0x001CA4FBu) goto loc_001CA4FB;
    if (_jt == 0x001CA500u) goto loc_001CA500;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CA4BA:
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = edi + 0x4E4;
    PUSH32(esp, 0); sub_001C9C30(); /* call 0x001C9C30 */

loc_001CA4CA:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA500; /* je: equal / zero */

loc_001CA4CE:
    MEM32(edi + 0x2E00) = 2;

loc_001CA4D8:
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = edi + 0x2DC4;
    PUSH32(esp, 0); sub_001CBF00(); /* call 0x001CBF00 */

loc_001CA4EC:
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001CA500; /* je: equal / zero */

loc_001CA4F1:
    MEM32(edi + 0x2E00) = 0x17;

loc_001CA4FB:
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_001CA500:
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}
