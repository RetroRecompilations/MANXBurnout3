#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBE70
 * Original: 0x001FBE70 - 0x001FC021 (433 bytes, 141 insns)
 * Category: rw_world_pipe_xbox
 * Source: world/pipe/p2/xbox/xbpipe.c
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FBE70:
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x36DEBC);
    PUSH32(esp, 0); sub_001FD6C0(); /* call 0x001FD6C0 */

loc_001FBE81:
    PUSH32(esp, 0x36DCAC);
    esi = eax;
    PUSH32(esp, 0); sub_001FD6C0(); /* call 0x001FD6C0 */

loc_001FBE8D:
    edx = ZX16(MEM16(esi + 0x14));
    ecx = ZX16(MEM16(esi + 0x16));
    edi = MEM32(esp + 0x44);
    ecx = ecx + edx;
    ebx = eax;
    ebp = ZX16(MEM16(ebx + 0x14));
    edx = ZX16(MEM16(ebx + 0x16));
    edx = edx + ebp;
    edx = edx * 8 + 0x28;
    ebp = edi + edi * 2 + 3;
    edx = edx + ebp * 8;
    ecx = ecx * 8 + 0x1C;
    eax = edi * 4;
    edx = edx + ecx;
    edx = edx + eax;
    PUSH32(esp, 0x3080E);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001FBED2:
    ebp = eax;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    if (CMP_EQ(ebp, eax)) goto loc_001FC017; /* je: equal / zero */

loc_001FBEE1:
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = eax;
    edx = esp + 0x18;
    eax = esp + 0x3C;
    PUSH32(esp, edx);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x38);
    ecx = ebp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 2;
    MEM32(esp + 0x30) = 0x1FBE60;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x48) = ecx;
    PUSH32(esp, 0); sub_001FBC90(); /* call 0x001FBC90 */

loc_001FBF1C:
    esp = esp + 0xC;
    /* test eax, eax - flags set for next jcc */
    MEM32(0x41B86C) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001FBF3B; /* jne: not equal / not zero */

loc_001FBF28:
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001FBF2E:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_001FBF3B:
    ecx = MEM32(esp + 0x3C);
    edx = ecx;
    esi = 0; /* xor self */
    /* test edi, edi - flags set for next jcc */
    MEM32(0x41B860) = edx;
    ecx = ecx + edi * 4;
    if (CMP_BE(edi & edi, 0)) goto loc_001FBF8D; /* jbe: below or equal (unsigned <=) */

loc_001FBF50:
    ebp = MEM32(esp + 0x38);

loc_001FBF54:
    edx = MEM32(ebp + esi * 4);
    MEM32(esp + 0x2C) = ecx;
    ecx = ecx + 0x18;
    MEM32(esp + 0x3C) = ecx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FBC90(); /* call 0x001FBC90 */

loc_001FBF6F:
    edx = MEM32(0x41B860);
    esp = esp + 0xC;
    /* test eax, eax - flags set for next jcc */
    MEM32(edx + esi * 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_001FBFDA; /* je: equal / zero */

loc_001FBF7F:
    ecx = MEM32(esp + 0x3C);
    esi++;
    if (CMP_B(esi, edi)) goto loc_001FBF54; /* jb: below (unsigned <) */

loc_001FBF88:
    eax = MEM32(0x41B86C);

loc_001FBF8D:
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    MEM32(0x41B868) = 1;
    MEM32(0x41B874) = edi;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0); sub_001FBB70(); /* call 0x001FBB70 */

loc_001FBFB4:
    eax = MEM32(0x41B86C);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBBF0(); /* call 0x001FBBF0 */

loc_001FBFC5:
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x41B870) = eax;
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_001FBFDA:
    if (TEST_Z(esi, esi)) goto loc_001FBFFA; /* je: equal / zero */

loc_001FBFDE:
    goto loc_001FBFE6;

loc_001FBFE0:
    edx = MEM32(0x41B860);

loc_001FBFE6:
    eax = MEM32(edx + esi * 4 + -4);
    esi--;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FBA20(); /* call 0x001FBA20 */

loc_001FBFF3:
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001FBFE0; /* jne: not equal / not zero */

loc_001FBFFA:
    ecx = MEM32(0x41B86C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FBA20(); /* call 0x001FBA20 */

loc_001FC008:
    esp = esp + 8;
    eax = 0; /* xor self */
    MEM32(0x41B874) = eax;
    MEM32(0x41B86C) = eax;

loc_001FC017:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}
