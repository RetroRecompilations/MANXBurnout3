#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00153E50
 * Original: 0x00153E50 - 0x00153F64 (276 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153E50:
    ecx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = MEM32(0x4A1BE4);
    eax = eax + ecx;
    ecx = ecx + eax;
    MEM32(0x4A1BE0) = eax;
    MEM32(0x4A1BE4) = ecx;
    eax = MEM32(esi + 0x5F8);
    /* cmp eax, 3 - flags set for next jcc */
    MEM8(esi + 0x62F) = 0;
    if (CMP_EQ(eax, 3)) goto loc_00153EB0; /* je: equal / zero */

loc_00153E8B:
    SET_LO8(ecx, MEM8(esi + 0x630));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00153EB0; /* je: equal / zero */

loc_00153E95:
    edx = MEM32(0x73A190);
    edx = edx | MEM32(0x73A194);
    if ((edx == 0)) goto loc_00153EB0; /* je: equal / zero */

loc_00153EA3:
    if (CMP_NE(MEM32(esi + 0x5F4), 2)) goto loc_00153EB0; /* jne: not equal / not zero */

loc_00153EAC:
    SET_LO8(ecx, 1);
    goto loc_00153EB2;

loc_00153EB0:
    SET_LO8(ecx, 0); /* xor self */

loc_00153EB2:
    if (CMP_EQ(eax, 4)) goto loc_00153EC1; /* je: equal / zero */

loc_00153EB7:
    if (CMP_EQ(eax, 5)) goto loc_00153EC1; /* je: equal / zero */

loc_00153EBC:
    if (CMP_NE(eax, 6)) goto loc_00153ECB; /* jne: not equal / not zero */

loc_00153EC1:
    eax = MEM32(esi + 0x5E0);
    if (TEST_NZ(eax, eax)) goto loc_00153EEA; /* jne: not equal / not zero */

loc_00153ECB:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00153EEA; /* je: equal / zero */

loc_00153ECF:
    edx = 0x4AE20C;
    PUSH32(esp, 0); sub_00018280(); /* call 0x00018280 */

loc_00153ED9:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153EEA; /* je: equal / zero */

loc_00153EDD:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_00153EE3:
    MEM8(esi + 0x62F) = 1;

loc_00153EEA:
    eax = MEM32(esi + 0x5F8);
    eax--;
    if (CMP_A(eax, 5)) goto loc_00153F03; /* ja: above (unsigned >) */

loc_00153EF6:
    { uint32_t _jt = MEM32(eax * 4 + 0x153F64); /* switch: 6 entries, 5 targets */
    if (_jt == 0x00153EFDu) goto loc_00153EFD;
    if (_jt == 0x00153F03u) goto loc_00153F03;
    if (_jt == 0x00153F35u) goto loc_00153F35;
    if (_jt == 0x00153F3Eu) goto loc_00153F3E;
    if (_jt == 0x00153F46u) goto loc_00153F46;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00153EFD:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001544C0(); /* call 0x001544C0 */

loc_00153F03:
    if (TEST_Z(MEM8(esi + 0x618), 0x10)) goto loc_00153F11; /* je: equal / zero */

loc_00153F0C:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_00153F11:
    if (TEST_Z(MEM8(esi + 0x618), 0x20)) goto loc_00153F1F; /* je: equal / zero */

loc_00153F1A:
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_00153F1F:
    eax = 0x4A71A0;
    PUSH32(esp, 0); sub_00017310(); /* call 0x00017310 */

loc_00153F29:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00153F62; /* jne: not equal / not zero */

loc_00153F2D:
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00152F30(); return; /* tail jmp 0x00152F30 */

loc_00153F35:
    eax = esi;
    PUSH32(esp, 0); sub_00154800(); /* call 0x00154800 */

loc_00153F3C:
    goto loc_00153F03;

loc_00153F3E:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00154A70(); /* call 0x00154A70 */

loc_00153F44:
    goto loc_00153F03;

loc_00153F46:
    if (TEST_Z(MEM8(esi + 0x618), 0x10)) goto loc_00153F54; /* je: equal / zero */

loc_00153F4F:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_00153F54:
    if (TEST_Z(MEM8(esi + 0x618), 0x20)) goto loc_00153F62; /* je: equal / zero */

loc_00153F5D:
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_00153F62:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
