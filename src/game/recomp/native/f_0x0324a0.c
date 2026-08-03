#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_000324A0
 * Original: 0x000324A0 - 0x00032576 (214 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000324A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000324A0:
    ecx = MEM32(0x75DDCC);
    /* test ecx, ecx - flags set for next jcc */
    eax = 1;
    if (TEST_NZ(ecx, ecx)) goto loc_000324CC; /* jne: not equal / not zero */

loc_000324AF:
    ecx = MEM32(0x75DB60);
    MEM32(ecx * 4 + 0x75DE20) = 0x93;
    ecx++;
    MEM32(0x75DDCC) = eax;
    MEM32(0x75DB60) = ecx;

loc_000324CC:
    ecx = MEM32(0x75DA20);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x75D6EC) = 0x900;
    edx = 0xC;
    if (TEST_NZ(ecx, ecx)) goto loc_00032503; /* jne: not equal / not zero */

loc_000324E6:
    ecx = MEM32(0x75D940);
    edi = ecx;
    edi = edi << 4;
    ecx++;
    MEM32(0x75DA20) = eax;
    MEM32(edi + 0x75D2A0) = edx;
    MEM32(0x75D940) = ecx;

loc_00032503:
    ecx = MEM32(0x75DA24);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D800) = eax;
    if (TEST_NZ(ecx, ecx)) goto loc_0003252F; /* jne: not equal / not zero */

loc_00032512:
    ecx = MEM32(0x75D944);
    edi = ecx;
    edi = edi << 4;
    ecx++;
    MEM32(0x75DA24) = eax;
    MEM32(edi + 0x75D2A4) = edx;
    MEM32(0x75D944) = ecx;

loc_0003252F:
    ecx = MEM32(0x75D974);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(0x75D804) = eax;
    POP32(esp, edi);
    if (TEST_NZ(ecx, ecx)) goto loc_0003255C; /* jne: not equal / not zero */

loc_0003253F:
    ecx = MEM32(0x75D944);
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(0x75D974) = eax;
    MEM32(edx + 0x75D2A4) = eax;
    MEM32(0x75D944) = ecx;

loc_0003255C:
    MEM32(0x75D754) = eax;
    MEM32(0x75DB70) = 0;
    MEM32(0x75DB74) = 0;
    esp += 4; return; /* ret */

}
