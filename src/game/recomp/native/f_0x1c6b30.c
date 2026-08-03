#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001C6B30
 * Original: 0x001C6B30 - 0x001C6F23 (1011 bytes, 221 insns)
 * Category: game_engine
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C6B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C6B30:
    eax = MEM32(0x4A1B94);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(0x4A1B78) = ebx;
    PUSH32(esp, 0); sub_001DABA0(); /* call 0x001DABA0 */

loc_001C6B46:
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001DABD0(); /* call 0x001DABD0 */

loc_001C6B4C:
    esi = MEM32(0x35FB48);
    eax = MEM32(esi + 0xF98);
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_001C6B83; /* je: equal / zero */

loc_001C6B5F:
    ecx = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ecx;
    edi = MEM32(esi + 0xF98);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    eax = ecx;
    /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_001C6B83; /* jne: not equal / not zero */

loc_001C6B7E:
    PUSH32(esp, 0); sub_0034C750(); /* call 0x0034C750 */

loc_001C6B83:
    MEM32(esi + 0xF98) = ebx;
    if (TEST_NZ(MEM8(0x35D6A8), 0x10)) goto loc_001C6BA3; /* jne: not equal / not zero */

loc_001C6B92:
    ecx = 8;
    esi = 0x4A1AE0;
    edi = 0x3609D8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001C6BA3:
    PUSH32(esp, 8);
    edx = 0x4A1AE0;
    ecx = 0xBE;
    PUSH32(esp, 0); sub_0034F9A0(); /* call 0x0034F9A0 */

loc_001C6BB4:
    /* cmp MEM32(0x75DA40), ebx - flags set for next jcc */
    ecx = MEM32(0x75D940);
    edi = 1;
    if (CMP_NE(MEM32(0x75DA40), ebx)) goto loc_001C6BE3; /* jne: not equal / not zero */

loc_001C6BC7:
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(0x75DA40) = edi;
    MEM32(edx + 0x75D2A0) = 0xE;
    MEM32(0x75D940) = ecx;

loc_001C6BE3:
    /* cmp MEM32(0x75DA50), ebx - flags set for next jcc */
    MEM32(0x75D820) = ebx;
    if (CMP_NE(MEM32(0x75DA50), ebx)) goto loc_001C6C0D; /* jne: not equal / not zero */

loc_001C6BF1:
    eax = ecx;
    eax = eax << 4;
    ecx++;
    MEM32(0x75DA50) = edi;
    MEM32(eax + 0x75D2A0) = 0xF;
    MEM32(0x75D940) = ecx;

loc_001C6C0D:
    /* cmp MEM32(0x75DA80), ebx - flags set for next jcc */
    eax = 2;
    MEM32(0x75D830) = eax;
    if (CMP_NE(MEM32(0x75DA80), ebx)) goto loc_001C6C3B; /* jne: not equal / not zero */

loc_001C6C1F:
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(0x75DA80) = edi;
    MEM32(edx + 0x75D2A0) = 0x12;
    MEM32(0x75D940) = ecx;

loc_001C6C3B:
    /* cmp MEM32(0x75DA90), ebx - flags set for next jcc */
    MEM32(0x75D860) = ebx;
    if (CMP_NE(MEM32(0x75DA90), ebx)) goto loc_001C6C65; /* jne: not equal / not zero */

loc_001C6C49:
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(0x75DA90) = edi;
    MEM32(edx + 0x75D2A0) = 0x13;
    MEM32(0x75D940) = ecx;

loc_001C6C65:
    edx = MEM32(0x4A1B5C);
    esi = MEM32(edx * 4 + 0x4A1A90);
    MEM32(0x75D870) = eax;
    /* cmp MEM32(0x75DC78), ebx - flags set for next jcc */
    eax = MEM32(0x75DB60);
    if (CMP_NE(MEM32(0x75DC78), ebx)) goto loc_001C6C9B; /* jne: not equal / not zero */

loc_001C6C84:
    MEM32(eax * 4 + 0x75DE20) = 0x3E;
    eax++;
    MEM32(0x75DC78) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6C9B:
    PUSH32(esp, ebp);
    /* cmp MEM32(0x75DC7C), ebx - flags set for next jcc */
    MEM32(0x75D598) = esi;
    esi = MEM32(edx * 4 + 0x4A1AB0);
    if (CMP_NE(MEM32(0x75DC7C), ebx)) goto loc_001C6CC8; /* jne: not equal / not zero */

loc_001C6CB1:
    MEM32(eax * 4 + 0x75DE20) = 0x3F;
    eax++;
    MEM32(0x75DC7C) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6CC8:
    /* cmp MEM32(0x75DCA8), ebx - flags set for next jcc */
    MEM32(0x75D59C) = esi;
    esi = MEM32(edx * 4 + 0x4A1B00);
    if (CMP_NE(MEM32(0x75DCA8), ebx)) goto loc_001C6CF4; /* jne: not equal / not zero */

loc_001C6CDD:
    MEM32(eax * 4 + 0x75DE20) = 0x4A;
    eax++;
    MEM32(0x75DCA8) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6CF4:
    edx = MEM32(edx * 4 + 0x4A1B34);
    MEM32(0x75D5C8) = esi;
    if (CMP_NE(MEM32(0x75DC8C), ebx)) goto loc_001C6D20; /* jne: not equal / not zero */

loc_001C6D09:
    MEM32(eax * 4 + 0x75DE20) = 0x43;
    eax++;
    MEM32(0x75DC8C) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6D20:
    MEM32(0x75D5AC) = edx;
    if (CMP_NE(MEM32(0x75DC6C), ebx)) goto loc_001C6D45; /* jne: not equal / not zero */

