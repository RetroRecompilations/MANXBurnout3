#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00157CE0
 * Original: 0x00157CE0 - 0x00157E55 (373 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00157CE0:
    eax = 0; /* xor self */
    MEM32(0x47A088) = eax;
    MEM32(0x47A08C) = eax;
    MEM32(0x47A090) = eax;
    MEM32(0x47A094) = eax;
    MEM32(0x47A098) = eax;
    MEM32(0x47A09C) = eax;
    MEM32(0x47A0A0) = eax;
    MEM32(0x47A0A4) = eax;
    MEM32(0x47A0A8) = eax;
    MEM32(0x47A0AC) = eax;
    MEM32(0x47A0B0) = eax;
    MEM32(0x47A0B4) = eax;
    MEM32(0x47A0B8) = eax;
    MEM32(0x47A0BC) = eax;
    esp = esp - 0x20;
    MEM32(0x47A0C0) = eax;
    PUSH32(esp, ebx);
    MEM32(0x47A0C4) = eax;
    PUSH32(esp, esi);
    MEM32(0x47A0C8) = eax;
    PUSH32(esp, edi);
    MEM32(0x47A0CC) = eax;
    esi = 0; /* xor self */
    SET_LO8(ebx, 0x5F);
    goto loc_00157D50;

    /* nop */
    /* nop */

loc_00157D50:
    ecx = MEM32(esi * 8 + 0x39DF3C);
    /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi * 8 + 0x39DF38);
    if (CMP_A(ecx & ecx, 0)) goto loc_00157D75; /* ja: above (unsigned >) */

loc_00157D62:
    if (CMP_B(ecx & ecx, 0)) goto loc_00157D69; /* jb: below (unsigned <) */

loc_00157D64:
    if (CMP_AE(eax, 7)) goto loc_00157D75; /* jae: above or equal (unsigned >=) */

loc_00157D69:
    ecx = MEM32(eax * 4 + 0x3ED0F8);
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);

loc_00157D75:
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_00157D80:
    SET_LO8(eax, MEM8(esp + 0x1B));
    SET_LO8(edx, MEM8(esp + 0x1A));
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(esp + 0x15) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1E));
    MEM8(esp + 0x14) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x1D));
    MEM8(esp + 0x17) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x1F));
    MEM8(esp + 0x1A) = LO8(eax);
    esp = esp + 8;
    eax = edi;
    MEM8(esp + 0xE) = LO8(ebx);
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(ecx);
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_001AEAA0(); /* call 0x001AEAA0 */

loc_00157DC7:
    ecx = 0; /* xor self */
    /* nop */

loc_00157DD0:
    edi = MEM32(ecx * 8 + 0x39EBC0);
    if (CMP_NE(edi, eax)) goto loc_00157DE6; /* jne: not equal / not zero */

loc_00157DDB:
    edi = MEM32(ecx * 8 + 0x39EBC4);
    if (CMP_EQ(edi, edx)) goto loc_00157DEF; /* je: equal / zero */

loc_00157DE6:
    ecx++;
    if (CMP_L(ecx, 0x24)) goto loc_00157DD0; /* jl: less (signed <) */

loc_00157DEC:
    ecx = ecx | 0xFFFFFFFFu;

loc_00157DEF:
    edx = MEM32(ecx * 8 + 0x39EBC4);
    eax = MEM32(ecx * 8 + 0x39EBC0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_001AECC0(); /* call 0x001AECC0 */

loc_00157E08:
    SET_LO8(eax, MEM8(esp + 0x24));
    esp = esp + 8;
    if (CMP_EQ(LO8(eax), 0x41)) goto loc_00157E2D; /* je: equal / zero */

loc_00157E13:
    if (CMP_EQ(LO8(eax), 0x45)) goto loc_00157E26; /* je: equal / zero */

loc_00157E17:
    ecx = 0; /* xor self */
    /* cmp LO8(eax), 0x55 - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(LO8(eax), 0x55)) ? 1 : 0); /* sete */
    ecx--;
    ecx = ecx & 3;
    eax = ecx;
    goto loc_00157E32;

loc_00157E26:
    eax = 1;
    goto loc_00157E32;

loc_00157E2D:
    eax = 2;

loc_00157E32:
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00158120(); /* call 0x00158120 */

loc_00157E3A:
    edx = MEM32(eax * 4 + 0x47A088);
    esp = esp + 4;
    edx++;
    esi++;
    /* cmp esi, 0x49 - flags set for next jcc */
    MEM32(eax * 4 + 0x47A088) = edx;

}
