#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_002255E0
 * Original: 0x002255E0 - 0x002256BC (220 bytes, 86 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002255E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002255E0:
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = 0;
    SET_LO8(ebx, 0x80);
    eax = eax & 0x3F;
    /* nop */

loc_00225600:
    MEM8(esi + eax + 0x14) = LO8(ebx);
    eax++;
    SET_LO8(ebx, 0); /* xor self */
    if (CMP_NE(eax, 0x40)) goto loc_00225619; /* jne: not equal / not zero */

loc_0022560C:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00224CA0(); /* call 0x00224CA0 */

loc_00225612:
    esp = esp + 4;
    eax = 0; /* xor self */
    goto loc_00225600;

loc_00225619:
    if (CMP_NE(eax, 0x38)) goto loc_00225600; /* jne: not equal / not zero */

loc_0022561E:
    SET_LO8(eax, MEM8(esi));
    SET_LO8(eax, LO8(eax) << 3);
    MEM8(esi + 0x4C) = LO8(eax);
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx >> 5;
    MEM8(esi + 0x4D) = LO8(ecx);
    edx = eax;
    ecx = eax;
    edx = edx >> 0xD;
    ecx = ecx >> 0x15;
    eax = eax >> 0x1D;
    PUSH32(esp, esi);
    MEM8(esi + 0x4E) = LO8(edx);
    MEM8(esi + 0x4F) = LO8(ecx);
    MEM8(esi + 0x50) = LO8(eax);
    MEM8(esi + 0x51) = 0;
    MEM8(esi + 0x52) = 0;
    MEM8(esi + 0x53) = 0;
    PUSH32(esp, 0); sub_00224CA0(); /* call 0x00224CA0 */

loc_00225658:
    edx = MEM32(esp + 0x24);
    ebp = MEM32(0x3C5ECC);
    esp = esp + 4;
    ecx = 0; /* xor self */

loc_00225667:
    if (TEST_NZ(LO8(ecx), 3)) goto loc_00225677; /* jne: not equal / not zero */

loc_0022566C:
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = MEM32(esi + eax * 4 + 4);
    goto loc_0022567B;

loc_00225677:
    eax = MEM32(esp + 0x10);

loc_0022567B:
    if (CMP_L(edx, 0x21)) goto loc_0022569A; /* jl: less (signed <) */

loc_00225680:
    ebx = eax;
    ebx = ebx >> 4;
    ebx = ebx & 0xF;
    SET_LO8(ebx, MEM8(ebx + ebp));
    MEM8(edi) = LO8(ebx);
    edi++;
    ebx = eax;
    ebx = ebx & 0xF;
    SET_LO8(ebx, MEM8(ebx + ebp));
    MEM8(edi) = LO8(ebx);
    goto loc_002256A0;

loc_0022569A:
    if (CMP_GE(ecx, edx)) goto loc_002256A1; /* jge: greater or equal (signed >=) */

loc_0022569E:
    MEM8(edi) = LO8(eax);

loc_002256A0:
    edi++;

loc_002256A1:
    eax = eax >> 8;
    ecx++;
    /* cmp ecx, 0x10 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(ecx, 0x10)) goto loc_00225667; /* jl: less (signed <) */

loc_002256AE:
    if (CMP_L(edx, 0x21)) goto loc_002256B6; /* jl: less (signed <) */

loc_002256B3:
    MEM8(edi) = 0;

loc_002256B6:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
