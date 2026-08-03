#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001BEF30
 * Original: 0x001BEF30 - 0x001BEFE6 (182 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BEF30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BEF30:
    ecx = 0; /* xor self */
    if (CMP_NE(eax, ecx)) goto loc_001BEF3F; /* jne: not equal / not zero */

loc_001BEF36:
    MEM32(esi + 0xC) = 1;
    goto loc_001BEF42;

loc_001BEF3F:
    MEM32(esi + 0xC) = eax;

loc_001BEF42:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(ebp, ecx)) goto loc_001BEF5A; /* jne: not equal / not zero */

loc_001BEF4B:
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0x10) = ecx;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_001BEF5A:
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x10);
    edx = ecx + -1;
    edx = ~edx;
    eax = ecx + eax + 7;
    PUSH32(esp, edi);
    eax = eax & edx;
    eax = eax - 8;
    edi = ecx + ebx + 7;
    edi = edi & edx;
    /* cmp ebp, 1 - flags set for next jcc */
    MEM32(esi) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(eax + 4) = 0;
    if (CMP_BE(ebp, 1)) goto loc_001BEF9C; /* jbe: below or equal (unsigned <=) */

loc_001BEF87:
    edx = ebp + -1;
    /* nop */

loc_001BEF90:
    ecx = eax;
    eax = eax + edi;
    edx--;
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    if ((edx != 0)) goto loc_001BEF90; /* jne: not equal / not zero */

loc_001BEF9C:
    MEM32(eax) = 0;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001BEFDB; /* je: equal / zero */

loc_001BEFAA:
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = ecx;

loc_001BEFB1:
    /* test ebx, ebx - flags set for next jcc */
    eax = ecx + 8;
    if (TEST_Z(ebx, ebx)) goto loc_001BEFD1; /* je: equal / zero */

loc_001BEFB8:
    ecx = MEM32(esp + 0x10);
    ecx = ecx - eax;
    ebp = ebx;

loc_001BEFC0:
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(eax) = LO8(edx);
    eax++;
    ebp--;
    if ((ebp != 0)) goto loc_001BEFC0; /* jne: not equal / not zero */

loc_001BEFC9:
    ebp = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);

loc_001BEFD1:
    ecx = MEM32(ecx);
    /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_001BEFB1; /* jne: not equal / not zero */

loc_001BEFDB:
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}
