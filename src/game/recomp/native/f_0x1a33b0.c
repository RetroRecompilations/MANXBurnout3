#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A33B0
 * Original: 0x001A33B0 - 0x001A3469 (185 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A33B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A33B0:
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax + esi + 0x363A7));
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0xA4);
    eax = ZX8(LO8(ecx));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = ebx + edi * 8;
    MEM32(esp + 0xC) = edi;
    edi = MEM32(edx + 0xA8);
    ebp = edi + -1;
    /* cmp eax, ebp - flags set for next jcc */
    eax = MEM32(esp + 0x14);
    if (CMP_NE(eax, ebp)) goto loc_001A33FD; /* jne: not equal / not zero */

loc_001A33E5:
    if (TEST_NZ(eax, eax)) goto loc_001A33FD; /* jne: not equal / not zero */

loc_001A33E9:
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(ecx + esi + 0x363A7) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A33FD:
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001A3426; /* jne: not equal / not zero */

loc_001A3401:
    edi = edi + edi * 2;
    if (CMP_NE(eax, MEM32(ebx + edi * 8 + -16))) goto loc_001A3426; /* jne: not equal / not zero */

loc_001A340A:
    SET_LO8(edx, MEM8(edx + 0xA8));
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    SET_LO8(edx, LO8(edx) - 1);
    POP32(esp, ebp);
    MEM8(eax + esi + 0x363A7) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A3426:
    edx = MEM32(esp + 0xC);
    if (CMP_LE(eax, MEM32(edx + 8))) goto loc_001A3445; /* jle: less or equal (signed <=) */

loc_001A342F:
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) + 1);
    POP32(esp, ebp);
    MEM8(edx + esi + 0x363A7) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A3445:
    if (CMP_GE(eax, MEM32(edx + 4))) goto loc_001A3460; /* jge: greater or equal (signed >=) */

loc_001A344A:
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) - 1);
    POP32(esp, ebp);
    MEM8(eax + esi + 0x363A7) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001A3460:
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}
