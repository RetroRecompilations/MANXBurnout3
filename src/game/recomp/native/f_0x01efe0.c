#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001EFE0
 * Original: 0x0001EFE0 - 0x0001F44E (1134 bytes, 361 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001EFE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001EFE0:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_0001EFF0:
    edx = MEM32(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x17C);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    eax = eax + 0x4EC0;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F036; /* jae: above or equal (unsigned >=) */

loc_0001F01B:
    ebx = eax;
    ebx = ebx - edx;
    /* nop */

loc_0001F020:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F039; /* je: equal / zero */

loc_0001F025:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = ebx + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F020; /* jb: below (unsigned <) */

loc_0001F036:
    MEM16(edi) = LO16(ecx);

loc_0001F039:
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4EDC;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F086; /* jae: above or equal (unsigned >=) */

loc_0001F069:
    ebx = eax;
    ebx = ebx - edx;
    /* nop */

loc_0001F070:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F089; /* je: equal / zero */

loc_0001F075:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = ebx + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F070; /* jb: below (unsigned <) */

loc_0001F086:
    MEM16(edi) = LO16(ecx);

loc_0001F089:
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4EF8;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F0D6; /* jae: above or equal (unsigned >=) */

loc_0001F0B9:
    ebx = eax;
    ebx = ebx - edx;
    /* nop */

loc_0001F0C0:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F0D9; /* je: equal / zero */

loc_0001F0C5:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = ebx + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F0C0; /* jb: below (unsigned <) */

loc_0001F0D6:
    MEM16(edi) = LO16(ecx);

loc_0001F0D9:
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4F14;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F126; /* jae: above or equal (unsigned >=) */

loc_0001F109:
    ebx = eax;
    ebx = ebx - edx;
    /* nop */

loc_0001F110:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F129; /* je: equal / zero */

loc_0001F115:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = ebx + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F110; /* jb: below (unsigned <) */

loc_0001F126:
    MEM16(edi) = LO16(ecx);

loc_0001F129:
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4F30;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F176; /* jae: above or equal (unsigned >=) */

loc_0001F159:
    ebx = eax;
    ebx = ebx - edx;
    /* nop */

loc_0001F160:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F179; /* je: equal / zero */

loc_0001F165:
    SET_LO16(ebp, MEM16(edx + 2));
    edx = edx + 2;
    esi = ebx + edx;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebp);
    if (CMP_B(esi, edi)) goto loc_0001F160; /* jb: below (unsigned <) */

loc_0001F176:
    MEM16(edi) = LO16(ecx);

loc_0001F179:
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4F4C;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F1C6; /* jae: above or equal (unsigned >=) */

loc_0001F1A9:
    ebp = eax;
    ebp = ebp - edx;
    /* nop */

loc_0001F1B0:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F1C9; /* je: equal / zero */

loc_0001F1B5:
    SET_LO16(ebx, MEM16(edx + 2));
    edx = edx + 2;
    esi = edx + ebp;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebx);
    if (CMP_B(esi, edi)) goto loc_0001F1B0; /* jb: below (unsigned <) */

loc_0001F1C6:
    MEM16(edi) = LO16(ecx);

loc_0001F1C9:
    edx = eax + 0x1C;
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    SET_LO16(ebx, MEM16(0x3C83D4));
    edi = edx + 0x10;
    /* cmp edx, edi - flags set for next jcc */
    esi = 0x3C83D4;
    MEM16(edx) = LO16(ebx);
    if (CMP_AE(edx, edi)) goto loc_0001F209; /* jae: above or equal (unsigned >=) */

loc_0001F1F3:
    if (CMP_EQ(MEM16(esi), LO16(ecx))) goto loc_0001F20C; /* je: equal / zero */

loc_0001F1F8:
    SET_LO16(ebx, MEM16(esi + 2));
    esi = esi + 2;
    edx = edx + 2;
    /* cmp edx, edi - flags set for next jcc */
    MEM16(edx) = LO16(ebx);
    if (CMP_B(edx, edi)) goto loc_0001F1F3; /* jb: below (unsigned <) */

