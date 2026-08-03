#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00135240
 * Original: 0x00135240 - 0x0013534E (270 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135240(void)
{
    int _flags = 0; /* fallback flag var */

    /* The retail path below waits for the Xbox gameplay sound-bank graph.
     * MANX deliberately does not recreate that plugin graph: FMV
     * audio is decoded by the portable media backend and menu/game SFX can
     * be imported independently. Report the optional graph as ready so the
     * original frontend state machine is not blocked on unavailable Xbox
     * DirectSound objects. This is the same success result the routine
     * returns after completing loc_00135349. */
    SET_LO8(eax, 1);
    esp += 4;
    return;

loc_00135240:
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x6B54);
    if (TEST_NZ(eax, eax)) goto loc_00135263; /* jne: not equal / not zero */

loc_0013524D:
    edx = MEM32(0x3FA644);
    ecx = 0x3F9D04;
    PUSH32(esp, 0); sub_00018BB0(); /* call 0x00018BB0 */

loc_0013525D:
    MEM32(edi + 0x6B54) = eax;

loc_00135263:
    eax = MEM32(edi + 0x6B58);
    if (TEST_NZ(eax, eax)) goto loc_001352A4; /* jne: not equal / not zero */

loc_0013526D:
    eax = MEM32(0x3FA680);
    if (TEST_S(eax, eax)) goto loc_00135282; /* jl: less (signed <) */

loc_00135276:
    if (CMP_EQ(eax, MEM32(0x3FA644))) goto loc_00135282; /* je: equal / zero */

loc_0013527E:
    eax = 0; /* xor self */
    goto loc_0013529E;

loc_00135282:
    eax = MEM32(0x3FA67C);
    if (TEST_Z(eax, eax)) goto loc_0013528F; /* je: equal / zero */

loc_0013528B:
    eax = 0; /* xor self */
    goto loc_0013529E;

loc_0013528F:
    eax = MEM32(0x3FA688);
    MEM32(0x3FA67C) = 0xFFFFFFFFu;

loc_0013529E:
    MEM32(edi + 0x6B58) = eax;

loc_001352A4:
    eax = MEM32(edi + 0x6B58);
    ecx = MEM32(edi + 0x6B54);
    PUSH32(esp, 0x400E0);
    PUSH32(esp, 0x801C0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CA4A0(); /* call 0x001CA4A0 */

loc_001352C1:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001352F3; /* je: equal / zero */

loc_001352C5:
    eax = MEM32(edi + 0x6B50);
    if (TEST_NZ(eax, eax)) goto loc_001352F7; /* jne: not equal / not zero */

loc_001352CF:
    edx = MEM32(0x3EBFC8);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = edi + 0x4E4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001C9C80(); /* call 0x001C9C80 */

loc_001352E9:
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x6B50) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001352F7; /* jne: not equal / not zero */

loc_001352F3:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001352F7:
    PUSH32(esp, ebx);
    ebx = edi + 0x62D8;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_00135303:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_00135308:
    ecx = edi + 0x534;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001CD760(); /* call 0x001CD760 */

loc_00135314:
    eax = edi + 0x2DC4;
    PUSH32(esp, 0); sub_001CC0C0(); /* call 0x001CC0C0 */

loc_0013531F:
    ebx = edi + 8;
    PUSH32(esp, 0); sub_001CE1F0(); /* call 0x001CE1F0 */

loc_00135327:
    PUSH32(esp, 0); sub_001F5840(); /* call 0x001F5840 */

loc_0013532C:
    ebx = 0x4AE1A0;
    eax = edi;
    MEM32(edi + 0x2E00) = 0x17;
    MEM8(edi + 0x6B65) = 0;
    PUSH32(esp, 0); sub_00135350(); /* call 0x00135350 */

loc_00135349:
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
