#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B7EF0
 * Original: 0x001B7EF0 - 0x001B80BE (462 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B7EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B7EF0:
    esp = esp - 0x24;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(edi + 0x7C);
    eax = 0; /* xor self */
    if (CMP_EQ(ecx, eax)) goto loc_001B80B7; /* je: equal / zero */

loc_001B7F05:
    if (CMP_EQ(MEM8(edi + 4), LO8(eax))) goto loc_001B80B7; /* je: equal / zero */

loc_001B7F0E:
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(0x4A1EC4) = eax;
    MEM32(0x4A1EC8) = eax;
    goto loc_001B7F21;

loc_001B7F1D:
    edi = MEM32(esp + 0x38);

loc_001B7F21:
    ecx = MEM32(edi + 0x7C);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_001B7F38:
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_001B80B4; /* jle: less or equal (signed <=) */

loc_001B7F44:
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(ecx, MEM32(edi + 0xA1C))) goto loc_001B7F21; /* je: equal / zero */

loc_001B7F50:
    edx = MEM32(0x4A1EC4);
    ecx = MEM32(esp + 0x18);
    edx++;
    esi = eax;
    MEM32(0x4A1EC4) = edx;
    ebp = ecx;
    PUSH32(esp, 0); sub_001B5D90(); /* call 0x001B5D90 */

loc_001B7F6A:
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001B80B4; /* je: equal / zero */

loc_001B7F72:
    SET_LO8(ebx, MEM8(ebp));
    SET_LO8(ebx, LO8(ebx) & 0xFD);
    PUSH32(esp, edi);
    esi = ebp;
    MEM8(ebp) = LO8(ebx);
    PUSH32(esp, 0); sub_001B84E0(); /* call 0x001B84E0 */

loc_001B7F83:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B8096; /* jne: not equal / not zero */

loc_001B7F8B:
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_001B85A0(); /* call 0x001B85A0 */

loc_001B7F93:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B8096; /* jne: not equal / not zero */

loc_001B7F9B:
    SET_LO8(edx, MEM8(ebp + 1));
    if (CMP_EQ(LO8(edx), MEM8(edi + 0x8C))) goto loc_001B7FBE; /* je: equal / zero */

loc_001B7FA6:
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    ebx = edi;
    PUSH32(esp, 0); sub_001B8300(); /* call 0x001B8300 */

loc_001B7FB9:
    goto loc_001B7F21;

loc_001B7FBE:
    ebx = MEM32(ebp + 4);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_001B7E70(); /* call 0x001B7E70 */

loc_001B7FCA:
    esi = eax;
    /* test esi, esi - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(esi, esi)) goto loc_001B806E; /* je: equal / zero */

loc_001B7FD8:
    edi = MEM32(esi + 0x24);
    if (CMP_EQ(edi, eax)) goto loc_001B801B; /* je: equal / zero */

loc_001B7FDF:
    PUSH32(esp, eax);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000FBE20(); /* call 0x000FBE20 */

loc_001B7FEA:
    eax = esp + 0x2C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000FBE20(); /* call 0x000FBE20 */

loc_001B7FF5:
    ecx = MEM32(esp + 0x48);
    eax = MEM32(ecx + 0x90);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_001B7F1D; /* je: equal / zero */

loc_001B800A:
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001B8013:
    esp = esp + 0xC;
    goto loc_001B7F1D;

loc_001B801B:
    ebx = MEM32(0x4A1EC8);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x38);
    ebx++;
    PUSH32(esp, ecx);
    MEM32(0x4A1EC8) = ebx;
    PUSH32(esp, eax);
    ecx = ebp;
    ebx = edi;
    PUSH32(esp, 0); sub_001B8270(); /* call 0x001B8270 */

loc_001B803B:
    edx = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_001B8390(); /* call 0x001B8390 */

loc_001B8044:
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001B8056; /* jne: not equal / not zero */

loc_001B8048:
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = ebp;
    ebx = esi;
    PUSH32(esp, 0); sub_001B7040(); /* call 0x001B7040 */

loc_001B8056:
    esi = MEM32(esp + 0x14);
    edx = edi + 0x4E0;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_001B7420(); /* call 0x001B7420 */

loc_001B8069:
    goto loc_001B7F1D;

loc_001B806E:
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000FBE20(); /* call 0x000FBE20 */

loc_001B8079:
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x40);
    esp = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_001B8300(); /* call 0x001B8300 */

loc_001B8091:
    goto loc_001B7F1D;

loc_001B8096:
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_001B7E70(); /* call 0x001B7E70 */

loc_001B809E:
    if (TEST_Z(eax, eax)) goto loc_001B7F1D; /* je: equal / zero */

loc_001B80A6:
    ebx = ebp;
    esi = eax;
    PUSH32(esp, 0); sub_001B7100(); /* call 0x001B7100 */

loc_001B80AF:
    goto loc_001B7F1D;

loc_001B80B4:
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001B80B7:
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}
