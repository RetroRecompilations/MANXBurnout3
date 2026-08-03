#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00018510
 * Original: 0x00018510 - 0x000185B6 (166 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018510(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00018510:
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xEA00);
    esi = ecx;
    ebx = eax + esi + 0x1C;
    if (CMP_NE(MEM32(ebx), 0x10)) goto loc_00018542; /* jne: not equal / not zero */

loc_00018526:
    eax = edi;
    PUSH32(esp, 0); sub_000185C0(); /* call 0x000185C0 */

loc_0001852D:
    if (CMP_NE(eax, MEM32(ebx + 0xE810))) goto loc_00018542; /* jne: not equal / not zero */

loc_00018535:
    eax = edi;
    ecx = esi;
    PUSH32(esp, 0); sub_000185F0(); /* call 0x000185F0 */

loc_0001853E:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0001854B; /* jne: not equal / not zero */

loc_00018542:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001854B:
    ecx = MEM32(esi);
    if (CMP_EQ(ecx, MEM32(ebx + 0xE810))) goto loc_0001855E; /* je: equal / zero */

loc_00018555:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0001855E:
    PUSH32(esp, ebp);
    ebp = 0xFFFFFFF0u;
    eax = esi + 0x10;
    edi = esi + 4;
    ecx = ebx + 0xE374;
    ebp = ebp - esi;

loc_00018572:
    SET_LO8(ebx, MEM8(ecx + 0x49B));
    SET_LO8(edx, MEM8(eax));
    /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    esi = ZX8(LO8(ebx));
    ebx = SX8(LO8(edx));
    if (CMP_NE(ebx, esi)) goto loc_000185AC; /* jne: not equal / not zero */

loc_00018589:
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00018593; /* jne: not equal / not zero */

loc_0001858D:
    edx = MEM32(ecx);
    if (CMP_NE(MEM32(edi), edx)) goto loc_000185AC; /* jne: not equal / not zero */

loc_00018593:
    eax++;
    edx = eax + ebp;
    ecx = ecx + 0x49C;
    edi = edi + 4;
    if (CMP_B(edx, 1)) goto loc_00018572; /* jb: below (unsigned <) */

loc_000185A5:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000185AC:
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
