#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000222C0
 * Original: 0x000222C0 - 0x00022500 (576 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000222C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000222C0:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, esi);
    esi = ecx;
    if ((eax == 0)) goto loc_000224C2; /* je: equal / zero */

loc_000222D0:
    eax--;
    if ((eax != 0)) goto loc_000223A4; /* jne: not equal / not zero */

loc_000222D7:
    eax = MEM32(esi + 0x1C);
    if (CMP_A(eax, 4)) goto loc_000223A4; /* ja: above (unsigned >) */

loc_000222E3:
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x22500); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000222EBu) goto loc_000222EB;
    if (_jt == 0x00022309u) goto loc_00022309;
    if (_jt == 0x000223A8u) goto loc_000223A8;
    if (_jt == 0x0002240Au) goto loc_0002240A;
    if (_jt == 0x00022447u) goto loc_00022447;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000222EB:
    eax = MEM32(0x44CB08);
    ecx = MEM32(0x44CB04);
    eax = eax + 0x14;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x44CB08) = eax;
    if (CMP_AE(eax, ecx)) goto loc_00022351; /* jae: above or equal (unsigned >=) */

loc_00022302:
    MEM32(esi + 0x1C) = 1;

loc_00022309:
    eax = MEM32(0x4D1FBC);
    MEM32(eax + 0x134) = 0;
    edx = MEM32(0x44CB08);
    eax = MEM32(edx + 0x10);
    /* test eax, eax - flags set for next jcc */
    edi = 2;
    if (TEST_NZ(eax, eax)) goto loc_00022374; /* jne: not equal / not zero */

loc_0002232A:
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, 0); sub_00021BE0(); /* call 0x00021BE0 */

loc_00022333:
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D13C0);
    PUSH32(esp, 0); sub_001B47F0(); /* call 0x001B47F0 */

loc_0002233E:
    if (TEST_NZ(eax, eax)) goto loc_0002236B; /* jne: not equal / not zero */

loc_00022342:
    ecx = MEM32(0x44CB08);
    MEM32(ecx + 0x10) = 1;
    goto loc_0002236E;

loc_00022351:
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    ecx = 0x3F9BA0;
    MEM32(esi + 0x1C) = 6;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00022366:
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002236B:
    MEM32(esi + 0x1C) = edi;

loc_0002236E:
    edx = MEM32(0x44CB08);

loc_00022374:
    if (CMP_NE(MEM32(edx + 0x10), edi)) goto loc_00022395; /* jne: not equal / not zero */

loc_00022379:
    ecx = MEM32(edx + 8);
    edi = MEM32(edx + 4);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    edx = MEM32(0x44CB08);

loc_00022395:
    eax = MEM32(edx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000223A3; /* je: equal / zero */

loc_0002239C:
    MEM32(esi + 0x1C) = 0;

loc_000223A3:
    POP32(esp, edi);

loc_000223A4:
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000223A8:
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_000223B9:
    if (CMP_EQ(eax, 4)) goto loc_000223A3; /* je: equal / zero */

loc_000223BE:
    if (CMP_NE(eax, 0xD)) goto loc_000223DD; /* jne: not equal / not zero */

loc_000223C3:
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_000223D1:
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 5;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000223DD:
    if (TEST_NZ(eax, eax)) goto loc_000223A3; /* jne: not equal / not zero */

loc_000223E1:
    eax = MEM32(0x44CB08);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    eax = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4A30(); /* call 0x001B4A30 */

loc_000223FA:
    if (TEST_Z(eax, eax)) goto loc_000223C3; /* je: equal / zero */

loc_000223FE:
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 3;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002240A:
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_0002241B:
    if (CMP_EQ(eax, 7)) goto loc_000223A3; /* je: equal / zero */

loc_00022420:
    if (CMP_EQ(eax, 0xD)) goto loc_000223C3; /* je: equal / zero */

loc_00022425:
    if (TEST_NZ(eax, eax)) goto loc_000223A3; /* jne: not equal / not zero */

loc_0002242D:
    eax = 0x4D13C0;
    PUSH32(esp, 0); sub_001B49C0(); /* call 0x001B49C0 */

loc_00022437:
    if (TEST_Z(eax, eax)) goto loc_000223C3; /* je: equal / zero */

loc_0002243B:
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 4;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022447:
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00022458:
    if (CMP_EQ(eax, 5)) goto loc_000223A3; /* je: equal / zero */

loc_00022461:
    if (CMP_EQ(eax, 0xD)) goto loc_000223C3; /* je: equal / zero */

loc_0002246A:
    if (TEST_NZ(eax, eax)) goto loc_000223A3; /* jne: not equal / not zero */

loc_00022472:
    edx = MEM32(0x44CB08);
    eax = MEM32(edx + 0xC);
    ecx = 0x420C88;
    PUSH32(esp, 0); sub_00018510(); /* call 0x00018510 */

loc_00022485:
    edi = 2;
    eax = eax - edi;
    if ((eax != 0)) goto loc_0002239C; /* jne: not equal / not zero */

loc_00022492:
    eax = MEM32(0x44CB08);
    MEM32(eax + 0x10) = edi;
    edx = MEM32(0x44CB08);
    ecx = MEM32(edx + 8);
    edi = MEM32(edx + 4);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000224C2:
    eax = MEM32(0x4D13C0);
    if (TEST_Z(eax, eax)) goto loc_000224E1; /* je: equal / zero */

loc_000224CB:
    if (CMP_EQ(eax, 0xD)) goto loc_000224E1; /* je: equal / zero */

loc_000224D0:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_000224E1:
    MEM32(0x44CB04) = 0x44CAF0;
    MEM32(0x44CB08) = 0x44CAB4;
    MEM32(esi + 0x1C) = 1;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
