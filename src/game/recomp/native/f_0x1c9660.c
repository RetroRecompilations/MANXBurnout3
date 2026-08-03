#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C9660
 * Original: 0x001C9660 - 0x001C9758 (248 bytes, 71 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C9660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C9660:
    eax = MEM32(esi + 0x3A4);
    if (CMP_G(eax, 0x10)) goto loc_001C9748; /* jg: greater (signed >) */

loc_001C966F:
    if (CMP_EQ(eax, 0x10)) goto loc_001C9701; /* je: equal / zero */

loc_001C9675:
    eax--;
    if ((eax == 0)) goto loc_001C9680; /* je: equal / zero */

loc_001C9678:
    eax--;
    if ((eax == 0)) goto loc_001C96A1; /* je: equal / zero */

loc_001C967B:
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001C9680:
    eax = MEM32(esp + 4);
    MEM32(esi + 0x3A0) = eax;
    eax = MEM32(esi + 0x39C);
    /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x3AB) = 0;
    if (TEST_NZ(eax, eax)) goto loc_001C96A1; /* jne: not equal / not zero */

loc_001C969B:
    MEM32(esi + 0x39C) = ecx;

loc_001C96A1:
    edx = MEM32(esi + 0x3A0);
    eax = MEM32(esi + 0x39C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F6D40(); /* call 0x001F6D40 */

loc_001C96C1:
    edx = esi + 0x370;
    esp = esp + 0x20;
    eax = edi;
    edx = edx - edi;
    edi = edi;

loc_001C96D0:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001C96D0; /* jne: not equal / not zero */

loc_001C96DA:
    eax = MEM32(ebx + 0x2C);
    if (CMP_NE(eax, 2)) goto loc_001C96ED; /* jne: not equal / not zero */

loc_001C96E2:
    MEM32(esi + 0x3A4) = eax;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001C96ED:
    if (CMP_EQ(eax, 1)) goto loc_001C967B; /* je: equal / zero */

loc_001C96F2:
    MEM32(esi + 0x3A4) = 0x10;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001C9701:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F70C0(); /* call 0x001F70C0 */

loc_001C9707:
    eax = eax + 0xFFFFFFD0u;
    esp = esp + 4;
    if (CMP_A(eax, 0xD0)) goto loc_001C972C; /* ja: above (unsigned >) */

loc_001C9714:
    ecx = ZX8(MEM8(eax + 0x1C9764));
    { uint32_t _jt = MEM32(ecx * 4 + 0x1C9758); /* switch: 3 entries, 3 targets */
    if (_jt == 0x001C967Bu) goto loc_001C967B;
    if (_jt == 0x001C9722u) goto loc_001C9722;
    if (_jt == 0x001C972Cu) goto loc_001C972C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001C9722:
    MEM32(esi + 0x3A4) = 0x100;

loc_001C972C:
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    MEM32(esi + 0x398) = edx;
    PUSH32(esp, 0); sub_001C9840(); /* call 0x001C9840 */

loc_001C973A:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001F6890(); /* call 0x001F6890 */

loc_001C9740:
    esp = esp + 4;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001C9748:
    if (CMP_NE(eax, 0x100)) goto loc_001C967B; /* jne: not equal / not zero */

loc_001C9753:
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}
