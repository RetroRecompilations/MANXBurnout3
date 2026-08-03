#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00039140
 * Original: 0x00039140 - 0x000393B9 (633 bytes, 144 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00039140(void)
{
    int _flags = 0; /* fallback flag var */

loc_00039140:
    eax = MEM32(0x75DDCC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    /* cmp eax, esi - flags set for next jcc */
    eax = MEM32(0x75DB60);
    ecx = 1;
    if (CMP_NE(eax, esi)) goto loc_0003916D; /* jne: not equal / not zero */

loc_00039156:
    MEM32(eax * 4 + 0x75DE20) = 0x93;
    eax++;
    MEM32(0x75DDCC) = ecx;
    MEM32(0x75DB60) = eax;

loc_0003916D:
    /* cmp MEM32(0x75DC8C), esi - flags set for next jcc */
    MEM32(0x75D6EC) = 0x900;
    if (CMP_NE(MEM32(0x75DC8C), esi)) goto loc_00039196; /* jne: not equal / not zero */

loc_0003917F:
    MEM32(eax * 4 + 0x75DE20) = 0x43;
    eax++;
    MEM32(0x75DC8C) = ecx;
    MEM32(0x75DB60) = eax;

loc_00039196:
    /* cmp MEM32(0x75DCF0), esi - flags set for next jcc */
    MEM32(0x75D5AC) = 0x1010101;
    if (CMP_NE(MEM32(0x75DCF0), esi)) goto loc_000391BF; /* jne: not equal / not zero */

loc_000391A8:
    MEM32(eax * 4 + 0x75DE20) = 0x5C;
    eax++;
    MEM32(0x75DCF0) = ecx;
    MEM32(0x75DB60) = eax;

loc_000391BF:
    /* cmp MEM32(0x75DDDC), esi - flags set for next jcc */
    MEM32(0x75D610) = esi;
    if (CMP_NE(MEM32(0x75DDDC), esi)) goto loc_000391E4; /* jne: not equal / not zero */

loc_000391CD:
    MEM32(eax * 4 + 0x75DE20) = 0x97;
    eax++;
    MEM32(0x75DDDC) = ecx;
    MEM32(0x75DB60) = eax;

loc_000391E4:
    /* cmp MEM32(0x75D990), esi - flags set for next jcc */
    eax = MEM32(0x75D940);
    MEM32(0x75D6FC) = esi;
    if (CMP_NE(MEM32(0x75D990), esi)) goto loc_00039212; /* jne: not equal / not zero */

loc_000391F7:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D990) = ecx;
    MEM32(edx + 0x75D2A0) = 3;
    MEM32(0x75D940) = eax;

loc_00039212:
    PUSH32(esp, edi);
    /* cmp MEM32(0x75D9A0), esi - flags set for next jcc */
    edx = 2;
    MEM32(0x75D770) = edx;
    if (CMP_NE(MEM32(0x75D9A0), esi)) goto loc_00039241; /* jne: not equal / not zero */

loc_00039226:
    edi = eax;
    edi = edi << 4;
    eax++;
    MEM32(0x75D9A0) = ecx;
    MEM32(edi + 0x75D2A0) = 4;
    MEM32(0x75D940) = eax;

loc_00039241:
    MEM32(0x75D780) = edx;
    /* cmp MEM32(0x75D9B0), esi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(MEM32(0x75D9B0), esi)) goto loc_0003926B; /* jne: not equal / not zero */

loc_00039250:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D9B0) = ecx;
    MEM32(edx + 0x75D2A0) = 5;
    MEM32(0x75D940) = eax;

loc_0003926B:
    /* cmp MEM32(0x75DA10), esi - flags set for next jcc */
    MEM32(0x75D790) = ecx;
    if (CMP_NE(MEM32(0x75DA10), esi)) goto loc_00039294; /* jne: not equal / not zero */

loc_00039279:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75DA10) = ecx;
    MEM32(edx + 0x75D2A0) = 0xB;
    MEM32(0x75D940) = eax;

loc_00039294:
    /* cmp MEM32(0x75DA00), esi - flags set for next jcc */
    MEM32(0x75D7F0) = esi;
    if (CMP_NE(MEM32(0x75DA00), esi)) goto loc_000392BD; /* jne: not equal / not zero */

loc_000392A2:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75DA00) = ecx;
    MEM32(edx + 0x75D2A0) = 0xA;
    MEM32(0x75D940) = eax;

loc_000392BD:
    /* cmp MEM32(0x75D9C0), esi - flags set for next jcc */
    MEM32(0x75D7E0) = esi;
    if (CMP_NE(MEM32(0x75D9C0), esi)) goto loc_000392E6; /* jne: not equal / not zero */

loc_000392CB:
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D9C0) = ecx;
    MEM32(edx + 0x75D2A0) = 6;
    MEM32(0x75D940) = eax;

loc_000392E6:
    /* cmp MEM32(0x75D964), esi - flags set for next jcc */
    MEM32(0x75D7A0) = esi;
    if (CMP_NE(MEM32(0x75D964), esi)) goto loc_00039310; /* jne: not equal / not zero */

loc_000392F4:
    eax = MEM32(0x75D944);
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D964) = ecx;
    MEM32(edx + 0x75D2A4) = esi;
    MEM32(0x75D944) = eax;

loc_00039310:
    /* cmp MEM32(0x75D974), esi - flags set for next jcc */
    MEM32(0x75D744) = ecx;
    if (CMP_NE(MEM32(0x75D974), esi)) goto loc_0003933A; /* jne: not equal / not zero */

loc_0003931E:
    eax = MEM32(0x75D944);
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D974) = ecx;
    MEM32(edx + 0x75D2A4) = ecx;
    MEM32(0x75D944) = eax;

loc_0003933A:
    /* cmp MEM32(0x75D968), esi - flags set for next jcc */
    MEM32(0x75D754) = ecx;
    if (CMP_NE(MEM32(0x75D968), esi)) goto loc_00039364; /* jne: not equal / not zero */

loc_00039348:
    eax = MEM32(0x75D948);
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D968) = ecx;
    MEM32(edx + 0x75D2A8) = esi;
    MEM32(0x75D948) = eax;

loc_00039364:
    /* cmp MEM32(0x75D978), esi - flags set for next jcc */
    MEM32(0x75D748) = ecx;
    if (CMP_NE(MEM32(0x75D978), esi)) goto loc_0003938E; /* jne: not equal / not zero */

loc_00039372:
    eax = MEM32(0x75D948);
    edx = eax;
    edx = edx << 4;
    eax++;
    MEM32(0x75D978) = ecx;
    MEM32(edx + 0x75D2A8) = ecx;
    MEM32(0x75D948) = eax;

loc_0003938E:
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(0x75D758) = ecx;
    MEM32(0x75DB74) = esi;
    PUSH32(esp, 0); sub_0034EDB0(); /* call 0x0034EDB0 */

loc_000393A2:
    eax = MEM32(0x4A1D10);
    if (CMP_EQ(eax, esi)) goto loc_000393B7; /* je: equal / zero */

loc_000393AB:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0034C8A0(); /* call 0x0034C8A0 */

loc_000393B1:
    MEM32(0x4A1D10) = esi;

loc_000393B7:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
