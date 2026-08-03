#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00021D60
 * Original: 0x00021D60 - 0x00021E81 (289 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00021D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00021D60:
    eax = MEM32(esp + 4);
    eax = eax - 3;
    if ((eax == 0)) goto loc_00021E4E; /* je: equal / zero */

loc_00021D6D:
    eax--;
    if ((eax != 0)) goto loc_00021E7E; /* jne: not equal / not zero */

loc_00021D74:
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00021D85:
    if (TEST_Z(eax, eax)) goto loc_00021E1F; /* je: equal / zero */

loc_00021D8D:
    if (CMP_NE(eax, 0xD)) goto loc_00021E7E; /* jne: not equal / not zero */

loc_00021D96:
    eax = MEM32(0x4D1FC0);
    eax--;
    if (CMP_A(eax, 8)) goto loc_00021DEC; /* ja: above (unsigned >) */

loc_00021DA1:
    { uint32_t _jt = MEM32(eax * 4 + 0x21E84); /* switch: 9 entries, 5 targets */
    if (_jt == 0x00021DA8u) goto loc_00021DA8;
    if (_jt == 0x00021DB9u) goto loc_00021DB9;
    if (_jt == 0x00021DCAu) goto loc_00021DCA;
    if (_jt == 0x00021DDBu) goto loc_00021DDB;
    if (_jt == 0x00021DECu) goto loc_00021DEC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00021DA8:
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00021DB6:
    esp += 20; return; /* ret 16 */

loc_00021DB9:
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00021DC7:
    esp += 20; return; /* ret 16 */

loc_00021DCA:
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00021DD8:
    esp += 20; return; /* ret 16 */

loc_00021DDB:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x3F9BA0;
    PUSH32(esp, 0); sub_001B4230(); /* call 0x001B4230 */

loc_00021DE9:
    esp += 20; return; /* ret 16 */

loc_00021DEC:
    ecx = MEM32(0x3F9BA4);
    if (TEST_Z(ecx, ecx)) goto loc_00021E7E; /* je: equal / zero */

loc_00021DFA:
    eax = MEM32(0x3F9BA8);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 4;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_00021E1F:
    ecx = MEM32(0x3F9BA4);
    if (TEST_Z(ecx, ecx)) goto loc_00021E7E; /* je: equal / zero */

loc_00021E29:
    eax = MEM32(0x3F9BA8);
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 5;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_00021E4E:
    eax = MEM32(0x4D13C0);
    if (TEST_Z(eax, eax)) goto loc_00021E6D; /* je: equal / zero */

loc_00021E57:
    if (CMP_EQ(eax, 0xD)) goto loc_00021E6D; /* je: equal / zero */

loc_00021E5C:
    PUSH32(esp, 0);
    eax = 1;
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00021E6D:
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    ecx = 0x4D13C0;
    PUSH32(esp, 0); sub_001B4CF0(); /* call 0x001B4CF0 */

loc_00021E7E:
    esp += 20; return; /* ret 16 */

}
