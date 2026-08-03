#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003D690
 * Original: 0x0003D690 - 0x0003D882 (498 bytes, 127 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D690(void)
{
    int _flags = 0; /* fallback flag var */

loc_0003D690:
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x4000);
    eax = 0x280;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esi + 8) = 0x20;
    MEM32(esi) = eax;
    MEM32(esi + 4) = 0x1E0;
    MEM32(esi + 0x3BC) = eax;
    MEM32(esi + 0x3C0) = 0x1E0;
    MEM8(esi + 0xE) = LO8(ebx);
    MEM8(0x45B9C0) = LO8(ebx);
    MEM8(0x45B9B8) = LO8(ebx);
    MEM32(esi + 0x9B0) = ebx;
    MEM32(esi + 0x9B4) = ebx;
    MEM32(esi + 0x9B8) = 0x10;
    MEM32(esi + 0x9A8) = eax;
    MEM32(esi + 0x9AC) = 0x1C0;
    PUSH32(esp, 0); sub_001DB200(); /* call 0x001DB200 */

loc_0003D6FD:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001DD310(); /* call 0x001DD310 */

loc_0003D703:
    PUSH32(esp, 0); sub_001ED200(); /* call 0x001ED200 */

loc_0003D708:
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD490(); /* call 0x001DD490 */

loc_0003D712:
    SET_LO8(eax, MEM8(esi + 0xD));
    esp = esp + 0x14;
    /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    ecx = esp + 8;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x24) = 0x100;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0003D734; /* je: equal / zero */

loc_0003D72C:
    MEM32(esp + 0x24) = 0x110;

loc_0003D734:
    PUSH32(esp, 0); sub_001CF8EA(); /* call 0x001CF8EA */

loc_0003D739:
    if (CMP_NE(eax, 3)) goto loc_0003D77E; /* jne: not equal / not zero */

loc_0003D73E:
    PUSH32(esp, 0); sub_001CF913(); /* call 0x001CF913 */

loc_0003D743:
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0003D758; /* je: equal / zero */

loc_0003D747:
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = 0x3C;
    eax = eax | 0x20;
    goto loc_0003D7B0;

loc_0003D758:
    eax = MEM32(esp + 0x24);
    MEM8(esi + 0xE) = 1;
    MEM32(esi + 0x3C0) = 0x1E0;
    MEM32(esp + 0x28) = 0x32;
    MEM8(0x45B9C0) = 1;
    eax = eax | 0x20;
    goto loc_0003D7B0;

loc_0003D77E:
    PUSH32(esp, 0); sub_001CFF80(); /* call 0x001CFF80 */

loc_0003D783:
    if (CMP_NE(eax, 1)) goto loc_0003D7A1; /* jne: not equal / not zero */

loc_0003D788:
    PUSH32(esp, 0); sub_001CF913(); /* call 0x001CF913 */

loc_0003D78D:
    if (TEST_Z(LO8(eax), 8)) goto loc_0003D7A1; /* je: equal / zero */

loc_0003D791:
    eax = MEM32(esp + 0x24);
    eax = eax | 0x40;
    MEM8(0x45B9B8) = 1;
    goto loc_0003D7A8;

loc_0003D7A1:
    eax = MEM32(esp + 0x24);
    eax = eax | 0x20;

loc_0003D7A8:
    MEM32(esp + 0x28) = 0x3C;

loc_0003D7B0:
    edx = MEM32(esi + 0x3BC);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x3C0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 1;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0x12;
    MEM32(esp + 0x24) = 0x2E;
    MEM32(esp + 0x1C) = 0x11;
    MEM32(esp + 0x30) = 1;
    PUSH32(esp, 0); sub_001DB150(); /* call 0x001DB150 */

loc_0003D7FA:
    esp = esp + 4;
    PUSH32(esp, 0); sub_001DACF0(); /* call 0x001DACF0 */

loc_0003D802:
    if (TEST_NZ(eax, eax)) goto loc_0003D815; /* jne: not equal / not zero */

loc_0003D806:
    PUSH32(esp, 0); sub_001DADC0(); /* call 0x001DADC0 */

loc_0003D80B:
    PUSH32(esp, 0); sub_001DAE20(); /* call 0x001DAE20 */

loc_0003D810:
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

loc_0003D815:
    edx = MEM32(0x35FB48);
    ecx = MEM32(edx + 0x1A08);
    if (CMP_NE(ecx, ebx)) goto loc_0003D829; /* jne: not equal / not zero */

loc_0003D825:
    ecx = 0; /* xor self */
    goto loc_0003D84D;

loc_0003D829:
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_0003D84B; /* jne: not equal / not zero */

loc_0003D832:
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_0003D84B; /* jne: not equal / not zero */

loc_0003D83E:
    eax = MEM32(ecx + 0x14);
    if (CMP_EQ(eax, ebx)) goto loc_0003D84B; /* je: equal / zero */

loc_0003D845:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034C860(); /* call 0x0034C860 */

loc_0003D84B:
    MEM32(ecx) = MEM32(ecx) + 1;

loc_0003D84D:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x868) = ecx;
    PUSH32(esp, 0); sub_0034C2E0(); /* call 0x0034C2E0 */

loc_0003D862:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00351090(); /* call 0x00351090 */

loc_0003D868:
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xF0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0034C2E0(); /* call 0x0034C2E0 */

loc_0003D877:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00351090(); /* call 0x00351090 */

loc_0003D87D:
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}
