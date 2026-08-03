#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00154800
 * Original: 0x00154800 - 0x00154A3C (572 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154800:
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx + 0x62C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154828; /* jne: not equal / not zero */

loc_0015480D:
    if (CMP_G(MEM32(0x73A1C0), 1)) goto loc_00154828; /* jg: greater (signed >) */

loc_00154816:
    SET_LO8(eax, MEM8(0x5A3759));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154828; /* jne: not equal / not zero */

loc_0015481F:
    eax = MEM32(0x463AF4);
    if (TEST_Z(eax, eax)) goto loc_00154832; /* je: equal / zero */

loc_00154828:
    MEM32(ebx + 0x5F4) = 0xD;

loc_00154832:
    eax = MEM32(ebx + 0x5F4);
    if (CMP_A(eax, 0xB)) goto loc_00154A3A; /* ja: above (unsigned >) */

loc_00154841:
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x154A3C); /* switch: 12 entries, 8 targets */
    if (_jt == 0x0015484Au) goto loc_0015484A;
    if (_jt == 0x0015484Fu) goto loc_0015484F;
    if (_jt == 0x00154859u) goto loc_00154859;
    if (_jt == 0x0015489Bu) goto loc_0015489B;
    if (_jt == 0x00154952u) goto loc_00154952;
    if (_jt == 0x0015497Fu) goto loc_0015497F;
    if (_jt == 0x00154A06u) goto loc_00154A06;
    if (_jt == 0x00154A38u) goto loc_00154A38;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015484A:
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_0015484F:
    MEM32(ebx + 0x5F4) = 4;

loc_00154859:
    esi = ebx;
    PUSH32(esp, 0); sub_00154270(); /* call 0x00154270 */

loc_00154860:
    esi = 0x40B318;
    PUSH32(esp, 0); sub_001CE140(); /* call 0x001CE140 */

loc_0015486A:
    /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x5E0) = eax;
    if (TEST_Z(eax, eax)) goto loc_00154A38; /* je: equal / zero */

loc_00154878:
    edx = ebx + 0x56C;
    PUSH32(esp, edx);
    eax = ebx + 0x60C;
    ecx = ebx + 0x608;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00155590(); /* call 0x00155590 */

loc_00154891:
    MEM32(ebx + 0x5F4) = 5;

loc_0015489B:
    ecx = 0x40E0D4;
    PUSH32(esp, 0); sub_001CC110(); /* call 0x001CC110 */

loc_001548A5:
    if (CMP_BE(eax & eax, 0)) goto loc_001548C3; /* jbe: below or equal (unsigned <=) */

loc_001548A9:
    eax = MEM32(ebx + 0x5E0);
    eax = MEM32(eax + 0x24);
    if (CMP_G(eax, 9)) goto loc_00154A38; /* jg: greater (signed >) */

loc_001548BB:
    if (TEST_Z(eax, eax)) goto loc_00154A38; /* je: equal / zero */

loc_001548C3:
    edi = MEM32(ebx + 0x5E0);
    eax = ebx + 0x56C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001CE500(); /* call 0x001CE500 */

loc_001548D5:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154A38; /* je: equal / zero */

loc_001548DD:
    ecx = MEM32(ebx + 0x5E0);
    edx = MEM32(ecx + 0x24C);
    ecx = MEM32(ebx + 0x60C);
    /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(edx + 4);
    MEM32(ebx + 0x604) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_00154902; /* jne: not equal / not zero */

loc_001548FC:
    MEM32(ebx + 0x60C) = eax;

loc_00154902:
    eax = MEM32(ebx + 0x608);
    ecx = MEM32(ebx + 0x60C);
    edx = (uint32_t)(int32_t)SMEM16(0x4A1BE2);
    ecx = ecx - eax;
    eax = MEM32(0x4A1BE0);
    eax = eax << 0x10;
    eax = eax + edx;
    edx = MEM32(0x4A1BE4);
    eax = eax + edx;
    edx = edx + eax;
    MEM32(0x4A1BE4) = edx;
    MEM32(0x4A1BE0) = eax;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(ebx + 0x608);
    MEM32(ebx + 0x5F4) = 6;
    edx = edx + eax;
    MEM32(ebx + 0x600) = edx;

loc_00154952:
    eax = MEM32(ebx + 0x600);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x5E0);
    ecx = ebx + 0x56C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CE6A0(); /* call 0x001CE6A0 */

loc_0015496D:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154A38; /* je: equal / zero */

loc_00154975:
    MEM32(ebx + 0x5F4) = 7;

loc_0015497F:
    ecx = MEM32(ebx + 0x5EC);
    if (TEST_Z(ecx, ecx)) goto loc_00154996; /* je: equal / zero */

loc_00154989:
    PUSH32(esp, 0); sub_001CB210(); /* call 0x001CB210 */

loc_0015498E:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154A38; /* jne: not equal / not zero */

loc_00154996:
    edi = ebx;
    PUSH32(esp, 0); sub_00154370(); /* call 0x00154370 */

loc_0015499D:
    esi = ebx;
    PUSH32(esp, 0); sub_00154460(); /* call 0x00154460 */

loc_001549A4:
    PUSH32(esp, 0); sub_001543B0(); /* call 0x001543B0 */

loc_001549A9:
    esi = MEM32(ebx + 0x5E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_001CEDB0(); /* call 0x001CEDB0 */

loc_001549C2:
    esi = MEM32(ebx + 0x5E0);
    PUSH32(esp, 0); sub_001CE9F0(); /* call 0x001CE9F0 */

loc_001549CD:
    edx = MEM32(ebx + 0x5E0);
    MEM8(edx + 0x2E) = 0xE;
    xmm0.f[0] = MEMF(ebx + 0x620); /* movss */
    eax = MEM32(ebx + 0x5E0);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3EC960); /* mulss */
    MEMF(eax + 0x21C) = xmm0.f[0]; /* movss */
    MEM32(ebx + 0x618) = MEM32(ebx + 0x618) | 2;
    MEM32(ebx + 0x5F4) = 8;

loc_00154A06:
    eax = MEM32(ebx + 0x5E0);
    eax = MEM32(eax + 0x24);
    if (CMP_EQ(eax, 0xB)) goto loc_00154A38; /* je: equal / zero */

loc_00154A14:
    if (CMP_EQ(eax, 0xA)) goto loc_00154A38; /* je: equal / zero */

loc_00154A19:
    ecx = MEM32(ebx + 0x618);
    ecx = ecx & 0xFFFFFFFDu;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x618) = ecx;
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_00154A2E:
    MEM32(ebx + 0x5F4) = 0xD;

loc_00154A38:
    POP32(esp, edi);
    POP32(esp, esi);

loc_00154A3A:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
