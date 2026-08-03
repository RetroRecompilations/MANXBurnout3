#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00021EB0
 * Original: 0x00021EB0 - 0x00022037 (391 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00021EB0:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, esi);
    esi = ecx;
    if ((eax == 0)) goto loc_00021FE8; /* je: equal / zero */

loc_00021EC0:
    eax--;
    if ((eax != 0)) goto loc_00022033; /* jne: not equal / not zero */

loc_00021EC7:
    eax = MEM32(esi + 0x18);
    eax--;
    if ((eax == 0)) goto loc_00021EF9; /* je: equal / zero */

loc_00021ECD:
    eax--;
    if ((eax == 0)) goto loc_00021F73; /* je: equal / zero */

loc_00021ED4:
    eax--;
    if ((eax != 0)) goto loc_00022033; /* jne: not equal / not zero */

loc_00021EDB:
    eax = MEM32(0x44CB08);
    ecx = MEM32(0x44CB04);
    eax = eax + 0x14;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(0x44CB08) = eax;
    if (CMP_AE(eax, ecx)) goto loc_00021F5A; /* jae: above or equal (unsigned >=) */

loc_00021EF2:
    MEM32(esi + 0x18) = 1;

loc_00021EF9:
    edx = MEM32(0x4D1FBC);
    MEM32(edx + 0x134) = 0;
    eax = MEM32(0x44CB08);
    MEM32(eax + 0x10) = 0;
    eax = MEM32(0x44CB08);
    PUSH32(esp, 0); sub_00021BE0(); /* call 0x00021BE0 */

loc_00021F1F:
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D13C0);
    PUSH32(esp, 0); sub_001B45E0(); /* call 0x001B45E0 */

loc_00021F2A:
    if (TEST_NZ(eax, eax)) goto loc_00021FDD; /* jne: not equal / not zero */

loc_00021F32:
    ecx = MEM32(0x44CB08);
    MEM32(ecx + 0x10) = 1;
    edx = MEM32(0x4D1FBC);
    MEM32(edx + 0x134) = 0;
    MEM32(esi + 0x18) = 3;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00021F5A:
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = 0x3F9BA0;
    MEM32(esi + 0x18) = 4;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00021F6F:
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00021F73:
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00021F84:
    eax = eax - 0;
    if ((eax == 0)) goto loc_00021FBD; /* je: equal / zero */

loc_00021F89:
    eax = eax - 0xB;
    if ((eax == 0)) goto loc_00022033; /* je: equal / zero */

loc_00021F92:
    eax = eax - 2;
    if ((eax != 0)) goto loc_00022033; /* jne: not equal / not zero */

loc_00021F9B:
    if (CMP_EQ(MEM32(0x4D1FC0), 9)) goto loc_00021F32; /* je: equal / zero */

loc_00021FA4:
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00021FB2:
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00021FBD:
    eax = MEM32(0x44CB08);
    ecx = MEM32(esp + 8);
    if (CMP_EQ(ecx, MEM32(eax + 8))) goto loc_00021FD2; /* je: equal / zero */

loc_00021FCB:
    MEM32(eax + 0x10) = 2;

loc_00021FD2:
    MEM32(esi + 0x18) = 3;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00021FDD:
    MEM32(esi + 0x18) = 2;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00021FE8:
    eax = MEM32(0x4D13C0);
    if (TEST_Z(eax, eax)) goto loc_00022007; /* je: equal / zero */

loc_00021FF1:
    if (CMP_EQ(eax, 0xD)) goto loc_00022007; /* je: equal / zero */

loc_00021FF6:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00022007:
    eax = MEM32(0x4D1FBC);
    MEM32(0x44CB04) = 0x44CAF0;
    MEM32(0x44CB08) = 0x44CAB4;
    ecx = MEM32(eax + 0x150);
    MEM32(0x44CB0C) = ecx;
    MEM32(esi + 0x18) = 1;

loc_00022033:
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
