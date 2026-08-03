#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021CCF0
 * Original: 0x0021CCF0 - 0x0021D0D8 (1000 bytes, 301 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021CCF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021CCF0:
    esp = esp - 0x150;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x15C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x168);
    PUSH32(esp, edi);
    eax = esi + 0x35;
    PUSH32(esp, 0x3830E0);
    MEM8(eax) = 0;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x40);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM8(esi + 0xF7) = 0;
    MEM8(esi + 0xF4) = 0;
    MEM8(esi + 0x21) = 0;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0x3704B8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CD3E:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CD47:
    esp = esp + 0x10;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;

loc_0021CD50:
    eax = MEM32(eax * 4 + 0x3C5E38);
    edi = esp + 0x20;
    goto loc_0021CD60;

    /* nop */

loc_0021CD60:
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(edi))) goto loc_0021CD84; /* jne: not equal / not zero */

loc_0021CD68:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0021CD80; /* je: equal / zero */

loc_0021CD6C:
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(edi + 1))) goto loc_0021CD84; /* jne: not equal / not zero */

loc_0021CD76:
    eax = eax + 2;
    edi = edi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0021CD60; /* jne: not equal / not zero */

loc_0021CD80:
    eax = 0; /* xor self */
    goto loc_0021CD89;

loc_0021CD84:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_0021CD89:
    if (TEST_Z(eax, eax)) goto loc_0021CD9D; /* je: equal / zero */

loc_0021CD8D:
    eax = MEM32(esp + 0x10);
    eax++;
    /* cmp eax, 6 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, 6)) goto loc_0021CD50; /* jl: less (signed <) */

loc_0021CD9B:
    goto loc_0021CDA7;

loc_0021CD9D:
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi + 0xF7) = LO8(eax);

loc_0021CDA7:
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3704B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CDB7:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021CDC0:
    esp = esp + 8;
    PUSH32(esp, 0x370498);
    edi = eax;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, 0x29);
    edx = esi + 0x85;
    edi = (uint32_t)(-(int32_t)edi);
    PUSH32(esp, edx);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, 0x370490);
    edi++;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CDEA:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CDF3:
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0x370488);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CE01:
    ebp = eax;
    eax = MEM32(esi + 0xF8);
    esp = esp + 0x18;
    if (TEST_Z(ebp, ebp)) goto loc_0021CE45; /* je: equal / zero */

loc_0021CE10:
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x40);
    eax = eax | 0x2000;
    edx = esi + 0xAE;
    PUSH32(esp, edx);
    MEM32(esi + 0xF8) = eax;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, 0x370480);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CE37:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CE40:
    esp = esp + 0x10;
    goto loc_0021CE57;

loc_0021CE45:
    eax = eax & 0xFFFFDFFFu;
    MEM32(esi + 0xF8) = eax;
    MEM8(esi + 0xAE) = 0;

loc_0021CE57:
    edx = MEM32(ebx + 0x14);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x100);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x370478);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CE74:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CE7D:
    esp = esp + 0x10;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, 0x370474);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CE91:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DA0(); /* call 0x00213DA0 */

loc_0021CE9A:
    edx = MEM32(esi + 0xF8);
    esp = esp + 8;
    edx = edx & 0xFFFFEFFFu;
    PUSH32(esp, 0);
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 0xF8) = edx;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, 0x3B1444);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CEC5:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213DF0(); /* call 0x00213DF0 */

loc_0021CECE:
    ebx = MEM32(esi + 0xF8);
    eax = eax & 0x400;
    eax = eax << 2;
    ebx = ebx | eax;
    PUSH32(esp, 0x3830E0);
    MEM32(esi + 0xF8) = ebx;
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CEF6:
    SET_LO8(eax, MEM8(ebx));
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0021CF5F; /* je: equal / zero */

loc_0021CEFF:
    eax = MEM32(esp + 0x164);
    edx = MEM32(eax + 0x1B0);
    PUSH32(esp, 0x14);
    ecx = esi + 0x21;
    PUSH32(esp, ecx);
    ebx = eax + 0x528;
    PUSH32(esp, edx);
    edi = 1;
    PUSH32(esp, 0); sub_0021C930(); /* call 0x0021C930 */

