#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00226B90
 * Original: 0x00226B90 - 0x00226D6B (475 bytes, 175 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226B90:
    esp = esp - 0x148;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x15C);
    ecx = 0; /* xor self */
    eax = eax + 2;

loc_00226BA6:
    esi = ZX8(MEM8(eax));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + -2));
    eax = eax + 4;
    SET_LO8(edx, MEM8(eax + -5));
    edx = edx << 8;
    edx = edx | esi;
    esi = ZX8(MEM8(eax + -3));
    edx = edx << 8;
    edx = edx | esi;
    MEM32(esp + ecx * 4 + 0x18) = edx;
    ecx++;
    if (CMP_NE(ecx, 0x10)) goto loc_00226BA6; /* jne: not equal / not zero */

loc_00226BCC:
    ecx = esp + 0x20;
    edx = 0x40;

loc_00226BD5:
    eax = MEM32(ecx + 0x2C);
    ebp = MEM32(ecx + 0x18);
    ebx = MEM32(ecx + -8);
    esi = MEM32(ecx);
    eax = eax ^ ebp;
    eax = eax ^ ebx;
    eax = eax ^ esi;
    esi = eax;
    esi = esi >> 0x1F;
    eax = eax + eax;
    esi = esi | eax;
    MEM32(ecx + 0x38) = esi;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00226BD5; /* jne: not equal / not zero */

loc_00226BF8:
    ecx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi + 0x10);
    esi = MEM32(edi + 0x14);
    edi = MEM32(edi + 0x18);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = 0;

loc_00226C13:
    ebx = eax;
    ebx = ~ebx;
    ebx = ebx & esi;
    edi = edx;
    edi = edi & eax;
    ebx = ebx | edi;
    edi = ecx;
    edi = edi >> 0x1B;
    ebp = ecx;
    ebp = ebp << 5;
    edi = edi | ebp;
    ebx = ebx + edi;
    edi = MEM32(esp + 0x10);
    ebx = ebx + MEM32(esp + edi * 4 + 0x18);
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = esi;
    esi = edx;
    edx = eax;
    eax = eax >> 2;
    edx = edx << 0x1E;
    edx = edx | eax;
    edi++;
    /* cmp edi, 0x14 - flags set for next jcc */
    ebx = ebx + ebp + 0x5A827999;
    eax = ecx;
    ecx = ebx;
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(edi, 0x14)) goto loc_00226C13; /* jne: not equal / not zero */

loc_00226C5E:
    edi = edi;

loc_00226C60:
    ebx = ecx;
    ebx = ebx >> 0x1B;
    ebp = ecx;
    ebp = ebp << 5;
    ebx = ebx | ebp;
    ebp = esi;
    ebp = ebp ^ edx;
    ebp = ebp ^ eax;
    ebx = ebx + ebp;
    ebx = ebx + MEM32(esp + edi * 4 + 0x18);
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = esi;
    esi = edx;
    edx = eax;
    eax = eax >> 2;
    edx = edx << 0x1E;
    edx = edx | eax;
    edi++;
    /* cmp edi, 0x28 - flags set for next jcc */
    ebx = ebx + ebp + 0x6ED9EBA1;
    eax = ecx;
    ecx = ebx;
    if (CMP_NE(edi, 0x28)) goto loc_00226C60; /* jne: not equal / not zero */

loc_00226C9D:
    MEM32(esp + 0x10) = edi;

loc_00226CA1:
    edi = edx;
    edi = edi | eax;
    edi = edi & esi;
    ebx = edx;
    ebx = ebx & eax;
    edi = edi | ebx;
    ebx = ecx;
    ebx = ebx >> 0x1B;
    ebp = ecx;
    ebp = ebp << 5;
    ebx = ebx | ebp;
    edi = edi + ebx;
    ebx = MEM32(esp + 0x10);
    edi = edi + MEM32(esp + ebx * 4 + 0x18);
    ebp = MEM32(esp + 0x14);
    ebp = edi + ebp + -1894007588;
    edi = esi;
    esi = edx;
    edx = eax;
    eax = eax >> 2;
    edx = edx << 0x1E;
    edx = edx | eax;
    ebx++;
    /* cmp ebx, 0x3C - flags set for next jcc */
    eax = ecx;
    MEM32(esp + 0x14) = edi;
    ecx = ebp;
    MEM32(esp + 0x10) = ebx;
    if (CMP_NE(ebx, 0x3C)) goto loc_00226CA1; /* jne: not equal / not zero */

loc_00226CEE:
    MEM32(esp + 0x10) = ebx;

loc_00226CF2:
    ebx = ecx;
    ebx = ebx >> 0x1B;
    ebp = ecx;
    ebp = ebp << 5;
    ebx = ebx | ebp;
    ebp = esi;
    ebp = ebp ^ edx;
    ebp = ebp ^ eax;
    ebx = ebx + ebp;
    ebp = MEM32(esp + 0x10);
    ebx = ebx + MEM32(esp + ebp * 4 + 0x18);
    ebx = ebx + edi + -899497514;
    edi = esi;
    esi = edx;
    edx = eax;
    eax = eax >> 2;
    edx = edx << 0x1E;
    edx = edx | eax;
    ebp++;
    /* cmp ebp, 0x50 - flags set for next jcc */
    eax = ecx;
    ecx = ebx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(ebp, 0x50)) goto loc_00226CF2; /* jne: not equal / not zero */

loc_00226D31:
    ecx = MEM32(esp + 0x15C);
    ebp = MEM32(ecx + 8);
    ebp = ebp + ebx;
    ebx = MEM32(ecx + 0xC);
    ebx = ebx + eax;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx;
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(ecx + 0x14);
    eax = eax + esi;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(ecx + 0x18);
    eax = eax + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 8) = ebp;
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x18) = eax;
    POP32(esp, ebx);
    esp = esp + 0x148;
    esp += 4; return; /* ret */

}
