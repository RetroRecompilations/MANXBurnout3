#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001D05F8
 * Original: 0x001D05F8 - 0x001D068A (146 bytes, 61 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001D05F8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_001D05F8:
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    /* test LO16(eax), LO16(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_001D0655; /* je: equal / zero */

loc_001D0615:
    edi = eax;

loc_001D0617:
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_00244750(); /* call 0x00244750 */

loc_001D0629:
    ecx = eax;
    eax = ZX16(LO16(edi));
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFF);
    ecx = ecx + eax;
    PUSH32(esp, 0xFFFFFFC5u);
    ebx = ebx + edx + _cf; /* adc */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00244A20(); /* call 0x00244A20 */

loc_001D0643:
    esi++;
    esi++;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi));
    /* test LO16(edi), LO16(edi) - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edx;
    if (TEST_NZ(LO16(edi), LO16(edi))) goto loc_001D0617; /* jne: not equal / not zero */

loc_001D0655:
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xB);
    POP32(esp, esi);
    ebx = 0; /* xor self */

loc_001D065D:
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    ecx = ebx;
    PUSH32(esp, 0); sub_00244A00(); /* call 0x00244A00 */

loc_001D066A:
    eax = eax & 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D05E4(); /* call 0x001D05E4 */

loc_001D0673:
    MEM8(esi + edi) = LO8(eax);
    ebx = ebx + 4;
    esi--;
    if (CMP_LE(ebx, 0x2C)) goto loc_001D065D; /* jle: less or equal (signed <=) */

loc_001D067F:
    MEM8(edi + 0xC) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}