loc_0021CF23:
    SET_LO8(eax, MEM8(ebx + 1));
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x50);
    MEM8(esi + 0xF4) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx));
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM8(esi + 0xF5) = LO8(ecx);
    MEM8(esi + 0xF6) = 0;
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CF4D:
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x150;
    esp += 4; return; /* ret */

loc_0021CF5F:
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, 0x35BEA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CF70:
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00213E80(); /* call 0x00213E80 */

loc_0021CF79:
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x16C);
    ecx = MEM32(eax + 0x524);
    esp = esp + 8;
    ebp = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0021D077; /* jle: less or equal (signed <=) */

loc_0021CF97:
    edi = eax + 0x528;
    /* nop */

loc_0021CFA0:
    SET_LO8(ecx, MEM8(edi + 1));
    SET_LO8(edx, MEM8(edi));
    eax = esp + 0x14;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    MEM8(esp + 0x1D) = LO8(edx);
    MEM8(esp + 0x1E) = 0;
    PUSH32(esp, 0); sub_002134B0(); /* call 0x002134B0 */

loc_0021CFC1:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0021CFE2; /* jne: not equal / not zero */

loc_0021CFC8:
    edx = MEM32(esp + 0x164);
    eax = MEM32(edx + 0x524);
    ebp++;
    edi = edi + 2;
    if (CMP_L(ebp, eax)) goto loc_0021CFA0; /* jl: less (signed <) */

loc_0021CFDD:
    goto loc_0021D073;

loc_0021CFE2:
    PUSH32(esp, 0x3830E0);
    PUSH32(esp, 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00214040(); /* call 0x00214040 */

loc_0021CFF0:
    SET_LO8(eax, MEM8(esp + 0x24));
    SET_LO8(ecx, MEM8(esp + 0x25));
    edx = 0; /* xor self */
    SET_HI8(edx, LO8(eax));
    MEM8(esi + 0xF4) = LO8(eax);
    SET_LO16(eax, SX8(LO8(ecx)));
    MEM8(esi + 0xF5) = LO8(ecx);
    MEM8(esi + 0xF6) = 0;
    esp = esp + 0x10;
    edi = 0; /* xor self */
    edx = edx | eax;
    eax = MEM32(0x41CFD4);
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(eax, eax)) goto loc_0021D073; /* je: equal / zero */

loc_0021D027:
    ecx = 0x41CFD4;
    /* nop */

loc_0021D030:
    if (CMP_NE(eax, MEM32(esp + 0x18))) goto loc_0021D04D; /* jne: not equal / not zero */

loc_0021D036:
    SET_LO16(edx, MEM16(ecx + 4));
    eax = 0; /* xor self */
    /* nop */

loc_0021D040:
    if (CMP_EQ(MEM16(esp + eax * 2 + 0x1C), LO16(edx))) goto loc_0021D05A; /* je: equal / zero */

loc_0021D047:
    eax++;
    if (CMP_L(eax, 1)) goto loc_0021D040; /* jl: less (signed <) */

loc_0021D04D:
    eax = MEM32(ecx + 0xC);
    ecx = ecx + 0xC;
    edi++;
    if (TEST_NZ(eax, eax)) goto loc_0021D030; /* jne: not equal / not zero */

loc_0021D058:
    goto loc_0021D073;

loc_0021D05A:
    ecx = edi + edi * 2;
    edx = MEM32(ecx * 4 + 0x41CFDC);
    PUSH32(esp, edx);
    eax = esi + 0x21;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002135F0(); /* call 0x002135F0 */

loc_0021D070:
    esp = esp + 0xC;

loc_0021D073:
    edi = MEM32(esp + 0x10);

loc_0021D077:
    SET_LO8(eax, MEM8(esi + 0xF4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0021D0CE; /* jne: not equal / not zero */

loc_0021D081:
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x14);
    eax = esi + 0x21;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x16C);
    edi = MEM32(eax + 0x524);
    ebx = eax + 0x528;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0021C930(); /* call 0x0021C930 */

loc_0021D0A4:
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0xF5) = LO8(eax);
    MEM8(esi + 0xF6) = 0;
    edx = eax;
    eax = MEM32(esp + 0xC);
    edx = (uint32_t)((int32_t)edx >> 8);
    MEM8(esi + 0xF4) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x150;
    esp += 4; return; /* ret */

loc_0021D0CE:
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

}
