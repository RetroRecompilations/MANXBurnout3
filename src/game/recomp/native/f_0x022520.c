#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00022520
 * Original: 0x00022520 - 0x00022652 (306 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00022520(void)
{
    int _flags = 0; /* fallback flag var */

loc_00022520:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    PUSH32(esp, esi);
    esi = ecx;
    if ((eax == 0)) goto loc_000225DE; /* je: equal / zero */

loc_00022530:
    eax--;
    if ((eax != 0)) goto loc_0002264E; /* jne: not equal / not zero */

loc_00022537:
    eax = MEM32(esi + 0x18);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0002259E; /* je: equal / zero */

loc_0002253F:
    eax--;
    if ((eax != 0)) goto loc_0002264E; /* jne: not equal / not zero */

loc_00022546:
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00022557:
    if (CMP_EQ(eax, 9)) goto loc_0002264E; /* je: equal / zero */

loc_00022560:
    if (CMP_NE(eax, 0xD)) goto loc_0002257E; /* jne: not equal / not zero */

loc_00022565:
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    ecx = 0x3F9BA0;

loc_0002256E:
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00022573:
    MEM32(esi + 0x18) = 2;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002257E:
    if (TEST_NZ(eax, eax)) goto loc_0002264E; /* jne: not equal / not zero */

loc_00022586:
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00022593:
    MEM32(esi + 0x18) = 3;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0002259E:
    ecx = esp + 8;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_000225AF:
    if (TEST_Z(eax, eax)) goto loc_00022565; /* je: equal / zero */

loc_000225B3:
    if (CMP_NE(eax, 0xD)) goto loc_0002264E; /* jne: not equal / not zero */

loc_000225BC:
    /* cmp MEM32(0x4D1FC0), 3 - flags set for next jcc */
    PUSH32(esp, 0);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0xD);
    if (CMP_EQ(MEM32(0x4D1FC0), 3)) goto loc_0002256E; /* je: equal / zero */

loc_000225CE:
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_000225D3:
    MEM32(esi + 0x18) = 2;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000225DE:
    eax = MEM32(0x4D13C0);
    if (TEST_Z(eax, eax)) goto loc_000225FD; /* je: equal / zero */

loc_000225E7:
    if (CMP_EQ(eax, 0xD)) goto loc_000225FD; /* je: equal / zero */

loc_000225EC:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_000225FD:
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_0002260E:
    if (TEST_NZ(eax, eax)) goto loc_00022638; /* jne: not equal / not zero */

loc_00022612:
    ecx = MEM32(0x3F9BA4);
    if (TEST_Z(ecx, ecx)) goto loc_0002262D; /* je: equal / zero */

loc_0002261C:
    edx = MEM32(0x3F9BA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0002262D:
    MEM32(esi + 0x18) = 2;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_00022638:
    if (CMP_NE(eax, 0xD)) goto loc_00022647; /* jne: not equal / not zero */

loc_0002263D:
    eax = MEM32(0x4D1FC0);
    goto loc_00022565;

loc_00022647:
    MEM32(esi + 0x18) = 0;

loc_0002264E:
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}
