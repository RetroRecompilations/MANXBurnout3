#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00116110
 * Original: 0x00116110 - 0x00116262 (338 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00116110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00116110:
    PUSH32(esp, ecx);
    eax = MEM32(0x667E80);
    if (CMP_LE(eax, MEM32(0x4A1DAC))) goto loc_00116123; /* jle: less or equal (signed <=) */

loc_0011611E:
    MEM32(0x4A1DAC) = eax;

loc_00116123:
    eax = MEM32(0x734FA0);
    if (CMP_LE(eax, MEM32(0x4A1DB0))) goto loc_00116135; /* jle: less or equal (signed <=) */

loc_00116130:
    MEM32(0x4A1DB0) = eax;

loc_00116135:
    eax = MEM32(0x731F9C);
    if (CMP_LE(eax, MEM32(0x4A1DB4))) goto loc_00116147; /* jle: less or equal (signed <=) */

loc_00116142:
    MEM32(0x4A1DB4) = eax;

loc_00116147:
    PUSH32(esp, ebx);
    ebx = MEM32(0x734FB0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(0x734FB4);
    MEM32(esp + 0x10) = esi;
    ecx = 1;
    ebp = 8;

loc_00116167:
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00116177; /* je: equal / zero */

loc_00116173:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_00116177:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_0011618D; /* je: equal / zero */

loc_00116189:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_0011618D:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_001161A3; /* je: equal / zero */

loc_0011619F:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_001161A3:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_001161B9; /* je: equal / zero */

loc_001161B5:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_001161B9:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    ebp--;
    if ((ebp != 0)) goto loc_00116167; /* jne: not equal / not zero */

loc_001161C2:
    eax = MEM32(esp + 0x10);
    if (CMP_LE(eax, MEM32(0x4A1DB8))) goto loc_001161D3; /* jle: less or equal (signed <=) */

loc_001161CE:
    MEM32(0x4A1DB8) = eax;

loc_001161D3:
    edi = MEM32(0x734FAC);
    ebx = MEM32(0x734FA8);
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    ecx = 1;
    ebp = 0x10;
    /* nop */

loc_001161F0:
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00116200; /* je: equal / zero */

loc_001161FC:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_00116200:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00116216; /* je: equal / zero */

loc_00116212:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_00116216:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_0011622C; /* je: equal / zero */

loc_00116228:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_0011622C:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    eax = ebx;
    edx = edi;
    eax = eax & ecx;
    edx = edx & esi;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00116242; /* je: equal / zero */

loc_0011623E:
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;

loc_00116242:
    esi = (esi << 1) | (ecx >> (32 - 1)); /* shld */
    ecx = ecx << 1;
    ebp--;
    if ((ebp != 0)) goto loc_001161F0; /* jne: not equal / not zero */

loc_0011624B:
    eax = MEM32(esp + 0x10);
    /* cmp eax, MEM32(0x4A1DBC) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(eax, MEM32(0x4A1DBC))) goto loc_00116260; /* jle: less or equal (signed <=) */

loc_0011625B:
    MEM32(0x4A1DBC) = eax;

loc_00116260:
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
