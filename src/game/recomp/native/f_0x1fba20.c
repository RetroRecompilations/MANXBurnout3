#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001FBA20
 * Original: 0x001FBA20 - 0x001FBAD8 (184 bytes, 73 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA20(void)
{
    int _flags = 0; /* fallback flag var */

loc_001FBA20:
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    /* cmp ebx, edi - flags set for next jcc */
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(ebx, edi)) goto loc_001FBA44; /* jne: not equal / not zero */

loc_001FBA40:
    ebx = esp + 0xC;

loc_001FBA44:
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0x14);
    if (CMP_BE(eax, edi)) goto loc_001FBA5A; /* jbe: below or equal (unsigned <=) */

loc_001FBA4F:
    eax--;
    POP32(esp, edi);
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_001FBA5A:
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, edi)) goto loc_001FBA75; /* je: equal / zero */

loc_001FBA61:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FD330(); /* call 0x001FD330 */

loc_001FBA67:
    esp = esp + 4;
    if (CMP_NE(eax, 1)) goto loc_001FBA75; /* jne: not equal / not zero */

loc_001FBA6F:
    eax = MEM32(esi + 4);
    MEM32(ebx + 0xC) = eax;

loc_001FBA75:
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x20);
    if (CMP_EQ(edx, edi)) goto loc_001FBA8C; /* je: equal / zero */

loc_001FBA7E:
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x40);
    eax = eax & 0xFFFFFFF;
    eax = eax + edx;
    goto loc_001FBA8F;

loc_001FBA8C:
    eax = ecx + 0x28;

loc_001FBA8F:
    MEM32(eax) = MEM32(eax) - 1;
    if ((MEM32(eax) != 0)) goto loc_001FBAA9; /* jne: not equal / not zero */

loc_001FBA93:
    if (TEST_NZ(MEM8(esi + 0x10), 2)) goto loc_001FBAA9; /* jne: not equal / not zero */

loc_001FBA99:
    edx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F5F30(); /* call 0x001F5F30 */

loc_001FBAA6:
    esp = esp + 0xC;

loc_001FBAA9:
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    MEM32(ecx) = edx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 4) = ecx;
    if (TEST_NZ(MEM8(esi + 0x10), 1)) goto loc_001FBACE; /* jne: not equal / not zero */

loc_001FBAC0:
    PUSH32(esp, esi);
    PUSH32(esp, 0x41B828);
    PUSH32(esp, 0); sub_001FEA30(); /* call 0x001FEA30 */

loc_001FBACB:
    esp = esp + 8;

loc_001FBACE:
    POP32(esp, edi);
    MEM32(ebx + 8) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
