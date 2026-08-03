#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6720
 * Original: 0x001F6720 - 0x001F67F4 (212 bytes, 75 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6720(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6720:
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 4) = eax;
    if (CMP_NE(esi, MEM32(0x41B4C8))) goto loc_001F674A; /* jne: not equal / not zero */

loc_001F673E:
    ecx = MEM32(0x41B4C4);
    MEM32(0x41B4C8) = ecx;

loc_001F674A:
    if (TEST_Z(MEM8(esi + 0x1B), 0x40)) goto loc_001F6766; /* je: equal / zero */

loc_001F6750:
    eax = MEM32(esi + 0x28);
    if (TEST_NZ(eax, eax)) goto loc_001F675D; /* jne: not equal / not zero */

loc_001F6757:
    if (TEST_Z(MEM8(esi + 0x1A), 1)) goto loc_001F6766; /* je: equal / zero */

loc_001F675D:
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6E40(); /* call 0x001F6E40 */

loc_001F6763:
    esp = esp + 4;

loc_001F6766:
    SET_LO8(eax, MEM8(esi + 0x1B));
    if (TEST_NZ(LO8(eax), 0x20)) goto loc_001F67F2; /* jne: not equal / not zero */

loc_001F6771:
    if (TEST_Z(LO8(eax), 0x10)) goto loc_001F6782; /* je: equal / zero */

loc_001F6775:
    edx = MEM32(esi + 0x24);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_001FEE90(); return; /* tail jmp 0x001FEE90 */

loc_001F6782:
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x10);
    eax = esi + 0xC;
    if (CMP_EQ(ebp, eax)) goto loc_001F67E0; /* je: equal / zero */

loc_001F678D:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    /* nop */

loc_001F6790:
    edi = MEM32(0x764168);
    /* cmp edi, 0x764168 - flags set for next jcc */
    ebx = MEM32(ebp + 8);
    if (CMP_NE(edi, 0x764168)) goto loc_001F67B0; /* jne: not equal / not zero */

loc_001F67A1:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001FAB00(); /* call 0x001FAB00 */

loc_001F67A7:
    esp = esp + 4;
    goto loc_001F67CB;

    /* nop */

loc_001F67B0:
    eax = edi + -28;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F6530(); /* call 0x001F6530 */

loc_001F67BA:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F67D4; /* jne: not equal / not zero */

loc_001F67C1:
    edi = MEM32(edi);
    if (CMP_NE(edi, 0x764168)) goto loc_001F67B0; /* jne: not equal / not zero */

loc_001F67CB:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001FAB00(); /* call 0x001FAB00 */

loc_001F67D1:
    esp = esp + 4;

loc_001F67D4:
    ebp = MEM32(ebp + 4);
    eax = esi + 0xC;
    if (CMP_NE(ebp, eax)) goto loc_001F6790; /* jne: not equal / not zero */

loc_001F67DE:
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001F67E0:
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FE170(); /* call 0x001FE170 */

loc_001F67E9:
    esp = esp + 4;
    PUSH32(esp, 0); sub_001F6630(); /* call 0x001F6630 */

loc_001F67F1:
    POP32(esp, ebp);

loc_001F67F2:
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
