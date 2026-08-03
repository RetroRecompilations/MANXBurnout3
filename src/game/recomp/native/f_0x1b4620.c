#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <string.h>
/**
 * sub_001B4620
 * Original: 0x001B4620 - 0x001B47F0 (464 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B4620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B4620:
    eax = MEM32(ebp + 4);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_001B463F; /* jne: not equal / not zero */

loc_001B4628:
    edx = esp + 0x358;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0C95(); /* call 0x001D0C95 */

loc_001B463A:
    MEM32(ebp + 4) = eax;
    goto loc_001B464D;

loc_001B463F:
    ecx = esp + 0x358;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0D9F(); /* call 0x001D0D9F */

loc_001B464D:
    PUSH32(esp, 0); sub_001D192B(); /* call 0x001D192B */

loc_001B4652:
    edi = eax;
    if (CMP_EQ(edi, 0x12)) goto loc_001B4661; /* je: equal / zero */

loc_001B4659:
    if (TEST_NZ(edi, edi)) goto loc_001B47C2; /* jne: not equal / not zero */

loc_001B4661:
    if (CMP_EQ(MEM32(ebp + 4), 0xFFFFFFFFu)) goto loc_001B46D5; /* je: equal / zero */

loc_001B4667:
    edx = esp + 0x59C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00243F9E(); /* call 0x00243F9E */

loc_001B4674:
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x104);
    ecx = esp + 0x120;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x5B0;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D1E1A(); /* call 0x001D1E1A */

loc_001B469A:
    esi = MEM32(esp + 0x6A4);
    eax = esp + 0x114;

loc_001B46A8:
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi))) goto loc_001B46CC; /* jne: not equal / not zero */

loc_001B46B0:
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001B46C8; /* je: equal / zero */

loc_001B46B4:
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 1))) goto loc_001B46CC; /* jne: not equal / not zero */

loc_001B46BE:
    eax = eax + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B46A8; /* jne: not equal / not zero */

loc_001B46C8:
    eax = 0; /* xor self */
    goto loc_001B46D1;

loc_001B46CC:
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_001B46D1:
    if (TEST_Z(eax, eax)) goto loc_001B46F6; /* je: equal / zero */

loc_001B46D5:
    esi = ebp;
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B46DC:
    /* cmp edi, 0x12 - flags set for next jcc */
    ecx = MEM32(ebp + 0xBFC);
    MEM32(ecx + 0x134) = eax;
    if (CMP_NE(edi, 0x12)) goto loc_001B4620; /* jne: not equal / not zero */

loc_001B46F1:
    goto loc_001B47C2;

loc_001B46F6:
    MEM32(esp + 0xC) = 1;
    eax = 0; /* xor self */

loc_001B4700:
    SET_LO8(ecx, MEM8(esp + eax + 0x498));
    MEM8(esp + eax + 0x10) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4700; /* jne: not equal / not zero */

loc_001B4710:
    eax = esp + 0x114;
    edx = eax;
    /* nop */

loc_001B4720:
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4720; /* jne: not equal / not zero */

loc_001B4727:
    edi = esp + 0x10;
    eax = eax - edx;
    edi--;
    edi = edi;

loc_001B4730:
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001B4730; /* jne: not equal / not zero */

loc_001B4738:
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    edx = esp + 0x218;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    ecx = ecx & 3;
    PUSH32(esp, eax);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    PUSH32(esp, 0); sub_001D1F4E(); /* call 0x001D1F4E */

loc_001B475A:
    esi = ebp;
    edi = eax;
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B4763:
    /* cmp edi, 0xFFFFFFFFu - flags set for next jcc */
    ecx = MEM32(ebp + 0xBFC);
    MEM32(ecx + 0x134) = eax;
    if (CMP_NE(edi, 0xFFFFFFFFu)) goto loc_001B4796; /* jne: not equal / not zero */

loc_001B4774:
    edx = MEM32(ebp + 0xBFC);
    MEM32(edx + 0x134) = 0xA;
    eax = MEM32(ebp + 0xBFC);
    MEM32(eax + 0x14C) = 0;
    goto loc_001B47C2;

loc_001B4796:
    ecx = MEM32(ebp + 0xBFC);
    edx = MEM32(esp + 0x238);
    esi = ebp;
    MEM32(ecx + 0x14C) = edx;
    PUSH32(esp, 0); sub_001B43C0(); /* call 0x001B43C0 */

loc_001B47B0:
    ecx = MEM32(ebp + 0xBFC);
    PUSH32(esp, edi);
    MEM32(ecx + 0x134) = eax;
    PUSH32(esp, 0); sub_001D19FD(); /* call 0x001D19FD */

loc_001B47C2:
    eax = MEM32(ebp + 4);
    /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_001B47D2; /* je: equal / zero */

loc_001B47CC:
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D0DE6(); /* call 0x001D0DE6 */

loc_001B47D2:
    edx = MEM32(ebp + 0xBFC);
    eax = MEM32(esp + 4);
    MEM32(edx + 0x130) = 0xB;
    POP32(esp, ebp);
    esp = esp + 0x690;
    esp += 12; return; /* ret 8 */

}
