#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_00040B90
 * Original: 0x00040B90 - 0x00040CEB (347 bytes, 114 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00040B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00040B90:
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x461C4000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3FC90FDB);
    ecx = ebp;
    PUSH32(esp, 0); sub_001CF351(); /* call 0x001CF351 */

loc_00040BB6:
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 1);
    edx = 0x80;
    PUSH32(esp, 1);
    eax = edx;
    PUSH32(esp, 0); sub_00352560(); /* call 0x00352560 */

loc_00040BD8:
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_00040BE6:
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00040C2D; /* je: equal / zero */

loc_00040BEC:
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001D2879(); /* call 0x001D2879 */

loc_00040BF7:
    if (TEST_NZ(eax, eax)) goto loc_00040C0A; /* jne: not equal / not zero */

loc_00040BFB:
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001D2919(); /* call 0x001D2919 */

loc_00040C06:
    esi = 0; /* xor self */
    goto loc_00040C2D;

loc_00040C0A:
    edx = MEM32(esp + 0x38);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 0;

loc_00040C2D:
    PUSH32(esp, 0x2E);
    PUSH32(esp, 2);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x80);
    MEM32(ebp + 0xC0) = esi;
    PUSH32(esp, 0); sub_0034FAF0(); /* call 0x0034FAF0 */

loc_00040C46:
    MEM32(ebp + 0xC4) = eax;
    esi = 0; /* xor self */
    ebx = ebp + 0xC8;

loc_00040C54:
    edi = MEM32(ebp + 0xC0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00352290(); /* call 0x00352290 */

loc_00040C7C:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0034FA80(); /* call 0x0034FA80 */

loc_00040C8F:
    edi = eax;
    ecx = edi;
    MEM32(ebx) = eax;
    PUSH32(esp, 0); sub_00351B50(); /* call 0x00351B50 */

loc_00040C9A:
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00352290(); /* call 0x00352290 */

loc_00040CBD:
    edi = MEM32(esp + 0x38);
    edi = edi | 0xF0000000u;
    eax = 0; /* xor self */
    esi++;
    ecx = 0x2000;
    ebx = ebx + 4;
    /* cmp esi, 6 - flags set for next jcc */
    MEM32(esp + 0x38) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_L(esi, 6)) goto loc_00040C54; /* jl: less (signed <) */

loc_00040CE1:
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}
