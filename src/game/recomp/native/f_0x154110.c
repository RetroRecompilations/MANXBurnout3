#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00154110
 * Original: 0x00154110 - 0x00154259 (329 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    recomp_xmm_t xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154110:
    PUSH32(esp, ecx);
    /* cmp eax, 5 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5F8);
    SET_LO8(ebx, 1);
    MEM8(esp + 0xB) = 0;
    SET_LO8(edx, LO8(ebx));
    if (CMP_NE(eax, 5)) goto loc_00154132; /* jne: not equal / not zero */

loc_00154129:
    MEM8(esi + 0x564) = MEM8(esi + 0x564) | 4;
    goto loc_0015414B;

loc_00154132:
    MEM8(esi + 0x564) = MEM8(esi + 0x564) & 0xFB;
    if (CMP_EQ(eax, 4)) goto loc_0015414B; /* je: equal / zero */

loc_0015413E:
    /* cmp eax, 6 - flags set for next jcc */
    xmm0.f[0] = MEMF(0x3EC930); /* movss */
    if (CMP_NE(eax, 6)) goto loc_00154153; /* jne: not equal / not zero */

loc_0015414B:
    xmm0.f[0] = MEMF(0x3EC934); /* movss */

loc_00154153:
    /* cmp eax, 5 - flags set for next jcc */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(eax, 5)) goto loc_00154169; /* je: equal / zero */

loc_0015415D:
    /* cmp eax, 6 - flags set for next jcc */
    MEM8(0x40FBAE) = 0;
    if (CMP_NE(eax, 6)) goto loc_00154170; /* jne: not equal / not zero */

loc_00154169:
    MEM8(0x40FBAE) = 1;

loc_00154170:
    if (CMP_EQ(eax, MEM32(esi + 0x5F8))) goto loc_00154255; /* je: equal / zero */

loc_0015417C:
    ecx--;
    /* cmp ecx, 4 - flags set for next jcc */
    MEM32(esi + 0x5F8) = eax;
    if (CMP_A(ecx, 4)) goto loc_00154211; /* ja: above (unsigned >) */

loc_0015418C:
    { uint32_t _jt = MEM32(ecx * 4 + 0x15425C); /* switch: 5 entries, 2 targets */
    if (_jt == 0x00154193u) goto loc_00154193;
    if (_jt == 0x001541A5u) goto loc_001541A5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00154193:
    if (CMP_NE(eax, 5)) goto loc_001541A5; /* jne: not equal / not zero */

loc_00154198:
    if (CMP_EQ(MEM32(esi + 0x5F4), 0xD)) goto loc_001541A5; /* je: equal / zero */

loc_001541A1:
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(edx, 0); /* xor self */

loc_001541A5:
    if (CMP_NE(MEM32(esi + 0x5F4), 1)) goto loc_001541B3; /* jne: not equal / not zero */

loc_001541AE:
    if (CMP_NE(eax, 4)) goto loc_00154211; /* jne: not equal / not zero */

loc_001541B3:
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001541BE; /* je: equal / zero */

loc_001541B7:
    eax = esi;
    PUSH32(esp, 0); sub_00155330(); /* call 0x00155330 */

loc_001541BE:
    if (CMP_EQ(MEM32(esi + 0x5F8), 3)) goto loc_00154211; /* je: equal / zero */

loc_001541C7:
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00154211; /* je: equal / zero */

loc_001541CB:
    eax = esi;
    PUSH32(esp, 0); sub_00153A20(); /* call 0x00153A20 */

loc_001541D2:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001541DF; /* jne: not equal / not zero */

loc_001541D6:
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_001541DB:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001541EA; /* jne: not equal / not zero */

loc_001541DF:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_001541E5:
    MEM8(esp + 0xB) = 1;

loc_001541EA:
    SET_LO8(eax, MEM8(esi + 0xD0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154200; /* je: equal / zero */

loc_001541F4:
    MEM32(esi + 0x5F4) = 0xB;
    goto loc_00154211;

loc_00154200:
    eax = esi;
    PUSH32(esp, 0); sub_00153230(); /* call 0x00153230 */

loc_00154207:
    MEM32(esi + 0x5F4) = 0;

loc_00154211:
    if (CMP_NE(MEM32(esi + 0x5F8), 4)) goto loc_00154255; /* jne: not equal / not zero */

loc_0015421A:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001552E0(); /* call 0x001552E0 */

loc_00154220:
    SET_LO8(eax, MEM8(esp + 0xB));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015424B; /* jne: not equal / not zero */

loc_00154228:
    SET_LO8(eax, MEM8(esi + 0x538));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00154245; /* je: equal / zero */

loc_00154232:
    SET_LO8(eax, MEM8(esi + 0x566));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00154245; /* jne: not equal / not zero */

loc_0015423C:
    PUSH32(esp, 0); sub_00153A40(); /* call 0x00153A40 */

loc_00154241:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0015424B; /* jne: not equal / not zero */

loc_00154245:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00155420(); /* call 0x00155420 */

loc_0015424B:
    MEM32(esi + 0x5F4) = 0;

loc_00154255:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
