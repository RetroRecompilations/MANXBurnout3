#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0001B640
 * Original: 0x0001B640 - 0x0001B6DF (159 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0001B640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0001B640:
    esp = esp - 8;
    eax = MEM32(0x4D1FE8);
    ecx = MEM32(eax + 8);
    /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0001B6C1; /* jle: less or equal (signed <=) */

loc_0001B663:
    eax = MEM32(eax + 4);
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_0001B670:
    ebx = MEM32(eax + 4);
    edi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0001B6AD; /* jle: less or equal (signed <=) */

loc_0001B679:
    esi = MEM32(eax);
    esi = esi + 0x10;
    edi = edi;

loc_0001B680:
    edx = MEM32(esi + 4);
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_0001B69D; /* jle: less or equal (signed <=) */

loc_0001B689:
    ecx = MEM32(esi);
    goto loc_0001B690;

    /* nop */

loc_0001B690:
    if (CMP_EQ(MEM32(ecx + 0x28), ebp)) goto loc_0001B6CF; /* je: equal / zero */

loc_0001B695:
    eax++;
    ecx = ecx + 0x40;
    if (CMP_L(eax, edx)) goto loc_0001B690; /* jl: less (signed <) */

loc_0001B69D:
    edi++;
    esi = esi + 0x18;
    if (CMP_L(edi, ebx)) goto loc_0001B680; /* jl: less (signed <) */

loc_0001B6A5:
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_0001B6AD:
    edx = MEM32(esp + 0x1C);
    edx++;
    eax = eax + 8;
    /* cmp edx, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = eax;
    if (CMP_L(edx, ecx)) goto loc_0001B670; /* jl: less (signed <) */

loc_0001B6C1:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0001B6CF:
    ecx = MEM32(ecx + 0x34);
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;

}
