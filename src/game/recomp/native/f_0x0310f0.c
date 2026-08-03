#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000310F0
 * Original: 0x000310F0 - 0x00031322 (562 bytes, 198 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000310F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000310F0:
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x60);
    if (TEST_Z(eax, eax)) goto loc_00031103; /* je: equal / zero */

loc_000310F8:
    ecx = eax + esi;
    MEM32(esi + 0x60) = ecx;
    PUSH32(esp, 0); sub_001C8E20(); /* call 0x001C8E20 */

loc_00031103:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = esi + 0x4C;
    MEM32(esp + 0xC) = 5;

loc_00031111:
    eax = MEM32(ebp);
    if (TEST_Z(eax, eax)) goto loc_0003118D; /* je: equal / zero */

loc_00031118:
    ebx = eax + esi;
    MEM32(ebp) = ebx;
    PUSH32(esp, 0); sub_00031010(); /* call 0x00031010 */

loc_00031123:
    ecx = MEM32(ebx + 0x48);
    eax = MEM32(ebx + 0x4C);
    ecx = ecx & 0x70000;
    eax = eax + ebx;
    if (CMP_EQ(ecx, 0x20000)) goto loc_0003113E; /* je: equal / zero */

loc_00031139:
    eax = eax & 0xFFFFFFF;

loc_0003113E:
    MEM32(ebx + 0x4C) = eax;
    edx = MEM32(ebx + 0x54);
    eax = MEM32(ebx + 0x58);
    edx = edx & 0x70000;
    eax = eax + ebx;
    if (CMP_EQ(edx, 0x20000)) goto loc_0003115C; /* je: equal / zero */

loc_00031157:
    eax = eax & 0xFFFFFFF;

loc_0003115C:
    ecx = ebx + 0x60;
    MEM32(ebx + 0x58) = eax;
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx));
    edx = edx + ecx;
    MEM32(ecx + 4) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_0003118D; /* jle: less or equal (signed <=) */

loc_00031172:
    edi = 0; /* xor self */

loc_00031174:
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + edi + 0xC);
    eax = eax + edi;
    ebx = ebx + eax;
    MEM32(eax + 0xC) = ebx;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx++;
    edi = edi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_00031174; /* jl: less (signed <) */

loc_0003118D:
    eax = MEM32(esp + 0xC);
    ebp = ebp + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_00031111; /* jne: not equal / not zero */

loc_0003119F:
    ecx = MEM32(esi + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_000311D9; /* je: equal / zero */

loc_000311A6:
    ecx = ecx + esi;
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx));
    edx = edx + ecx;
    MEM32(ecx + 4) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_000311D9; /* jle: less or equal (signed <=) */

loc_000311BB:
    edi = 0; /* xor self */
    /* nop */

loc_000311C0:
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + edi + 0xC);
    eax = eax + edi;
    ebx = ebx + eax;
    MEM32(eax + 0xC) = ebx;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx++;
    edi = edi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_000311C0; /* jl: less (signed <) */

loc_000311D9:
    ecx = MEM32(esi + 0x68);
    if (TEST_Z(ecx, ecx)) goto loc_00031210; /* je: equal / zero */

loc_000311E0:
    ecx = ecx + esi;
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(ecx + 4);
    SET_LO8(eax, MEM8(ecx));
    edx = edx + ecx;
    MEM32(ecx + 4) = edx;
    edx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00031210; /* jle: less or equal (signed <=) */

loc_000311F5:
    edi = 0; /* xor self */

loc_000311F7:
    eax = MEM32(ecx + 4);
    ebx = MEM32(eax + edi + 0xC);
    eax = eax + edi;
    ebx = ebx + eax;
    MEM32(eax + 0xC) = ebx;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    edx++;
    edi = edi + 0x1C;
    if (CMP_L(edx, eax)) goto loc_000311F7; /* jl: less (signed <) */

loc_00031210:
    eax = esi + 0x1668;
    edx = 3;
    goto loc_00031220;

    /* nop */

loc_00031220:
    ecx = MEM32(eax + -4);
    if (TEST_Z(ecx, ecx)) goto loc_0003122C; /* je: equal / zero */

loc_00031227:
    ecx = ecx + esi;
    MEM32(eax + -4) = ecx;

loc_0003122C:
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00031236; /* je: equal / zero */

loc_00031232:
    ecx = ecx + esi;
    MEM32(eax) = ecx;

loc_00031236:
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_00031242; /* je: equal / zero */

loc_0003123D:
    ecx = ecx + esi;
    MEM32(eax + 4) = ecx;

loc_00031242:
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0003124E; /* je: equal / zero */

loc_00031249:
    ecx = ecx + esi;
    MEM32(eax + 8) = ecx;

loc_0003124E:
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_0003125A; /* je: equal / zero */

loc_00031255:
    ecx = ecx + esi;
    MEM32(eax + 0xC) = ecx;

loc_0003125A:
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00031266; /* je: equal / zero */

loc_00031261:
    ecx = ecx + esi;
    MEM32(eax + 0x10) = ecx;

loc_00031266:
    eax = eax + 0x18;
    edx--;
    if ((edx != 0)) goto loc_00031220; /* jne: not equal / not zero */

loc_0003126C:
    eax = MEM32(esi + 0x16C4);
    if (TEST_Z(eax, eax)) goto loc_0003127E; /* je: equal / zero */

loc_00031276:
    eax = eax + esi;
    MEM32(esi + 0x16C4) = eax;

loc_0003127E:
    eax = MEM32(esi + 0x16C0);
    if (TEST_Z(eax, eax)) goto loc_000312C1; /* je: equal / zero */

loc_00031288:
    eax = eax + esi;
    MEM32(esi + 0x16C0) = eax;
    SET_LO8(eax, MEM8(esi + 0x16C8));
    ecx = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_000312C1; /* jle: less or equal (signed <=) */

loc_0003129C:
    edx = 0; /* xor self */
    edi = edi;

loc_000312A0:
    eax = MEM32(esi + 0x16C0);
    edi = MEM32(edx + eax + 8);
    eax = edx + eax + 8;
    edi = edi + esi;
    MEM32(eax) = edi;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x16C8);
    ecx++;
    edx = edx + 0xC;
    if (CMP_L(ecx, eax)) goto loc_000312A0; /* jl: less (signed <) */

loc_000312C1:
    ebp = MEM32(esi + 0x1060);
    ebx = MEM32(esi + 0x1064);
    edi = MEM32(esi + 0x1068);
    edx = MEM32(esi + 0x106C);
    ecx = MEM32(esi + 0x1070);
    eax = esi + 0x1060;
    ebp = ebp + eax;
    ebx = ebx + eax;
    edi = edi + eax;
    edx = edx + eax;
    ecx = ecx + eax;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    ebx = esi + 0x16DC;
    ebp = 2;

loc_00031308:
    eax = MEM32(ebx);
    if (TEST_Z(eax, eax)) goto loc_00031318; /* je: equal / zero */

loc_0003130E:
    edi = eax + esi;
    MEM32(ebx) = edi;
    PUSH32(esp, 0); sub_00159470(); /* call 0x00159470 */

loc_00031318:
    ebx = ebx + 4;
    ebp--;
    if ((ebp != 0)) goto loc_00031308; /* jne: not equal / not zero */

loc_0003131E:
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);

}
