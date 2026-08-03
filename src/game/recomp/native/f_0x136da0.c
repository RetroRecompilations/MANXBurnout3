#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00136DA0
 * Original: 0x00136DA0 - 0x00136F7F (479 bytes, 139 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136DA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00136DA0:
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = esi + 0x10;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0xC5) = LO8(ebx);
    PUSH32(esp, 0); sub_0013B480(); /* call 0x0013B480 */

loc_00136DB4:
    /* cmp MEM8(0x4A1DC5), LO8(ebx) - flags set for next jcc */
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0x70) = ebx;
    MEM8(esi + 0xC7) = LO8(ebx);
    MEM8(esi + 0xC6) = LO8(ebx);
    if (CMP_NE(MEM8(0x4A1DC5), LO8(ebx))) goto loc_00136F7D; /* jne: not equal / not zero */

loc_00136DF9:
    eax = MEM32(0x3EC080);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x47A024);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC084);
    eax = 0; /* xor self */
    edx = 0x3AD4B0;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136E23:
    edx = MEM32(0x3EC080);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC088);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x47A01C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD49C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136E4D:
    ecx = MEM32(0x3EC080);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC088);
    edx = edx + 0x10;
    PUSH32(esp, 0x47A030);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD48C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136E78:
    eax = MEM32(0x3EC080);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x479EC4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC088);
    eax = 0; /* xor self */
    edx = 0x3AD478;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136EA2:
    edx = MEM32(0x3EC080);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC088);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x47A028);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD464;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136ECC:
    ecx = MEM32(0x3EC080);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC088);
    edx = edx + 0x10;
    PUSH32(esp, 0x479EC0);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD450;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136EF7:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = MEM32(0x3EC080);
    ecx = MEM32(0x4A1E94);
    PUSH32(esp, eax);
    ecx = ecx + 0x10;
    PUSH32(esp, 0x47A02C);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC088);
    eax = 0; /* xor self */
    edx = 0x3AD43C;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136F21:
    edx = MEM32(0x3EC080);
    eax = MEM32(0x4A1E94);
    ecx = MEM32(0x3EC088);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = eax + 0x10;
    PUSH32(esp, 0x47A020);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    edx = 0x3AD428;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136F4B:
    ecx = MEM32(0x3EC080);
    edx = MEM32(0x4A1E94);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(0x3EC088);
    edx = edx + 0x10;
    PUSH32(esp, 0x47A018);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    edx = 0x3AD410;
    PUSH32(esp, 0); sub_001AEE20(); /* call 0x001AEE20 */

loc_00136F76:
    MEM8(0x4A1DC5) = 1;

loc_00136F7D:
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
