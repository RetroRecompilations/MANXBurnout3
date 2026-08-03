#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00227160
 * Original: 0x00227160 - 0x002271EF (143 bytes, 63 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227160:
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = ecx;
    ecx = eax;
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    edx = (uint32_t)((int32_t)edx >> 1);
    /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(ebx & ebx, 0)) goto loc_0022718E; /* jge: greater or equal (signed >=) */

loc_0022718A:
    ebx = edx;
    goto loc_002271B4;

loc_0022718E:
    if (CMP_LE(ebx, edx)) goto loc_002271B4; /* jle: less or equal (signed <=) */

loc_00227192:
    ecx = ebx;
    ecx = ecx - edx;
    MEM32(esp + 0x10) = ecx;
    eax = 0; /* xor self */
    ecx = ecx >> 1;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebx = ebx - eax;
    esi = esi + eax * 2;

loc_002271B4:
    if (CMP_EQ(ecx, edx)) goto loc_002271C5; /* je: equal / zero */

loc_002271B8:
    SET_LO16(eax, ZX8(MEM8(ebp)));
    MEM16(esi) = LO16(eax);
    esi = esi + 2;
    ebp++;
    ebx--;

loc_002271C5:
    if (CMP_LE(ebx & ebx, 0)) goto loc_002271E5; /* jle: less or equal (signed <=) */

loc_002271C9:
    /* nop */

loc_002271D0:
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(ebp));
    esi = esi + 2;
    ebp = ebp + 2;
    ebx--;
    SET_LO8(ecx, MEM8(ebp + -1));
    MEM16(esi + -2) = LO16(ecx);
    if ((ebx != 0)) goto loc_002271D0; /* jne: not equal / not zero */

loc_002271E5:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}
