#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C6660
 * Original: 0x001C6660 - 0x001C66ED (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6660:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = ebx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = eax << 4;
    PUSH32(esp, edi);
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;
    MEM32(ebp + 0x30) = ebx;
    ebx = eax + esi;
    PUSH32(esp, ebx);
    edi = edx + edx * 4;
    edi = edi << 4;
    ecx = ecx - eax;
    PUSH32(esp, 0);
    MEM32(ebp + 0x2C) = esi;
    edi = edi + 0x1F;
    MEM32(esp + 0x28) = ebx;
    esi = ebp + 0x18;
    PUSH32(esp, edx);
    eax = 0x10;
    ebx = 0x40;
    edi = edi & 0xFFFFFFF0u;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0); sub_001BEF30(); /* call 0x001BEF30 */

loc_001C66B0:
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    eax = eax + edi;
    edx = ebp;
    PUSH32(esp, 0); sub_001C17F0(); /* call 0x001C17F0 */

loc_001C66C1:
    edx = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    if (CMP_LE(edx, edi)) goto loc_001C66E6; /* jle: less or equal (signed <=) */

loc_001C66CB:
    ecx = 0; /* xor self */
    /* nop */

loc_001C66D0:
    eax = MEM32(ebp + 0x2C);
    eax = eax + ecx;
    MEM32(eax) = edi;
    MEM32(eax + 0xC) = edi;
    ecx = ecx + 0x10;
    edx--;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    if ((edx != 0)) goto loc_001C66D0; /* jne: not equal / not zero */

loc_001C66E6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
