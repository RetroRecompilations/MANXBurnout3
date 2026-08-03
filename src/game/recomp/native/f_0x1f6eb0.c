#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6EB0
 * Original: 0x001F6EB0 - 0x001F70B6 (518 bytes, 192 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6EB0:
    esp = esp - 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    ebx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x41B404), _icall_esp); /* indirect call */
    }

loc_001F6ECF:
    esp = esp + 8;
    if (CMP_NE(eax, 1)) goto loc_001F70AD; /* jne: not equal / not zero */

loc_001F6EDB:
    eax = MEM32(ebp + 0x2C);
    /* cmp eax, 0x30 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_EQ(eax, 0x30)) goto loc_001F6EFA; /* je: equal / zero */

loc_001F6EE7:
    if (CMP_EQ(eax, 0x50)) goto loc_001F6FB0; /* je: equal / zero */

loc_001F6EF0:
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001F6EFA:
    SET_LO8(eax, MEM8(edi + 4));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001F6F12; /* je: equal / zero */

loc_001F6F01:
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F6930(); /* call 0x001F6930 */

loc_001F6F07:
    esp = esp + 4;
    MEM32(esp + 0x10) = 1;

loc_001F6F12:
    eax = MEM32(edi + 8);
    /* cmp MEM32(ebp + 0x24), eax - flags set for next jcc */
    esi = edi + 8;
    if (CMP_AE(MEM32(ebp + 0x24), eax)) goto loc_001F6FAE; /* jae: above or equal (unsigned >=) */

loc_001F6F21:
    if (TEST_Z(MEM8(ebp + 0x18), 0x20)) goto loc_001F6F3D; /* je: equal / zero */

loc_001F6F27:
    if (CMP_BE(eax, MEM32(ebp + 0x14))) goto loc_001F6F7B; /* jbe: below or equal (unsigned <=) */

loc_001F6F2C:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x2C) = 0x2000;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001F6F3D:
    PUSH32(esp, 0x30808);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FED90(); /* call 0x001FED90 */

loc_001F6F48:
    ecx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x10);
    ebx = eax;
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FEE90(); /* call 0x001FEE90 */

loc_001F6F69:
    esi = ebx + 8;
    MEM32(ebp + 0x10) = ebx;
    edx = MEM32(esi);
    ebx = MEM32(esp + 0x38);
    esp = esp + 0xC;
    MEM32(ebp + 0x14) = edx;

loc_001F6F7B:
    edi = MEM32(ebp + 0x24);
    PUSH32(esp, 0); sub_001DEEB0(); /* call 0x001DEEB0 */

loc_001F6F83:
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = ecx - edi;
    PUSH32(esp, ecx);
    edx = edx + edi;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0xC), _icall_esp); /* indirect call */
    }

loc_001F6F94:
    eax = MEM32(ebp + 0x14);
    esp = esp + 0x10;
    POP32(esp, edi);
    MEM32(ebp + 0x24) = eax;
    POP32(esp, esi);
    MEM32(ebp + 0x2C) = 0x50;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001F6FAE:
    esi = 0; /* xor self */

loc_001F6FB0:
    ecx = MEM32(edi + 0xC);
    ecx = ecx + MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x24);
    MEM32(ebp) = ecx;
    MEM32(ebp + 8) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(ebp + 0xC) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(ebp + 0x38) = esi;
    MEM32(ebp + 0x3C) = esi;
    esi = MEM32(ebp);
    MEM32(ebp + 0x28) = ecx;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_001F63F0(); /* call 0x001F63F0 */

loc_001F6FEB:
    SET_LO8(ecx, MEM8(ebp + 0x18));
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    MEM8(esi + 0x1B) = LO8(ecx);
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x24) = ecx;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6B20(); /* call 0x001F6B20 */

loc_001F7017:
    ecx = MEM32(0x3C1150);
    edi = edi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001FE270(); /* call 0x001FE270 */

loc_001F7027:
    edx = MEM32(ebp + 0x30);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F68F0);
    PUSH32(esp, esi);
    MEM32(esp + 0x38) = 1;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, 0); sub_001F64F0(); /* call 0x001F64F0 */

loc_001F7046:
    SET_LO8(eax, MEM8(ebp + 0x30));
    esp = esp + 0x24;
    if (TEST_Z(LO8(eax), 4)) goto loc_001F7061; /* je: equal / zero */

loc_001F7050:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x2C) = 0x300;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001F7061:
    eax = MEM32(ebp + 0x1C);
    /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x2C) = 0x70;
    if (TEST_NZ(eax, eax)) goto loc_001F709A; /* jne: not equal / not zero */

loc_001F706F:
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F6A20(); /* call 0x001F6A20 */

loc_001F7079:
    MEM32(ebp + 0x1C) = eax;
    SET_LO8(eax, MEM8(esi + 0x1B));
    esp = esp + 8;
    SET_LO8(eax, LO8(eax) | 0x40);
    PUSH32(esp, ebp);
    MEM8(esi + 0x1B) = LO8(eax);
    PUSH32(esp, 0); sub_001F6CA0(); /* call 0x001F6CA0 */

loc_001F708D:
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_001F709A:
    MEM32(esi + 0x28) = eax;
    edx = MEM32(ebp + 0x20);
    PUSH32(esp, ebp);
    MEM32(esi + 0x2C) = edx;
    PUSH32(esp, 0); sub_001F6CA0(); /* call 0x001F6CA0 */

loc_001F70A9:
    esp = esp + 4;
    POP32(esp, edi);

loc_001F70AD:
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}
