#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B6E10
 * Original: 0x001B6E10 - 0x001B703E (558 bytes, 188 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B6E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B6E10:
    esp = esp - 0x2C;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x78);
    eax = ZX8(MEM8(eax + 0x8C));
    edx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x4AC);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_001B6F29; /* jle: less or equal (signed <=) */

loc_001B6E48:
    edi = esi + 0x34;
    goto loc_001B6E50;

    /* nop */

loc_001B6E50:
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax));
    if (TEST_Z(LO8(ecx), 1)) goto loc_001B6F0F; /* je: equal / zero */

loc_001B6E5D:
    if (TEST_NZ(LO8(ecx), 2)) goto loc_001B6F0F; /* jne: not equal / not zero */

loc_001B6E66:
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM32(edx + 8) = eax;
    eax = MEM32(edi);
    MEM8(eax + 1) = LO8(ecx);
    ebp = MEM32(edi);
    /* test MEM8(ebp + 2), 1 - flags set for next jcc */
    eax = MEM32(edi + -4);
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(MEM8(ebp + 2), 1)) goto loc_001B6EA3; /* je: equal / zero */

loc_001B6E8E:
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001B80C0(); /* call 0x001B80C0 */

loc_001B6E9C:
    eax = MEM32(edi);
    MEM8(eax) = MEM8(eax) & 0xFE;
    goto loc_001B6F0F;

loc_001B6EA3:
    if (CMP_LE(eax, 0x10)) goto loc_001B6EB6; /* jle: less or equal (signed <=) */

loc_001B6EA8:
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4A1EC0), _icall_esp); /* indirect call */
    }

loc_001B6EB3:
    esp = esp + 4;

loc_001B6EB6:
    MEM8(ebp) = MEM8(ebp) | 2;
    ecx = MEM32(edi);
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(ecx));
    ebp = MEM32(esp + 0x20);
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(ebx, LO8(ebx) & 2);
    SET_LO8(edx, LO8(edx) & 1);
    /* test ebp, ebp - flags set for next jcc */
    MEM8(esp + 0xF) = LO8(ebx);
    MEM8(ecx) = LO8(eax);
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(ebp & ebp, 0)) goto loc_001B6EEE; /* jle: less or equal (signed <=) */

loc_001B6EDE:
    ebx = MEM32(esp + 0x24);

loc_001B6EE2:
    SET_LO8(eax, LO8(eax) ^ MEM8(ebx + ecx));
    ebx++;
    if (CMP_L(ebx, ebp)) goto loc_001B6EE2; /* jl: less (signed <) */

loc_001B6EEA:
    SET_LO8(ebx, MEM8(esp + 0xF));

loc_001B6EEE:
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(ecx) = LO8(eax);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(edi + -4);
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_001B6F0F:
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x4AC);
    eax++;
    edi = edi + 0x18;
    /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(eax, ecx)) goto loc_001B6E50; /* jl: less (signed <) */

loc_001B6F29:
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    ebp = 0xA0;

loc_001B6F34:
    edi = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    edx = edi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_001B6D40(); /* call 0x001B6D40 */

loc_001B6F46:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B701F; /* je: equal / zero */

loc_001B6F4E:
    ebx = MEM32(edi + ebp + 0xC);
    /* test MEM8(ebx), 2 - flags set for next jcc */
    eax = MEM32(edi + ebp + 4);
    MEM32(esp + 0x18) = eax;
    if (TEST_NZ(MEM8(ebx), 2)) goto loc_001B6F75; /* jne: not equal / not zero */

loc_001B6F5F:
    if (CMP_LE(eax, 0x10)) goto loc_001B6F72; /* jle: less or equal (signed <=) */

loc_001B6F64:
    edx = (uint32_t)(int32_t)SMEM8(ebx + 3);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x4A1EC0), _icall_esp); /* indirect call */
    }

loc_001B6F6F:
    esp = esp + 4;

loc_001B6F72:
    MEM8(ebx) = MEM8(ebx) | 2;

loc_001B6F75:
    eax = MEM32(edi + ebp + 0xC);
    MEM8(eax) = MEM8(eax) | 1;
    ecx = MEM32(edi + ebp + 0xC);
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(ecx));
    edi = MEM32(esp + 0x18);
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) & 2);
    /* test edi, edi - flags set for next jcc */
    MEM8(ecx) = LO8(eax);
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(edi & edi, 0)) goto loc_001B6FB6; /* jle: less or equal (signed <=) */

loc_001B6F9E:
    edi = edi;

loc_001B6FA0:
    edi = MEM32(esp + 0x14);
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + ecx));
    edi++;
    MEM32(esp + 0x14) = edi;
    edi = MEM32(esp + 0x18);
    if (CMP_L(MEM32(esp + 0x14), edi)) goto loc_001B6FA0; /* jl: less (signed <) */

loc_001B6FB6:
    SET_LO8(eax, LO8(eax) & 0xFE);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    ebx = MEM32(esp + 0x24);
    MEM8(ecx) = LO8(eax);
    edx = MEM32(esi + 0x28);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ebx + ebp + 4);
    PUSH32(esp, edx);
    edx = MEM32(ebx + ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_001B6FDE:
    eax = MEM32(esi + 0x24);
    edx = eax;
    ecx = eax;
    edi = ZX8(HI8(eax));
    MEM32(esp + 0x24) = eax;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edx = edx >> 0x10;
    PUSH32(esp, edi);
    edx = ZX8(LO8(edx));
    PUSH32(esp, edx);
    ecx = ecx >> 0x18;
    ecx = ecx & 0xFF;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3AC804);
    eax = esp + 0x3C;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00243816(); /* call 0x00243816 */

loc_001B7015:
    ecx = MEM32(esi + 0x10);
    esp = esp + 0x1C;
    MEM32(ebx + ebp + 8) = ecx;

loc_001B701F:
    eax = MEM32(esp + 0x10);
    eax++;
    ebp = ebp + 0x14;
    /* cmp ebp, 0x320 - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(ebp, 0x320)) goto loc_001B6F34; /* jl: less (signed <) */

loc_001B7037:
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}
