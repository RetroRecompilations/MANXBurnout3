#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00214840
 * Original: 0x00214840 - 0x00214908 (200 bytes, 65 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214840:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x58);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00214904; /* jne: not equal / not zero */

loc_00214852:
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ebp = esi + 0xA4;
    PUSH32(esp, 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002206A0(); /* call 0x002206A0 */

loc_00214865:
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0xC);
    edi = esi + 0xB0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x78756964);
    MEM32(esi + 0xBC) = ecx;
    PUSH32(esp, 0); sub_002155A0(); /* call 0x002155A0 */

loc_00214882:
    SET_LO8(eax, MEM8(esi + 0xC0));
    esp = esp + 0x18;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002148CC; /* jne: not equal / not zero */

loc_0021488F:
    edx = MEM32(edi);
    if (CMP_NE(edx, MEM32(esi + 0x80))) goto loc_002148C2; /* jne: not equal / not zero */

loc_00214899:
    eax = MEM32(edi + 4);
    if (CMP_NE(eax, MEM32(esi + 0x84))) goto loc_002148C2; /* jne: not equal / not zero */

loc_002148A4:
    ecx = esi + 0x94;
    PUSH32(esp, ecx);
    edx = esi + 0x8C;
    PUSH32(esp, edx);
    eax = esi + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AB0B(); /* call 0x0031AB0B */

loc_002148BB:
    MEM8(esi + 0xC0) = 1;

loc_002148C2:
    SET_LO8(eax, MEM8(esi + 0xC0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002148D0; /* je: equal / zero */

loc_002148CC:
    eax = ebp;
    goto loc_002148D6;

loc_002148D0:
    eax = esi + 0x80;

loc_002148D6:
    PUSH32(esp, esi);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, 0);
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0); sub_0031AB16(); /* call 0x0031AB16 */

loc_002148F9:
    if (TEST_NZ(eax, eax)) goto loc_00214904; /* jne: not equal / not zero */

loc_002148FD:
    MEM32(esi + 0x58) = 1;

loc_00214904:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
