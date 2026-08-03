#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F9170
 * Original: 0x001F9170 - 0x001F921F (175 bytes, 66 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F9170:
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(edi + 0x28) = ecx;
    edx = MEM32(eax + 4);
    esi = edi + 0x28;
    MEM32(esi + 4) = edx;
    edx = MEM32(eax);
    ebp = MEM32(edx);
    ecx = edi + 0x30;
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(edx + 8);
    MEM32(ebx + 8) = ebp;
    edx = MEM32(edx + 0xC);
    MEM32(ebx + 0xC) = edx;
    MEM32(esi) = ecx;
    eax = MEM32(eax);
    ecx = MEM32(eax + 4);
    if (CMP_NE(ecx, 1)) goto loc_001F91C9; /* jne: not equal / not zero */

loc_001F91B3:
    eax = MEM32(eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    ecx = edi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00243880(); /* call 0x00243880 */

loc_001F91C4:
    esp = esp + 0xC;
    goto loc_001F91EC;

loc_001F91C9:
    if (CMP_NE(ecx, 2)) goto loc_001F91EC; /* jne: not equal / not zero */

loc_001F91CE:
    eax = MEM32(eax);
    ecx = MEM32(eax);
    edx = edi + 0xDC;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;

loc_001F91EC:
    ecx = MEM32(0x76411C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001D1608(); /* call 0x001D1608 */

loc_001F91FA:
    PUSH32(esp, esi);
    edi = edi + 0x15C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00201EF0(); /* call 0x00201EF0 */

loc_001F9207:
    edx = MEM32(0x76411C);
    esp = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001D154C(); /* call 0x001D154C */

loc_001F921A:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
