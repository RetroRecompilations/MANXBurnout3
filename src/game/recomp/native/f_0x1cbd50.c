#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001CBD50
 * Original: 0x001CBD50 - 0x001CBDFE (174 bytes, 53 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_001CBD50:
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0x16C);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = 3;
    MEM32(esp + 0x28) = 2;
    PUSH32(esp, 0); sub_001F94A0(); /* call 0x001F94A0 */

loc_001CBD7C:
    eax = MEM32(esp + 0x2C);
    esp = esp + 8;
    esi = 0; /* xor self */
    /* test eax, eax - flags set for next jcc */
    MEM32(edi + 0x140) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_001CBDDF; /* jle: less or equal (signed <=) */

loc_001CBD8F:
    PUSH32(esp, ebx);
    ebx = edi + 0x14C;
    goto loc_001CBDA0;

    /* nop */
    /* nop */

loc_001CBDA0:
    ecx = MEM32(edi + 0x16C);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_001F9670(); /* call 0x001F9670 */

loc_001CBDBD:
    edx = MEM32(ebx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebx + 8) = eax;
    PUSH32(esp, 0); sub_0020C2D0(); /* call 0x0020C2D0 */

loc_001CBDCD:
    eax = MEM32(edi + 0x140);
    esp = esp + 0x10;
    esi++;
    ebx = ebx + 4;
    if (CMP_L(esi, eax)) goto loc_001CBDA0; /* jl: less (signed <) */

loc_001CBDDE:
    POP32(esp, ebx);

loc_001CBDDF:
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F353F7D);
    PUSH32(esp, 0x3F800000);
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_001CBCA0(); /* call 0x001CBCA0 */

loc_001CBDF8:
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}
