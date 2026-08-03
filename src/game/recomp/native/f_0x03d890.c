#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_0003D890
 * Original: 0x0003D890 - 0x0003D9E0 (336 bytes, 103 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003D890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003D890:
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x1E0);
    PUSH32(esp, 0x280);
    edi = ebx + 0x890;
    eax = 2;
    PUSH32(esp, 0); sub_0003D500(); /* call 0x0003D500 */

loc_0003D8B7:
    PUSH32(esp, 0x11);
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x140);
    edi = ebx + 0x8A8;
    PUSH32(esp, 0); sub_0003D620(); /* call 0x0003D620 */

loc_0003D8CE:
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0xA0);
    edi = ebx + 0x8C0;
    PUSH32(esp, 0); sub_0003D620(); /* call 0x0003D620 */

loc_0003D8E2:
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0xA0);
    edi = ebx + 0x8D8;
    PUSH32(esp, 0); sub_0003D620(); /* call 0x0003D620 */

loc_0003D8F6:
    esp = esp + 0x30;
    ebp = 0x3876C4;
    ebx = ebx + 0x86C;

loc_0003D904:
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    edx = eax;
    PUSH32(esp, 0); sub_00352560(); /* call 0x00352560 */

loc_0003D924:
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D932:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0003D979; /* je: equal / zero */

loc_0003D938:
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_0003D943:
    if (TEST_NZ(eax, eax)) goto loc_0003D956; /* jne: not equal / not zero */

loc_0003D947:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_0003D952:
    esi = 0; /* xor self */
    goto loc_0003D979;

loc_0003D956:
    ecx = MEM32(esp + 0x14);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 8) = 0;

loc_0003D979:
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = esi;
    PUSH32(esp, edi);
    MEM32(ebx) = esi;
    PUSH32(esp, 0); sub_00352290(); /* call 0x00352290 */

loc_0003D9A0:
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0034FA80(); /* call 0x0034FA80 */

loc_0003D9B3:
    MEM32(ebx + 0x10) = eax;
    ebp = ebp + 4;
    ebx = ebx + 4;
    if (CMP_L(ebp, 0x3876D4)) goto loc_0003D904; /* jl: less (signed <) */

loc_0003D9C8:
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x88C) = 4;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}
