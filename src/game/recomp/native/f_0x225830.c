#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225830
 * Original: 0x00225830 - 0x002258D8 (168 bytes, 65 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225830:
    eax = MEM32(esp + 8);
    if (CMP_LE(eax, 0x19)) goto loc_0022583E; /* jle: less or equal (signed <=) */

loc_00225839:
    eax = 0x19;

loc_0022583E:
    if (CMP_LE(eax & eax, 0)) goto loc_002258D7; /* jle: less or equal (signed <=) */

loc_00225846:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    edi = edi + 0x18;
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_00225860:
    if (CMP_NE(MEM32(edi + -8), 0x43)) goto loc_002258C5; /* jne: not equal / not zero */

loc_00225866:
    if (TEST_Z(MEM8(edi), 1)) goto loc_002258C5; /* je: equal / zero */

loc_0022586B:
    eax = edi + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00225710(); /* call 0x00225710 */

loc_00225875:
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_002258C5; /* je: equal / zero */

loc_0022587E:
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, 0x10000000)) goto loc_002258C5; /* je: equal / zero */

loc_00225888:
    if (TEST_Z(eax, 0x4000000)) goto loc_002258C5; /* je: equal / zero */

loc_0022588F:
    if (TEST_Z(LO8(eax), 1)) goto loc_002258C5; /* je: equal / zero */

loc_00225893:
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0031AADC(); /* call 0x0031AADC */

loc_0022589C:
    if (TEST_Z(eax, eax)) goto loc_002258C5; /* je: equal / zero */

loc_002258A0:
    eax = MEM32(ebx + 0x463C);
    if (TEST_Z(eax, eax)) goto loc_002258C5; /* je: equal / zero */

loc_002258AA:
    edx = MEM32(ebx + 0x4640);
    ecx = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    esi = esi + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002258C2:
    esp = esp + 0x18;

loc_002258C5:
    eax = MEM32(esp + 0x18);
    edi = edi + 0x1C;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00225860; /* jne: not equal / not zero */

loc_002258D3:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002258D7:
    esp += 4; return; /* ret */

}
