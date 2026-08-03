#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021D2F0
 * Original: 0x0021D2F0 - 0x0021D543 (595 bytes, 193 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021D2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021D2F0:
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    eax = MEM32(ebp + 0x8C4);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0021D31D; /* jne: not equal / not zero */

loc_0021D305:
    PUSH32(esp, 0x7D0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, 0); sub_002222B0(); /* call 0x002222B0 */

loc_0021D314:
    esp = esp + 8;
    MEM32(ebp + 0x8C4) = eax;

loc_0021D31D:
    eax = MEM32(ebp + 0x8C8);
    if (TEST_NZ(eax, eax)) goto loc_0021D33B; /* jne: not equal / not zero */

loc_0021D327:
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0); sub_0021BFF0(); /* call 0x0021BFF0 */

loc_0021D332:
    esp = esp + 0xC;
    MEM32(ebp + 0x8C8) = eax;

loc_0021D33B:
    edi = MEM32(esp + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3704C4);
    PUSH32(esp, edi);
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021D354:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021D35D:
    ebx = eax;
    esp = esp + 8;
    /* cmp ebx, 1 - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(ebx, 1)) goto loc_0021D375; /* jne: not equal / not zero */

loc_0021D36B:
    MEM32(esp + 0x3C) = 4;
    goto loc_0021D382;

loc_0021D375:
    if (CMP_NE(ebx, 2)) goto loc_0021D382; /* jne: not equal / not zero */

loc_0021D37A:
    MEM32(esp + 0x3C) = 0x200;

loc_0021D382:
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x20);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36F814);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021D399:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021D3A2:
    ecx = esp + 0x28;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021D3AE:
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_0021D3B8; /* je: equal / zero */

loc_0021D3B5:
    MEM8(eax) = 0;

loc_0021D3B8:
    edx = esp + 0x18;
    PUSH32(esp, 0x2F);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021D3C4:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021D3CE; /* je: equal / zero */

loc_0021D3CB:
    MEM8(eax) = 0;

loc_0021D3CE:
    eax = esp + 0x18;
    PUSH32(esp, 0x2E);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021D3DA:
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0021D3E4; /* je: equal / zero */

loc_0021D3E1:
    MEM8(eax) = 0;

loc_0021D3E4:
    eax = esp + 0x18;
    edx = eax + 1;
    goto loc_0021D3F0;

    /* nop */

loc_0021D3F0:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021D3F0; /* jne: not equal / not zero */

loc_0021D3F7:
    eax = eax - edx;
    MEM32(esp + 0x14) = eax;
    if ((eax == 0)) goto loc_0021D53C; /* je: equal / zero */

loc_0021D403:
    eax = MEM32(ebp + 0x20);
    if (TEST_NZ(eax, eax)) goto loc_0021D421; /* jne: not equal / not zero */

loc_0021D40A:
    ecx = esp + 0x18;
    PUSH32(esp, 0x2E);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021D416:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0021D53C; /* jne: not equal / not zero */

loc_0021D421:
    eax = MEM32(ebp + 0x8C4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00222080(); /* call 0x00222080 */

loc_0021D432:
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0021D4B0; /* jne: not equal / not zero */

loc_0021D43B:
    eax = esp + 0x18;
    edx = eax + 1;

loc_0021D442:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021D442; /* jne: not equal / not zero */

loc_0021D449:
    eax = eax - edx;
    if (CMP_AE(eax, 0x21)) goto loc_0021D53C; /* jae: above or equal (unsigned >=) */

loc_0021D454:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x108);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp), _icall_esp); /* indirect call */
    }

loc_0021D45C:
    ebx = eax;
    eax = 0; /* xor self */
    ecx = 0x42;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = esp + 0x1C;
    edx = ebx;
    ecx = eax;
    esp = esp + 4;
    edx = edx - ecx;

loc_0021D476:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021D476; /* jne: not equal / not zero */

loc_0021D480:
    edx = MEM32(ebp + 0x8C8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0021C0C0(); /* call 0x0021C0C0 */

loc_0021D48D:
    esi = eax;
    eax = MEM32(ebp + 0x8C4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00222010(); /* call 0x00222010 */

loc_0021D49D:
    ebx = MEM32(esp + 0x24);
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_0021D53C; /* je: equal / zero */

loc_0021D4AC:
    edi = MEM32(esp + 0x54);

loc_0021D4B0:
    ecx = MEM32(ebp + 0x8C8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021C180(); /* call 0x0021C180 */

loc_0021D4BD:
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_0021D53C; /* je: equal / zero */

loc_0021D4C6:
    eax = MEM32(esp + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_0021D4E2; /* je: equal / zero */

loc_0021D4CE:
    edx = MEM32(esi + 0xF8);
    edx = edx | eax;
    edx = edx & 0xFFEFFFFFu;
    MEM32(esi + 0xF8) = edx;

loc_0021D4E2:
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x60);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x68);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    PUSH32(esp, ebp);
    MEM32(eax + 0x14) = edi;
    PUSH32(esp, 0); sub_0021C9A0(); /* call 0x0021C9A0 */

loc_0021D512:
    edx = MEM32(esi + 0xF8);
    edx = edx | eax;
    eax = edx;
    esp = esp + 0x1C;
    /* test eax, 0x80000 - flags set for next jcc */
    MEM32(esi + 0xF8) = edx;
    if (CMP_A(eax & 0x80000, 0)) goto loc_0021D533; /* ja: above (unsigned >) */

loc_0021D52C:
    if (CMP_BE(eax & 0x40000, 0)) goto loc_0021D53C; /* jbe: below or equal (unsigned <=) */

loc_0021D533:
    eax = eax & 0xFFFFFFFBu;
    MEM32(esi + 0xF8) = eax;

loc_0021D53C:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);

}
