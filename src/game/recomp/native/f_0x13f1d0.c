#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0013F1D0
 * Original: 0x0013F1D0 - 0x0013F2B4 (228 bytes, 49 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0013F1D0:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0x4115E8;
    PUSH32(esp, 0); sub_00153310(); /* call 0x00153310 */

loc_0013F1DC:
    PUSH32(esp, 0); sub_001F5810(); /* call 0x001F5810 */

loc_0013F1E1:
    PUSH32(esp, 0x40B844);
    PUSH32(esp, 0); sub_001CD760(); /* call 0x001CD760 */

loc_0013F1EB:
    eax = 0x40E0D4;
    PUSH32(esp, 0); sub_001CC0C0(); /* call 0x001CC0C0 */

loc_0013F1F5:
    ebx = 0x40B318;
    PUSH32(esp, 0); sub_001CE1F0(); /* call 0x001CE1F0 */

loc_0013F1FF:
    PUSH32(esp, 0); sub_001F5840(); /* call 0x001F5840 */

loc_0013F204:
    eax = MEM32(esi + 0x3D28);
    if (TEST_Z(eax, eax)) goto loc_0013F222; /* je: equal / zero */

loc_0013F20E:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_0013F218:
    MEM32(esi + 0x3D28) = 0;

loc_0013F222:
    eax = MEM32(esi + 0x3D2C);
    if (TEST_Z(eax, eax)) goto loc_0013F240; /* je: equal / zero */

loc_0013F22C:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_0013F236:
    MEM32(esi + 0x3D2C) = 0;

loc_0013F240:
    eax = esi + 0x1150;
    PUSH32(esp, 0); sub_0014CEC0(); /* call 0x0014CEC0 */

loc_0013F24B:
    eax = esi + 0x1A90;
    PUSH32(esp, 0); sub_00146280(); /* call 0x00146280 */

loc_0013F256:
    eax = MEM32(esi + 0x34B8);
    if (TEST_Z(eax, eax)) goto loc_0013F274; /* je: equal / zero */

loc_0013F260:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_0013F26A:
    MEM32(esi + 0x34B8) = 0;

loc_0013F274:
    eax = MEM32(esi + 0x34BC);
    if (TEST_Z(eax, eax)) goto loc_0013F292; /* je: equal / zero */

loc_0013F27E:
    ebx = 0x40B7F4;
    PUSH32(esp, 0); sub_001C9DE0(); /* call 0x001C9DE0 */

loc_0013F288:
    MEM32(esi + 0x34BC) = 0;

loc_0013F292:
    edi = esi + 0x34C8;
    PUSH32(esp, 0); sub_00153F80(); /* call 0x00153F80 */

loc_0013F29D:
    eax = 0; /* xor self */
    MEM32(0x40B838) = eax;
    POP32(esp, edi);
    MEM32(esi + 4) = 0x18;
    MEM8(esi + 0x3D3D) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