loc_001C6D2E:
    MEM32(eax * 4 + 0x75DE20) = 0x3B;
    eax++;
    MEM32(0x75DC6C) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6D45:
    /* cmp MEM32(0x75DC70), ebx - flags set for next jcc */
    MEM32(0x75D58C) = edi;
    if (CMP_NE(MEM32(0x75DC70), ebx)) goto loc_001C6D6A; /* jne: not equal / not zero */

loc_001C6D53:
    MEM32(eax * 4 + 0x75DE20) = 0x3C;
    eax++;
    MEM32(0x75DC70) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6D6A:
    /* cmp MEM32(0x75D960), ebx - flags set for next jcc */
    edx = MEM32(0x4A1B20);
    esi = MEM32(edx * 4 + 0x4A1B24);
    MEM32(0x75D590) = ebx;
    if (CMP_NE(MEM32(0x75D960), ebx)) goto loc_001C6D9D; /* jne: not equal / not zero */

loc_001C6D85:
    ebp = ecx;
    ebp = ebp << 4;
    ecx++;
    MEM32(0x75D960) = edi;
    MEM32(ebp + 0x75D2A0) = ebx;
    MEM32(0x75D940) = ecx;

loc_001C6D9D:
    edx = MEM32(edx * 4 + 0x4A1B68);
    MEM32(0x75D740) = esi;
    /* cmp MEM32(0x75D970), ebx - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(MEM32(0x75D970), ebx)) goto loc_001C6DCB; /* jne: not equal / not zero */

loc_001C6DB3:
    esi = ecx;
    esi = esi << 4;
    ecx++;
    MEM32(0x75D970) = edi;
    MEM32(esi + 0x75D2A0) = edi;
    MEM32(0x75D940) = ecx;

loc_001C6DCB:
    /* cmp MEM32(0x75D990), ebx - flags set for next jcc */
    MEM32(0x75D750) = edx;
    edx = MEM32(0x4A1B64);
    edx = MEM32(edx * 4 + 0x4A1B54);
    if (CMP_NE(MEM32(0x75D990), ebx)) goto loc_001C6E02; /* jne: not equal / not zero */

loc_001C6DE6:
    esi = ecx;
    esi = esi << 4;
    ecx++;
    MEM32(0x75D990) = edi;
    MEM32(esi + 0x75D2A0) = 3;
    MEM32(0x75D940) = ecx;

loc_001C6E02:
    /* cmp MEM32(0x75D9A0), ebx - flags set for next jcc */
    MEM32(0x75D770) = edx;
    if (CMP_NE(MEM32(0x75D9A0), ebx)) goto loc_001C6E2C; /* jne: not equal / not zero */

loc_001C6E10:
    esi = ecx;
    esi = esi << 4;
    ecx++;
    MEM32(0x75D9A0) = edi;
    MEM32(esi + 0x75D2A0) = 4;
    MEM32(0x75D940) = ecx;

loc_001C6E2C:
    MEM32(0x75D780) = edx;
    if (CMP_NE(MEM32(0x75D9B0), ebx)) goto loc_001C6E56; /* jne: not equal / not zero */

loc_001C6E3A:
    edx = ecx;
    edx = edx << 4;
    ecx++;
    MEM32(0x75D9B0) = edi;
    MEM32(edx + 0x75D2A0) = 5;
    MEM32(0x75D940) = ecx;

loc_001C6E56:
    /* cmp MEM32(0x75DC80), ebx - flags set for next jcc */
    MEM32(0x75D790) = ebx;
    if (CMP_NE(MEM32(0x75DC80), ebx)) goto loc_001C6E7B; /* jne: not equal / not zero */

loc_001C6E64:
    MEM32(eax * 4 + 0x75DE20) = 0x40;
    eax++;
    MEM32(0x75DC80) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6E7B:
    /* cmp MEM32(0x75DDC0), ebx - flags set for next jcc */
    MEM32(0x75D5A0) = ebx;
    if (CMP_NE(MEM32(0x75DDC0), ebx)) goto loc_001C6EA0; /* jne: not equal / not zero */

loc_001C6E89:
    MEM32(eax * 4 + 0x75DE20) = 0x90;
    eax++;
    MEM32(0x75DDC0) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6EA0:
    /* cmp MEM32(0x75DDCC), ebx - flags set for next jcc */
    MEM32(0x75D6E0) = ebx;
    if (CMP_NE(MEM32(0x75DDCC), ebx)) goto loc_001C6EC5; /* jne: not equal / not zero */

loc_001C6EAE:
    MEM32(eax * 4 + 0x75DE20) = 0x93;
    eax++;
    MEM32(0x75DDCC) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6EC5:
    /* cmp MEM8(0x4A1B98), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(0x75DDBC);
    MEM32(0x75D6EC) = ebx;
    if (CMP_EQ(MEM8(0x4A1B98), LO8(ebx))) goto loc_001C6EFE; /* je: equal / zero */

loc_001C6ED9:
    if (CMP_NE(ecx, ebx)) goto loc_001C6EF4; /* jne: not equal / not zero */

loc_001C6EDD:
    MEM32(eax * 4 + 0x75DE20) = 0x8F;
    eax++;
    MEM32(0x75DDBC) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6EF4:
    MEM32(0x75D6DC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001C6EFE:
    if (CMP_NE(ecx, ebx)) goto loc_001C6F19; /* jne: not equal / not zero */

loc_001C6F02:
    MEM32(eax * 4 + 0x75DE20) = 0x8F;
    eax++;
    MEM32(0x75DDBC) = edi;
    MEM32(0x75DB60) = eax;

loc_001C6F19:
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x75D6DC) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
