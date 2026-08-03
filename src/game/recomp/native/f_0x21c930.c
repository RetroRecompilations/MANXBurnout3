#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0021C930
 * Original: 0x0021C930 - 0x0021C999 (105 bytes, 42 insns)
 * Category: rw_driver_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0021C930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0021C930:
    eax = MEM32(0x41CFD4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_0021C96A; /* je: equal / zero */

loc_0021C941:
    edx = 0x41CFD4;

loc_0021C946:
    if (CMP_NE(eax, ebp)) goto loc_0021C95F; /* jne: not equal / not zero */

loc_0021C94A:
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0021C95F; /* jle: less or equal (signed <=) */

loc_0021C950:
    SET_LO16(ecx, MEM16(edx + 4));

loc_0021C954:
    if (CMP_EQ(MEM16(ebx + eax * 2), LO16(ecx))) goto loc_0021C970; /* je: equal / zero */

loc_0021C95A:
    eax++;
    if (CMP_L(eax, edi)) goto loc_0021C954; /* jl: less (signed <) */

loc_0021C95F:
    eax = MEM32(edx + 0xC);
    edx = edx + 0xC;
    esi++;
    if (TEST_NZ(eax, eax)) goto loc_0021C946; /* jne: not equal / not zero */

loc_0021C96A:
    POP32(esp, esi);
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0021C970:
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    esi = esi + esi * 2;
    esi = esi << 2;
    eax = MEM32(esi + 0x41CFDC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002135F0(); /* call 0x002135F0 */

loc_0021C98C:
    SET_LO16(eax, MEM16(esi + 0x41CFD8));
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
