#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F5D40
 * Original: 0x001F5D40 - 0x001F5E2E (238 bytes, 90 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5D40(void)
{
    int _flags = 0; /* fallback flag var */

loc_001F5D40:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = MEM32(ebx + 0x20);
    /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, MEM8(ebx + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_001F5D72; /* je: equal / zero */

loc_001F5D51:
    /* test LO8(eax), 2 - flags set for next jcc */
    eax = MEM32(ebx);
    if (TEST_Z(LO8(eax), 2)) goto loc_001F5D66; /* je: equal / zero */

loc_001F5D57:
    edx = MEM32(eax + 0x40);
    edx = edx & 0xFFFFFFF;
    eax = edx + ecx + 4;
    goto loc_001F5D7C;

loc_001F5D66:
    eax = MEM32(eax + 0x40);
    eax = eax & 0xFFFFFFF;
    eax = eax + ecx;
    goto loc_001F5D7C;

loc_001F5D72:
    /* test LO8(eax), 2 - flags set for next jcc */
    eax = ebx + 0x2C;
    if (TEST_NZ(LO8(eax), 2)) goto loc_001F5D7C; /* jne: not equal / not zero */

loc_001F5D79:
    eax = ebx + 0x28;

loc_001F5D7C:
    /* cmp MEM32(esp + 0x18), 1 - flags set for next jcc */
    ecx = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(esp + 0x18), 1)) goto loc_001F5DDF; /* jne: not equal / not zero */

loc_001F5D87:
    edx = MEM32(eax);
    ecx = ecx + ecx * 2;
    esi = MEM32(edx + ecx * 4);
    edi = MEM32(edx + ecx * 4 + 4);
    /* cmp esi, edi - flags set for next jcc */
    eax = edx + ecx * 4;
    if (CMP_EQ(esi, edi)) goto loc_001F5E28; /* je: equal / zero */

loc_001F5D9E:
    edi = edi;

loc_001F5DA0:
    ecx = MEM32(esi + -4);
    edx = MEM32(esi + -8);
    eax = esi + -20;
    esi = MEM32(esi);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41B458);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001F5DD2:
    esp = esp + 8;
    if (CMP_NE(esi, edi)) goto loc_001F5DA0; /* jne: not equal / not zero */

loc_001F5DD9:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F5DDF:
    eax = MEM32(eax + 4);
    esi = MEM32(eax + ecx * 8);
    edi = MEM32(eax + ecx * 8 + 4);
    /* cmp esi, edi - flags set for next jcc */
    eax = eax + ecx * 8;
    if (CMP_EQ(esi, edi)) goto loc_001F5E28; /* je: equal / zero */

loc_001F5DF0:
    edx = MEM32(esi + 4);
    ecx = MEM32(esi);
    eax = esi + -12;
    esi = MEM32(esi);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x10);
    MEM32(edx + 4) = ecx;
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x14);
    MEM32(edx) = ecx;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41B458);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001F5E21:
    esp = esp + 8;
    if (CMP_NE(esi, edi)) goto loc_001F5DF0; /* jne: not equal / not zero */

loc_001F5E28:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
