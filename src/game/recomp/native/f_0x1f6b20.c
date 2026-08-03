#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6B20
 * Original: 0x001F6B20 - 0x001F6C33 (275 bytes, 111 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6B20:
    eax = MEM32(esp + 0xC);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001F6B42; /* je: equal / zero */

loc_001F6B30:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FE320(); /* call 0x001FE320 */

loc_001F6B36:
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE320(); /* call 0x001FE320 */

loc_001F6B3F:
    esp = esp + 8;

loc_001F6B42:
    eax = MEM32(esi + 4);
    /* test eax, eax - flags set for next jcc */
    ebx = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001F6B52; /* je: equal / zero */

loc_001F6B4D:
    eax = eax + ebx;
    MEM32(esi + 4) = eax;

loc_001F6B52:
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001F6B5E; /* je: equal / zero */

loc_001F6B59:
    eax = eax + ebx;
    MEM32(esi + 0xC) = eax;

loc_001F6B5E:
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001F6B6A; /* je: equal / zero */

loc_001F6B65:
    eax = eax + ebx;
    MEM32(esi + 0x10) = eax;

loc_001F6B6A:
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_001F6B76; /* je: equal / zero */

loc_001F6B71:
    eax = eax + ebx;
    MEM32(esi + 0x14) = eax;

loc_001F6B76:
    ecx = MEM32(esi + 0xC);
    edi = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = ecx;

loc_001F6B80:
    eax = MEM32(esp + 0x1C);
    /* test eax, eax - flags set for next jcc */
    ebp = edi;
    if (TEST_Z(eax, eax)) goto loc_001F6B93; /* je: equal / zero */

loc_001F6B8A:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001FE320(); /* call 0x001FE320 */

loc_001F6B90:
    esp = esp + 4;

loc_001F6B93:
    eax = MEM32(edi + 8);
    /* test eax, eax - flags set for next jcc */
    ecx = edi + 8;
    if (TEST_Z(eax, eax)) goto loc_001F6BA1; /* je: equal / zero */

loc_001F6B9D:
    eax = eax + ebx;
    MEM32(ecx) = eax;

loc_001F6BA1:
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_001F6BAD; /* je: equal / zero */

loc_001F6BA8:
    eax = eax + ebx;
    MEM32(edi + 4) = eax;

loc_001F6BAD:
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_001F6BB7; /* je: equal / zero */

loc_001F6BB3:
    eax = eax + ebx;
    MEM32(edi) = eax;

loc_001F6BB7:
    eax = MEM32(esp + 0x1C);
    /* test eax, eax - flags set for next jcc */
    edi = MEM32(edi + 4);
    esi = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_001F6BCD; /* je: equal / zero */

loc_001F6BC4:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FABD0(); /* call 0x001FABD0 */

loc_001F6BCA:
    esp = esp + 4;

loc_001F6BCD:
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_001F6BD7; /* je: equal / zero */

loc_001F6BD3:
    eax = eax + ebx;
    MEM32(esi) = eax;

loc_001F6BD7:
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_001F6BE3; /* je: equal / zero */

loc_001F6BDE:
    eax = eax + ebx;
    MEM32(esi + 4) = eax;

loc_001F6BE3:
    eax = MEM32(esi + 0x50);
    if (TEST_Z(eax, eax)) goto loc_001F6BEF; /* je: equal / zero */

loc_001F6BEA:
    eax = eax + ebx;
    MEM32(esi + 0x50) = eax;

loc_001F6BEF:
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_001F6BFB; /* je: equal / zero */

loc_001F6BF6:
    eax = eax + ebx;
    MEM32(esi + 0x20) = eax;

loc_001F6BFB:
    eax = MEM32(esi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_001F6C07; /* je: equal / zero */

loc_001F6C02:
    eax = eax + ebx;
    MEM32(esi + 0x3C) = eax;

loc_001F6C07:
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FA200(); /* call 0x001FA200 */

loc_001F6C10:
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FA200(); /* call 0x001FA200 */

loc_001F6C1C:
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esp + 0x1C);
    esp = esp + 8;
    if (CMP_NE(ebp, eax)) goto loc_001F6B80; /* jne: not equal / not zero */

loc_001F6C2E:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
