#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001042A0
 * Original: 0x001042A0 - 0x00104364 (196 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001042A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001042A0:
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    SET_LO8(edx, MEM8(edx + eax));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);

loc_001042B0:
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    SET_LO8(ebx, LO8(edx));
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    if (CMP_EQ(LO8(ebx), LO8(eax))) goto loc_00104339; /* je: equal / zero */

loc_001042BC:
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    SET_LO8(ebx, MEM8(esi + edi));
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    if (CMP_EQ(LO8(ebx), LO8(eax))) goto loc_0010433D; /* je: equal / zero */

loc_001042CD:
    ecx++;
    if (CMP_L(ecx, 5)) goto loc_001042B0; /* jl: less (signed <) */

loc_001042D3:
    PUSH32(esp, ebp);
    ebp = MEM32(0x73A19C);
    ecx = 0; /* xor self */
    /* nop */

loc_001042E0:
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    edx = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_00104324; /* jle: less or equal (signed <=) */

loc_001042EA:
    edi = MEM32(esp + 0x18);
    edi = edi - MEM32(esp + 0x1C);

loc_001042F2:
    if (CMP_EQ(edx, MEM32(esp + 0x20))) goto loc_0010431F; /* je: equal / zero */

loc_001042F8:
    esi = MEM32(edx * 4 + 0x73A1A8);
    if (CMP_NE(MEM32(esi + 0x1920), 2)) goto loc_0010431F; /* jne: not equal / not zero */

loc_00104308:
    esi = MEM32(esp + 0x1C);
    esi = esi + edx;
    SET_LO8(ebx, MEM8(edi + esi));
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    if (CMP_EQ(LO8(ebx), LO8(eax))) goto loc_00104324; /* je: equal / zero */

loc_00104317:
    SET_LO8(ebx, LO8(eax));
    SET_LO8(ebx, LO8(ebx) & MEM8(esi));
    if (CMP_EQ(LO8(ebx), LO8(eax))) goto loc_00104324; /* je: equal / zero */

loc_0010431F:
    edx++;
    if (CMP_L(edx, ebp)) goto loc_001042F2; /* jl: less (signed <) */

loc_00104324:
    ecx++;
    if (CMP_L(ecx, 5)) goto loc_001042E0; /* jl: less (signed <) */

loc_0010432A:
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0x2D) = 0x28;
    POP32(esp, ebp);

loc_00104333:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_00104339:
    SET_LO8(eax, 0); /* xor self */
    goto loc_0010433F;

loc_0010433D:
    SET_LO8(eax, 1);

loc_0010433F:
    if (CMP_GE(ecx, 5)) goto loc_001042D3; /* jge: greater or equal (signed >=) */

loc_00104344:
    SET_LO8(ebx, MEM8(esp + 0x1C));
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) | LO8(ebx));
    /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edx + 0x2D) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00104333; /* je: equal / zero */

loc_00104358:
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) | 0x40);
    POP32(esp, esi);
    MEM8(edx + 0x2D) = LO8(ecx);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}