loc_0001F209:
    MEM16(edi) = LO16(ecx);

loc_0001F20C:
    MEM8(eax + 0x2E) = LO8(ecx);
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4F7C;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F24B; /* jae: above or equal (unsigned >=) */

loc_0001F231:
    ebp = eax;
    ebp = ebp - edx;

loc_0001F235:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F24E; /* je: equal / zero */

loc_0001F23A:
    SET_LO16(ebx, MEM16(edx + 2));
    edx = edx + 2;
    esi = edx + ebp;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebx);
    if (CMP_B(esi, edi)) goto loc_0001F235; /* jb: below (unsigned <) */

loc_0001F24B:
    MEM16(edi) = LO16(ecx);

loc_0001F24E:
    edx = eax + 0x1C;
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    SET_LO16(ebx, MEM16(0x3C83D4));
    edi = edx + 0x10;
    /* cmp edx, edi - flags set for next jcc */
    esi = 0x3C83D4;
    MEM16(edx) = LO16(ebx);
    if (CMP_AE(edx, edi)) goto loc_0001F28E; /* jae: above or equal (unsigned >=) */

loc_0001F278:
    if (CMP_EQ(MEM16(esi), LO16(ecx))) goto loc_0001F291; /* je: equal / zero */

loc_0001F27D:
    SET_LO16(ebx, MEM16(esi + 2));
    esi = esi + 2;
    edx = edx + 2;
    /* cmp edx, edi - flags set for next jcc */
    MEM16(edx) = LO16(ebx);
    if (CMP_B(edx, edi)) goto loc_0001F278; /* jb: below (unsigned <) */

loc_0001F28E:
    MEM16(edi) = LO16(ecx);

loc_0001F291:
    MEM8(eax + 0x2E) = LO8(ecx);
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4FAC;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F2D6; /* jae: above or equal (unsigned >=) */

loc_0001F2B6:
    ebp = eax;
    ebp = ebp - edx;
    /* nop */

loc_0001F2C0:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F2D9; /* je: equal / zero */

loc_0001F2C5:
    SET_LO16(ebx, MEM16(edx + 2));
    edx = edx + 2;
    esi = edx + ebp;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebx);
    if (CMP_B(esi, edi)) goto loc_0001F2C0; /* jb: below (unsigned <) */

loc_0001F2D6:
    MEM16(edi) = LO16(ecx);

loc_0001F2D9:
    edx = eax + 0x1C;
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    SET_LO16(ebx, MEM16(0x3C83D4));
    edi = edx + 0x10;
    /* cmp edx, edi - flags set for next jcc */
    esi = 0x3C83D4;
    MEM16(edx) = LO16(ebx);
    if (CMP_AE(edx, edi)) goto loc_0001F319; /* jae: above or equal (unsigned >=) */

loc_0001F303:
    if (CMP_EQ(MEM16(esi), LO16(ecx))) goto loc_0001F31C; /* je: equal / zero */

loc_0001F308:
    SET_LO16(ebx, MEM16(esi + 2));
    esi = esi + 2;
    edx = edx + 2;
    /* cmp edx, edi - flags set for next jcc */
    MEM16(edx) = LO16(ebx);
    if (CMP_B(edx, edi)) goto loc_0001F303; /* jb: below (unsigned <) */

loc_0001F319:
    MEM16(edi) = LO16(ecx);

loc_0001F31C:
    MEM8(eax + 0x2E) = LO8(ecx);
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x4FDC;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F35B; /* jae: above or equal (unsigned >=) */

loc_0001F341:
    ebp = eax;
    ebp = ebp - edx;

loc_0001F345:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F35E; /* je: equal / zero */

loc_0001F34A:
    SET_LO16(ebx, MEM16(edx + 2));
    edx = edx + 2;
    esi = edx + ebp;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebx);
    if (CMP_B(esi, edi)) goto loc_0001F345; /* jb: below (unsigned <) */

