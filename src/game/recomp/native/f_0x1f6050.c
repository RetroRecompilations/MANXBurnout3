#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001F6050
 * Original: 0x001F6050 - 0x001F62A1 (593 bytes, 200 insns)
 * Category: rw_world_pipe_xbox
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F6050:
    edx = MEM32(esp + 0xC);
    eax = MEM32(0x41B47C);
    esp = esp - 0x208;
    edx = edx & 7;
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x210);
    MEM32(esp + 0x218) = edx;
    if (TEST_Z(eax, eax)) goto loc_001F60A6; /* je: equal / zero */

loc_001F6075:
    ecx = MEM32(esp + 0x214);
    if (TEST_NZ(ecx, ecx)) goto loc_001F6087; /* jne: not equal / not zero */

loc_001F6080:
    MEM32(esp + 0x214) = eax;

loc_001F6087:
    eax = MEM32(esp + 0x214);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F8720(); /* call 0x001F8720 */

loc_001F6097:
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001F60A6; /* jne: not equal / not zero */

loc_001F609E:
    POP32(esp, edi);
    esp = esp + 0x208;
    esp += 4; return; /* ret */

loc_001F60A6:
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x220);
    /* test ebp, ebp - flags set for next jcc */
    MEM32(esp + 8) = 0;
    if (TEST_NZ(ebp, ebp)) goto loc_001F60FF; /* jne: not equal / not zero */

loc_001F60BA:
    SET_LO16(eax, MEM16(edi + 0x44));
    /* cmp LO16(eax), 0x200 - flags set for next jcc */
    ebp = esp + 0x10;
    if (CMP_BE(LO16(eax), 0x200)) goto loc_001F60EC; /* jbe: below or equal (unsigned <=) */

loc_001F60C8:
    edx = ZX16(LO16(eax));
    PUSH32(esp, 0x1080C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001FED80(); /* call 0x001FED80 */

loc_001F60D6:
    esp = esp + 8;
    /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_001F60EA; /* jne: not equal / not zero */

loc_001F60E1:
    POP32(esp, ebp);
    POP32(esp, edi);
    esp = esp + 0x208;
    esp += 4; return; /* ret */

loc_001F60EA:
    ebp = eax;

loc_001F60EC:
    eax = MEM32(edi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_001F60FD; /* je: equal / zero */

loc_001F60F3:
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F60F8:
    esp = esp + 8;
    goto loc_001F60FF;

loc_001F60FD:
    ebp = 0; /* xor self */

loc_001F60FF:
    ecx = MEM32(esp + 0x21C);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F5E40(); /* call 0x001F5E40 */

loc_001F6113:
    ecx = MEM32(edi + 0x40);
    ebx = eax;
    ecx = ecx >> 0x1C;
    eax = 1;
    eax = eax << LO8(ecx);
    esp = esp + 0xC;
    if (CMP_BE(eax, 8)) goto loc_001F612C; /* jbe: below or equal (unsigned <=) */

loc_001F612A:
    ebx = ebx + eax;

loc_001F612C:
    eax = MEM32(esp + 0x228);
    /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_001F620E; /* je: equal / zero */

loc_001F613C:
    edx = MEM32(esp + 0x230);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F6149:
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_001F620E; /* je: equal / zero */

loc_001F6156:
    MEM32(esp + 0x224) = MEM32(esp + 0x224) | 0x20;

loc_001F615E:
    ebx = MEM32(esp + 0x220);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x224);
    PUSH32(esp, edi);
    edx = esi;
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0); sub_001F5B10(); /* call 0x001F5B10 */

loc_001F617B:
    eax = MEM32(0x41B47C);
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001F619C; /* je: equal / zero */

loc_001F6187:
    edx = MEM32(ebx + 0xC);
    eax = ebx + 0xC;
    ecx = esi + 0x14;
    MEM32(ecx) = edx;
    MEM32(esi + 0x18) = eax;
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    MEM32(eax) = ecx;

loc_001F619C:
    eax = MEM32(esi);
    eax = MEM32(eax + 0x28);
    if (TEST_Z(eax, eax)) goto loc_001F6263; /* je: equal / zero */

loc_001F61A9:
    ecx = MEM32(esp + 0x230);
    edx = MEM32(esp + 0x22C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001F61BE:
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_001F6263; /* jne: not equal / not zero */

loc_001F61C9:
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001F61DA; /* je: equal / zero */

loc_001F61D1:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F61D7:
    esp = esp + 4;

loc_001F61DA:
    eax = MEM32(0x41B47C);
    if (TEST_Z(eax, eax)) goto loc_001F61F4; /* je: equal / zero */

loc_001F61E3:
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x18);
    MEM32(edx + 4) = eax;

loc_001F61F4:
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001F8690(); /* call 0x001F8690 */

loc_001F61FE:
    esp = esp + 0xC;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x208;
    esp += 4; return; /* ret */

loc_001F620E:
    eax = MEM32(edi + 0x48);
    if (TEST_NZ(eax, eax)) goto loc_001F6231; /* jne: not equal / not zero */

loc_001F6215:
    eax = MEM32(esp + 0x224);
    eax = eax >> 2;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F85A0(); /* call 0x001F85A0 */

loc_001F622A:
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_001F6245; /* je: equal / zero */

loc_001F6231:
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F8640(); /* call 0x001F8640 */

loc_001F6238:
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_001F615E; /* jne: not equal / not zero */

loc_001F6245:
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001F6256; /* je: equal / zero */

loc_001F624D:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F6253:
    esp = esp + 4;

loc_001F6256:
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x208;
    esp += 4; return; /* ret */

loc_001F6263:
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_001F6274; /* je: equal / zero */

loc_001F626B:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001FEDC0(); /* call 0x001FEDC0 */

loc_001F6271:
    esp = esp + 4;

loc_001F6274:
    ecx = MEM32(0x41B44C);
    eax = esi + 4;
    MEM32(eax) = ecx;
    MEM32(esi + 8) = 0x41B44C;
    edx = MEM32(0x41B44C);
    MEM32(edx + 4) = eax;
    MEM32(0x41B44C) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    esp = esp + 0x208;
    esp += 4; return; /* ret */

}
