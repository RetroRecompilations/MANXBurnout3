#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021EBD0
 * Original: 0x0021EBD0 - 0x0021EEDA (778 bytes, 239 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021EBD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021EBD0:
    esp = esp - 0x21C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x228);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0021E5F0(); /* call 0x0021E5F0 */

loc_0021EBE7:
    ecx = MEM32(esp + 0x24C);
    edx = MEM32(esp + 0x23C);
    eax = MEM32(esp + 0x250);
    MEM32(ebp + 0x8E4) = ecx;
    ecx = MEM32(esp + 0x238);
    PUSH32(esp, 0x80);
    MEM32(ebp + 0x18) = edx;
    MEM32(ebp + 0x8E0) = eax;
    eax = MEM32(esp + 0x244);
    PUSH32(esp, ecx);
    edx = ebp + 0x24;
    PUSH32(esp, edx);
    MEM32(ebp + 0xA4) = eax;
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021EC2E:
    esi = MEM32(esp + 0x250);
    PUSH32(esp, 0x80);
    eax = ebp + 0xA8;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021EC47:
    edi = MEM32(esp + 0x260);
    PUSH32(esp, 0x80);
    ecx = ebp + 0x128;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021EC60:
    eax = MEM32(ebp + 0x1AC);
    esp = esp + 0x28;
    if (TEST_NZ(eax, eax)) goto loc_0021EC7F; /* jne: not equal / not zero */

loc_0021EC6D:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0021CA20(); /* call 0x0021CA20 */

loc_0021EC73:
    edx = ZX16(LO16(eax));
    esp = esp + 4;
    MEM32(ebp + 0x1AC) = edx;

loc_0021EC7F:
    eax = ebp + 0x530;
    PUSH32(esp, eax);
    PUSH32(esp, 0x370488);
    ebx = ebp + 0x5B0;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    MEM8(ebx) = 0;
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021EC9F:
    ecx = ebp + 0x570;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3B15E4);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021ECB6:
    edx = ebp + 0x4E4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3704D0);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021ECCD:
    PUSH32(esp, 0x3A);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021ECD5:
    esp = esp + 0x38;
    if (TEST_NZ(eax, eax)) goto loc_0021ED06; /* jne: not equal / not zero */

loc_0021ECDC:
    PUSH32(esp, edi);
    PUSH32(esp, 0x36F814);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021ECED:
    PUSH32(esp, esi);
    PUSH32(esp, 0x3B1538);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021ECFE:
    esp = esp + 0x20;
    goto loc_0021EE02;

loc_0021ED06:
    PUSH32(esp, 0xFF);
    eax = esp + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_0021ED16:
    ecx = esp + 0x38;
    PUSH32(esp, 0x3A);
    PUSH32(esp, ecx);
    MEM8(esp + 0x13F) = 0;
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021ED2A:
    esi = eax;
    esp = esp + 0x14;
    if (TEST_Z(esi, esi)) goto loc_0021EE02; /* je: equal / zero */

loc_0021ED37:
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM8(esi) = 0;
    eax = esp + 0x130;
    PUSH32(esp, 0x100);
    esi++;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0); sub_002135F0(); /* call 0x002135F0 */

loc_0021ED56:
    eax = esp + 0x138;
    esp = esp + 0xC;
    edx = eax + 1;

loc_0021ED63:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021ED63; /* jne: not equal / not zero */

loc_0021ED6A:
    ecx = edi;
    eax = eax - edx;
    edi = ecx + 1;

loc_0021ED71:
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0021ED71; /* jne: not equal / not zero */

loc_0021ED78:
    ecx = ecx - edi;
    ecx = ecx + eax;
    if (CMP_AE(ecx, 0x100)) goto loc_0021EDBD; /* jae: above or equal (unsigned >=) */

loc_0021ED84:
    eax = MEM32(esp + 0x244);
    edx = eax;
    /* nop */

loc_0021ED90:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021ED90; /* jne: not equal / not zero */

loc_0021ED97:
    edi = esp + 0x12C;
    eax = eax - edx;
    edi--;

loc_0021EDA1:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021EDA1; /* jne: not equal / not zero */

loc_0021EDA9:
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(esp + 0x10);

loc_0021EDBD:
    ecx = esp + 0x12C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x36F814);
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021EDD5:
    SET_LO8(eax, MEM8(esi));
    esp = esp + 0x10;
    if (CMP_NE(LO8(eax), 0x24)) goto loc_0021EDE7; /* jne: not equal / not zero */

loc_0021EDDE:
    esi++;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3B1538);
    goto loc_0021EDED;

loc_0021EDE7:
    PUSH32(esp, esi);
    PUSH32(esp, 0x3B1580);

loc_0021EDED:
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00213970(); /* call 0x00213970 */

loc_0021EDF8:
    edi = MEM32(esp + 0x254);
    esp = esp + 0x10;

loc_0021EE02:
    PUSH32(esp, edi);
    esi = ebp + 0x6B0;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002135F0(); /* call 0x002135F0 */

loc_0021EE11:
    SET_LO8(eax, MEM8(esi));
    esp = esp + 0xC;
    if (CMP_NE(LO8(eax), 0x2F)) goto loc_0021EE2E; /* jne: not equal / not zero */

loc_0021EE1A:
    eax = ebp + 0x6B1;
    edx = esi;
    edx = edx - eax;

loc_0021EE24:
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021EE24; /* jne: not equal / not zero */

loc_0021EE2E:
    PUSH32(esp, 0x2F);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00243AD0(); /* call 0x00243AD0 */

loc_0021EE36:
    ebx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0021EE41; /* je: equal / zero */

loc_0021EE3F:
    MEM8(eax) = LO8(ebx);

loc_0021EE41:
    eax = MEM32(esp + 0x234);
    if (CMP_NE(MEM8(eax), 0x2A)) goto loc_0021EE4E; /* jne: not equal / not zero */

loc_0021EE4D:
    eax++;

loc_0021EE4E:
    edi = MEM32(esp + 0x23C);
    esi = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3E8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002262E0(); /* call 0x002262E0 */

loc_0021EE64:
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0x10);
    ecx = 1;
    esp = esp + 8;
    if (CMP_EQ(eax, ecx)) goto loc_0021EEA9; /* je: equal / zero */

loc_0021EE76:
    eax = MEM32(ebp + 0x8E4);
    /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x10) = ecx;
    if (CMP_EQ(eax, ebx)) goto loc_0021EEA9; /* je: equal / zero */

loc_0021EE83:
    edx = MEM32(ebp + 0x8E0);
    MEM32(esp + 0x18) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = 0x636F6E6E;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x34) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0021EEA6:
    esp = esp + 0xC;

loc_0021EEA9:
    if (CMP_LE(edi, ebx)) goto loc_0021EEC0; /* jle: less or equal (signed <=) */

loc_0021EEAD:
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243210(); /* call 0x00243210 */

loc_0021EEB6:
    esp = esp + 4;
    eax = eax + esi;
    MEM32(ebp + 0x14) = eax;
    goto loc_0021EEC3;

loc_0021EEC0:
    MEM32(ebp + 0x14) = ebx;

loc_0021EEC3:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x4E0) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x21C;
    esp += 4; return; /* ret */

}
