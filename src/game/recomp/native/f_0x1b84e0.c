#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B84E0
 * Original: 0x001B84E0 - 0x001B859B (187 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B84E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B84E0:
    /* test MEM8(esi + 2), 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 2), 2)) goto loc_001B858B; /* je: equal / zero */

loc_001B84EF:
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edx = ebp + 0xAC;

loc_001B84F8:
    SET_LO8(eax, MEM8(edx + 4));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B8545; /* jne: not equal / not zero */

loc_001B84FF:
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    if ((LO8(ecx) == 0)) goto loc_001B8512; /* je: equal / zero */

loc_001B8508:
    SET_LO8(eax, MEM8(esi));
    if (TEST_NZ(LO8(eax), 2)) goto loc_001B8512; /* jne: not equal / not zero */

loc_001B850E:
    SET_LO8(eax, LO8(eax) | 2);
    goto loc_001B851F;

loc_001B8512:
    if (CMP_EQ(LO8(ecx), 2)) goto loc_001B8521; /* je: equal / zero */

loc_001B8517:
    SET_LO8(eax, MEM8(esi));
    if (TEST_Z(LO8(eax), 2)) goto loc_001B8521; /* je: equal / zero */

loc_001B851D:
    SET_LO8(eax, LO8(eax) & 0xFD);

loc_001B851F:
    MEM8(esi) = LO8(eax);

loc_001B8521:
    eax = MEM32(edx);
    SET_LO16(ecx, MEM16(eax + 0xC));
    if (CMP_NE(LO16(ecx), MEM16(esi + 0xC))) goto loc_001B8545; /* jne: not equal / not zero */

loc_001B852D:
    SET_LO8(ecx, MEM8(eax + 3));
    if (CMP_NE(LO8(ecx), MEM8(esi + 3))) goto loc_001B8545; /* jne: not equal / not zero */

loc_001B8535:
    ecx = MEM32(eax + 4);
    if (CMP_NE(ecx, MEM32(esi + 4))) goto loc_001B8545; /* jne: not equal / not zero */

loc_001B853D:
    eax = MEM32(eax + 8);
    if (CMP_EQ(eax, MEM32(esi + 8))) goto loc_001B8550; /* je: equal / zero */

loc_001B8545:
    edi++;
    edx = edx + 0x14;
    if (CMP_L(edi, 0x20)) goto loc_001B84F8; /* jl: less (signed <) */

loc_001B854E:
    goto loc_001B857A;

loc_001B8550:
    ecx = MEM32(ebp + 0x94);
    if (TEST_Z(ecx, ecx)) goto loc_001B856F; /* je: equal / zero */

loc_001B855A:
    eax = MEM32(edx);
    edx = ZX16(MEM16(eax + 0xC));
    eax = (uint32_t)(int32_t)SMEM8(eax + 3);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_001B856C:
    esp = esp + 0xC;

loc_001B856F:
    eax = edi + edi * 4;
    MEM8(ebp + eax * 4 + 0xB0) = 1;

loc_001B857A:
    SET_LO8(eax, MEM8(esi));
    /* test LO8(eax), 2 - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), 2)) goto loc_001B8585; /* je: equal / zero */

loc_001B8581:
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi) = LO8(eax);

loc_001B8585:
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001B858B:
    SET_LO8(eax, MEM8(esi));
    if (TEST_Z(LO8(eax), 2)) goto loc_001B8595; /* je: equal / zero */

loc_001B8591:
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi) = LO8(eax);

loc_001B8595:
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}
