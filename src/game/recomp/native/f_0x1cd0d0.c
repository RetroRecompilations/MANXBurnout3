#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CD0D0
 * Original: 0x001CD0D0 - 0x001CD173 (163 bytes, 60 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD0D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CD0D0:
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(esi + 0x38));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CD0E3:
    eax = MEM32(esp + 0x14);
    ecx = ZX8(MEM8(esi + 0x39));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CD0F6:
    eax = MEM32(esp + 0x24);
    ecx = ZX8(MEM8(esi + 0x3A));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CD109:
    eax = MEM32(esp + 0x34);
    ecx = ZX8(MEM8(esi + 0x3B));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CD11C:
    eax = MEM32(esp + 0x44);
    ecx = ZX8(MEM8(esi + 0x3C));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CD12F:
    eax = MEM32(esp + 0x54);
    ecx = ZX8(MEM8(esi + 0x3D));
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001F5A10(); /* call 0x001F5A10 */

loc_001CD142:
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x64);
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_001CD170; /* je: equal / zero */

loc_001CD14F:
    SET_LO8(ecx, MEM8(esp + 0x1C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001CD165; /* je: equal / zero */

loc_001CD157:
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FACB0(); /* call 0x001FACB0 */

loc_001CD15F:
    esp = esp + 8;
    esp += 32; return; /* ret 28 */

loc_001CD165:
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FACB0(); /* call 0x001FACB0 */

loc_001CD16D:
    esp = esp + 8;

loc_001CD170:
    esp += 32; return; /* ret 28 */

}
