#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001A06F0
 * Original: 0x001A06F0 - 0x001A0746 (86 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001A06F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001A06F0:
    eax = MEM32(0x6137E0);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x38);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_001A0740; /* jle: less or equal (signed <=) */

loc_001A0705:
    ecx = 0x624FAC;
    PUSH32(esp, esi);
    goto loc_001A0710;

    /* nop */

loc_001A0710:
    edx = MEM32(ecx);
    esi = ZX8(MEM8(edx + 0x15));
    eax = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_001A072B; /* jle: less or equal (signed <=) */

loc_001A071C:
    SET_LO8(edx, MEM8(ebp + 0x49));
    /* nop */

loc_001A0720:
    if (CMP_EQ(MEM8(ecx + eax + 0x10), LO8(edx))) goto loc_001A073A; /* je: equal / zero */

loc_001A0726:
    eax++;
    if (CMP_L(eax, esi)) goto loc_001A0720; /* jl: less (signed <) */

loc_001A072B:
    edi++;
    ecx = ecx + 0x18;
    if (CMP_L(edi, ebx)) goto loc_001A0710; /* jl: less (signed <) */

loc_001A0733:
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001A073A:
    MEM8(ecx + eax + 0x10) = 0xFF;
    POP32(esp, esi);

loc_001A0740:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
