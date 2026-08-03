#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00225F10
 * Original: 0x00225F10 - 0x00225FAC (156 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225F10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225F10:
    eax = MEM32(esp + 4);
    esp = esp - 0xCC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xE4);
    MEM8(ebx) = 0;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00225FA1; /* je: equal / zero */

loc_00225F2C:
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00225FA1; /* je: equal / zero */

loc_00225F33:
    eax = MEM32(esp + 0xD8);
    if (CMP_LE(eax & eax, 0)) goto loc_00225FA1; /* jle: less or equal (signed <=) */

loc_00225F3E:
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0031AB6F(); /* call 0x0031AB6F */

loc_00225F4F:
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ebp = eax;
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_001D3378(); /* call 0x001D3378 */

loc_00225F5D:
    if (CMP_LE(eax & eax, 0)) goto loc_00225F8B; /* jle: less or equal (signed <=) */

loc_00225F61:
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xEC);
    edi--;
    /* nop */

loc_00225F70:
    if (CMP_GE(esi, edi)) goto loc_00225F8A; /* jge: greater or equal (signed >=) */

loc_00225F74:
    SET_LO8(eax, MEM8(esp + esi * 2 + 0x10));
    ecx = esp + 0x10;
    MEM8(esi + ebx) = LO8(eax);
    PUSH32(esp, ecx);
    esi++;
    PUSH32(esp, 0); sub_001D3378(); /* call 0x001D3378 */

loc_00225F86:
    if (CMP_L(esi, eax)) goto loc_00225F70; /* jl: less (signed <) */

loc_00225F8A:
    POP32(esp, edi);

loc_00225F8B:
    eax = 0; /* xor self */
    /* test ebp, ebp - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebp & ebp, 0)) ? 1 : 0); /* setge */
    MEM8(esi + ebx) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    esp = esp + 0xCC;
    esp += 4; return; /* ret */

loc_00225FA1:
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0xCC;
    esp += 4; return; /* ret */

}
