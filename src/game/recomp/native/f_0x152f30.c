#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00152F30
 * Original: 0x00152F30 - 0x001530B5 (389 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152F30:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x544);
    if (CMP_A(eax, 5)) goto loc_001530A3; /* ja: above (unsigned >) */

loc_00152F44:
    ebx = 1;
    { uint32_t _jt = MEM32(eax * 4 + 0x1530B8); /* switch: 6 entries, 5 targets */
    if (_jt == 0x00152F50u) goto loc_00152F50;
    if (_jt == 0x00152F87u) goto loc_00152F87;
    if (_jt == 0x00152FCBu) goto loc_00152FCB;
    if (_jt == 0x0015303Bu) goto loc_0015303B;
    if (_jt == 0x001530A3u) goto loc_001530A3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00152F50:
    eax = MEM32(0x73A190);
    eax = eax | MEM32(0x73A194);
    if ((eax == 0)) goto loc_00152F62; /* je: equal / zero */

loc_00152F5D:
    eax = MEM32(0x73A1C0);

loc_00152F62:
    esi = 0x40B318;
    PUSH32(esp, 0); sub_001CE140(); /* call 0x001CE140 */

loc_00152F6C:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x53C) = eax;
    if (TEST_Z(eax, eax)) goto loc_00153085; /* je: equal / zero */

loc_00152F7A:
    MEM8(edi + 0x564) = MEM8(edi + 0x564) & 0xDF;
    MEM32(edi + 0x544) = ebx;

loc_00152F87:
    edx = MEM32(edi + 0x55C);
    ecx = MEM32(edi + 0x550);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    eax = MEM32(edi + 0x554);
    PUSH32(esp, ecx);
    eax = eax - edx;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x53C);
    ecx = edi + 0x4C4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CE6A0(); /* call 0x001CE6A0 */

loc_00152FB2:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00153085; /* je: equal / zero */

loc_00152FBA:
    MEM8(edi + 0x564) = MEM8(edi + 0x564) & 0xEF;
    MEM32(edi + 0x544) = 2;

loc_00152FCB:
    if (TEST_Z(MEM8(edi + 0x564), LO8(ebx))) goto loc_001530A3; /* je: equal / zero */

loc_00152FD7:
    esi = MEM32(edi + 0x53C);
    PUSH32(esp, 0x3E0F5C29);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F547AE1);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_001CEDB0(); /* call 0x001CEDB0 */

loc_00152FF3:
    esi = MEM32(edi + 0x53C);
    PUSH32(esp, 0); sub_001CE9F0(); /* call 0x001CE9F0 */

loc_00152FFE:
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    edx = MEM32(edi + 0x53C);
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    MEMF(edx + 0x21C) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x53C);
    MEM8(eax + 0x2E) = 0xD;
    eax = edi;
    MEM32(edi + 0x544) = 3;
    PUSH32(esp, 0); sub_001530D0(); /* call 0x001530D0 */

loc_00153030:
    ecx = edi + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00155900(); return; /* tail jmp 0x00155900 */

loc_0015303B:
    eax = MEM32(edi + 0x53C);
    ecx = MEM32(eax + 0x24);
    if (CMP_EQ(ecx, 0xB)) goto loc_00153092; /* je: equal / zero */

loc_00153049:
    if (CMP_EQ(ecx, 0xA)) goto loc_00153092; /* je: equal / zero */

loc_0015304E:
    eax = MEM32(edi + 0x540);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0xFFFFFFF7u;
    eax = MEM32(edi + 0x554);
    SET_LO8(edx, MEM8(eax + 0x4AE1A0));
    SET_LO8(edx, LO8(edx) & 0xF7);
    ebx = edi;
    MEM8(eax + 0x4AE1A0) = LO8(edx);
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00153074:
    eax = edi;
    PUSH32(esp, 0); sub_00153660(); /* call 0x00153660 */

loc_0015307B:
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00153089; /* jne: not equal / not zero */

loc_00153080:
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00153085:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00153089:
    PUSH32(esp, 0); sub_001537C0(); /* call 0x001537C0 */

loc_0015308E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00153092:
    xmm0.f[0] = MEMF(edi + 4); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi); /* mulss */
    MEMF(eax + 0x21C) = xmm0.f[0]; /* movss */

loc_001530A3:
    eax = edi;
    PUSH32(esp, 0); sub_001530D0(); /* call 0x001530D0 */

loc_001530AA:
    ecx = edi + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00155900(); return; /* tail jmp 0x00155900 */

}
