#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002222B0
 * Original: 0x002222B0 - 0x0022233F (143 bytes, 53 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002222B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002222B0:
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    /* cmp ebx, 1 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(ebx, 1)) goto loc_002222C0; /* jge: greater or equal (signed >=) */

loc_002222BB:
    ebx = 1;

loc_002222C0:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_GE(edi, 0x10)) goto loc_002222CF; /* jge: greater or equal (signed >=) */

loc_002222CA:
    edi = 0x10;

loc_002222CF:
    PUSH32(esp, 0x24);
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_002222D6:
    esi = eax;
    eax = 0; /* xor self */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    edx = edi * 4;
    MEM32(ecx + 0x20) = eax;
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = edi;
    PUSH32(esp, 0); sub_001B9070(); /* call 0x001B9070 */

loc_00222306:
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    MEM32(esi + 0x14) = edi;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    esp = esp + 8;
    /* test ebx, ebx - flags set for next jcc */
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    MEM32(esi + 0x20) = 0x221FC0;
    POP32(esp, edi);
    if (CMP_LE(ebx & ebx, 0)) goto loc_0022233A; /* jle: less or equal (signed <=) */

loc_00222330:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00221EC0(); /* call 0x00221EC0 */

loc_00222337:
    esp = esp + 8;

loc_0022233A:
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
