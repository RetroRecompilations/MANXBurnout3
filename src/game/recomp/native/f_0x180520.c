#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00180520
 * Original: 0x00180520 - 0x001805B0 (144 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180520:
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(esi + 0xCC4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0xCC0);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = eax + 0x5C;
    ecx = esp + 0x10;
    PUSH32(esp, 0); sub_00180650(); /* call 0x00180650 */

loc_00180544:
    edi = MEM32(ebx + 0x64584);
    SET_LO8(eax, MEM8(esi + 0x1169));
    edi = edi & 1;
    ebp = 0; /* xor self */
    if (CMP_LE(LO8(eax) & LO8(eax), 0)) goto loc_00180591; /* jle: less or equal (signed <=) */

loc_00180559:
    /* nop */

loc_00180560:
    ecx = MEM32(esp + 0xC);
    eax = ebp;
    eax = eax ^ edi;
    if (CMP_EQ(MEM8(ecx + eax + 0x4AC), 3)) goto loc_00180585; /* je: equal / zero */

loc_00180572:
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001807C0(); /* call 0x001807C0 */

loc_00180585:
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1169);
    ebp++;
    if (CMP_L(ebp, eax)) goto loc_00180560; /* jl: less (signed <) */

loc_00180591:
    PUSH32(esp, ebx);
    edi = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_00181900(); /* call 0x00181900 */

loc_0018059D:
    edi = esi;
    ebx = 0x40FBB0;
    PUSH32(esp, 0); sub_001462B0(); /* call 0x001462B0 */

loc_001805A9:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