loc_0001F35B:
    MEM16(edi) = LO16(ecx);

loc_0001F35E:
    edx = eax + 0x1C;
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    SET_LO16(ebx, MEM16(0x3C83D4));
    edi = edx + 0x10;
    /* cmp edx, edi - flags set for next jcc */
    esi = 0x3C83D4;
    MEM16(edx) = LO16(ebx);
    if (CMP_AE(edx, edi)) goto loc_0001F39E; /* jae: above or equal (unsigned >=) */

loc_0001F388:
    if (CMP_EQ(MEM16(esi), LO16(ecx))) goto loc_0001F3A1; /* je: equal / zero */

loc_0001F38D:
    SET_LO16(ebx, MEM16(esi + 2));
    esi = esi + 2;
    edx = edx + 2;
    /* cmp edx, edi - flags set for next jcc */
    MEM16(edx) = LO16(ebx);
    if (CMP_B(edx, edi)) goto loc_0001F388; /* jb: below (unsigned <) */

loc_0001F39E:
    MEM16(edi) = LO16(ecx);

loc_0001F3A1:
    MEM8(eax + 0x2E) = LO8(ecx);
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    SET_LO16(esi, MEM16(0x3C83D4));
    eax = eax + 0x500C;
    edi = eax + 0x10;
    /* cmp eax, edi - flags set for next jcc */
    edx = 0x3C83D4;
    MEM16(eax) = LO16(esi);
    if (CMP_AE(eax, edi)) goto loc_0001F3E6; /* jae: above or equal (unsigned >=) */

loc_0001F3C6:
    ebp = eax;
    ebp = ebp - edx;
    /* nop */

loc_0001F3D0:
    if (CMP_EQ(MEM16(edx), LO16(ecx))) goto loc_0001F3E9; /* je: equal / zero */

loc_0001F3D5:
    SET_LO16(ebx, MEM16(edx + 2));
    edx = edx + 2;
    esi = edx + ebp;
    /* cmp esi, edi - flags set for next jcc */
    MEM16(esi) = LO16(ebx);
    if (CMP_B(esi, edi)) goto loc_0001F3D0; /* jb: below (unsigned <) */

loc_0001F3E6:
    MEM16(edi) = LO16(ecx);

loc_0001F3E9:
    edx = eax + 0x1C;
    MEM8(eax + 0x12) = LO8(ecx);
    MEM8(eax + 0x13) = LO8(ecx);
    MEM8(eax + 0x14) = 0xFF;
    MEM8(eax + 0x15) = 0xFF;
    MEM32(eax + 0x18) = ecx;
    SET_LO16(ebx, MEM16(0x3C83D4));
    edi = edx + 0x10;
    /* cmp edx, edi - flags set for next jcc */
    esi = 0x3C83D4;
    MEM16(edx) = LO16(ebx);
    if (CMP_AE(edx, edi)) goto loc_0001F429; /* jae: above or equal (unsigned >=) */

loc_0001F413:
    if (CMP_EQ(MEM16(esi), LO16(ecx))) goto loc_0001F42C; /* je: equal / zero */

loc_0001F418:
    SET_LO16(ebx, MEM16(esi + 2));
    esi = esi + 2;
    edx = edx + 2;
    /* cmp edx, edi - flags set for next jcc */
    MEM16(edx) = LO16(ebx);
    if (CMP_B(edx, edi)) goto loc_0001F413; /* jb: below (unsigned <) */

loc_0001F429:
    MEM16(edi) = LO16(ecx);

loc_0001F42C:
    MEM8(eax + 0x2E) = LO8(ecx);
    MEM8(eax + 0x2F) = LO8(ecx);
    eax = MEM32(esp + 0x14);
    eax++;
    /* cmp eax, 0x64 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 0x64)) goto loc_0001EFF0; /* jl: less (signed <) */

loc_0001F444:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}
