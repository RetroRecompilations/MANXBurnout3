#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0019D990
 * Original: 0x0019D990 - 0x0019DA65 (213 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0019D990(void)
{
    int _flags = 0; /* fallback flag var */

loc_0019D990:
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 2;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0019D9DE; /* jle: less or equal (signed <=) */

loc_0019D9A3:
    edx = 0x3F9E44;
    ecx = esi + 0x10;
    goto loc_0019D9B0;

    /* nop */

loc_0019D9B0:
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0019D9CD; /* je: equal / zero */

loc_0019D9B5:
    if (CMP_NE(MEM32(0x3FA644), edi)) goto loc_0019D9C5; /* jne: not equal / not zero */

loc_0019D9BD:
    MEM32(edx + 0x320) = edi;
    goto loc_0019D9C7;

loc_0019D9C5:
    MEM32(edx) = edi;

loc_0019D9C7:
    MEM32(ecx) = 0;

loc_0019D9CD:
    ebx = MEM32(esi + 0xE8);
    eax++;
    ecx = ecx + 4;
    edx = edx + 0x10;
    if (CMP_L(eax, ebx)) goto loc_0019D9B0; /* jl: less (signed <) */

loc_0019D9DE:
    eax = MEM32(esi + 0xEC);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0019DA20; /* jle: less or equal (signed <=) */

loc_0019D9EA:
    ecx = 0x3F9EE4;
    eax = esi + 0x5C;

loc_0019D9F2:
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0019DA0F; /* je: equal / zero */

loc_0019D9F7:
    if (CMP_NE(MEM32(0x3FA644), edi)) goto loc_0019DA07; /* jne: not equal / not zero */

loc_0019D9FF:
    MEM32(ecx + 0x3B0) = edi;
    goto loc_0019DA09;

loc_0019DA07:
    MEM32(ecx) = edi;

loc_0019DA09:
    MEM32(eax) = 0;

loc_0019DA0F:
    ebx = MEM32(esi + 0xEC);
    edx++;
    eax = eax + 4;
    ecx = ecx + 0x10;
    if (CMP_L(edx, ebx)) goto loc_0019D9F2; /* jl: less (signed <) */

loc_0019DA20:
    eax = 0; /* xor self */
    ecx = 0x13;
    edi = esi + 0x10;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x23;
    edi = esi + 0x5C;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    /* cmp MEM32(esi), 0 - flags set for next jcc */
    POP32(esp, edi);
    MEM8(esi + 4) = 1;
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(esi), 0)) goto loc_0019DA54; /* je: equal / zero */

loc_0019DA41:
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x1C), _icall_esp); /* indirect call */
    }

loc_0019DA48:
    if (CMP_NE(eax, 1)) goto loc_0019DA41; /* jne: not equal / not zero */

loc_0019DA4D:
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0019DA54:
    MEM32(esi) = 0;
    MEM32(esi + 0xF0) = 0x18;
    esp += 4; return; /* ret */

}
